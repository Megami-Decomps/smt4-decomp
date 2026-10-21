/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0048b514` (_code @ 0x48b514, 0x308 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00162790(...);
int FUN_00163aa4(...);
int FUN_00164b5c(int, int, int, unsigned int, int, int);
int vec2GetXInt(...);
int efctSetSpeed(void);
int renderCtxPopState(...);
int renderStackPushIndexed(unsigned int, int, unsigned int);
int FUN_001834a4(...);
int FUN_001835b4(...);
int FUN_00183bb0(void);
int VectorSignedToFloat(...);
int __aeabi_idivmod(int, unsigned int);
int rt_memcpy_w(...);

typedef struct fn_0048b514_arg0 fn_0048b514_arg0;
struct fn_0048b514_arg0 {
    unsigned char pad_0x0[0x8a];
    unsigned char field_0x8a; /* +0x8a */
    unsigned char pad_0x8b[0x1246];
    unsigned char field_0x12d1; /* +0x12d1 */
    undefined1 field_0x12d2; /* +0x12d2 */
    unsigned char pad_0x12d3[0x1];
    int field_0x12d4; /* +0x12d4 */
    undefined4 field_0x12d8; /* +0x12d8 */
};

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp9C; /* 0x9c: local_9c */
    unsigned int spA0; /* 0xa0: local_a0 */
} param_1_stack;

extern unsigned char LAB_0048b834; /* 0x48b834 */
extern unsigned int DAT_00587f14; /* 0x587f14 */
extern unsigned int DAT_00587f18; /* 0x587f18 */
extern unsigned int g_renderCtx; /* 0x59dbb4 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00162790. */
/* Supplied declaration required: FUN_00163aa4. */
/* Supplied declaration required: FUN_00164b5c. */
/* Supplied declaration required: vec2GetXInt. */
/* Supplied declaration required: efctSetSpeed. */
extern unsigned int FUN_001692ac(unsigned int, unsigned int);
/* Supplied declaration required: renderCtxPopState. */
/* Supplied declaration required: renderStackPushIndexed. */
/* Supplied declaration required: FUN_001834a4. */
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: FUN_00183bb0. */
/* Supplied declaration required: __aeabi_idivmod. */
/* Supplied declaration required: rt_memcpy_w. */


void FUN_0048b514(fn_0048b514_arg0 *param_1)

{
/* irregular: irregular input(s): in_fpscr; 14 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  unsigned int in_fpscr;
  float temp_v7;
  float afStack_98 [18];
  unsigned char temp_v8 [32];
  fn_0048b514_arg0 *temp_v9;
  
  temp_v0 = FUN_001692ac(1,0);
  renderStackPushIndexed(g_renderCtx,3,temp_v0);
  efctSetSpeed();
  FUN_00183bb0();
  temp_v9 = param_1 + 1;
  temp_v0 = vec2GetXInt();
  FUN_00164b5c(2,0x13,0x1d,temp_v0,0,0xd3);
  __aeabi_idivmod(param_1->field_0x12d4 + 1,DAT_00587f14);
  param_1->field_0x12d4 = temp_v4;
  temp_v1 = param_1->field_0x12d8;
  temp_v5 = 0;
  if (temp_v4 < 1) {
    temp_v1 = temp_v1 + 1;
    param_1->field_0x12d8 = temp_v1;
  }
  temp_v6 = ((temp_v1 & 7) + 1) & 7;
  param_1->field_0x12d8 = temp_v1 & 7;
  do {
    temp_v2 = FUN_001834a4(0x13,temp_v5 + 0x1124);
    temp_v7 = (float)VectorSignedToFloat((int)*(short *)(temp_v2 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
    afStack_98[temp_v5 * 2] = temp_v7;
    temp_v7 = (float)VectorSignedToFloat((int)*(short *)(temp_v2 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
    afStack_98[temp_v5 * 2 + 1] = temp_v7;
    temp_v3 = vec2GetXInt(temp_v9);
    FUN_001835b4(1,0x13,0x1121,temp_v3 + *(short *)(temp_v2 + 8),(int)*(short *)(temp_v2 + 10),6);
    temp_v5 = temp_v5 + 1;
  } while (temp_v5 < 9);
  temp_v0 = vec2GetXInt(temp_v9);
  temp_v7 = (float)VectorSignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_001835b4(1,0x13,0x1123,(int)(temp_v7 + afStack_98[param_1->field_0x12d8 * 2]),
               (int)afStack_98[param_1->field_0x12d8 * 2 + 1],6);
  temp_v0 = vec2GetXInt(temp_v9);
  temp_v7 = (float)VectorSignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_001835b4(1,0x13,0x1122,(int)(temp_v7 + afStack_98[temp_v6 * 2]),(int)afStack_98[temp_v6 * 2 + 1],6);
  temp_v1 = (param_1->field_0x12d8 + 4) & 7;
  temp_v6 = (temp_v1 + 1) & 7;
  temp_v0 = vec2GetXInt(temp_v9);
  temp_v7 = (float)VectorSignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_001835b4(1,0x13,0x1123,(int)(temp_v7 + afStack_98[temp_v1 * 2]),(int)afStack_98[temp_v1 * 2 + 1],6);
  temp_v0 = vec2GetXInt(temp_v9);
  temp_v7 = (float)VectorSignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_001835b4(1,0x13,0x1122,(int)(temp_v7 + afStack_98[temp_v6 * 2]),(int)afStack_98[temp_v6 * 2 + 1],6);
  temp_v5 = FUN_001834a4(0x13,0x1120);
  rt_memcpy_w(temp_v8,&LAB_0048b834,0x1b);
  temp_v2 = vec2GetXInt(temp_v9);
  VectorSignedToFloat((temp_v2 - 0x14) + (int)*(short *)(temp_v5 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat((int)*(short *)(temp_v5 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_00162790(4,DAT_00587f18,temp_v8);
  renderCtxPopState(g_renderCtx,3);
  efctSetSpeed();
  FUN_00163aa4(temp_v9);
  if ((param_1->field_0x12d1 != '\0') && (temp_v9->field_0x8a != '\0')) {
    param_1->field_0x12d2 = 1;
  }
  return;
}

} /* extern "C" */
