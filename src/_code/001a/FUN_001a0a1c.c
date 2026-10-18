/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a0a1c` (_code @ 0x1a0a1c, 0x470 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043dc24; /* 0x43dc24 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
/* Supplied declaration required: FUN_002c09f4. */


unsigned int FUN_001a0a1c(void)

{
/* irregular: irregular input(s): in_fpscr; 4 native warning(s); review required */
  int *piVar1;
  unsigned char temp_v0;
  int temp_v1;
  short temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  unsigned int in_fpscr;
  float temp_v8;
  float temp_v9;
  unsigned int temp_v10;
  float temp_v11;
  unsigned long long temp_v12;
  unsigned long long temp_v13;
  unsigned long long temp_v14;
  
  temp_v1 = DAT_0043dc24;
  if (DAT_0043dc24 == 0) {
    return 0;
  }
  temp_v11 = 0.0f;
  temp_v6 = 1;
  switch(*(unsigned int *)(DAT_0043dc24 + 8)) {
  default:
    break;
  case 1:
    temp_v5 = *(int *)(DAT_0043dc24 + 0x14);
    temp_v8 = (float)VectorSignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v6 = temp_v5;
    if (temp_v5 >= 8) {
      temp_v6 = 3;
    }
    *(float *)(DAT_0043dc24 + 0x10) = 1.0f - temp_v8 * 0.125f;
    if (temp_v5 < 8) break;
    *(unsigned int *)(temp_v1 + 0x10) = 0;
    *(int *)(temp_v1 + 8) = temp_v6;
    break;
  case 2:
    piVar1 = (int *)(DAT_0043dc24 + 0x14);
    temp_v8 = (float)VectorSignedToFloat(*piVar1,(unsigned char)(in_fpscr >> 0x16) & 3);
    *(float *)(DAT_0043dc24 + 0x10) = temp_v8 * 0.125f;
    if (*piVar1 < 8) break;
    *(unsigned int *)(temp_v1 + 0x10) = 0x3f800000;
    *(unsigned int *)(temp_v1 + 8) = 0;
    *(unsigned int *)(temp_v1 + 0x14) = 0;
    break;
  case 4:
    piVar1 = (int *)(DAT_0043dc24 + 0x14);
    temp_v8 = (float)VectorSignedToFloat(*piVar1,(unsigned char)(in_fpscr >> 0x16) & 3);
    *(float *)(DAT_0043dc24 + 0x10) = temp_v8 * 0.125f;
    if (*piVar1 >= 8) {
      *(unsigned int *)(temp_v1 + 8) = 1;
      *(unsigned int *)(temp_v1 + 0xc) = 0;
      *(unsigned int *)(temp_v1 + 0x10) = 0x3f800000;
      *(unsigned int *)(temp_v1 + 0x14) = 0;
    }
    break;
  case 5:
    piVar1 = (int *)(DAT_0043dc24 + 0x14);
    temp_v8 = (float)VectorSignedToFloat(*piVar1,(unsigned char)(in_fpscr >> 0x16) & 3);
    *(float *)(DAT_0043dc24 + 0x10) = temp_v8 * 0.125f;
    if (*piVar1 < 8) break;
    *(unsigned int *)(temp_v1 + 0xc) = 1;
    *(unsigned int *)(temp_v1 + 0x10) = 0x3f800000;
    *(unsigned int *)(temp_v1 + 0x14) = 0;
    *(int *)(temp_v1 + 8) = temp_v6;
  }
  temp_v10 = 0x43988000;
  temp_v12 = 0x436100003dcccccd;
  temp_v6 = 0;
  do {
    temp_v5 = temp_v1 + temp_v6 * 0x14;
    temp_v8 = *(float *)(temp_v5 + 0x18) + *(float *)(temp_v5 + 0x20) * *(float *)(temp_v5 + 0x28);
    *(float *)(temp_v5 + 0x18) = temp_v8;
    temp_v7 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v8 == temp_v11) << 0x1e) |
            ((unsigned int)(temp_v11 <= temp_v8) << 0x1d);
    *(float *)(temp_v5 + 0x1c) =
         *(float *)(temp_v5 + 0x1c) + *(float *)(temp_v5 + 0x24) * *(float *)(temp_v5 + 0x28);
    temp_v0 = (unsigned char)(temp_v7 >> 0x18);
    if (!(unsigned char)((temp_v0 >> 5) & 1) || (unsigned char)(temp_v0 >> 6)) {
      *(float *)(temp_v5 + 0x18) = temp_v11;
      *(float *)(temp_v5 + 0x20) = -*(float *)(temp_v5 + 0x20);
      temp_v3 = FUN_002c09f4(0x14);
      temp_v8 = (float)VectorUnsignedToFloat(temp_v3 + 0x14,(unsigned char)(temp_v7 >> 0x16) & 3);
      *(float *)(temp_v5 + 0x28) = temp_v8 * (float)temp_v12;
    }
    if (*(int *)(temp_v5 + 0x18) >= 0x43988000) {
      *(unsigned int *)(temp_v5 + 0x18) = temp_v10;
      *(float *)(temp_v5 + 0x20) = -*(float *)(temp_v5 + 0x20);
      temp_v3 = FUN_002c09f4(0x14);
      temp_v8 = (float)VectorUnsignedToFloat(temp_v3 + 0x14,(unsigned char)(temp_v7 >> 0x16) & 3);
      *(float *)(temp_v5 + 0x28) = temp_v8 * (float)temp_v12;
    }
    in_fpscr = (temp_v7 & 0xfffffff) | ((unsigned int)(*(float *)(temp_v5 + 0x1c) == temp_v11) << 0x1e) |
               ((unsigned int)(temp_v11 <= *(float *)(temp_v5 + 0x1c)) << 0x1d);
    temp_v0 = (unsigned char)(in_fpscr >> 0x18);
    if (!(unsigned char)((temp_v0 >> 5) & 1) || (unsigned char)(temp_v0 >> 6)) {
      *(float *)(temp_v5 + 0x1c) = temp_v11;
      *(float *)(temp_v5 + 0x24) = -*(float *)(temp_v5 + 0x24);
      temp_v3 = FUN_002c09f4(0x14);
      temp_v8 = (float)VectorUnsignedToFloat(temp_v3 + 0x14,(unsigned char)(in_fpscr >> 0x16) & 3);
      *(float *)(temp_v5 + 0x28) = temp_v8 * (float)temp_v12;
    }
    if (*(int *)(temp_v5 + 0x1c) >= 0x43610000) {
      *(int *)(temp_v5 + 0x1c) = (int)((unsigned long long)temp_v12 >> 0x20);
      *(float *)(temp_v5 + 0x24) = -*(float *)(temp_v5 + 0x24);
      temp_v3 = FUN_002c09f4(0x14);
      temp_v8 = (float)VectorUnsignedToFloat(temp_v3 + 0x14,(unsigned char)(in_fpscr >> 0x16) & 3);
      *(float *)(temp_v5 + 0x28) = temp_v8 * (float)temp_v12;
    }
    temp_v6 = temp_v6 + 1;
  } while (temp_v6 < 5);
  temp_v14 = 0x3fd9999a;
  temp_v12 = romwright_piece_4_4(0x40233333,(int)temp_v12);
  temp_v13 = 0x4010a3d7437f0000;
  temp_v7 = 0;
  do {
    temp_v6 = temp_v1 + temp_v7 * 0x14;
    temp_v8 = *(float *)(temp_v6 + 0x7c) + *(float *)(temp_v6 + 0x80) * *(float *)(temp_v6 + 0x84);
    temp_v9 = (float)VectorSignedToFloat((int)*(short *)(temp_v6 + 0x8c),(unsigned char)(in_fpscr >> 0x16) & 3);
    *(float *)(temp_v6 + 0x7c) = temp_v8;
    temp_v4 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v8 == temp_v9) << 0x1e) |
            ((unsigned int)(temp_v9 <= temp_v8) << 0x1d);
    temp_v0 = (unsigned char)(temp_v4 >> 0x18);
    if (!(unsigned char)((temp_v0 >> 5) & 1) || (unsigned char)(temp_v0 >> 6)) {
      temp_v10 = VectorSignedToFloat((int)*(short *)(temp_v6 + 0x8c),(unsigned char)(temp_v4 >> 0x16) & 3);
      *(unsigned int *)(temp_v6 + 0x7c) = temp_v10;
      *(float *)(temp_v6 + 0x80) = -*(float *)(temp_v6 + 0x80);
      temp_v5 = FUN_002c09f4(0x14);
      *(unsigned short *)(temp_v6 + 0x8c) = 0;
      *(unsigned short *)(temp_v6 + 0x8e) = 0xf0;
      temp_v8 = (float)VectorUnsignedToFloat(temp_v5 + 0x14,(unsigned char)(temp_v4 >> 0x16) & 3);
      *(float *)(temp_v6 + 0x84) = temp_v8 * (float)temp_v12;
      temp_v5 = FUN_002c09f4(2);
      if (temp_v5 == 0) {
        temp_v2 = FUN_002c09f4(0x1e);
        *(short *)(temp_v6 + 0x8c) = *(short *)(temp_v6 + 0x8c) - temp_v2;
        temp_v2 = FUN_002c09f4(0x1e);
        *(short *)(temp_v6 + 0x8e) = temp_v2 + *(short *)(temp_v6 + 0x8e);
      }
    }
    temp_v8 = (float)VectorSignedToFloat((int)*(short *)(temp_v6 + 0x8e),(unsigned char)(temp_v4 >> 0x16) & 3);
    in_fpscr = (temp_v4 & 0xfffffff) | ((unsigned int)(temp_v8 == *(float *)(temp_v6 + 0x7c)) << 0x1e) |
               ((unsigned int)(*(float *)(temp_v6 + 0x7c) <= temp_v8) << 0x1d);
    temp_v0 = (unsigned char)(in_fpscr >> 0x18);
    if (!(unsigned char)((temp_v0 >> 5) & 1) || (unsigned char)(temp_v0 >> 6)) {
      temp_v10 = VectorSignedToFloat((int)*(short *)(temp_v6 + 0x8e),(unsigned char)(in_fpscr >> 0x16) & 3);
      *(unsigned int *)(temp_v6 + 0x7c) = temp_v10;
      *(float *)(temp_v6 + 0x80) = -*(float *)(temp_v6 + 0x80);
      temp_v5 = FUN_002c09f4(0x14);
      *(unsigned short *)(temp_v6 + 0x8c) = 0;
      *(unsigned short *)(temp_v6 + 0x8e) = 0xf0;
      temp_v8 = (float)VectorUnsignedToFloat(temp_v5 + 0x14,(unsigned char)(in_fpscr >> 0x16) & 3);
      *(float *)(temp_v6 + 0x84) = temp_v8 * (float)temp_v12;
      temp_v5 = FUN_002c09f4(2);
      if (temp_v5 == 0) {
        temp_v2 = FUN_002c09f4(0x1e);
        *(short *)(temp_v6 + 0x8c) = *(short *)(temp_v6 + 0x8c) - temp_v2;
        temp_v2 = FUN_002c09f4(0x1e);
        *(short *)(temp_v6 + 0x8e) = temp_v2 + *(short *)(temp_v6 + 0x8e);
      }
    }
    if (temp_v7 < 2) {
      temp_v4 = *(unsigned int *)(temp_v1 + 4);
      temp_v8 = *(float *)(temp_v6 + 0x88);
      temp_v5 = (int)(((long long)(int)temp_v4 * -0xd4629b7 + ((unsigned long long)temp_v4 << 0x20)) >> 0x20);
      temp_v5 = temp_v4 + ((temp_v5 >> 7) - (temp_v5 >> 0x1f)) * -0x87;
      if (temp_v5 < 0x2d) {
        temp_v8 = temp_v8 - (float)((unsigned long long)temp_v13 >> 0x20);
      }
      else if (temp_v5 < 0x4b) {
        temp_v8 = temp_v8 + (float)temp_v14;
      }
      else {
        temp_v9 = (float)((unsigned long long)temp_v12 >> 0x20);
        if (temp_v5 < 0x73) {
          temp_v8 = temp_v8 + temp_v9;
        }
        else {
          temp_v8 = temp_v8 - temp_v9;
        }
      }
      in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v11 <= temp_v8) << 0x1d);
      temp_v9 = temp_v11;
      if ((romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0)) && (temp_v9 = temp_v8, (int)temp_v8 >= 0x437f0001)) {
        temp_v9 = (float)temp_v13;
      }
      *(float *)(temp_v6 + 0x88) = temp_v9;
    }
    temp_v7 = temp_v7 + 1;
  } while ((int)temp_v7 < 5);
  *(int *)(temp_v1 + 4) = *(int *)(temp_v1 + 4) + 1;
  *(int *)(temp_v1 + 0x14) = *(int *)(temp_v1 + 0x14) + 1;
  return 0;
}
