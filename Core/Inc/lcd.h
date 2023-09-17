/*
 * lcd.h
 *
 *  Created on: Sep 16, 2023
 *      Author: kacpe
 */

#ifndef INC_LCD_H_
#define INC_LCD_H_

#include <stdint.h>

#define BLACK     0xffff
#define WHITE     0x0000

#define COLUMN_DATA 256

void lcd_init(void);
void lcd_box_fill(int x, int y, int width, int height, uint16_t color);
void lcd_set_column(int x, uint8_t *data);


#endif /* INC_LCD_H_ */
