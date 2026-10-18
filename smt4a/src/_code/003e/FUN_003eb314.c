/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003eb314` (_code @ 0x3eb314, 0x41c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00184310. */
/* Supplied declaration required: FUN_001f4da0. */
extern unsigned int FUN_00261424(void);
extern int FUN_002626e0(void);
/* Supplied declaration required: FUN_002e6354. */
/* Supplied declaration required: FUN_002e6dd4. */
/* Supplied declaration required: FUN_0050d71c. */


void FUN_003eb314(int param_1,unsigned char *param_2,unsigned short *param_3)

{
/* irregular: irregular input(s): in_fpscr; 7 native warning(s); review required */
  char temp_v0;
  unsigned short temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  short temp_v4;
  int temp_v5;
  short temp_v6;
  unsigned char temp_v7;
  unsigned int in_fpscr;
  unsigned int temp_v8;
  unsigned int temp_v9;
  float temp_v10;
  unsigned int temp_v11;
  float temp_v12;
  unsigned int temp_v13;
  unsigned int temp_v14;
  float temp_v15;
  float temp_v16;
  
  *param_2 = 4;
  *(unsigned short *)(param_2 + 8) = 0xffff;
  *(unsigned short *)(param_2 + 2) = *param_3;
  *(unsigned short *)(param_2 + 4) = 0xffff;
  *(unsigned short *)(param_2 + 6) = 0xffff;
  FUN_002e6354(param_2 + 0xc,200);
  *(int *)(param_2 + 0xc) = (int)(short)param_3[0x46];
  param_2[0xd4] = (unsigned char)((unsigned short)param_3[1] >> 0xf);
  temp_v0 = *(char *)(param_3 + 0x51);
  temp_v7 = temp_v0 == '\0';
  if (temp_v7) {
    temp_v0 = *(char *)((int)param_3 + 0xa3);
  }
  if (!(temp_v7 && temp_v0 == '\0')) {
    param_2[0xd4] = 1;
  }
  else {
    param_2[0xd4] = 0;
  }
  if ((param_3[0xb] & 0x200) != 0) {
    param_2[0xd5] = 1;
  }
  else {
    param_2[0xd5] = 0;
  }
  if ((param_3[0xb] & 0x400) != 0) {
    param_2[0xd6] = 1;
  }
  else {
    param_2[0xd6] = 0;
  }
  param_2[0xd7] = 1;
  temp_v8 = *(unsigned int *)(param_3 + 2);
  *(unsigned int *)(param_2 + 0xd8) = temp_v8;
  temp_v9 = *(unsigned int *)(param_3 + 2);
  *(unsigned int *)(param_2 + 0xdc) = temp_v9;
  temp_v11 = *(unsigned int *)(param_3 + 4);
  *(unsigned int *)(param_2 + 0xe0) = temp_v11;
  temp_v14 = *(unsigned int *)(param_3 + 4);
  *(unsigned int *)(param_2 + 0xe4) = temp_v14;
  *(unsigned short *)(param_2 + 0xe8) = param_3[6];
  *(unsigned short *)(param_2 + 0xea) = param_3[7];
  *(unsigned short *)(param_2 + 0xec) = param_3[8];
  *(unsigned short *)(param_2 + 0xee) = param_3[9];
  *(unsigned short *)(param_2 + 0xf0) = param_3[10];
  *(unsigned int *)(param_2 + 0xf4) = temp_v8;
  *(unsigned int *)(param_2 + 0xf8) = temp_v9;
  *(unsigned int *)(param_2 + 0xfc) = temp_v11;
  *(unsigned int *)(param_2 + 0x100) = temp_v14;
  *(unsigned int *)(param_2 + 0x104) = *(unsigned int *)(param_2 + 0xe8);
  *(unsigned int *)(param_2 + 0x108) = *(unsigned int *)(param_2 + 0xec);
  *(unsigned int *)(param_2 + 0x10c) = *(unsigned int *)(param_2 + 0xf0);
  *(unsigned short *)(param_2 + 0x110) = 0;
  *(unsigned short *)(param_2 + 0x112) = 0;
  *(unsigned short *)(param_2 + 0x114) = 0;
  *(unsigned short *)(param_2 + 0x116) = param_3[1] & 0x7fff;
  *(unsigned int *)(param_2 + 0x228) = 0;
  FUN_0050d71c(param_2 + 0x1be);
  FUN_0050d71c(param_2 + 0x1c6);
  FUN_0050d71c(param_2 + 0x1ce);
  FUN_002e6dd4(param_2 + 0x1d6,0x50);
  temp_v5 = 0x15;
  temp_v3 = 0;
  do {
    *(unsigned short *)(param_2 + temp_v3 * 2 + 0x128) = param_3[temp_v3 + 0x12];
    temp_v1 = param_3[temp_v3 + 0x12];
    temp_v5 = temp_v5 - 1;
    *(unsigned short *)(param_2 + temp_v3 * 2 + 0x152) = temp_v1;
    param_2[temp_v3 + 0x1a6] = (unsigned char)(temp_v1 >> 10);
    temp_v3 = temp_v3 + 1;
  } while (temp_v5 != 0);
  param_2[0x1bb] = *(unsigned char *)((int)param_3 + 0x73);
  temp_v2 = (unsigned int)*(unsigned short *)(param_2 + 2);
  FUN_00184310();
  temp_v0 = *(char *)(temp_v2 + 9);
  if (temp_v0 == '\x01') {
    param_2[0x1bc] = 1;
  }
  else if (temp_v0 == '\x04') {
    param_2[0x1bc] = 0;
  }
  else if (temp_v0 == '\x05') {
    param_2[0x1bc] = 2;
  }
  temp_v8 = *(unsigned int *)(param_3 + 0x2a);
  temp_v9 = *(unsigned int *)(param_3 + 0x2c);
  temp_v11 = *(unsigned int *)(param_3 + 0x2e);
  *(unsigned int *)(param_2 + 0x118) = *(unsigned int *)(param_3 + 0x28);
  *(unsigned int *)(param_2 + 0x11c) = temp_v8;
  *(unsigned int *)(param_2 + 0x120) = temp_v9;
  *(unsigned int *)(param_2 + 0x124) = temp_v11;
  FUN_002e6354(param_2 + 0x17c,0x15);
  *(unsigned int *)(param_2 + 0x191) = 0;
  *(unsigned int *)(param_2 + 0x195) = 0;
  *(unsigned int *)(param_2 + 0x199) = 0;
  *(unsigned int *)(param_2 + 0x19d) = 0;
  *(unsigned int *)(param_2 + 0x1a1) = 0;
  param_2[0x1a5] = 0;
  temp_v3 = FUN_002626e0();
  if (temp_v3 != 0) {
    temp_v8 = FUN_00261424();
    temp_v12 = 0.0f;
    temp_v10 = (float)VectorSignedToFloat(temp_v8,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v2 = (in_fpscr & 0xfffffff) | ((unsigned int)(0.0f <= temp_v10) << 0x1d);
    if ((romwright_subpiece_4_1_0(temp_v2 >> 0x1d,0)) && (temp_v12 = temp_v10, (int)temp_v10 >= 0x41100001)) {
      temp_v12 = 9.0f;
    }
    temp_v16 = temp_v12 * temp_v12;
    temp_v6 = 999;
    temp_v10 = (float)VectorUnsignedToFloat
                              ((unsigned int)*(unsigned short *)(param_2 + 0x116),(unsigned char)(temp_v2 >> 0x16) & 3);
    temp_v13 = (unsigned int)(temp_v10 * (temp_v12 * 0.55f + 1.0f) + temp_v16 * 5.0f);
    temp_v1 = (unsigned short)temp_v13;
    *(unsigned short *)(param_2 + 0x116) = temp_v1;
    if ((temp_v13 & 0xffff) >= 0x3e7) {
      temp_v1 = 999;
    }
    *(unsigned short *)(param_2 + 0x116) = temp_v1;
    temp_v15 = (float)VectorSignedToFloat(*(unsigned int *)(param_2 + 0xf8),(unsigned char)(temp_v2 >> 0x16) & 3);
    temp_v10 = temp_v12 * 0.3f + 1.0f + temp_v16 * 0.06666667f;
    temp_v3 = (int)(temp_v10 * temp_v15);
    *(int *)(param_2 + 0xf8) = temp_v3;
    if (temp_v3 >= 0x98967f) {
      temp_v3 = 9999999;
    }
    temp_v15 = (float)VectorSignedToFloat(*(unsigned int *)(param_2 + 0x100),(unsigned char)(temp_v2 >> 0x16) & 3);
    *(int *)(param_2 + 0xf8) = temp_v3;
    temp_v5 = (int)(temp_v10 * temp_v15);
    *(int *)(param_2 + 0x100) = temp_v5;
    if (temp_v5 >= 0x98967f) {
      temp_v5 = 9999999;
    }
    *(int *)(param_2 + 0xf4) = temp_v3;
    *(int *)(param_2 + 0x100) = temp_v5;
    *(int *)(param_2 + 0xfc) = temp_v5;
    temp_v12 = temp_v12 * 0.25f + 1.0f + temp_v16 * 0.033333335f;
    temp_v10 = (float)VectorSignedToFloat((int)*(short *)(param_2 + 0x104),(unsigned char)(temp_v2 >> 0x16) & 3);
    temp_v4 = (short)(int)(temp_v12 * temp_v10);
    *(short *)(param_2 + 0x104) = temp_v4;
    if (temp_v4 >= 0x3e7) {
      temp_v4 = temp_v6;
    }
    *(short *)(param_2 + 0x104) = temp_v4;
    temp_v10 = (float)VectorSignedToFloat((int)*(short *)(param_2 + 0x106),(unsigned char)(temp_v2 >> 0x16) & 3);
    temp_v4 = (short)(int)(temp_v12 * temp_v10);
    *(short *)(param_2 + 0x106) = temp_v4;
    if (temp_v4 >= 0x3e7) {
      temp_v4 = temp_v6;
    }
    *(short *)(param_2 + 0x106) = temp_v4;
    temp_v10 = (float)VectorSignedToFloat((int)*(short *)(param_2 + 0x108),(unsigned char)(temp_v2 >> 0x16) & 3);
    temp_v4 = (short)(int)(temp_v12 * temp_v10);
    *(short *)(param_2 + 0x108) = temp_v4;
    if (temp_v4 >= 0x3e7) {
      temp_v4 = temp_v6;
    }
    *(short *)(param_2 + 0x108) = temp_v4;
    temp_v10 = (float)VectorSignedToFloat((int)*(short *)(param_2 + 0x10a),(unsigned char)(temp_v2 >> 0x16) & 3);
    temp_v4 = (short)(int)(temp_v12 * temp_v10);
    *(short *)(param_2 + 0x10a) = temp_v4;
    if (temp_v4 >= 0x3e7) {
      temp_v4 = temp_v6;
    }
    *(short *)(param_2 + 0x10a) = temp_v4;
    temp_v10 = (float)VectorSignedToFloat((int)*(short *)(param_2 + 0x10c),(unsigned char)(temp_v2 >> 0x16) & 3);
    temp_v4 = (short)(int)(temp_v12 * temp_v10);
    if (temp_v4 < 999) {
      temp_v6 = temp_v4;
    }
    *(short *)(param_2 + 0x10c) = temp_v4;
    *(short *)(param_2 + 0x10c) = temp_v6;
    temp_v3 = FUN_002626e0();
    if ((temp_v3 != 0) && (-1 < *(int *)(param_1 + 0xf0))) {
      temp_v3 = (int)*(short *)(param_2 + 2);
      FUN_001f4da0();
      if (0 < temp_v3) {
        if (*(int *)(param_2 + 0xf8) < temp_v3) {
          temp_v3 = *(int *)(param_2 + 0xf8);
        }
        *(int *)(param_2 + 0xf4) = temp_v3;
      }
    }
  }
  return;
}
