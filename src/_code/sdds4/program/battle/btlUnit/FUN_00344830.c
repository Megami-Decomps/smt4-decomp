/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00344830` (_code @ 0x344830, 0x6fc bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_2_stack;

extern int DAT_004342c8; /* 0x4342c8 */
extern float fRam004342dc; /* 0x4342dc */
extern float DAT_00434310; /* 0x434310 */
extern unsigned int DAT_00493530; /* 0x493530 */
extern unsigned int DAT_00493534; /* 0x493534 */
extern unsigned int DAT_00493538; /* 0x493538 */

/* Unsupported intrinsic, declaration required: NAN (FLOAT_NAN). */
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_FABS_4_DEFINED
#define ROMWRIGHT_FABS_4_DEFINED
static float romwright_fabs_4(float value)
{
    return value < (float)0 ? -value : value;
}
#endif
/* Supplied declaration required: FUN_0023cccc. */
/* Supplied declaration required: FUN_0023cd20. */
/* Supplied declaration required: FUN_0023ce64. */
/* Supplied declaration required: FUN_00256ad8. */
/* Supplied declaration required: FUN_00256b04. */
extern int FUN_00256b80(int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_0026330c. */
extern unsigned int FUN_00293c98(void);
extern unsigned int FUN_002c5218(void);
/* Supplied declaration required: FUN_003d6708. */
/* Supplied declaration required: FUN_003d6da8. */
/* Supplied declaration required: FUN_003d7338. */
/* Supplied declaration required: FUN_003d8a60. */


void FUN_00344830(unsigned int param_1,int param_2)

{
/* irregular: 1 goto(s); irregular input(s): in_fpscr, in_s0, in_s1, in_s2; 12 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  short temp_v2;
  unsigned char temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int *puVar7;
  float temp_v6;
  float temp_v7;
  float temp_v8;
  unsigned int in_fpscr;
  float in_s0;
  float in_s1;
  unsigned int temp_v9;
  float in_s2;
  unsigned int temp_v10;
  float temp_v11 [2];
  float temp_v12;
  
  temp_v2 = *(short *)(param_2 + 0x4a);
  temp_v6 = *(float *)(DAT_004342c8 + 0x568);
  temp_v7 = *(float *)(DAT_004342c8 + 0x56c);
  temp_v8 = *(float *)(DAT_004342c8 + 0x570);
  if ((temp_v2 == 1 || temp_v2 == 5) || temp_v2 == 6) {
    if (*(unsigned int *)(DAT_004342c8 + 0x760) < 4) {
      temp_v4 = FUN_00293c98();
      temp_v5 = FUN_00256b80(DAT_004342c8,temp_v4,1);
      if ((temp_v5 != 0) && ((*(unsigned int *)(DAT_004342c8 + 0x634) & 0x1000000) == 0)) {
        FUN_00256b04(0,*(unsigned int *)(param_2 + 8));
      }
    }
    FUN_00256ad8(1,*(unsigned int *)(param_2 + 8));
  }
  temp_v5 = DAT_004342c8;
  switch(*(unsigned int *)(param_2 + 0x4c)) {
  case 9:
    if ((*(int *)(param_2 + 0x14) != 0) &&
       ((*(unsigned int *)(*(int *)(param_2 + 0x14) + 0x50) & 0x10) == 0)) {
      VectorSignedToFloat((int)*(short *)(param_2 + 0x24),(unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_0023cd20(DAT_004342c8,*(unsigned int *)(param_2 + 0x28),(int)*(short *)(param_2 + 0x48));
      return;
    }
    break;
  case 10:
    VectorSignedToFloat((int)*(short *)(param_2 + 0x24),(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_0023cccc(DAT_004342c8,*(unsigned int *)(param_2 + 0x28),(int)*(short *)(param_2 + 0x48),0);
    return;
  case 0xb:
    if ((*(int *)(param_2 + 0x14) != 0) &&
       ((*(unsigned int *)(*(int *)(param_2 + 0x14) + 0x50) & 0x10) == 0)) {
      temp_v6 = 1.0f;
      if ((*(unsigned int *)(DAT_004342c8 + 0x634) & 0x22000) != 0) {
        temp_v7 = *(float *)(DAT_004342c8 + 0x5c4);
        temp_v1 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v7 < 0.0f) << 0x1f) |
                ((unsigned int)(temp_v7 == 0.0f) << 0x1e);
        in_fpscr = temp_v1 | ((unsigned int)NAN(temp_v7) << 0x1c);
        temp_v3 = (unsigned char)(temp_v1 >> 0x18);
        if (!(unsigned char)((temp_v3 >> 6) & 1) && temp_v3 >> 7 == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
          temp_v6 = -1.0f;
        }
      }
      temp_v2 = *(short *)(param_2 + 0x48);
      temp_v4 = *(unsigned int *)(param_2 + 0x28);
      temp_v7 = (float)VectorSignedToFloat((int)*(short *)(param_2 + 0x24),
                                         (unsigned char)(in_fpscr >> 0x16) & 3);
      *(float *)(DAT_004342c8 + 0x5e8) = *(float *)(DAT_004342c8 + 0x6c8) * temp_v7 * temp_v6;
      *(unsigned int *)(temp_v5 + 0x6bc) = temp_v4;
      *(int *)(temp_v5 + 0x6c4) = (int)temp_v2;
      *(unsigned int *)(temp_v5 + 0x6b8) = 0;
      *(unsigned int *)(temp_v5 + 0x6c0) = 0;
      *(unsigned int *)(temp_v5 + 0x62c) = *(unsigned int *)(temp_v5 + 0x5a4);
      *(unsigned int *)(temp_v5 + 0x634) = *(unsigned int *)(temp_v5 + 0x634) | 0x800;
      return;
    }
    break;
  case 0xc:
  case 0xd:
    if (*(int *)(param_2 + 0x14) != 0) {
      temp_v4 = FUN_00293c98();
      FUN_0023ce64(temp_v4,(int)*(short *)(*(int *)(param_2 + 0x14) + 0x62),0);
      temp_v2 = *(short *)(param_2 + 0x48);
      temp_v4 = *(unsigned int *)(param_2 + 0x28);
    }
    else {
      temp_v4 = *(unsigned int *)(param_2 + 0x28);
      in_s0 = temp_v6 + *(float *)(DAT_004342c8 + 0x580);
      temp_v2 = *(short *)(param_2 + 0x48);
      in_s1 = temp_v7 + *(float *)(DAT_004342c8 + 0x584);
      in_s2 = temp_v8 + *(float *)(DAT_004342c8 + 0x588);
    }
    temp_v5 = DAT_004342c8;
    *(float *)(DAT_004342c8 + 0x5ac) = in_s0;
    *(float *)(temp_v5 + 0x5b0) = in_s1;
    *(float *)(temp_v5 + 0x5b4) = in_s2;
    *(unsigned int *)(temp_v5 + 0x6d8) = temp_v4;
    *(int *)(temp_v5 + 0x6e0) = (int)temp_v2;
    *(unsigned int *)(temp_v5 + 0x6d4) = 0;
    *(unsigned int *)(temp_v5 + 0x6d0) = 0;
    *(unsigned int *)(temp_v5 + 0x6cc) = 0;
    *(unsigned int *)(temp_v5 + 0x810) = 0;
    *(unsigned int *)(temp_v5 + 0x634) = *(unsigned int *)(temp_v5 + 0x634) | 0x1000;
    return;
  case 0xe:
  case 0xf:
    if (*(int *)(param_2 + 0x14) == 0) {
      return;
    }
    temp_v4 = FUN_00293c98();
    FUN_0023ce64(temp_v4,(int)*(short *)(*(int *)(param_2 + 0x14) + 0x62),0);
    if ((*(unsigned int *)(*(int *)(param_2 + 0x14) + 0x50) & 0x10) != 0) {
      in_s0 = *(float *)(DAT_004342c8 + 0x580);
      in_s2 = *(float *)(DAT_004342c8 + 0x588);
      if ((*(unsigned int *)(*(int *)(param_2 + 0x14) + 0x50) & 0x10) == 0) goto LAB_00344b3c;
    }
    else {
LAB_00344b3c:
      if (*(char *)(*(int *)(param_2 + 0x14) + 0x3c) == '\x01') {
        in_s2 = *(float *)(DAT_004342c8 + 0x588);
      }
    }
    FUN_003d8a60(DAT_004342c8,*(unsigned int *)(param_2 + 0x28),(int)*(short *)(param_2 + 0x48));
    temp_v11[0] = in_s0;
    temp_v12 = in_s2;
    temp_v4 = FUN_002c5218();
    FUN_0026330c(temp_v11,0,temp_v4);
    temp_v5 = DAT_004342c8;
    temp_v6 = (temp_v11[0] - 200.0f) * 0.006666667f;
    if (temp_v6 < 0.0f) {
      temp_v6 = -temp_v6;
    }
    if ((int)temp_v6 >= 0x3f800001) {
      temp_v6 = 1.0f;
    }
    *(float *)(DAT_004342c8 + 0x6c8) = temp_v6;
    if (*(int *)(param_2 + 0x14) != 0) {
      temp_v2 = *(short *)(param_2 + 0x48);
      *(unsigned int *)(temp_v5 + 0x750) = *(unsigned int *)(param_2 + 0x28);
      *(unsigned int *)(temp_v5 + 0x754) = 0;
      *(int *)(temp_v5 + 0x758) = (int)temp_v2;
      *(unsigned int *)(temp_v5 + 0x748) = 0;
      *(unsigned int *)(temp_v5 + 0x74c) = 0;
      *(unsigned int *)(temp_v5 + 0x744) = 0;
      *(unsigned int *)(temp_v5 + 0x634) = *(unsigned int *)(temp_v5 + 0x634) | 0x800000;
      *(unsigned int *)(temp_v5 + 0x778) = 0;
      *(unsigned int *)(temp_v5 + 0x774) = 0;
      *(unsigned int *)(temp_v5 + 0x770) = 0;
      return;
    }
    break;
  case 0x10:
    temp_v2 = *(short *)(param_2 + 0x48);
    temp_v0 = *(short *)(param_2 + 0x24) * 0xc;
    temp_v4 = *(unsigned int *)(param_2 + 0x28);
    temp_v9 = *(unsigned int *)(temp_v0 + 0x4398ec);
    temp_v10 = *(unsigned int *)(temp_v0 + 0x4398f0);
    DAT_00493530 = *(unsigned int *)(DAT_004342c8 + 0x6e4);
    DAT_00493534 = *(unsigned int *)(DAT_004342c8 + 0x6e8);
    DAT_00493538 = *(unsigned int *)(DAT_004342c8 + 0x6ec);
    puVar7 = (unsigned int *)(DAT_004342c8 + 0x6f0);
    *(unsigned int *)(DAT_004342c8 + 0x5c4) = *(unsigned int *)(temp_v0 + 0x4398e8);
    *(unsigned int *)(temp_v5 + 0x5c8) = temp_v9;
    *(unsigned int *)(temp_v5 + 0x5cc) = temp_v10;
    *(int *)(temp_v5 + 0x6f8) = (int)temp_v2;
    *puVar7 = temp_v4;
    *(unsigned int *)(temp_v5 + 0x6f4) = 0;
    *(unsigned int *)(temp_v5 + 0x634) = *(unsigned int *)(temp_v5 + 0x634) | 0x8000;
    return;
  case 0x11:
    FUN_003d7338(DAT_004342c8,*(unsigned int *)(param_2 + 0x28),(int)*(short *)(param_2 + 0x48),
                 (int)*(short *)(param_2 + 0x26));
    return;
  case 0x12:
    VectorSignedToFloat((int)*(short *)(param_2 + 0x24),(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_003d6da8(DAT_004342c8,*(unsigned int *)(param_2 + 0x28),(int)*(short *)(param_2 + 0x48));
    return;
  case 0x15:
    if (*(int *)(param_2 + 0x14) != 0) {
      temp_v2 = *(short *)(param_2 + 0x48);
      temp_v6 = romwright_fabs_4(*(float *)(*(int *)(param_2 + 0x14) + 0x14) - *(float *)(DAT_004342c8 + 0x570));
      temp_v7 = (float)VectorSignedToFloat((int)*(short *)(param_2 + 0x24),
                                         (unsigned char)(in_fpscr >> 0x16) & 3);
      fRam004342dc = temp_v7 * -0.01f;
      if (temp_v6 - DAT_00434310 < -(temp_v7 * -0.01f)) {
        fRam004342dc = DAT_00434310 - temp_v6;
      }
      *(unsigned int *)(DAT_004342c8 + 0x7a0) = *(unsigned int *)(param_2 + 0x28);
      *(int *)(temp_v5 + 0x7a8) = (int)temp_v2;
      *(unsigned int *)(temp_v5 + 0x794) = 0;
      *(unsigned int *)(temp_v5 + 0x7a4) = 0;
      *(unsigned int *)(temp_v5 + 0x634) = *(unsigned int *)(temp_v5 + 0x634) | 0x200;
      return;
    }
    break;
  case 0x16:
    temp_v2 = *(short *)(param_2 + 0x48);
    temp_v4 = *(unsigned int *)(param_2 + 0x28);
    temp_v6 = (float)VectorSignedToFloat((int)*(short *)(param_2 + 0x24),(unsigned char)(in_fpscr >> 0x16) & 3)
    ;
    *(float *)(DAT_004342c8 + 0x5ec) = temp_v6 * 0.01f;
    *(unsigned int *)(temp_v5 + 0x7ac) = 0;
    *(int *)(temp_v5 + 0x7c0) = (int)temp_v2;
    *(unsigned int *)(temp_v5 + 0x7b8) = temp_v4;
    *(unsigned int *)(temp_v5 + 0x7bc) = 0;
    *(unsigned int *)(temp_v5 + 0x634) = *(unsigned int *)(temp_v5 + 0x634) | 0x400;
    return;
  case 0x17:
    if ((*(int *)(param_2 + 0x14) != 0) &&
       ((*(unsigned int *)(*(int *)(param_2 + 0x14) + 0x50) & 0x10) == 0)) {
      temp_v6 = 1.0f;
      if ((*(unsigned int *)(DAT_004342c8 + 0x634) & 0x22000) != 0) {
        temp_v7 = *(float *)(DAT_004342c8 + 0x5c4);
        temp_v1 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v7 < 0.0f) << 0x1f) |
                ((unsigned int)(temp_v7 == 0.0f) << 0x1e);
        in_fpscr = temp_v1 | ((unsigned int)NAN(temp_v7) << 0x1c);
        temp_v3 = (unsigned char)(temp_v1 >> 0x18);
        if (!(unsigned char)((temp_v3 >> 6) & 1) && temp_v3 >> 7 == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
          temp_v6 = -1.0f;
        }
      }
      temp_v2 = *(short *)(param_2 + 0x48);
      temp_v4 = *(unsigned int *)(param_2 + 0x28);
      temp_v7 = (float)VectorSignedToFloat((int)*(short *)(param_2 + 0x24),
                                         (unsigned char)(in_fpscr >> 0x16) & 3);
      *(float *)(DAT_004342c8 + 0x5e8) = *(float *)(DAT_004342c8 + 0x6c8) * temp_v7 * 0.01f * temp_v6;
      *(unsigned int *)(temp_v5 + 2000) = 0;
      *(unsigned int *)(temp_v5 + 0x62c) = *(unsigned int *)(temp_v5 + 0x5a4);
      *(int *)(temp_v5 + 0x7e4) = (int)temp_v2;
      *(unsigned int *)(temp_v5 + 0x7dc) = temp_v4;
      *(unsigned int *)(temp_v5 + 0x7e0) = 0;
      *(unsigned int *)(temp_v5 + 0x634) = *(unsigned int *)(temp_v5 + 0x634) | 0x800;
      return;
    }
    break;
  case 0x18:
    if (*(int *)(param_2 + 0x14) != 0) {
      temp_v4 = FUN_00293c98();
      FUN_0023ce64(temp_v4,(int)*(short *)(*(int *)(param_2 + 0x14) + 0x62),0);
      temp_v2 = *(short *)(param_2 + 0x48);
      temp_v4 = *(unsigned int *)(param_2 + 0x28);
    }
    else {
      temp_v4 = *(unsigned int *)(param_2 + 0x28);
      in_s0 = temp_v6 + *(float *)(DAT_004342c8 + 0x580);
      temp_v2 = *(short *)(param_2 + 0x48);
      in_s1 = temp_v7 + *(float *)(DAT_004342c8 + 0x584);
      in_s2 = temp_v8 + *(float *)(DAT_004342c8 + 0x588);
    }
    temp_v5 = DAT_004342c8;
    puVar7 = (unsigned int *)(DAT_004342c8 + 0x7e8);
    *(unsigned int *)(DAT_004342c8 + 0x7f0) = 0;
    *(unsigned int *)(temp_v5 + 0x7ec) = 0;
    *puVar7 = 0;
    *(float *)(temp_v5 + 0x5ac) = in_s0;
    *(float *)(temp_v5 + 0x5b0) = in_s1;
    *(float *)(temp_v5 + 0x5b4) = in_s2;
    *(int *)(temp_v5 + 0x814) = (int)temp_v2;
    *(unsigned int *)(temp_v5 + 0x80c) = temp_v4;
    *(unsigned int *)(temp_v5 + 0x810) = 0;
    *(unsigned int *)(temp_v5 + 0x634) = *(unsigned int *)(temp_v5 + 0x634) | 0x1000;
    return;
  case 0x19:
    if (*(int *)(param_2 + 0x14) != 0) {
      temp_v4 = FUN_00293c98();
      FUN_0023ce64(temp_v4,(int)*(short *)(*(int *)(param_2 + 0x14) + 0x62),0);
      if ((*(unsigned int *)(*(int *)(param_2 + 0x14) + 0x50) & 0x10) != 0) {
        in_s0 = *(float *)(DAT_004342c8 + 0x580);
        in_s2 = *(float *)(DAT_004342c8 + 0x588);
      }
      FUN_003d6708(DAT_004342c8,*(unsigned int *)(param_2 + 0x28),(int)*(short *)(param_2 + 0x48));
      temp_v11[0] = in_s0;
      temp_v12 = in_s2;
      temp_v4 = FUN_002c5218();
      FUN_0026330c(temp_v11,0,temp_v4);
      temp_v6 = (temp_v11[0] - 200.0f) * 0.006666667f;
      if (temp_v6 < 0.0f) {
        temp_v6 = -temp_v6;
      }
      if ((int)temp_v6 >= 0x3f800001) {
        temp_v6 = 1.0f;
      }
      *(float *)(DAT_004342c8 + 0x6c8) = temp_v6;
    }
  }
  return;
}
