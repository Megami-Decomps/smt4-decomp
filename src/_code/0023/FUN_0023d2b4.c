/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023d2b4` (_code @ 0x23d2b4, 0x94 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_0023d2b4_arg1 fn_0023d2b4_arg1;
struct fn_0023d2b4_arg1 {
    unsigned char pad_0x0[0x14];
    undefined4 field_0x14; /* +0x14 */
    undefined4 field_0x18; /* +0x18 */
    unsigned char pad_0x1c[0x14];
    undefined4 field_0x30; /* +0x30 */
    undefined4 field_0x34; /* +0x34 */
    undefined4 field_0x38; /* +0x38 */
    int field_0x3c; /* +0x3c */
    int field_0x40; /* +0x40 */
};

/* stack frame of param_2: 12 slot(s), 17 byte(s) */
typedef struct {
    unsigned char sp18; /* 0x18: local_18 */
    unsigned char sp3C; /* 0x3c: local_3c */
    unsigned char sp60; /* 0x60: local_60 */
    unsigned char sp9C; /* 0x9c: local_9c */
    unsigned char spAC; /* 0xac: local_ac */
    unsigned char spAD; /* 0xad: local_ad */
    unsigned char spAE; /* 0xae: local_ae */
    unsigned char spAF; /* 0xaf: local_af */
    unsigned char spB0; /* 0xb0: local_b0 */
    unsigned short spB2; /* 0xb2: local_b2 */
    unsigned short spB4; /* 0xb4: local_b4 */
    unsigned int spB8; /* 0xb8: local_b8 */
} param_2_stack;

/* Supplied declaration required: FUN_00357530. */
/* Supplied declaration required: FUN_003e0530. */


void FUN_0023d2b4(unsigned int param_1,fn_0023d2b4_arg1 *param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned short temp_v1;
  unsigned short temp_v2;
  unsigned char temp_v3;
  unsigned char temp_v4;
  unsigned char temp_v5;
  unsigned char temp_v6;
  unsigned char temp_v7;
  unsigned char temp_v8;
  unsigned char temp_v9;
  unsigned char temp_v10;
  unsigned char temp_v11;
  
  FUN_00357530(&temp_v0);
  temp_v8 = 0;
  temp_v0 = param_2->field_0x30;
  temp_v1 = (unsigned short)param_2->field_0x14;
  temp_v2 = (unsigned short)param_2->field_0x18;
  temp_v3 = (unsigned char)param_2->field_0x34;
  temp_v4 = (unsigned char)param_2->field_0x38;
  temp_v5 = (unsigned char)param_2->field_0x38;
  temp_v6 = param_2->field_0x40 != 0;
  temp_v9 = 0;
  temp_v10 = 0;
  temp_v7 = 0;
  if (param_2->field_0x3c != 0) {
    temp_v7 = 3;
  }
  temp_v11 = 0;
  FUN_003e0530(&temp_v0,param_1,1);
  return;
}
