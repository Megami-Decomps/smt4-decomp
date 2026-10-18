/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004f5238` (_code @ 0x4f5238, 0x364 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_9: 20 slot(s), 80 byte(s) */
typedef struct {
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp90; /* 0x90: local_90 */
} param_9_stack;

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: FUN_002e342c. */
/* Supplied declaration required: FUN_004f5750. */


int FUN_004f5238(int param_1,unsigned int param_2,unsigned int param_3,int param_4,int param_5,
                unsigned int param_6,int param_7,unsigned int param_8,unsigned int param_9)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1;
  unsigned long long temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  unsigned int temp_v12;
  unsigned int temp_v13;
  unsigned int temp_v14;
  unsigned int temp_v15;
  unsigned int temp_v16;
  unsigned int temp_v17;
  unsigned int temp_v18;
  
  temp_v2 = romwright_piece_4_4(param_8,param_6);
  temp_v1 = 0xff;
  if (param_4 >= 11) {
    return 0;
  }
  temp_v3 = 0;
  temp_v4 = 0;
  temp_v5 = 0;
  temp_v6 = 0;
  temp_v7 = 0;
  temp_v8 = 0;
  temp_v9 = 0;
  temp_v10 = 0;
  temp_v11 = 0;
  temp_v12 = 0;
  temp_v13 = 0;
  temp_v14 = 0;
  temp_v15 = 0;
  temp_v16 = 0;
  temp_v17 = 0;
  temp_v18 = 0;
  switch(param_4) {
  case 0:
    if (param_5 >= 4) {
      return 0;
    }
    temp_v0 = param_1 + param_5 * 0x8c;
    temp_v1 = *(unsigned char *)(temp_v0 + 0x1f5c);
    FUN_002e342c(&temp_v3,temp_v0 + 0x1f64);
    break;
  case 1:
    if (param_5 >= 4) {
      return 0;
    }
    temp_v0 = param_1 + param_5 * 0x8c;
    temp_v1 = *(unsigned char *)(temp_v0 + 0x218c);
    FUN_002e342c(&temp_v3,temp_v0 + 0x2194);
    break;
  case 2:
    if (param_5 >= 4) {
      return 0;
    }
    temp_v0 = param_1 + param_5 * 0x8c;
    temp_v1 = *(unsigned char *)(temp_v0 + 0x23bc);
    FUN_002e342c(&temp_v3,temp_v0 + 0x23c4);
    break;
  case 3:
    if (param_5 >= 4) {
      return 0;
    }
    temp_v0 = param_1 + param_5 * 0x8c;
    temp_v1 = *(unsigned char *)(temp_v0 + 0x25ec);
    FUN_002e342c(&temp_v3,temp_v0 + 0x25f4);
    break;
  case 4:
    if (param_5 >= 11) {
      return 0;
    }
    temp_v0 = param_1 + param_5 * 0x8c;
    temp_v1 = *(unsigned char *)(temp_v0 + 0x281c);
    FUN_002e342c(&temp_v3,temp_v0 + 0x2824);
    break;
  case 5:
    if (param_5 >= 4) {
      return 0;
    }
    temp_v0 = param_1 + param_5 * 0x8c;
    temp_v1 = *(unsigned char *)(temp_v0 + 0x2e20);
    FUN_002e342c(&temp_v3,temp_v0 + 0x2e28);
    break;
  case 6:
    if (param_5 >= 3) {
      return 0;
    }
    temp_v0 = param_1 + param_5 * 0x8c;
    temp_v1 = *(unsigned char *)(temp_v0 + 0x33e4);
    FUN_002e342c(&temp_v3,temp_v0 + 0x33ec);
    break;
  case 7:
    if (param_5 != 0) {
      return 0;
    }
    temp_v1 = *(unsigned char *)(param_1 + 0x358c);
    FUN_002e342c(&temp_v3,param_1 + 0x3594);
    break;
  case 8:
    if (param_5 != 0) {
      return 0;
    }
    temp_v1 = *(unsigned char *)(param_1 + 0x3054);
    FUN_002e342c(&temp_v3,param_1 + 0x305c);
    break;
  case 9:
    if (param_5 >= 3) {
      return 0;
    }
    temp_v0 = param_1 + param_5 * 0x8c;
    temp_v1 = *(unsigned char *)(temp_v0 + 0x30e0);
    FUN_002e342c(&temp_v3,temp_v0 + 0x30e8);
    break;
  case 10:
    if (param_5 >= 2) {
      return 0;
    }
    temp_v0 = param_1 + param_5 * 0x8c;
    temp_v1 = *(unsigned char *)(temp_v0 + 0x3284);
    FUN_002e342c(&temp_v3,temp_v0 + 0x328c);
  }
  if (param_7 != 0) {
    FUN_002e342c(param_7,&temp_v3);
  }
  FUN_004f5750(param_1,temp_v1,param_2,param_3,param_4,(int)temp_v2,&temp_v3,
               (int)((unsigned long long)temp_v2 >> 0x20),param_9);
  return param_1;
}
