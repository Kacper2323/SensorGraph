# SensorGraph
## It is a personal project aimed at creating a simple framework that allows the display of graphs of various input types on a small LCD screen. I decided against using existing libraries for LCD control and started this project from scratch, hoping to learn along the way.

### Current state of the project:

As of now, the framework allows for drawing real-time data from a variety of different sources on separate graphs (see the image below). It is possible to easily position each graph on the screen, as well as specify its size and dimensions. Each graph can have a separate update rate, so signals with varying frequencies can be displyed on separate graphs. I have also included rudimentary font support for future use, as I am planning to add frequency/period meters and the possibility of displaying other types of data.

![photo of the LCD screen with some graphs](/readme_img/photo.jpg)


### Basic usage

Create an instance of a graph_handle struct.
```
typedef struct {
	uint8_t graph_start_X; // X, Y positions on the screen
	uint8_t graph_start_Y;
	uint8_t graph_width;  // graph width, height in pixels
	uint8_t graph_height; 
	uint8_t border_width; // border width (px)
	uint8_t column_nr;    //member used for tracking changes in time
	uint16_t prev_val;    //contains previous value (for interpolation)
}graph_handle;
```

Call set_graph_window to initialize the graph.
```
void set_graph_window(graph_handle* graph);
```

Call graph in loop for each new value. Every call to this function draws one column (one pixel on the graph).
max_val parameter is the maximum value graph function will expect, minimum value is set at 0. If negative values are to be printed, they require shifting.
```
void graph(graph_handle* graph, uint16_t value, int max_val)
```

Additional functions included in the LCD driver:
```
void lcd_print_char(int x, int y, char c); // x,y position and char
```

```
void lcd_box_fill(int x, int y, int width, int height, uint16_t color);
```

```
void set_background(void); //sets a predefined background
```

### PROJECT GROWTH:

1. ~~LCD control with SPI~~
2. ~~LCD functions~~
3. ~~basic ADC measurements~~
4. ~~one whole-screen graph~~
5. ~~picking the window for one graph~~
7. ~~add fonts~~
6. ~~multiple graphs~~
10. some visual upgrades (maybe a new screen with a higer resolution)
11. possibly - graphing in frequency domain
