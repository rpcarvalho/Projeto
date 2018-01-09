#ifndef __IMGL_H__
#define __IMGL_H__
#include "tft.h"

const unsigned char imgletterA[3540] = { /* 0X00,0X01,0XA0,0X00,0XB1,0X00, */
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X7F,0XFF,0XFF,0XFC,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X07,0XFF,0XFF,0XFF,0XFF,
0XE0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X1F,
0XFF,0XFF,0XFF,0XFF,0XF8,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFC,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X7F,0XFF,0XFF,0XFF,0XFF,0XFC,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X7F,0XFF,0XFF,0XFF,0XFF,
0XFE,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X7F,
0XFF,0XFF,0XFF,0XFF,0XFE,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X01,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0X80,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X01,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X80,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X03,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X80,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X03,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XC0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X03,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XC0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X07,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XC0,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X07,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X07,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XE0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X0F,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X0F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X0F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X1F,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XF0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X1F,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XF8,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X1F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF8,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF8,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFC,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFE,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X01,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X01,0XFF,0XFF,0XFF,0XFD,0XFF,0XFF,
0XFF,0XFF,0X80,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X01,0XFF,0XFF,
0XFF,0XF9,0XFF,0XFF,0XFF,0XFF,0X80,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X03,0XFF,0XFF,0XFF,0XF9,0XFF,0XFF,0XFF,0XFF,0X80,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X03,0XFF,0XFF,0XFF,0XF8,0XFF,0XFF,0XFF,0XFF,0XC0,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X03,0XFF,0XFF,0XFF,0XF0,0XFF,0XFF,
0XFF,0XFF,0XC0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X07,0XFF,0XFF,
0XFF,0XF0,0XFF,0XFF,0XFF,0XFF,0XC0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X07,0XFF,0XFF,0XFF,0XF0,0X7F,0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X07,0XFF,0XFF,0XFF,0XE0,0X7F,0XFF,0XFF,0XFF,0XE0,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X0F,0XFF,0XFF,0XFF,0XE0,0X7F,0XFF,
0XFF,0XFF,0XE0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X0F,0XFF,0XFF,
0XFF,0XE0,0X3F,0XFF,0XFF,0XFF,0XF0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X0F,0XFF,0XFF,0XFF,0XC0,0X3F,0XFF,0XFF,0XFF,0XF0,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X1F,0XFF,0XFF,0XFF,0XC0,0X3F,0XFF,0XFF,0XFF,0XF0,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X1F,0XFF,0XFF,0XFF,0XC0,0X1F,0XFF,
0XFF,0XFF,0XF8,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X1F,0XFF,0XFF,
0XFF,0X80,0X1F,0XFF,0XFF,0XFF,0XF8,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X3F,0XFF,0XFF,0XFF,0X80,0X1F,0XFF,0XFF,0XFF,0XFC,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0X80,0X0F,0XFF,0XFF,0XFF,0XFC,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0X00,0X0F,0XFF,
0XFF,0XFF,0XFC,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X7F,0XFF,0XFF,
0XFF,0X00,0X0F,0XFF,0XFF,0XFF,0XFC,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X7F,0XFF,0XFF,0XFF,0X00,0X07,0XFF,0XFF,0XFF,0XFE,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X7F,0XFF,0XFF,0XFE,0X00,0X07,0XFF,0XFF,0XFF,0XFE,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0XFF,0XFF,0XFF,0XFE,0X00,0X07,0XFF,
0XFF,0XFF,0XFF,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0XFF,0XFF,0XFF,
0XFE,0X00,0X03,0XFF,0XFF,0XFF,0XFF,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X01,0XFF,0XFF,0XFF,0XFC,0X00,0X03,0XFF,0XFF,0XFF,0XFF,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X01,0XFF,0XFF,0XFF,0XFC,0X00,0X03,0XFF,0XFF,0XFF,0XFF,0X80,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X01,0XFF,0XFF,0XFF,0XFC,0X00,0X01,0XFF,
0XFF,0XFF,0XFF,0X80,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X03,0XFF,0XFF,0XFF,
0XF8,0X00,0X01,0XFF,0XFF,0XFF,0XFF,0X80,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X03,0XFF,0XFF,0XFF,0XF8,0X00,0X01,0XFF,0XFF,0XFF,0XFF,0XC0,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X03,0XFF,0XFF,0XFF,0XF8,0X00,0X00,0XFF,0XFF,0XFF,0XFF,0XC0,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X07,0XFF,0XFF,0XFF,0XF0,0X00,0X00,0XFF,
0XFF,0XFF,0XFF,0XC0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X07,0XFF,0XFF,0XFF,
0XF0,0X00,0X00,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X07,0XFF,0XFF,0XFF,0XF0,0X00,0X00,0X7F,0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X0F,0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X7F,0XFF,0XFF,0XFF,0XE0,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X0F,0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X7F,
0XFF,0XFF,0XFF,0XF0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X0F,0XFF,0XFF,0XFF,
0XE0,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XF0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X1F,0XFF,0XFF,0XFF,0XC0,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XF0,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X1F,0XFF,0XFF,0XFF,0XC0,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XF8,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X1F,0XFF,0XFF,0XFF,0XC0,0X00,0X00,0X1F,
0XFF,0XFF,0XFF,0XF8,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,
0X80,0X00,0X00,0X1F,0XFF,0XFF,0XFF,0XF8,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X3F,0XFF,0XFF,0XFF,0X80,0X00,0X00,0X1F,0XFF,0XFF,0XFF,0XFC,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0X80,0X00,0X00,0X0F,0XFF,0XFF,0XFF,0XFC,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X7F,0XFF,0XFF,0XFF,0X00,0X00,0X00,0X0F,
0XFF,0XFF,0XFF,0XFE,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X7F,0XFF,0XFF,0XFF,
0X00,0X00,0X00,0X0F,0XFF,0XFF,0XFF,0XFE,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X7F,0XFF,0XFF,0XFF,0X00,0X00,0X00,0X07,0XFF,0XFF,0XFF,0XFE,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0XFF,0XFF,0XFF,0XFE,0X00,0X00,0X00,0X07,0XFF,0XFF,0XFF,0XFF,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0XFF,0XFF,0XFF,0XFE,0X00,0X00,0X00,0X07,
0XFF,0XFF,0XFF,0XFF,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X01,0XFF,0XFF,0XFF,0XFE,
0X00,0X00,0X00,0X03,0XFF,0XFF,0XFF,0XFF,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X01,
0XFF,0XFF,0XFF,0XFC,0X00,0X00,0X00,0X03,0XFF,0XFF,0XFF,0XFF,0X80,0X00,0X00,0X00,
0X00,0X00,0X00,0X01,0XFF,0XFF,0XFF,0XFC,0X00,0X00,0X00,0X03,0XFF,0XFF,0XFF,0XFF,
0X80,0X00,0X00,0X00,0X00,0X00,0X00,0X03,0XFF,0XFF,0XFF,0XFC,0X00,0X00,0X00,0X01,
0XFF,0XFF,0XFF,0XFF,0X80,0X00,0X00,0X00,0X00,0X00,0X00,0X03,0XFF,0XFF,0XFF,0XF8,
0X00,0X00,0X00,0X01,0XFF,0XFF,0XFF,0XFF,0XC0,0X00,0X00,0X00,0X00,0X00,0X00,0X03,
0XFF,0XFF,0XFF,0XF8,0X00,0X00,0X00,0X01,0XFF,0XFF,0XFF,0XFF,0XC0,0X00,0X00,0X00,
0X00,0X00,0X00,0X07,0XFF,0XFF,0XFF,0XF8,0X00,0X00,0X00,0X00,0XFF,0XFF,0XFF,0XFF,
0XE0,0X00,0X00,0X00,0X00,0X00,0X00,0X07,0XFF,0XFF,0XFF,0XF0,0X00,0X00,0X00,0X00,
0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X00,0X00,0X00,0X00,0X07,0XFF,0XFF,0XFF,0XF0,
0X00,0X00,0X00,0X00,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X00,0X00,0X00,0X00,0X0F,
0XFF,0XFF,0XFF,0XF0,0X00,0X00,0X00,0X00,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X00,
0X00,0X00,0X00,0X0F,0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X00,0X00,0X7F,0XFF,0XFF,0XFF,
0XF0,0X00,0X00,0X00,0X00,0X00,0X00,0X0F,0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X00,0X00,
0X7F,0XFF,0XFF,0XFF,0XF0,0X00,0X00,0X00,0X00,0X00,0X00,0X1F,0XFF,0XFF,0XFF,0XE0,
0X00,0X00,0X00,0X00,0X7F,0XFF,0XFF,0XFF,0XF0,0X00,0X00,0X00,0X00,0X00,0X00,0X1F,
0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XF8,0X00,0X00,0X00,
0X00,0X00,0X00,0X1F,0XFF,0XFF,0XFF,0XC0,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,
0XF8,0X00,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XC0,0X00,0X00,0X00,0X00,
0X3F,0XFF,0XFF,0XFF,0XFC,0X00,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0X80,
0X00,0X00,0X00,0X00,0X1F,0XFF,0XFF,0XFF,0XFC,0X00,0X00,0X00,0X00,0X00,0X00,0X3F,
0XFF,0XFF,0XFF,0X80,0X00,0X00,0X00,0X00,0X1F,0XFF,0XFF,0XFF,0XFC,0X00,0X00,0X00,
0X00,0X00,0X00,0X7F,0XFF,0XFF,0XFF,0X80,0X00,0X00,0X00,0X00,0X1F,0XFF,0XFF,0XFF,
0XFE,0X00,0X00,0X00,0X00,0X00,0X00,0X7F,0XFF,0XFF,0XFF,0X00,0X00,0X00,0X00,0X00,
0X0F,0XFF,0XFF,0XFF,0XFE,0X00,0X00,0X00,0X00,0X00,0X00,0X7F,0XFF,0XFF,0XFF,0X00,
0X00,0X00,0X00,0X00,0X0F,0XFF,0XFF,0XFF,0XFE,0X00,0X00,0X00,0X00,0X00,0X00,0XFF,
0XFF,0XFF,0XFF,0X00,0X00,0X00,0X00,0X00,0X0F,0XFF,0XFF,0XFF,0XFF,0X00,0X00,0X00,
0X00,0X00,0X00,0XFF,0XFF,0XFF,0XFE,0X00,0X00,0X00,0X00,0X00,0X07,0XFF,0XFF,0XFF,
0XFF,0X00,0X00,0X00,0X00,0X00,0X01,0XFF,0XFF,0XFF,0XFE,0X00,0X00,0X00,0X00,0X00,
0X07,0XFF,0XFF,0XFF,0XFF,0X00,0X00,0X00,0X00,0X00,0X01,0XFF,0XFF,0XFF,0XFE,0X00,
0X00,0X00,0X00,0X00,0X07,0XFF,0XFF,0XFF,0XFF,0X80,0X00,0X00,0X00,0X00,0X01,0XFF,
0XFF,0XFF,0XFC,0X00,0X00,0X00,0X00,0X00,0X03,0XFF,0XFF,0XFF,0XFF,0X80,0X00,0X00,
0X00,0X00,0X03,0XFF,0XFF,0XFF,0XFC,0X00,0X00,0X00,0X00,0X00,0X03,0XFF,0XFF,0XFF,
0XFF,0X80,0X00,0X00,0X00,0X00,0X03,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XC0,0X00,0X00,0X00,0X00,0X03,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XC0,0X00,0X00,0X00,0X00,0X07,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X00,
0X00,0X00,0X07,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XE0,0X00,0X00,0X00,0X00,0X07,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X00,0X00,0X0F,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X00,0X00,0X0F,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,0X00,0X00,
0X00,0X00,0X0F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XF0,0X00,0X00,0X00,0X00,0X1F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XF8,0X00,0X00,0X00,0X00,0X1F,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF8,0X00,0X00,0X00,0X00,0X1F,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF8,0X00,0X00,
0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFC,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,0X00,0X00,0X00,0X00,0X7F,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0X00,0X00,
0X00,0X00,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFE,0X00,0X00,0X00,0X00,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0X00,0X00,0X00,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X00,0X00,0X00,0X00,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X00,0X00,
0X00,0X01,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0X00,0X00,0X00,0X01,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X80,0X00,0X00,0X01,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X80,0X00,0X00,0X03,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X80,0X00,
0X00,0X03,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XC0,0X00,0X00,0X03,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XC0,0X00,0X00,0X07,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XC0,0X00,0X00,0X07,0XFF,0XFF,
0XFF,0XFC,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X03,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,
0X00,0X07,0XFF,0XFF,0XFF,0XFC,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X01,0XFF,0XFF,
0XFF,0XFF,0XE0,0X00,0X00,0X0F,0XFF,0XFF,0XFF,0XFC,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X01,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X0F,0XFF,0XFF,0XFF,0XF8,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X01,0XFF,0XFF,0XFF,0XFF,0XF0,0X00,0X00,0X0F,0XFF,0XFF,
0XFF,0XF8,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0XFF,0XFF,0XFF,0XFF,0XF0,0X00,
0X00,0X1F,0XFF,0XFF,0XFF,0XF8,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0XFF,0XFF,
0XFF,0XFF,0XF8,0X00,0X00,0X1F,0XFF,0XFF,0XFF,0XF0,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0XFF,0XFF,0XFF,0XFF,0XF8,0X00,0X00,0X1F,0XFF,0XFF,0XFF,0XF0,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X7F,0XFF,0XFF,0XFF,0XF8,0X00,0X00,0X3F,0XFF,0XFF,
0XFF,0XF0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X7F,0XFF,0XFF,0XFF,0XFC,0X00,
0X00,0X3F,0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X7F,0XFF,
0XFF,0XFF,0XFC,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFC,0X00,0X00,0X7F,0XFF,0XFF,0XFF,0XE0,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFE,0X00,0X00,0X7F,0XFF,0XFF,
0XFF,0XC0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFE,0X00,
0X00,0X7F,0XFF,0XFF,0XFF,0XC0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X1F,0XFF,
0XFF,0XFF,0XFE,0X00,0X00,0XFF,0XFF,0XFF,0XFF,0XC0,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X1F,0XFF,0XFF,0XFF,0XFF,0X00,0X00,0XFF,0XFF,0XFF,0XFF,0X80,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X1F,0XFF,0XFF,0XFF,0XFF,0X00,0X01,0XFF,0XFF,0XFF,
0XFF,0X80,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X0F,0XFF,0XFF,0XFF,0XFF,0X00,
0X01,0XFF,0XFF,0XFF,0XFF,0X80,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X0F,0XFF,
0XFF,0XFF,0XFF,0X80,0X01,0XFF,0XFF,0XFF,0XFF,0X80,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X0F,0XFF,0XFF,0XFF,0XFF,0X80,0X03,0XFF,0XFF,0XFF,0XFF,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X07,0XFF,0XFF,0XFF,0XFF,0X80,0X03,0XFF,0XFF,0XFF,
0XFF,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X07,0XFF,0XFF,0XFF,0XFF,0XC0,
0X03,0XFF,0XFF,0XFF,0XFE,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X07,0XFF,
0XFF,0XFF,0XFF,0XC0,0X07,0XFF,0XFF,0XFF,0XFE,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X03,0XFF,0XFF,0XFF,0XFF,0XC0,0X07,0XFF,0XFF,0XFF,0XFE,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X03,0XFF,0XFF,0XFF,0XFF,0XE0,0X07,0XFF,0XFF,0XFF,
0XFC,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X03,0XFF,0XFF,0XFF,0XFF,0XE0,
0X0F,0XFF,0XFF,0XFF,0XFC,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X01,0XFF,
0XFF,0XFF,0XFF,0XF0,0X0F,0XFF,0XFF,0XFF,0XFC,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X01,0XFF,0XFF,0XFF,0XFF,0XF0,0X0F,0XFF,0XFF,0XFF,0XFC,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X01,0XFF,0XFF,0XFF,0XFF,0XF0,0X1F,0XFF,0XFF,0XFF,
0XF8,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0XFF,0XFF,0XFF,0XFF,0XF0,
0X1F,0XFF,0XFF,0XFF,0XF8,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0XFF,
0XFF,0XFF,0XFF,0XF8,0X1F,0XFF,0XFF,0XFF,0XF8,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0XFF,0XFF,0XFF,0XFF,0XF8,0X1F,0XFF,0XFF,0XFF,0XF0,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X7F,0XFF,0XFF,0XFF,0XF8,0X3F,0XFF,0XFF,0XFF,
0XF0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X7F,0XFF,0XFF,0XFF,0XF8,
0X3F,0XFF,0XFF,0XFF,0XF0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X7F,
0XFF,0XFF,0XFF,0XFC,0X3F,0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFC,0X1F,0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XF8,0X1F,0XFF,0XFF,0XFF,
0XC0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X1F,0XFF,0XFF,0XFF,0XF8,
0X0F,0XFF,0XFF,0XFF,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X0F,
0XFF,0XFF,0XFF,0XF0,0X01,0XFF,0XFF,0XF0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0XFF,0XFF,0XFF,0X80,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,};
	
	

const unsigned char imgletterX[3620] = { /* 0X00,0X01,0XA0,0X00,0XB5,0X00, */
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X0F,0XFF,0XFF,0XF8,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X01,0XFF,0XFF,0XF8,0X00,0X00,0X00,0X00,0X7F,0XFF,
0XFF,0XFF,0X80,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0X00,0X00,
0X00,0X01,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X7F,0XFF,
0XFF,0XFF,0XC0,0X00,0X00,0X01,0XFF,0XFF,0XFF,0XFF,0XF0,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0XFF,0XFF,0XFF,0XFF,0XC0,0X00,0X00,0X01,0XFF,0XFF,0XFF,0XFF,0XF0,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0XFF,0XFF,0XFF,0XFF,0XC0,0X00,0X00,0X01,0XFF,0XFF,
0XFF,0XFF,0XF8,0X00,0X00,0X00,0X00,0X00,0X00,0X01,0XFF,0XFF,0XFF,0XFF,0XC0,0X00,
0X00,0X01,0XFF,0XFF,0XFF,0XFF,0XF8,0X00,0X00,0X00,0X00,0X00,0X00,0X01,0XFF,0XFF,
0XFF,0XFF,0XC0,0X00,0X00,0X00,0XFF,0XFF,0XFF,0XFF,0XFC,0X00,0X00,0X00,0X00,0X00,
0X00,0X03,0XFF,0XFF,0XFF,0XFF,0XC0,0X00,0X00,0X00,0XFF,0XFF,0XFF,0XFF,0XFC,0X00,
0X00,0X00,0X00,0X00,0X00,0X07,0XFF,0XFF,0XFF,0XFF,0X80,0X00,0X00,0X00,0XFF,0XFF,
0XFF,0XFF,0XFE,0X00,0X00,0X00,0X00,0X00,0X00,0X07,0XFF,0XFF,0XFF,0XFF,0X80,0X00,
0X00,0X00,0X7F,0XFF,0XFF,0XFF,0XFE,0X00,0X00,0X00,0X00,0X00,0X00,0X0F,0XFF,0XFF,
0XFF,0XFF,0X00,0X00,0X00,0X00,0X7F,0XFF,0XFF,0XFF,0XFF,0X00,0X00,0X00,0X00,0X00,
0X00,0X0F,0XFF,0XFF,0XFF,0XFF,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0X00,
0X00,0X00,0X00,0X00,0X00,0X1F,0XFF,0XFF,0XFF,0XFF,0X00,0X00,0X00,0X00,0X3F,0XFF,
0XFF,0XFF,0XFF,0X80,0X00,0X00,0X00,0X00,0X00,0X1F,0XFF,0XFF,0XFF,0XFE,0X00,0X00,
0X00,0X00,0X1F,0XFF,0XFF,0XFF,0XFF,0XC0,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,
0XFF,0XFE,0X00,0X00,0X00,0X00,0X1F,0XFF,0XFF,0XFF,0XFF,0XC0,0X00,0X00,0X00,0X00,
0X00,0X3F,0XFF,0XFF,0XFF,0XFC,0X00,0X00,0X00,0X00,0X0F,0XFF,0XFF,0XFF,0XFF,0XE0,
0X00,0X00,0X00,0X00,0X00,0X7F,0XFF,0XFF,0XFF,0XF8,0X00,0X00,0X00,0X00,0X0F,0XFF,
0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X00,0X00,0X00,0X7F,0XFF,0XFF,0XFF,0XF8,0X00,0X00,
0X00,0X00,0X07,0XFF,0XFF,0XFF,0XFF,0XF0,0X00,0X00,0X00,0X00,0X00,0XFF,0XFF,0XFF,
0XFF,0XF0,0X00,0X00,0X00,0X00,0X07,0XFF,0XFF,0XFF,0XFF,0XF0,0X00,0X00,0X00,0X00,
0X00,0XFF,0XFF,0XFF,0XFF,0XF0,0X00,0X00,0X00,0X00,0X03,0XFF,0XFF,0XFF,0XFF,0XF8,
0X00,0X00,0X00,0X00,0X01,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X00,0X00,0X01,0XFF,
0XFF,0XFF,0XFF,0XF8,0X00,0X00,0X00,0X00,0X01,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X00,
0X00,0X00,0X01,0XFF,0XFF,0XFF,0XFF,0XFC,0X00,0X00,0X00,0X00,0X03,0XFF,0XFF,0XFF,
0XFF,0XC0,0X00,0X00,0X00,0X00,0X00,0XFF,0XFF,0XFF,0XFF,0XFC,0X00,0X00,0X00,0X00,
0X03,0XFF,0XFF,0XFF,0XFF,0XC0,0X00,0X00,0X00,0X00,0X00,0XFF,0XFF,0XFF,0XFF,0XFE,
0X00,0X00,0X00,0X00,0X07,0XFF,0XFF,0XFF,0XFF,0X80,0X00,0X00,0X00,0X00,0X00,0X7F,
0XFF,0XFF,0XFF,0XFE,0X00,0X00,0X00,0X00,0X07,0XFF,0XFF,0XFF,0XFF,0X80,0X00,0X00,
0X00,0X00,0X00,0X7F,0XFF,0XFF,0XFF,0XFF,0X00,0X00,0X00,0X00,0X0F,0XFF,0XFF,0XFF,
0XFF,0X00,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0X00,0X00,0X00,0X00,
0X0F,0XFF,0XFF,0XFF,0XFE,0X00,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,
0X80,0X00,0X00,0X00,0X1F,0XFF,0XFF,0XFF,0XFE,0X00,0X00,0X00,0X00,0X00,0X00,0X1F,
0XFF,0XFF,0XFF,0XFF,0X80,0X00,0X00,0X00,0X1F,0XFF,0XFF,0XFF,0XFC,0X00,0X00,0X00,
0X00,0X00,0X00,0X1F,0XFF,0XFF,0XFF,0XFF,0XC0,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,
0XFC,0X00,0X00,0X00,0X00,0X00,0X00,0X0F,0XFF,0XFF,0XFF,0XFF,0XC0,0X00,0X00,0X00,
0X3F,0XFF,0XFF,0XFF,0XF8,0X00,0X00,0X00,0X00,0X00,0X00,0X07,0XFF,0XFF,0XFF,0XFF,
0XE0,0X00,0X00,0X00,0X7F,0XFF,0XFF,0XFF,0XF8,0X00,0X00,0X00,0X00,0X00,0X00,0X07,
0XFF,0XFF,0XFF,0XFF,0XF0,0X00,0X00,0X00,0X7F,0XFF,0XFF,0XFF,0XF0,0X00,0X00,0X00,
0X00,0X00,0X00,0X03,0XFF,0XFF,0XFF,0XFF,0XF0,0X00,0X00,0X00,0XFF,0XFF,0XFF,0XFF,
0XF0,0X00,0X00,0X00,0X00,0X00,0X00,0X03,0XFF,0XFF,0XFF,0XFF,0XF8,0X00,0X00,0X00,
0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X00,0X00,0X00,0X00,0X01,0XFF,0XFF,0XFF,0XFF,
0XF8,0X00,0X00,0X01,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X00,0X00,0X00,0X00,0X01,
0XFF,0XFF,0XFF,0XFF,0XFC,0X00,0X00,0X03,0XFF,0XFF,0XFF,0XFF,0XC0,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0XFF,0XFF,0XFF,0XFF,0XFC,0X00,0X00,0X03,0XFF,0XFF,0XFF,0XFF,
0X80,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0XFF,0XFF,0XFF,0XFF,0XFE,0X00,0X00,0X07,
0XFF,0XFF,0XFF,0XFF,0X80,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X7F,0XFF,0XFF,0XFF,
0XFE,0X00,0X00,0X07,0XFF,0XFF,0XFF,0XFF,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X7F,0XFF,0XFF,0XFF,0XFF,0X00,0X00,0X0F,0XFF,0XFF,0XFF,0XFF,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0X00,0X00,0X0F,0XFF,0XFF,0XFF,0XFE,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X1F,0XFF,0XFF,0XFF,0XFF,0X80,0X00,0X1F,
0XFF,0XFF,0XFF,0XFE,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X1F,0XFF,0XFF,0XFF,
0XFF,0X80,0X00,0X1F,0XFF,0XFF,0XFF,0XFC,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X0F,0XFF,0XFF,0XFF,0XFF,0XC0,0X00,0X3F,0XFF,0XFF,0XFF,0XFC,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X0F,0XFF,0XFF,0XFF,0XFF,0XC0,0X00,0X3F,0XFF,0XFF,0XFF,0XF8,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X07,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X7F,
0XFF,0XFF,0XFF,0XF8,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X07,0XFF,0XFF,0XFF,
0XFF,0XE0,0X00,0X7F,0XFF,0XFF,0XFF,0XF0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X03,0XFF,0XFF,0XFF,0XFF,0XF0,0X00,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X03,0XFF,0XFF,0XFF,0XFF,0XF8,0X00,0XFF,0XFF,0XFF,0XFF,0XE0,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X01,0XFF,0XFF,0XFF,0XFF,0XF8,0X01,0XFF,
0XFF,0XFF,0XFF,0XC0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X01,0XFF,0XFF,0XFF,
0XFF,0XFC,0X01,0XFF,0XFF,0XFF,0XFF,0XC0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0XFF,0XFF,0XFF,0XFF,0XFC,0X03,0XFF,0XFF,0XFF,0XFF,0X80,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0XFF,0XFF,0XFF,0XFF,0XFE,0X03,0XFF,0XFF,0XFF,0XFF,0X80,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X7F,0XFF,0XFF,0XFF,0XFE,0X07,0XFF,
0XFF,0XFF,0XFF,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,
0XFF,0XFF,0X07,0XFF,0XFF,0XFF,0XFF,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0X0F,0XFF,0XFF,0XFF,0XFE,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X1F,0XFF,0XFF,0XFF,0XFF,0X8F,0XFF,0XFF,0XFF,0XFE,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X1F,0XFF,0XFF,0XFF,0XFF,0X9F,0XFF,
0XFF,0XFF,0XFC,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X0F,0XFF,0XFF,
0XFF,0XFF,0XDF,0XFF,0XFF,0XFF,0XF8,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X0F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF8,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X07,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X07,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XF0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X03,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X03,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X01,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XC0,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XC0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X80,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X80,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFE,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X1F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X1F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X0F,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XF8,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X0F,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XF8,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X07,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X03,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X03,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XE0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X01,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X01,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XC0,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XC0,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X01,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XC0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X01,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X03,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X03,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X07,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XF0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X07,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XF8,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X0F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF8,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X0F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X1F,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFC,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X1F,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0X80,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X80,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XC0,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X01,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XC0,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X01,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XE0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X03,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X03,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X07,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X0F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XF8,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X0F,0XFF,0XFF,
0XFF,0XFE,0XFF,0XFF,0XFF,0XFF,0XF8,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X1F,0XFF,0XFF,0XFF,0XFC,0XFF,0XFF,0XFF,0XFF,0XFC,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X1F,0XFF,0XFF,0XFF,0XFC,0X7F,0XFF,0XFF,0XFF,0XFE,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XF8,0X7F,0XFF,
0XFF,0XFF,0XFE,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,
0XFF,0XF8,0X3F,0XFF,0XFF,0XFF,0XFF,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X7F,0XFF,0XFF,0XFF,0XF0,0X3F,0XFF,0XFF,0XFF,0XFF,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X7F,0XFF,0XFF,0XFF,0XF0,0X1F,0XFF,0XFF,0XFF,0XFF,0X80,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0XFF,0XFF,0XFF,0XFF,0XE0,0X1F,0XFF,
0XFF,0XFF,0XFF,0X80,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0XFF,0XFF,0XFF,
0XFF,0XE0,0X0F,0XFF,0XFF,0XFF,0XFF,0XC0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X01,0XFF,0XFF,0XFF,0XFF,0XC0,0X0F,0XFF,0XFF,0XFF,0XFF,0XC0,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X03,0XFF,0XFF,0XFF,0XFF,0XC0,0X07,0XFF,0XFF,0XFF,0XFF,0XE0,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X03,0XFF,0XFF,0XFF,0XFF,0X80,0X07,0XFF,
0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X07,0XFF,0XFF,0XFF,
0XFF,0X80,0X03,0XFF,0XFF,0XFF,0XFF,0XF0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X07,0XFF,0XFF,0XFF,0XFF,0X00,0X01,0XFF,0XFF,0XFF,0XFF,0XF0,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X0F,0XFF,0XFF,0XFF,0XFF,0X00,0X01,0XFF,0XFF,0XFF,0XFF,0XF8,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X0F,0XFF,0XFF,0XFF,0XFE,0X00,0X00,0XFF,
0XFF,0XFF,0XFF,0XFC,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X1F,0XFF,0XFF,0XFF,
0XFE,0X00,0X00,0XFF,0XFF,0XFF,0XFF,0XFC,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X1F,0XFF,0XFF,0XFF,0XFC,0X00,0X00,0X7F,0XFF,0XFF,0XFF,0XFE,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFC,0X00,0X00,0X7F,0XFF,0XFF,0XFF,0XFE,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X7F,0XFF,0XFF,0XFF,0XF8,0X00,0X00,0X3F,
0XFF,0XFF,0XFF,0XFF,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X7F,0XFF,0XFF,0XFF,
0XF8,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0XFF,0XFF,0XFF,0XFF,0XF0,0X00,0X00,0X1F,0XFF,0XFF,0XFF,0XFF,0X80,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0XFF,0XFF,0XFF,0XFF,0XF0,0X00,0X00,0X1F,0XFF,0XFF,0XFF,0XFF,
0X80,0X00,0X00,0X00,0X00,0X00,0X00,0X01,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X0F,
0XFF,0XFF,0XFF,0XFF,0XC0,0X00,0X00,0X00,0X00,0X00,0X00,0X01,0XFF,0XFF,0XFF,0XFF,
0XC0,0X00,0X00,0X0F,0XFF,0XFF,0XFF,0XFF,0XC0,0X00,0X00,0X00,0X00,0X00,0X00,0X03,
0XFF,0XFF,0XFF,0XFF,0XC0,0X00,0X00,0X07,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X00,
0X00,0X00,0X00,0X03,0XFF,0XFF,0XFF,0XFF,0X80,0X00,0X00,0X07,0XFF,0XFF,0XFF,0XFF,
0XE0,0X00,0X00,0X00,0X00,0X00,0X00,0X07,0XFF,0XFF,0XFF,0XFF,0X80,0X00,0X00,0X03,
0XFF,0XFF,0XFF,0XFF,0XF0,0X00,0X00,0X00,0X00,0X00,0X00,0X07,0XFF,0XFF,0XFF,0XFF,
0X00,0X00,0X00,0X03,0XFF,0XFF,0XFF,0XFF,0XF8,0X00,0X00,0X00,0X00,0X00,0X00,0X0F,
0XFF,0XFF,0XFF,0XFF,0X00,0X00,0X00,0X01,0XFF,0XFF,0XFF,0XFF,0XF8,0X00,0X00,0X00,
0X00,0X00,0X00,0X1F,0XFF,0XFF,0XFF,0XFE,0X00,0X00,0X00,0X01,0XFF,0XFF,0XFF,0XFF,
0XFC,0X00,0X00,0X00,0X00,0X00,0X00,0X1F,0XFF,0XFF,0XFF,0XFE,0X00,0X00,0X00,0X00,
0XFF,0XFF,0XFF,0XFF,0XFC,0X00,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFC,
0X00,0X00,0X00,0X00,0XFF,0XFF,0XFF,0XFF,0XFE,0X00,0X00,0X00,0X00,0X00,0X00,0X3F,
0XFF,0XFF,0XFF,0XFC,0X00,0X00,0X00,0X00,0X7F,0XFF,0XFF,0XFF,0XFE,0X00,0X00,0X00,
0X00,0X00,0X00,0X7F,0XFF,0XFF,0XFF,0XF8,0X00,0X00,0X00,0X00,0X7F,0XFF,0XFF,0XFF,
0XFF,0X00,0X00,0X00,0X00,0X00,0X00,0X7F,0XFF,0XFF,0XFF,0XF8,0X00,0X00,0X00,0X00,
0X3F,0XFF,0XFF,0XFF,0XFF,0X00,0X00,0X00,0X00,0X00,0X00,0XFF,0XFF,0XFF,0XFF,0XF0,
0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0X80,0X00,0X00,0X00,0X00,0X00,0XFF,
0XFF,0XFF,0XFF,0XF0,0X00,0X00,0X00,0X00,0X1F,0XFF,0XFF,0XFF,0XFF,0X80,0X00,0X00,
0X00,0X00,0X01,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X00,0X00,0X0F,0XFF,0XFF,0XFF,
0XFF,0XC0,0X00,0X00,0X00,0X00,0X03,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X00,0X00,
0X0F,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X00,0X00,0X03,0XFF,0XFF,0XFF,0XFF,0XC0,
0X00,0X00,0X00,0X00,0X07,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X00,0X00,0X07,0XFF,
0XFF,0XFF,0XFF,0XC0,0X00,0X00,0X00,0X00,0X07,0XFF,0XFF,0XFF,0XFF,0XF0,0X00,0X00,
0X00,0X00,0X07,0XFF,0XFF,0XFF,0XFF,0X80,0X00,0X00,0X00,0X00,0X03,0XFF,0XFF,0XFF,
0XFF,0XF0,0X00,0X00,0X00,0X00,0X0F,0XFF,0XFF,0XFF,0XFF,0X80,0X00,0X00,0X00,0X00,
0X03,0XFF,0XFF,0XFF,0XFF,0XF8,0X00,0X00,0X00,0X00,0X0F,0XFF,0XFF,0XFF,0XFF,0X00,
0X00,0X00,0X00,0X00,0X01,0XFF,0XFF,0XFF,0XFF,0XF8,0X00,0X00,0X00,0X00,0X1F,0XFF,
0XFF,0XFF,0XFF,0X00,0X00,0X00,0X00,0X00,0X01,0XFF,0XFF,0XFF,0XFF,0XFC,0X00,0X00,
0X00,0X00,0X1F,0XFF,0XFF,0XFF,0XFE,0X00,0X00,0X00,0X00,0X00,0X00,0XFF,0XFF,0XFF,
0XFF,0XFC,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFE,0X00,0X00,0X00,0X00,0X00,
0X00,0XFF,0XFF,0XFF,0XFF,0XFE,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFC,0X00,
0X00,0X00,0X00,0X00,0X00,0X7F,0XFF,0XFF,0XFF,0XFE,0X00,0X00,0X00,0X00,0X7F,0XFF,
0XFF,0XFF,0XFC,0X00,0X00,0X00,0X00,0X00,0X00,0X7F,0XFF,0XFF,0XFF,0XFF,0X00,0X00,
0X00,0X00,0XFF,0XFF,0XFF,0XFF,0XF8,0X00,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,
0XFF,0XFF,0X00,0X00,0X00,0X00,0XFF,0XFF,0XFF,0XFF,0XF0,0X00,0X00,0X00,0X00,0X00,
0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0X80,0X00,0X00,0X01,0XFF,0XFF,0XFF,0XFF,0XF0,0X00,
0X00,0X00,0X00,0X00,0X00,0X1F,0XFF,0XFF,0XFF,0XFF,0XC0,0X00,0X00,0X01,0XFF,0XFF,
0XFF,0XFF,0XE0,0X00,0X00,0X00,0X00,0X00,0X00,0X1F,0XFF,0XFF,0XFF,0XFF,0XC0,0X00,
0X00,0X03,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X00,0X00,0X00,0X00,0X0F,0XFF,0XFF,
0XFF,0XFF,0XE0,0X00,0X00,0X03,0XFF,0XFF,0XFF,0XFF,0XC0,0X00,0X00,0X00,0X00,0X00,
0X00,0X0F,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X07,0XFF,0XFF,0XFF,0XFF,0XC0,0X00,
0X00,0X00,0X00,0X00,0X00,0X07,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X07,0XFF,0XFF,
0XFF,0XFF,0X80,0X00,0X00,0X00,0X00,0X00,0X00,0X07,0XFF,0XFF,0XFF,0XFF,0XF0,0X00,
0X00,0X07,0XFF,0XFF,0XFF,0XFF,0X80,0X00,0X00,0X00,0X00,0X00,0X00,0X03,0XFF,0XFF,
0XFF,0XFF,0XF0,0X00,0X00,0X0F,0XFF,0XFF,0XFF,0XFF,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X03,0XFF,0XFF,0XFF,0XFF,0XF8,0X00,0X00,0X0F,0XFF,0XFF,0XFF,0XFF,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X01,0XFF,0XFF,0XFF,0XFF,0XF8,0X00,0X00,0X0F,0XFF,0XFF,
0XFF,0XFE,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X01,0XFF,0XFF,0XFF,0XFF,0XF8,0X00,
0X00,0X0F,0XFF,0XFF,0XFF,0XFE,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0XFF,0XFF,
0XFF,0XFF,0XF8,0X00,0X00,0X0F,0XFF,0XFF,0XFF,0XFC,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X7F,0XFF,0XFF,0XFF,0XF0,0X00,0X00,0X03,0XFF,0XFF,0XFF,0XF0,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X00,0X7F,0XFF,
0XFF,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X01,0XFF,0XFF,0XFE,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,};

//	IMG STRUCTS 	//
struct Img letters[] = 	{	{imgletterA,160,177},
													{imgletterX,160,177}
												};

#endif
