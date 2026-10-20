/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00145adc` (_code @ 0x145adc, 0x2f4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0013c884(...);
int FUN_0014f0dc(...);
int FUN_001523b8(...);
int FUN_00156fd8(...);
int FUN_001579dc(...);
int FUN_0015a050(...);
int FUN_001642e4(...);
int FUN_00178b04(...);
int FUN_0018a9bc(...);
int VectorUnsignedToFloat(...);
int nn_math_ARMv6_MTX44PivotC_FAST(...);

/* stack frame of param_1: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
} param_1_stack;

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_0013c884. */
/* Supplied declaration required: FUN_0014f0dc. */
/* Supplied declaration required: FUN_001523b8. */
extern unsigned int FUN_00154c94(unsigned int);
/* Supplied declaration required: FUN_00156fd8. */
/* Supplied declaration required: FUN_001579dc. */
extern unsigned int FUN_00157acc(void);
/* Supplied declaration required: FUN_0015a050. */
/* Supplied declaration required: FUN_001642e4. */
extern unsigned int FUN_00168854(unsigned int);
/* Supplied declaration required: FUN_00178b04. */
extern unsigned int FUN_00184df8(unsigned int);
/* Supplied declaration required: FUN_0018a9bc. */
/* Supplied declaration required: nn_math_ARMv6_MTX44PivotC_FAST. */


void FUN_00145adc(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 11 native warning(s); review required */
  unsigned int temp_v0;
  char *pcVar2;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int in_fpscr;
  unsigned int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  unsigned int uStack_40;
  int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  int temp_v11;
  unsigned int temp_v12;
  unsigned int temp_v13;
  
  *(unsigned char *)(param_1 + 0x11f4) = 1;
  *(unsigned char *)(param_1 + 0x11f5) = 3;
  *(unsigned char *)(param_1 + 0x5b4) = 1;
  *(unsigned char *)(param_1 + 0x11e8) = 1;
  *(unsigned char *)(param_1 + 0x11ed) = 1;
  temp_v1 = 0;
  temp_v2 = 0;
  *(unsigned char *)(param_1 + 0x5f8) = 0;
  do {
    temp_v3 = temp_v2 + 1;
    temp_v1 = temp_v1 + 2;
    *(unsigned char *)(param_1 + temp_v2 * 0x20 + 0x1210) = 1;
    temp_v2 = temp_v2 + 2;
    *(unsigned char *)(param_1 + temp_v3 * 0x20 + 0x1210) = 1;
  } while (temp_v1 < 0xc);
  temp_v1 = 0x12a48;
  FUN_00178b04(0x12a48,"c:\\SMT4F\\SMT4F\\AsdSDK\\Source\\Gfx\\AsdRenderContext.cpp",0x264);
  temp_v0 = 0;
  if (temp_v1 != 0) {
    temp_v0 = FUN_00157acc();
  }
  *(unsigned int *)(param_1 + 0x530) = temp_v0;
  pcVar2 = "DefaultTextureVS.shbin";
  FUN_001642e4("DefaultTextureVS.shbin",&temp_v6,1,0x80);
  FUN_001579dc(*(unsigned int *)(param_1 + 0x530),pcVar2,temp_v6,0);
  temp_v0 = FUN_00184df8(0);
  VectorUnsignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v0 = FUN_00168854(0);
  temp_v5 = 0;
  VectorUnsignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_0015a050();
  nn_math_ARMv6_MTX44PivotC_FAST(param_1 + 0x5fc,1);
  temp_v0 = FUN_00184df8(2);
  VectorUnsignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v0 = FUN_00168854(2);
  VectorUnsignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_0015a050();
  nn_math_ARMv6_MTX44PivotC_FAST(param_1 + 0x63c,1);
  FUN_0015a050();
  nn_math_ARMv6_MTX44PivotC_FAST(param_1 + 0x67c,1);
  FUN_0015a050();
  nn_math_ARMv6_MTX44PivotC_FAST(param_1 + 0x6bc,1);
  temp_v1 = param_1 + 0x700;
  temp_v7 = 0x42c80000;
  uStack_40 = 0x44160000;
  temp_v9 = 0x3f800000;
  temp_v6 = temp_v5;
  temp_v8 = temp_v5;
  temp_v10 = temp_v5;
  temp_v11 = temp_v5;
  temp_v12 = temp_v5;
  temp_v13 = temp_v5;
  FUN_0013c884(temp_v1,1);
  FUN_0014f0dc(temp_v1,&temp_v6,&temp_v11,&temp_v8);
  FUN_001523b8(temp_v1,1);
  temp_v1 = param_1 + 0xc0c;
  FUN_0013c884(temp_v1,1);
  FUN_0014f0dc(temp_v1,&temp_v6,&temp_v11,&temp_v8);
  FUN_001523b8(temp_v1,1);
  FUN_0018a9bc(param_1 + 0x5b8);
  temp_v4 = 0;
  do {
    FUN_00156fd8(param_1 + temp_v4 * 0x20 + 0x11f8,temp_v4 & 0xff);
    temp_v0 = FUN_00154c94(temp_v4 & 0xff);
    temp_v1 = temp_v4 * 4;
    temp_v4 = temp_v4 + 1;
    *(unsigned int *)(param_1 + temp_v1 + 0x1378) = temp_v0;
  } while ((int)temp_v4 < 0xc);
  return;
}

} /* extern "C" */
