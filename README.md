# SensorGraph
## It is a personal project aimed at creating a simple framework that allows the display of graphs of various input types on a small LCD screen. I decided against using existing libraries for LCD control and started this project from scratch, hoping to learn along the way.

### Current state of the project:

As of now, the framework allows for drawing real-time data from a variety of different sources on separate graphs (see the image below). It is possible to easily position each graph on the screen, as well as specify its size and dimensions. Each graph can have a separate update rate, so signals with varying frequencies can be displyed on separate graphs. I have also included rudimentary font support for future use, as I am planning to add frequency/period meters and the possibility of displaying other types of data.

![photo of the LCD screen with some graphs](/readme_img/photo.jpg)

### PROJECT GROWTH:

1. ~~LCD control with SPI~~
2. ~~LCD functions~~
3. ~~basic ADC measurements~~
4. ~~one whole-screen graph~~
5. ~~picking the window for one graph~~
7. ~~add fonts~~
6. ~~multiple graphs~~
8. Frequency meter
9. automatic time setting for graphs
10. some visual upgrades (maybe a new screen with a higer resolution)
11. possibly - graphing in frequency domain