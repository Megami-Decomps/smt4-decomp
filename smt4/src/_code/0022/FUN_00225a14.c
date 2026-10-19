/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00225a14` (_code @ 0x225a14, 0x204 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_4: 24 slot(s), 96 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int spA8; /* 0xa8: local_a8 */
    unsigned int spB0; /* 0xb0: local_b0 */
    unsigned int spB4; /* 0xb4: local_b4 */
    unsigned int spB8; /* 0xb8: local_b8 */
    unsigned int spC8; /* 0xc8: local_c8 */
    unsigned int spCC; /* 0xcc: local_cc */
    unsigned int spD8; /* 0xd8: local_d8 */
    unsigned int spE0; /* 0xe0: local_e0 */
} param_4_stack;

#ifndef ROMWRIGHT_SQRT_4_DEFINED
#define ROMWRIGHT_SQRT_4_DEFINED
double sqrt(double);
static float romwright_sqrt_4(float value)
{
    return (float)sqrt((double)value);
}
#endif
/* Supplied declaration required: FUN_0023d20c. */
/* Supplied declaration required: FUN_003e2044. */
/* Supplied declaration required: nn_math_ARMv6_MTX33MultAsm_nn_math_MTX34. */
/* Supplied declaration required: nn_math_ARMv6_MTX34MultAsm. */


void FUN_00225a14(unsigned int param_1,int *param_2,unsigned int param_3,int param_4)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int *piVar4;
  unsigned char temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  float temp_v8;
  float fStack_c4;
  float fStack_c0;
  float temp_v9;
  float temp_v10;
  float temp_v11;
  float temp_v12;
  float fStack_a4;
  float fStack_a0;
  int temp_v13;
  float temp_v14;
  unsigned int temp_v15;
  unsigned int temp_v16;
  unsigned int temp_v17;
  unsigned int temp_v18;
  float temp_v19;
  unsigned int temp_v20;
  unsigned int temp_v21;
  unsigned int temp_v22;
  unsigned int temp_v23;
  float temp_v24;
  unsigned int temp_v25;
  int temp_v26;
  int temp_v27;
  unsigned int uStack_4c;
  unsigned int uStack_48;
  unsigned int uStack_34;
  int *piStack_30;
  unsigned int temp_v28;
  int iStack_28;
  
  temp_v26 = param_2[2];
  uStack_34 = param_1;
  piStack_30 = param_2;
  temp_v28 = param_3;
  iStack_28 = param_4;
  temp_v0 = (**(romwright_code **)(*param_2 + 0xc))(param_2);
  temp_v13 = (**(romwright_code **)(*param_2 + 0x14))(param_2);
  temp_v27 = *(unsigned int *)(param_4 + 0x98);
  uStack_4c = *(unsigned int *)(param_4 + 0xa8);
  uStack_48 = *(unsigned int *)(param_4 + 0xb8);
  temp_v5 = 0;
  temp_v1 = (**(romwright_code **)(*param_2 + 0x1c))(param_2);
  temp_v6 = *(int *)(temp_v1 + 4);
  temp_v1 = *(int *)(temp_v1 + 8);
  do {
    if (temp_v1 == temp_v6) {
      return;
    }
    temp_v2 = *(int *)(temp_v0 + 4) + temp_v5 * 0x40;
    if ((*(unsigned int *)(temp_v2 + 0x3c) & 0x1001) != 0) {
      temp_v4 = *(int *)(temp_v26 + 0x1c);
      if (temp_v4 != 0) {
        temp_v4 = temp_v26 + 0x1c + temp_v4;
      }
      else {
        temp_v4 = 0;
      }
      if (temp_v4 != 0) {
        piVar4 = (int *)(temp_v4 + temp_v5 * 0x10 + 0x28);
        temp_v4 = *piVar4;
        if (temp_v4 != 0) {
          temp_v4 = temp_v4 + (int)piVar4;
        }
        else {
          temp_v4 = 0;
        }
      }
      else {
        temp_v4 = 0;
      }
      temp_v3 = *(unsigned int *)(temp_v4 + 0xd4);
      if (temp_v3 != 0) {
        temp_v7 = *(int *)(temp_v13 + 4) + temp_v5 * 0x40;
        FUN_003e2044(temp_v28,temp_v6,param_4 + 0x148,param_4 + 0x178,&temp_v27,temp_v7,temp_v2,temp_v3);
        if ((*(unsigned int *)(temp_v7 + 0x3c) & 0x200) == 0) {
          FUN_0023d20c(&temp_v8,temp_v7,temp_v2 + 0x30);
          temp_v14 = romwright_sqrt_4(temp_v8 * temp_v8 + temp_v9 * temp_v9 + temp_v12 * temp_v12);
          temp_v15 = 0;
          temp_v16 = 0;
          temp_v17 = 0;
          temp_v18 = 0;
          temp_v19 = romwright_sqrt_4(fStack_c4 * fStack_c4 + temp_v10 * temp_v10 + fStack_a4 * fStack_a4);
          temp_v20 = 0;
          temp_v21 = 0;
          temp_v22 = 0;
          temp_v23 = 0;
          temp_v24 = romwright_sqrt_4(fStack_c0 * fStack_c0 + temp_v11 * temp_v11 + fStack_a0 * fStack_a0);
          temp_v25 = 0;
          nn_math_ARMv6_MTX33MultAsm_nn_math_MTX34(temp_v6,temp_v6,&temp_v14);
        }
      }
      if ((~*(unsigned int *)(temp_v4 + 4) & 0x240) == 0) {
        temp_v2 = (**(romwright_code **)(*param_2 + 0x24))(param_2);
        nn_math_ARMv6_MTX34MultAsm(*(int *)(temp_v2 + 4) + temp_v5 * 0x30,temp_v6,temp_v4 + 0xa4);
      }
    }
    temp_v6 = temp_v6 + 0x30;
    temp_v5 = temp_v5 + 1;
  } while( 1 );
}
