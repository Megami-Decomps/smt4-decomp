/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004fa228` (_code @ 0x4fa228, 0x1e4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00420dec(...);
int FUN_00420f08(...);
int FUN_004f5238(...);
int FUN_004f6254(...);
int FUN_004fa414(...);
int FUN_004fb43c(...);
int SUB42(...);
int VectorSignedToFloat(...);

typedef struct fn_004fa228_arg0 fn_004fa228_arg0;
struct fn_004fa228_arg0 {
    unsigned char pad_0x0[0x339c];
    uint field_0x339c; /* +0x339c */
    unsigned char pad_0x33a0[0x14];
    undefined1 field_0x33b4; /* +0x33b4 */
    byte field_0x33b5; /* +0x33b5 */
    short field_0x33b6; /* +0x33b6 */
    ushort field_0x33b8; /* +0x33b8 */
    unsigned char pad_0x33ba[0x2];
    void *field_0x33bc; /* +0x33bc */
    undefined4 field_0x33c0; /* +0x33c0 */
    void *field_0x33c4; /* +0x33c4 */
    void *field_0x33c8; /* +0x33c8 */
};

/* stack frame of param_1: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_1_stack;

/* Unsupported intrinsic, declaration required: SUB42 (SUBPIECE). */
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern int state2CIs4(unsigned int);
/* Supplied declaration required: FUN_00420dec. */
/* Supplied declaration required: FUN_00420f08. */
/* Supplied declaration required: FUN_004f5238. */
/* Supplied declaration required: FUN_004f6254. */
/* Supplied declaration required: FUN_004fa414. */
/* Supplied declaration required: FUN_004fb43c. */


void FUN_004fa228(fn_004fa228_arg0 *param_1)

{
/* irregular: irregular input(s): in_fpscr, in_s0; 8 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  int temp_v2;
  void *pvVar4;
  unsigned int in_fpscr;
  float in_s0;
  float temp_v3;
  
  temp_v1 = state2CIs4(param_1->field_0x33c0);
  if (temp_v1 != 0) {
    FUN_00420dec(param_1->field_0x33c0);
    temp_v3 = (float)(int)in_s0;
    if (SUB42(temp_v3,0) < param_1->field_0x33b6) {
      param_1->field_0x33b5 = param_1->field_0x33b5 + 1;
      param_1->field_0x33b8 = param_1->field_0x33b6;
      param_1->field_0x33b6 = 0;
    }
    pvVar4 = param_1->field_0x33c8;
    temp_v1 = (int)(short)(param_1->field_0x33b8 * (unsigned short)param_1->field_0x33b5 + SUB42(temp_v3,0));
    if ((((*(unsigned char *)((int)pvVar4 + 8) & 1) == 0) ||
        (((*(short *)((int)param_1->field_0x33c4 + 0x18) <= temp_v1 &&
          ((param_1->field_0x339c & 0x2000) == 0)) &&
         (param_1->field_0x339c = param_1->field_0x339c | 0x2000,
         (*(unsigned char *)((int)pvVar4 + 8) & 1) == 0)))) && (param_1->field_0x33b5 != 0)) {
      param_1->field_0x339c = param_1->field_0x339c | 0x1000;
    }
    if ((*(unsigned char *)((int)pvVar4 + 8) & 1) != 0) {
      temp_v2 = (int)param_1->field_0x33c4 + 8;
    }
    else {
      temp_v2 = (int)param_1->field_0x33c4 + 0x10;
    }
    if (*(short *)(temp_v2 + 2) == temp_v1) {
      temp_v2 = (int)*(short *)((int)param_1->field_0x33bc + 0x6a);
      VectorSignedToFloat((int)*(short *)((int)pvVar4 + 0x82),(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v3 = (float)VectorSignedToFloat((int)*(short *)((int)pvVar4 + 0x80),
                                         (unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_004f5238(param_1,temp_v2,temp_v2,6,0,3,0,1,0);
    }
    FUN_004f6254(param_1,temp_v1,2);
    FUN_00420dec(param_1->field_0x33c0);
    param_1->field_0x33b6 = (short)(int)temp_v3;
  }
  temp_v1 = state2CIs4(param_1->field_0x33c0);
  if ((temp_v1 == 0) || ((param_1->field_0x339c & 0x1000) != 0)) {
    FUN_00420f08(param_1->field_0x33c0);
    param_1->field_0x33b4 = 0xc;
    FUN_004fa414(param_1);
    temp_v0 = *(short *)((int)param_1->field_0x33c8 + 4);
    if (temp_v0 == 0xf || temp_v0 == 0x10) {
      FUN_004fb43c(0,0,0x1000132,0,0,0,0);
      return;
    }
    FUN_004fb43c(0,0,0x1000134,0,0,0,0);
  }
  return;
}

} /* extern "C" */
