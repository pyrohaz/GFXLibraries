#ifndef GFXC_H
#define GFXC_H

#include <ILI9163.h>
#include <math.h>

#define LetterSpace 0

int16_t PChar(uint16_t, uint8_t, uint8_t, uint8_t, Colours8, Colours8);
int16_t PStr(const char*, uint8_t, uint8_t, uint8_t, Colours8, Colours8);
int16_t PNum(int32_t, uint8_t, uint8_t, int8_t, uint8_t, Colours8, Colours8);
int16_t PNumF(float, uint8_t, uint8_t, uint8_t, uint8_t, Colours8, Colours8);

uint8_t Circle(int16_t, int16_t, int16_t, Colours8);
uint8_t Ellipse(uint8_t, uint8_t, uint8_t, uint8_t, Colours8);
uint8_t Semicircle(uint8_t, uint8_t, uint8_t, uint8_t, Colours8);

uint8_t Rect(uint8_t, uint8_t, uint8_t, uint8_t, Colours8);
uint8_t FillRec(uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, Colours8);
uint8_t LineP(uint8_t, uint8_t, uint8_t, int16_t, Colours8);
uint8_t LineC(uint8_t, uint8_t, uint8_t, uint8_t, Colours8);

uint8_t Row(uint8_t, uint8_t, uint8_t, Colours8);
uint8_t Column(uint8_t, uint8_t, uint8_t, Colours8);

uint32_t IAbs(int32_t);
int16_t FSin(int16_t);
int16_t FCos(int16_t);

#endif
