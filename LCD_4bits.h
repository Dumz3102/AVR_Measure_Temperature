/*
 * LCD_4bits.h
 *
 * Created: 03/01/2024 5:31:57 CH
 *  Author: X280
 */ 


#ifndef LCD_4BITS_H_
#define LCD_4BITS_H_

void LCD_Command(unsigned char cmnd);
void LCD_Char(unsigned char data);
void LCD_Init(void);
void LCD_String(char*str);
void LCD_String_xy (char row, char pos, char *str);
void LCD_Clear();
/*
void LCD_Enable(void);
void LCD_Send4Bit(unsigned char Data);
void LCD_SendCommand(unsigned char command);
void LCD_Clear();
void LCD_Init();
void LCD_Gotoxy(int x, int y);
void LCD_PutChar(unsigned char Data);
void LCD_Puts(char *s);
void num_dsp( float number);

*/
#endif /* LCD_4BITS_H_ */