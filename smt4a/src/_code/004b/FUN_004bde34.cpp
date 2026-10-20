/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004bde34` (_code @ 0x4bde34, 0x384 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int efctSetSpeed(void);
int FUN_00180310(...);
int FUN_0018152c(...);
int FUN_001835b4(...);
int FUN_00183788(...);
int FUN_00183bb0(void);
int drawSetColorFromRGBA8(...);
int FUN_004bda84(...);
int __aeabi_idivmod(...);

/* stack frame of param_5: 11 slot(s), 44 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
} param_5_stack;

extern unsigned char LAB_004be1bc; /* 0x4be1bc */

/* Supplied declaration required: efctSetSpeed. */
/* Supplied declaration required: FUN_00180310. */
/* Supplied declaration required: FUN_0018152c. */
extern int FUN_001834a4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: FUN_00183788. */
/* Supplied declaration required: FUN_00183bb0. */
/* Supplied declaration required: drawSetColorFromRGBA8. */
extern unsigned int markerKindGetColor(int);
extern unsigned int FUN_002b4dcc(int);
extern int valueAtMostFifthOfTotal(int, unsigned int);
/* Supplied declaration required: FUN_004bda84. */
/* Supplied declaration required: __aeabi_idivmod. */


void FUN_004bde34(int param_1,int param_2,int param_3,int param_4,int param_5)

{
/* irregular: 10 native warning(s); review required */
  short temp_v0;
  unsigned short temp_v1;
  short temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  int temp_v8;
  
  temp_v0 = *(short *)(param_2 + 0x62);
  temp_v3 = (unsigned int)*(unsigned short *)(param_2 + 100);
  temp_v8 = (int)*(short *)(param_2 + 0x2a);
  temp_v4 = FUN_002b4dcc(param_2);
  temp_v1 = *(unsigned short *)(param_2 + 0x60);
  efctSetSpeed();
  if ((temp_v1 & 2) != 0) {
    efctSetSpeed();
  }
  FUN_001835b4(2,0x11,2000,param_4,param_5,0x65);
  FUN_001835b4(2,0x11,2,param_4,param_5,0x65);
  FUN_001835b4(2,0x11,0x99,param_4,param_5,0x6f);
  FUN_001835b4(2,0x11,0x9a,param_4,param_5,0x6f);
  FUN_001835b4(2,0x11,0x98,param_4,param_5,0x6f);
  temp_v5 = FUN_001834a4(0x11,0x9d);
  FUN_00180310(0,*(short *)(temp_v5 + 8) + param_4,*(short *)(temp_v5 + 10) + param_5,1,3,0x79,
               &LAB_004be1bc,temp_v3);
  efctSetSpeed();
  FUN_001835b4(2,0x11,0x9e,param_4,param_5,0x6f);
  FUN_001835b4(2,0x11,0x77,param_4,param_5,0x79);
  FUN_00183788(temp_v8,temp_v4,0,0,0x11,0x9f,0xa2,0xa0,0xa1,param_4,param_5,0x74,0);
  temp_v5 = FUN_001834a4(0x11,0xaa);
  temp_v2 = *(short *)(temp_v5 + 8);
  temp_v5 = *(short *)(temp_v5 + 10) + param_5;
  temp_v6 = valueAtMostFifthOfTotal(temp_v8,temp_v4);
  if (temp_v6 != 0) {
    drawSetColorFromRGBA8(0xdc0f14ff);
  }
  efctSetSpeed();
  FUN_00180310(10,temp_v2 + param_4,temp_v5,1,4,0x79,&LAB_004be1bc,temp_v8);
  FUN_00183bb0();
  temp_v8 = FUN_001834a4(0x11,0xac);
  temp_v4 = 0xffffffff;
  temp_v5 = *(short *)(temp_v8 + 8) + param_4;
  temp_v8 = *(short *)(temp_v8 + 10) + param_5;
  temp_v3 = 1;
  temp_v6 = 0;
  do {
    if (((unsigned int)temp_v1 & (1 << (temp_v3 & 0xff))) != 0) {
      if (*(int *)(param_1 + param_3 * 4 + 0x378) == temp_v6) {
        temp_v4 = markerKindGetColor((int)(short)temp_v3);
        break;
      }
      temp_v6 = temp_v6 + 1;
    }
    temp_v3 = temp_v3 + 1;
  } while ((int)temp_v3 < 0xe);
  drawSetColorFromRGBA8(temp_v4);
  efctSetSpeed();
  FUN_0018152c((int)temp_v0,temp_v5,temp_v8,0x9c,0);
  FUN_00183bb0();
  temp_v8 = 0;
  temp_v3 = 1;
  temp_v5 = 0xd;
  do {
    if (((unsigned int)*(unsigned short *)(param_2 + 0x60) & (1 << (temp_v3 & 0xff))) != 0) {
      temp_v8 = temp_v8 + 1;
    }
    temp_v5 = temp_v5 - 1;
    temp_v3 = temp_v3 + 1;
  } while (temp_v5 != 0);
  if (temp_v8 >= 2) {
    temp_v5 = param_1 + param_3 * 4;
    temp_v8 = *(int *)(temp_v5 + 0x348) + 1;
    *(int *)(temp_v5 + 0x348) = temp_v8;
    if (temp_v8 >= 0x18) {
      __aeabi_idivmod(*(int *)(temp_v5 + 0x378) + 1);
      *(unsigned int *)(temp_v5 + 0x348) = 0;
      *(unsigned int *)(temp_v5 + 0x378) = temp_v7;
    }
  }
  FUN_004bda84(param_1,param_2,param_3,param_4,param_5);
  efctSetSpeed();
  return;
}

} /* extern "C" */
