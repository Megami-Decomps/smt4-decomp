/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00227334` (_code @ 0x227334, 0x2cc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002009c4(int);
int FUN_00211868(int, int);
int FUN_00244ee0(int);
int FUN_0025cc34(void);
int FUN_0025cc8c(void);
int communicationBeginTransition(int);
int communicationSetResultPointer(void);
int FUN_0026c7b8(unsigned char [68]);
int devilGetRecord(void);
int textFormatBuffer(...);
int FUN_002be650(unsigned int, int);
int FUN_002cd750(int);
int FUN_0031bb8c(void);

/* stack frame of param_6: 1 slot(s), 1 byte(s) */
typedef struct {
    unsigned char sp68; /* 0x68: local_68 */
} param_6_stack;

extern unsigned char LAB_00227608; /* 0x227608 */
extern unsigned char LAB_00227610; /* 0x227610 */
extern unsigned char LAB_00227618; /* 0x227618 */
extern unsigned char LAB_0022761c; /* 0x22761c */
extern unsigned char LAB_00227624; /* 0x227624 */
extern unsigned char LAB_0022762c; /* 0x22762c */
extern unsigned char g_btlUi; /* 0x439c88 */

/* Supplied declaration required: FUN_002009c4. */
/* Supplied declaration required: FUN_00211868. */
/* Supplied declaration required: FUN_00244ee0. */
/* Supplied declaration required: FUN_0025cc34. */
/* Supplied declaration required: FUN_0025cc8c. */
/* Supplied declaration required: communicationBeginTransition. */
/* Supplied declaration required: communicationSetResultPointer. */
/* Supplied declaration required: FUN_0026c7b8. */
extern int FUN_0029efa8(int);
extern int FUN_0029efc0(int);
extern int FUN_002b6a54(int, unsigned short);
extern int gameGetOptions(void);
/* Supplied declaration required: devilGetRecord. */
extern unsigned int FUN_002bce00(unsigned short);
/* Supplied declaration required: textFormatBuffer. */
/* Supplied declaration required: FUN_002be650. */
/* Supplied declaration required: FUN_002cd750. */
/* Supplied declaration required: FUN_0031bb8c. */


void FUN_00227334(unsigned int param_1,unsigned int param_2,int param_3,int param_4,int param_5,
                 int param_6)

{
/* irregular: 13 native warning(s); review required */
  unsigned short temp_v0;
  unsigned int *puVar2;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  short temp_v5;
  unsigned char temp_v6 [68];
  
  temp_v2 = (*(int *)((unsigned char *)&g_btlUi + 0x20));
  puVar2 = (unsigned int *)((*(int *)((unsigned char *)&g_btlUi + 0x20)) + 0xc9e4);
  *(unsigned char *)((*(int *)((unsigned char *)&g_btlUi + 0x20)) + 0xc9d8) = 1;
  *puVar2 = param_2;
  *(short *)(temp_v2 + 0xc9e8) = (short)param_3;
  *(unsigned int *)(temp_v2 + 0xc9dc) = 0x28;
  *(unsigned int *)(temp_v2 + 0xc9e0) = 0;
  temp_v6[0] = 0;
  temp_v5 = 0;
  switch(*puVar2) {
  case 1:
    if (param_4 != 0) {
      temp_v1 = FUN_0029efc0(temp_v2 + 0x5678);
      temp_v2 = FUN_0029efa8(temp_v2 + 0x5678);
      if (temp_v2 + temp_v1 != 0) {
        if (temp_v2 + temp_v1 == 1) {
          temp_v5 = (short)(int)temp_v6;
          textFormatBuffer(temp_v6,&LAB_00227610);
          FUN_0025cc34();
        }
      }
      else {
        temp_v5 = (short)(int)temp_v6;
        textFormatBuffer(temp_v6,&LAB_00227608);
        FUN_0025cc8c();
      }
    }
    else if (param_6 != 0) {
      temp_v2 = gameGetOptions();
      temp_v0 = *(unsigned short *)(temp_v2 + 0x606);
      temp_v2 = gameGetOptions();
      temp_v2 = FUN_002b6a54((int)*(short *)(temp_v2 + 0x604),temp_v0);
      if ((*(unsigned int *)(temp_v2 + 8) & 0x3fffff) >> 0x11 != 1) {
        temp_v5 = (short)(int)temp_v6;
        textFormatBuffer(temp_v6,&LAB_00227608);
      }
      else {
        temp_v5 = (short)(int)temp_v6;
        textFormatBuffer(temp_v6,&LAB_00227610);
      }
      FUN_0031bb8c();
    }
    else {
      temp_v2 = param_5;
      devilGetRecord();
      if (*(char *)(temp_v2 + 10) != '\x01') {
        textFormatBuffer(temp_v6,&LAB_00227608);
      }
      else {
        textFormatBuffer(temp_v6,&LAB_00227610);
      }
      FUN_00244ee0(param_5);
      temp_v5 = (short)param_5;
    }
    FUN_002cd750((int)temp_v5);
    break;
  case 2:
  case 3:
    temp_v3 = FUN_002bce00(*(unsigned short *)(temp_v2 + 0xc9e8));
    textFormatBuffer(temp_v6,&LAB_00227618,temp_v3);
    FUN_00211868((int)*(short *)(temp_v2 + 0xc9e8),param_4 != 0);
    break;
  case 8:
    temp_v4 = (unsigned int)*(unsigned short *)(temp_v2 + 0xc9e8);
    FUN_002be650(temp_v4,0);
    textFormatBuffer(temp_v6,&LAB_00227618,temp_v4);
    FUN_002009c4((int)*(short *)(temp_v2 + 0xc9e8));
    break;
  case 9:
  case 10:
  case 0xc:
    if (param_3 != 0) {
      textFormatBuffer(temp_v6,&LAB_0022761c);
    }
    else {
      textFormatBuffer(temp_v6,&LAB_00227624);
    }
    communicationSetResultPointer();
    break;
  case 0xb:
    textFormatBuffer(temp_v6,&LAB_0022762c);
    communicationSetResultPointer();
  }
  FUN_0026c7b8(temp_v6);
  communicationBeginTransition(0);
  return;
}

} /* extern "C" */
