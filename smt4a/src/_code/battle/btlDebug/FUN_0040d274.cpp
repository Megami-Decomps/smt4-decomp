/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0040d274` (_code @ 0x40d274, 0x708 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002a1850(...);
int FUN_003e7fa4(...);
int FUN_004f1b2c(...);
int FUN_004f22a4(...);
int FUN_004f2938(...);
int cameraBeginScalarTransition(int, unsigned int, int);
int FUN_004f3f1c(int, unsigned int, int, int);
void FUN_004f4348(int camera, float x, float y, float z, unsigned int duration, unsigned int mode);
int FUN_004fb670(int, unsigned int);
int FUN_004feecc(int, unsigned int);
int VectorSignedToFloat(...);

/* stack frame of param_2: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_2_stack;

extern int g_btlCamera; /* 0x571508 */
extern float fRam0057151c; /* 0x57151c */
extern float DAT_00571570; /* 0x571570 */
extern unsigned int g_cameraAlternateProgressStart; /* 0x5e1530 */
extern unsigned int DAT_005e1534; /* 0x5e1534 */
extern unsigned int DAT_005e1538; /* 0x5e1538 */

/* Unsupported intrinsic, declaration required: NAN (FLOAT_NAN). */
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_FABS_4_DEFINED
#define ROMWRIGHT_FABS_4_DEFINED
static float romwright_fabs_4(float value)
{
    return value < (float)0 ? -value : value;
}
#endif
extern unsigned int btlGetMainState(void);
extern unsigned int FUN_00152f54(void);
/* Supplied declaration required: FUN_002a1850. */
/* Supplied declaration required: FUN_003e7fa4. */
/* Supplied declaration required: FUN_004f1b2c. */
/* Supplied declaration required: FUN_004f22a4. */
extern int FUN_004f2708(int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_004f2938. */
/* Supplied declaration required: cameraBeginScalarTransition. */
/* Supplied declaration required: FUN_004f3f1c. */
/* Supplied declaration required: FUN_004f4348. */
/* Supplied declaration required: FUN_004fb670. */
/* Supplied declaration required: FUN_004feecc. */


void FUN_0040d274(unsigned int param_1,int param_2)

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
  temp_v7 = *(float *)(g_btlCamera + 0x588);
  temp_v6 = *(float *)(g_btlCamera + 0x580);
  temp_v8 = *(float *)(g_btlCamera + 0x584);
  if ((temp_v2 == 1 || temp_v2 == 5) || temp_v2 == 6) {
    if (*(unsigned int *)(g_btlCamera + 0x7cc) < 4) {
      temp_v4 = btlGetMainState();
      temp_v5 = FUN_004f2708(g_btlCamera,temp_v4,1);
      if ((temp_v5 != 0) && ((*(unsigned int *)(g_btlCamera + 0x64c) & 0x1000000) == 0)) {
        FUN_004fb670(0,*(unsigned int *)(param_2 + 8));
      }
    }
    FUN_004feecc(1,*(unsigned int *)(param_2 + 8));
  }
  temp_v5 = g_btlCamera;
  switch(*(unsigned int *)(param_2 + 0x4c)) {
  case 9:
    if ((*(int *)(param_2 + 0x14) != 0) &&
       ((*(unsigned int *)(*(int *)(param_2 + 0x14) + 0x50) & 0x10) == 0)) {
      VectorSignedToFloat((int)*(short *)(param_2 + 0x24),(unsigned char)(in_fpscr >> 0x16) & 3);
      cameraBeginScalarTransition(g_btlCamera,*(unsigned int *)(param_2 + 0x28),(int)*(short *)(param_2 + 0x48));
      return;
    }
    break;
  case 10:
    VectorSignedToFloat((int)*(short *)(param_2 + 0x24),(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_004f3f1c(g_btlCamera,*(unsigned int *)(param_2 + 0x28),(int)*(short *)(param_2 + 0x48),0);
    return;
  case 0xb:
    if ((*(int *)(param_2 + 0x14) != 0) &&
       ((*(unsigned int *)(*(int *)(param_2 + 0x14) + 0x50) & 0x10) == 0)) {
      temp_v6 = 1.0f;
      if ((*(unsigned int *)(g_btlCamera + 0x64c) & 0x22000) != 0) {
        temp_v7 = *(float *)(g_btlCamera + 0x5dc);
        temp_v1 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v7 < 0.0f) << 0x1f) |
                ((unsigned int)(temp_v7 == 0.0f) << 0x1e);
        in_fpscr = temp_v1 | ((unsigned int)(temp_v7 != temp_v7) << 0x1c);
        temp_v3 = (unsigned char)(temp_v1 >> 0x18);
        if (!(unsigned char)((temp_v3 >> 6) & 1) && temp_v3 >> 7 == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
          temp_v6 = -1.0f;
        }
      }
      temp_v2 = *(short *)(param_2 + 0x48);
      temp_v4 = *(unsigned int *)(param_2 + 0x28);
      temp_v7 = (float)VectorSignedToFloat((int)*(short *)(param_2 + 0x24),
                                         (unsigned char)(in_fpscr >> 0x16) & 3);
      *(float *)(g_btlCamera + 0x600) = *(float *)(g_btlCamera + 0x734) * temp_v7 * temp_v6;
      *(unsigned int *)(temp_v5 + 0x728) = temp_v4;
      *(int *)(temp_v5 + 0x730) = (int)temp_v2;
      *(unsigned int *)(temp_v5 + 0x724) = 0;
      *(unsigned int *)(temp_v5 + 0x72c) = 0;
      *(unsigned int *)(temp_v5 + 0x644) = *(unsigned int *)(temp_v5 + 0x5bc);
      *(unsigned int *)(temp_v5 + 0x64c) = *(unsigned int *)(temp_v5 + 0x64c) | 0x800;
      return;
    }
    break;
  case 0xc:
  case 0xd:
    if (*(int *)(param_2 + 0x14) != 0) {
      temp_v4 = btlGetMainState();
      FUN_003e7fa4(temp_v4,(int)*(short *)(*(int *)(param_2 + 0x14) + 0x6a),0);
      temp_v2 = *(short *)(param_2 + 0x48);
      temp_v4 = *(unsigned int *)(param_2 + 0x28);
    }
    else {
      temp_v4 = *(unsigned int *)(param_2 + 0x28);
      in_s0 = temp_v6 + *(float *)(g_btlCamera + 0x598);
      temp_v2 = *(short *)(param_2 + 0x48);
      in_s1 = temp_v8 + *(float *)(g_btlCamera + 0x59c);
      in_s2 = temp_v7 + *(float *)(g_btlCamera + 0x5a0);
    }
    temp_v5 = g_btlCamera;
    *(float *)(g_btlCamera + 0x5c4) = in_s0;
    *(float *)(temp_v5 + 0x5c8) = in_s1;
    *(float *)(temp_v5 + 0x5cc) = in_s2;
    *(unsigned int *)(temp_v5 + 0x744) = temp_v4;
    *(int *)(temp_v5 + 0x74c) = (int)temp_v2;
    *(unsigned int *)(temp_v5 + 0x740) = 0;
    *(unsigned int *)(temp_v5 + 0x73c) = 0;
    *(unsigned int *)(temp_v5 + 0x738) = 0;
    *(unsigned int *)(temp_v5 + 0x87c) = 0;
    *(unsigned int *)(temp_v5 + 0x64c) = *(unsigned int *)(temp_v5 + 0x64c) | 0x1000;
    return;
  case 0xe:
  case 0xf:
    if (*(int *)(param_2 + 0x14) == 0) {
      return;
    }
    temp_v4 = btlGetMainState();
    FUN_003e7fa4(temp_v4,(int)*(short *)(*(int *)(param_2 + 0x14) + 0x6a),0);
    if ((*(unsigned int *)(*(int *)(param_2 + 0x14) + 0x50) & 0x10) != 0) {
      in_s0 = *(float *)(g_btlCamera + 0x598);
      in_s2 = *(float *)(g_btlCamera + 0x5a0);
      if ((*(unsigned int *)(*(int *)(param_2 + 0x14) + 0x50) & 0x10) == 0) goto LAB_0040d588;
    }
    else {
LAB_0040d588:
      if (*(char *)(*(int *)(param_2 + 0x14) + 0x3c) == '\x01') {
        in_s2 = *(float *)(g_btlCamera + 0x5a0);
      }
    }
    FUN_004f4348(g_btlCamera, in_s0, in_s1, in_s2, *(unsigned int *)(param_2 + 0x28), (int)*(short *)(param_2 + 0x48));
    temp_v11[0] = in_s0;
    temp_v12 = in_s2;
    temp_v4 = FUN_00152f54();
    FUN_002a1850(temp_v11,0,temp_v4);
    temp_v5 = g_btlCamera;
    temp_v6 = (temp_v11[0] - 200.0f) * 0.006666667f;
    if (temp_v6 < 0.0f) {
      temp_v6 = -temp_v6;
    }
    if ((int)temp_v6 >= 0x3f800001) {
      temp_v6 = 1.0f;
    }
    *(float *)(g_btlCamera + 0x734) = temp_v6;
    if (*(int *)(param_2 + 0x14) != 0) {
      temp_v2 = *(short *)(param_2 + 0x48);
      *(unsigned int *)(temp_v5 + 0x7bc) = *(unsigned int *)(param_2 + 0x28);
      *(unsigned int *)(temp_v5 + 0x7c0) = 0;
      *(int *)(temp_v5 + 0x7c4) = (int)temp_v2;
      *(unsigned int *)(temp_v5 + 0x7b4) = 0;
      *(unsigned int *)(temp_v5 + 0x7b8) = 0;
      *(unsigned int *)(temp_v5 + 0x7b0) = 0;
      *(unsigned int *)(temp_v5 + 0x64c) = *(unsigned int *)(temp_v5 + 0x64c) | 0x800000;
      *(unsigned int *)(temp_v5 + 0x7e4) = 0;
      *(unsigned int *)(temp_v5 + 0x7e0) = 0;
      *(unsigned int *)(temp_v5 + 0x7dc) = 0;
      return;
    }
    break;
  case 0x10:
    temp_v2 = *(short *)(param_2 + 0x48);
    temp_v0 = *(short *)(param_2 + 0x24) * 0xc;
    temp_v4 = *(unsigned int *)(param_2 + 0x28);
    temp_v9 = *(unsigned int *)(temp_v0 + 0x57a500);
    temp_v10 = *(unsigned int *)(temp_v0 + 0x57a504);
    g_cameraAlternateProgressStart = *(unsigned int *)(g_btlCamera + 0x750);
    DAT_005e1534 = *(unsigned int *)(g_btlCamera + 0x754);
    DAT_005e1538 = *(unsigned int *)(g_btlCamera + 0x758);
    *(unsigned int *)(g_btlCamera + 0x5dc) = *(unsigned int *)(temp_v0 + 0x57a4fc);
    *(unsigned int *)(temp_v5 + 0x5e0) = temp_v9;
    *(unsigned int *)(temp_v5 + 0x5e4) = temp_v10;
    *(int *)(temp_v5 + 0x764) = (int)temp_v2;
    *(unsigned int *)(temp_v5 + 0x75c) = temp_v4;
    *(unsigned int *)(temp_v5 + 0x760) = 0;
    *(unsigned int *)(temp_v5 + 0x64c) = *(unsigned int *)(temp_v5 + 0x64c) | 0x8000;
    return;
  case 0x11:
    FUN_004f2938(g_btlCamera,*(unsigned int *)(param_2 + 0x28),(int)*(short *)(param_2 + 0x48),
                 (int)*(short *)(param_2 + 0x26));
    return;
  case 0x12:
    VectorSignedToFloat((int)*(short *)(param_2 + 0x24),(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_004f22a4(g_btlCamera,*(unsigned int *)(param_2 + 0x28),(int)*(short *)(param_2 + 0x48));
    return;
  case 0x15:
    if (*(int *)(param_2 + 0x14) != 0) {
      temp_v2 = *(short *)(param_2 + 0x48);
      temp_v6 = romwright_fabs_4(*(float *)(*(int *)(param_2 + 0x14) + 0x14) - *(float *)(g_btlCamera + 0x588));
      temp_v7 = (float)VectorSignedToFloat((int)*(short *)(param_2 + 0x24),
                                         (unsigned char)(in_fpscr >> 0x16) & 3);
      fRam0057151c = temp_v7 * -0.01f;
      if (temp_v6 - DAT_00571570 < -(temp_v7 * -0.01f)) {
        fRam0057151c = DAT_00571570 - temp_v6;
      }
      puVar7 = (unsigned int *)(g_btlCamera + 0x800);
      *(unsigned int *)(g_btlCamera + 0x80c) = *(unsigned int *)(param_2 + 0x28);
      *(int *)(temp_v5 + 0x814) = (int)temp_v2;
      *puVar7 = 0;
      *(unsigned int *)(temp_v5 + 0x810) = 0;
      *(unsigned int *)(temp_v5 + 0x64c) = *(unsigned int *)(temp_v5 + 0x64c) | 0x200;
      return;
    }
    break;
  case 0x16:
    temp_v2 = *(short *)(param_2 + 0x48);
    temp_v4 = *(unsigned int *)(param_2 + 0x28);
    temp_v6 = (float)VectorSignedToFloat((int)*(short *)(param_2 + 0x24),(unsigned char)(in_fpscr >> 0x16) & 3)
    ;
    *(float *)(g_btlCamera + 0x604) = temp_v6 * 0.01f;
    *(unsigned int *)(temp_v5 + 0x818) = 0;
    *(int *)(temp_v5 + 0x82c) = (int)temp_v2;
    *(unsigned int *)(temp_v5 + 0x824) = temp_v4;
    *(unsigned int *)(temp_v5 + 0x828) = 0;
    *(unsigned int *)(temp_v5 + 0x64c) = *(unsigned int *)(temp_v5 + 0x64c) | 0x400;
    return;
  case 0x17:
    if ((*(int *)(param_2 + 0x14) != 0) &&
       ((*(unsigned int *)(*(int *)(param_2 + 0x14) + 0x50) & 0x10) == 0)) {
      temp_v6 = 1.0f;
      if ((*(unsigned int *)(g_btlCamera + 0x64c) & 0x22000) != 0) {
        temp_v7 = *(float *)(g_btlCamera + 0x5dc);
        temp_v1 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v7 < 0.0f) << 0x1f) |
                ((unsigned int)(temp_v7 == 0.0f) << 0x1e);
        in_fpscr = temp_v1 | ((unsigned int)(temp_v7 != temp_v7) << 0x1c);
        temp_v3 = (unsigned char)(temp_v1 >> 0x18);
        if (!(unsigned char)((temp_v3 >> 6) & 1) && temp_v3 >> 7 == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
          temp_v6 = -1.0f;
        }
      }
      temp_v2 = *(short *)(param_2 + 0x48);
      temp_v4 = *(unsigned int *)(param_2 + 0x28);
      temp_v7 = (float)VectorSignedToFloat((int)*(short *)(param_2 + 0x24),
                                         (unsigned char)(in_fpscr >> 0x16) & 3);
      *(float *)(g_btlCamera + 0x600) = *(float *)(g_btlCamera + 0x734) * temp_v7 * 0.01f * temp_v6;
      *(unsigned int *)(temp_v5 + 0x83c) = 0;
      *(int *)(temp_v5 + 0x850) = (int)temp_v2;
      *(unsigned int *)(temp_v5 + 0x644) = *(unsigned int *)(temp_v5 + 0x5bc);
      *(unsigned int *)(temp_v5 + 0x848) = temp_v4;
      *(unsigned int *)(temp_v5 + 0x84c) = 0;
      *(unsigned int *)(temp_v5 + 0x64c) = *(unsigned int *)(temp_v5 + 0x64c) | 0x800;
      return;
    }
    break;
  case 0x18:
    if (*(int *)(param_2 + 0x14) != 0) {
      temp_v4 = btlGetMainState();
      FUN_003e7fa4(temp_v4,(int)*(short *)(*(int *)(param_2 + 0x14) + 0x6a),0);
      temp_v2 = *(short *)(param_2 + 0x48);
      temp_v4 = *(unsigned int *)(param_2 + 0x28);
    }
    else {
      temp_v4 = *(unsigned int *)(param_2 + 0x28);
      in_s0 = temp_v6 + *(float *)(g_btlCamera + 0x598);
      temp_v2 = *(short *)(param_2 + 0x48);
      in_s1 = temp_v8 + *(float *)(g_btlCamera + 0x59c);
      in_s2 = temp_v7 + *(float *)(g_btlCamera + 0x5a0);
    }
    temp_v5 = g_btlCamera;
    puVar7 = (unsigned int *)(g_btlCamera + 0x854);
    *(unsigned int *)(g_btlCamera + 0x85c) = 0;
    *(unsigned int *)(temp_v5 + 0x858) = 0;
    *puVar7 = 0;
    *(float *)(temp_v5 + 0x5c4) = in_s0;
    *(float *)(temp_v5 + 0x5c8) = in_s1;
    *(float *)(temp_v5 + 0x5cc) = in_s2;
    *(int *)(temp_v5 + 0x880) = (int)temp_v2;
    *(unsigned int *)(temp_v5 + 0x878) = temp_v4;
    *(unsigned int *)(temp_v5 + 0x87c) = 0;
    *(unsigned int *)(temp_v5 + 0x64c) = *(unsigned int *)(temp_v5 + 0x64c) | 0x1000;
    return;
  case 0x19:
    if (*(int *)(param_2 + 0x14) != 0) {
      temp_v4 = btlGetMainState();
      FUN_003e7fa4(temp_v4,(int)*(short *)(*(int *)(param_2 + 0x14) + 0x6a),0);
      if ((*(unsigned int *)(*(int *)(param_2 + 0x14) + 0x50) & 0x10) != 0) {
        in_s0 = *(float *)(g_btlCamera + 0x598);
        in_s2 = *(float *)(g_btlCamera + 0x5a0);
      }
      FUN_004f1b2c(g_btlCamera,*(unsigned int *)(param_2 + 0x28),(int)*(short *)(param_2 + 0x48));
      temp_v11[0] = in_s0;
      temp_v12 = in_s2;
      temp_v4 = FUN_00152f54();
      FUN_002a1850(temp_v11,0,temp_v4);
      temp_v6 = (temp_v11[0] - 200.0f) * 0.006666667f;
      if (temp_v6 < 0.0f) {
        temp_v6 = -temp_v6;
      }
      if ((int)temp_v6 >= 0x3f800001) {
        temp_v6 = 1.0f;
      }
      *(float *)(g_btlCamera + 0x734) = temp_v6;
    }
  }
  return;
}

} /* extern "C" */
