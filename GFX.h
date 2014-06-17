#ifndef GFX_H
#define GFX_H

#include <SSD1306.h>
#include <math.h>
#include <stdlib.h>

/*
 * GFX.h
 * Author: Harris Shallcross
 * Year: 2014-ish
 *
 * General GFX library, uses a framebuffer (1024byte) for all functions.
 * Circle, ellipse and semicircle functions use a sine wavetable (256byte).
 *
 * This code is provided AS IS and no warranty is included!
 */

#define LetterSpace 0

typedef enum {
	PixNorm,
	PixInv
} PixT;

void DispMode(uint8_t);

uint8_t WritePix(int16_t, int16_t, PixT);
uint8_t SetPix(uint8_t, uint8_t);
uint8_t ClrPix(uint8_t, uint8_t);

uint8_t Circle(uint8_t, uint8_t, uint8_t, PixT);
uint8_t Semicircle(uint8_t, uint8_t, uint8_t, uint8_t, PixT);

uint8_t Square(uint8_t, uint8_t, uint8_t, uint8_t, PixT);
uint8_t LineP(uint8_t, uint8_t, uint8_t, int16_t, PixT);
uint8_t LineL(uint8_t, uint8_t, uint8_t, uint8_t, PixT);

int PChar(uint16_t, int16_t, int16_t, uint8_t, PixT);
int PStr(const char*, int16_t, int16_t, uint8_t, PixT);
int PNum(int, int16_t, int16_t, uint8_t, uint8_t, PixT);
int PNumF(float, int16_t, int16_t, uint8_t, uint8_t, PixT);

int32_t FPow(int32_t, int32_t);

extern uint8_t GBuf[GBufS];

#endif
