/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00182348` (_code @ 0x182348, 0x1f4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Unsupported intrinsic, declaration required: NAN (FLOAT_NAN). */
#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */


void FUN_00182348(int param_1)

{
/* irregular: 1 goto(s); irregular input(s): in_fpscr, in_s0; 4 native warning(s); review required */
  short temp_v0;
  char temp_v1;
  unsigned char temp_v2;
  int temp_v3;
  unsigned int *puVar5;
  unsigned int temp_v4;
  float *pfVar7;
  int temp_v5;
  int temp_v6;
  unsigned char temp_v7;
  unsigned int in_fpscr;
  unsigned int temp_v8;
  float in_s0;
  float temp_v9;
  float temp_v10;
  float temp_v11;
  float temp_v12;
  float temp_v13;
  float temp_v14;
  
  if ((*(char *)(param_1 + 0x88) != '\0') || (*(int *)(param_1 + 100) == 0)) {
    *(unsigned char *)(param_1 + 0x88) = 1;
    return;
  }
  temp_v11 = *(float *)(param_1 + 0x24);
  pfVar7 = (float *)(*(int *)(param_1 + 100) + *(short *)(param_1 + 0x68) * 0xc);
  temp_v1 = *(char *)(param_1 + 0x6c);
  temp_v9 = *pfVar7;
  temp_v10 = pfVar7[1];
  temp_v12 = temp_v10 - temp_v9;
  temp_v13 = temp_v12;
  temp_v14 = temp_v10;
  if (temp_v1 != '\0') {
    temp_v13 = temp_v9 - temp_v10;
    temp_v14 = temp_v9;
  }
  if (0.0f > temp_v13) {
    temp_v8 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v14 < temp_v11) << 0x1f);
    if (romwright_subpiece_4_1_0(temp_v8 >> 0x1f,0) == (NAN(temp_v14) || NAN(temp_v11))) {
LAB_001823d0:
      if (*(char *)((int)pfVar7 + 10) != '\0') {
        if (temp_v1 != '\0') {
          temp_v9 = temp_v10;
        }
        *(float *)(param_1 + 0x24) = temp_v9;
        *(unsigned short *)(param_1 + 0x6a) = 0;
        *(unsigned int *)(param_1 + 0x28) = *(unsigned int *)(param_1 + 0x24);
        *(unsigned int *)(param_1 + 0x2c) = *(unsigned int *)(param_1 + 0x24);
        return;
      }
      if (temp_v1 == '\0') {
        temp_v9 = temp_v10;
      }
      temp_v7 = *(char *)(param_1 + 0x84) != '\0';
      *(float *)(param_1 + 0x24) = temp_v9;
      temp_v3 = 0;
      if (temp_v7) {
        temp_v3 = *(int *)(param_1 + 0x78);
      }
      if ((temp_v7 && temp_v3 != 0) &&
         (*(int *)(temp_v3 + *(short *)(param_1 + 0x80) * 0x1c + 0x14) != -1)) {
        temp_v0 = *(short *)(param_1 + 0x80) + 1;
        *(short *)(param_1 + 0x80) = temp_v0;
        temp_v6 = temp_v3 + temp_v0 * 0x1c;
        temp_v5 = *(int *)(temp_v6 + 0x14);
        if (temp_v5 != -1 && temp_v5 != -3) {
          if (temp_v5 != -2) {
            temp_v1 = *(char *)(temp_v6 + 0x18);
            *(short *)(param_1 + 0x68) = (short)temp_v5;
            *(unsigned short *)(param_1 + 0x6a) = 0;
            *(char *)(param_1 + 0x6c) = temp_v1;
            *(unsigned char *)(param_1 + 0x8a) = 0;
            puVar5 = (unsigned int *)(*(int *)(param_1 + 100) + (short)temp_v5 * 0xc);
            if (temp_v1 != '\0') {
              temp_v4 = puVar5[1];
            }
            else {
              temp_v4 = *puVar5;
            }
          }
          else {
            *(unsigned short *)(param_1 + 0x80) = 0;
            temp_v1 = *(char *)(temp_v3 + 0x18);
            temp_v0 = (short)*(unsigned int *)(temp_v3 + 0x14);
            *(short *)(param_1 + 0x68) = temp_v0;
            *(unsigned short *)(param_1 + 0x6a) = 0;
            *(char *)(param_1 + 0x6c) = temp_v1;
            *(unsigned char *)(param_1 + 0x8a) = 0;
            puVar5 = (unsigned int *)(*(int *)(param_1 + 100) + temp_v0 * 0xc);
            if (temp_v1 != '\0') {
              temp_v4 = puVar5[1];
            }
            else {
              temp_v4 = *puVar5;
            }
          }
          *(unsigned int *)(param_1 + 0x24) = temp_v4;
          *(unsigned int *)(param_1 + 0x28) = temp_v4;
          *(unsigned int *)(param_1 + 0x2c) = temp_v4;
          *(unsigned int *)(param_1 + 0x28) = *(unsigned int *)(param_1 + 0x24);
          *(unsigned int *)(param_1 + 0x2c) = *(unsigned int *)(param_1 + 0x24);
          return;
        }
      }
      *(unsigned char *)(param_1 + 0x88) = 1;
      *(unsigned int *)(param_1 + 0x28) = *(unsigned int *)(param_1 + 0x24);
      *(unsigned int *)(param_1 + 0x2c) = *(unsigned int *)(param_1 + 0x24);
      return;
    }
  }
  else {
    temp_v8 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v14 == temp_v11) << 0x1e) |
             ((unsigned int)(temp_v11 <= temp_v14) << 0x1d);
    temp_v2 = (unsigned char)(temp_v8 >> 0x18);
    if (!(unsigned char)((temp_v2 >> 5) & 1) || (unsigned char)(temp_v2 >> 6)) goto LAB_001823d0;
  }
  temp_v14 = (float)VectorUnsignedToFloat((unsigned int)*(unsigned short *)(pfVar7 + 2),(unsigned char)(temp_v8 >> 0x16) & 3);
  if (temp_v1 != '\0') {
    temp_v12 = temp_v9 - temp_v10;
  }
  *(float *)(param_1 + 0x24) = temp_v12 / (temp_v14 / in_s0) + temp_v11;
  *(short *)(param_1 + 0x6a) = *(short *)(param_1 + 0x6a) + 1;
  *(unsigned int *)(param_1 + 0x28) = *(unsigned int *)(param_1 + 0x24);
  *(unsigned int *)(param_1 + 0x2c) = *(unsigned int *)(param_1 + 0x24);
  return;
}
