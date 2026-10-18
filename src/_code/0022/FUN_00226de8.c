/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00226de8` (_code @ 0x226de8, 0x1d0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_00226de8_arg0 fn_00226de8_arg0;
struct fn_00226de8_arg0 {
    unsigned char pad_0x0[0x3028];
    uint field_0x3028; /* +0x3028 */
    unsigned char pad_0x302c[0x14];
    undefined1 field_0x3040; /* +0x3040 */
    byte field_0x3041; /* +0x3041 */
    short field_0x3042; /* +0x3042 */
    ushort field_0x3044; /* +0x3044 */
    unsigned char pad_0x3046[0x2];
    void *field_0x3048; /* +0x3048 */
    undefined4 field_0x304c; /* +0x304c */
    void *field_0x3050; /* +0x3050 */
    void *field_0x3054; /* +0x3054 */
};

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

/* Unsupported intrinsic, declaration required: SUB42 (SUBPIECE). */
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00226a90. */
/* Supplied declaration required: FUN_00226bc0. */
/* Supplied declaration required: FUN_00226c20. */
/* Supplied declaration required: FUN_0023aaf0. */
/* Supplied declaration required: FUN_0023c700. */
/* Supplied declaration required: FUN_002505c0. */
extern int FUN_0034c794(unsigned int);


void FUN_00226de8(fn_00226de8_arg0 *param_1)

{
/* irregular: irregular input(s): in_fpscr, in_s0; 8 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  int temp_v2;
  void *pvVar4;
  unsigned int in_fpscr;
  float in_s0;
  float temp_v3;
  
  temp_v1 = FUN_0034c794(param_1->field_0x304c);
  if (temp_v1 != 0) {
    FUN_00226bc0(param_1->field_0x304c);
    temp_v3 = (float)(int)in_s0;
    if (SUB42(temp_v3,0) < param_1->field_0x3042) {
      param_1->field_0x3044 = param_1->field_0x3042;
      param_1->field_0x3042 = 0;
      param_1->field_0x3041 = param_1->field_0x3041 + 1;
    }
    pvVar4 = param_1->field_0x3054;
    temp_v1 = (int)(short)(param_1->field_0x3044 * (unsigned short)param_1->field_0x3041 + SUB42(temp_v3,0));
    if ((((*(unsigned char *)((int)pvVar4 + 8) & 1) == 0) ||
        (((*(short *)((int)param_1->field_0x3050 + 0x18) <= temp_v1 &&
          ((param_1->field_0x3028 & 0x2000) == 0)) &&
         (param_1->field_0x3028 = param_1->field_0x3028 | 0x2000,
         (*(unsigned char *)((int)pvVar4 + 8) & 1) == 0)))) && (param_1->field_0x3041 != 0)) {
      param_1->field_0x3028 = param_1->field_0x3028 | 0x1000;
    }
    if ((*(unsigned char *)((int)pvVar4 + 8) & 1) != 0) {
      temp_v2 = (int)param_1->field_0x3050 + 8;
    }
    else {
      temp_v2 = (int)param_1->field_0x3050 + 0x10;
    }
    if (*(short *)(temp_v2 + 2) == temp_v1) {
      temp_v2 = (int)*(short *)((int)param_1->field_0x3048 + 0x62);
      VectorSignedToFloat((int)*(short *)((int)pvVar4 + 0x82),(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v3 = (float)VectorSignedToFloat((int)*(short *)((int)pvVar4 + 0x80),
                                         (unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_0023c700(param_1,temp_v2,temp_v2,7,0,3);
    }
    FUN_00226a90(param_1,temp_v1,2);
    FUN_00226bc0(param_1->field_0x304c);
    param_1->field_0x3042 = (short)(int)temp_v3;
  }
  temp_v1 = FUN_0034c794(param_1->field_0x304c);
  if ((temp_v1 == 0) || ((param_1->field_0x3028 & 0x1000) != 0)) {
    FUN_0023aaf0(param_1->field_0x304c);
    param_1->field_0x3040 = 0xc;
    FUN_00226c20(param_1);
    temp_v0 = *(short *)((int)param_1->field_0x3054 + 4);
    if (temp_v0 == 0xf || temp_v0 == 0x10) {
      FUN_002505c0(0,0,0x1000107,0,0,0,0);
      return;
    }
    FUN_002505c0(0,0,0x1000109,0,0,0,0);
  }
  return;
}
