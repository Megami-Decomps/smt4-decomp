/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001538b8` (_code @ 0x1538b8, 0x6c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_001538b8_arg0 fn_001538b8_arg0;
typedef struct fn_001538b8_arg0_p68 fn_001538b8_arg0_p68;
struct fn_001538b8_arg0 {
    unsigned char pad_0x0[0x34];
    undefined4 field_0x34; /* +0x34 */
    undefined4 field_0x38; /* +0x38 */
    undefined4 field_0x3c; /* +0x3c */
    undefined4 field_0x40; /* +0x40 */
    undefined4 field_0x44; /* +0x44 */
    undefined4 field_0x48; /* +0x48 */
    undefined4 field_0x4c; /* +0x4c */
    undefined4 field_0x50; /* +0x50 */
    undefined4 field_0x54; /* +0x54 */
    undefined4 field_0x58; /* +0x58 */
    undefined4 field_0x5c; /* +0x5c */
    undefined4 field_0x60; /* +0x60 */
    unsigned char field_0x64; /* +0x64 */
    unsigned char pad_0x65[0x3];
    fn_001538b8_arg0_p68 *field_0x68; /* +0x68 */
};
struct fn_001538b8_arg0_p68 {
    unsigned char pad_0x0[0x34];
    unsigned char field_0x34; /* +0x34 */
    unsigned char pad_0x35[0x3];
    undefined4 field_0x38; /* +0x38 */
    undefined4 field_0x3c; /* +0x3c */
    undefined4 field_0x40; /* +0x40 */
    undefined4 field_0x44; /* +0x44 */
    undefined4 field_0x48; /* +0x48 */
    undefined4 field_0x4c; /* +0x4c */
    undefined4 field_0x50; /* +0x50 */
    undefined4 field_0x54; /* +0x54 */
    undefined4 field_0x58; /* +0x58 */
    undefined4 field_0x5c; /* +0x5c */
    undefined4 field_0x60; /* +0x60 */
    undefined4 field_0x64; /* +0x64 */
    unsigned char field_0x68; /* +0x68 */
    unsigned char pad_0x69[0x3];
    ushort field_0x6c; /* +0x6c */
};

/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;


void FUN_001538b8(fn_001538b8_arg0 *param_1,unsigned int *param_2)

{
  fn_001538b8_arg0_p68 *pfVar1;
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  
  temp_v0 = param_2[1];
  temp_v1 = param_2[2];
  temp_v2 = param_2[3];
  temp_v3 = param_2[4];
  temp_v4 = param_2[5];
  temp_v5 = param_2[6];
  temp_v6 = param_2[7];
  param_1->field_0x34 = *param_2;
  param_1->field_0x38 = temp_v0;
  param_1->field_0x3c = temp_v1;
  param_1->field_0x40 = temp_v2;
  param_1->field_0x44 = temp_v3;
  param_1->field_0x48 = temp_v4;
  param_1->field_0x4c = temp_v5;
  param_1->field_0x50 = temp_v6;
  temp_v0 = param_2[9];
  temp_v1 = param_2[10];
  temp_v2 = param_2[0xb];
  param_1->field_0x54 = param_2[8];
  param_1->field_0x58 = temp_v0;
  param_1->field_0x5c = temp_v1;
  param_1->field_0x60 = temp_v2;
  pfVar1 = param_1->field_0x68;
  temp_v0 = param_2[1];
  temp_v1 = param_2[2];
  temp_v2 = param_2[3];
  temp_v3 = param_2[4];
  temp_v4 = param_2[5];
  temp_v5 = param_2[6];
  temp_v6 = param_2[7];
  pfVar1->field_0x38 = *param_2;
  pfVar1->field_0x3c = temp_v0;
  pfVar1->field_0x40 = temp_v1;
  pfVar1->field_0x44 = temp_v2;
  pfVar1->field_0x48 = temp_v3;
  pfVar1->field_0x4c = temp_v4;
  pfVar1->field_0x50 = temp_v5;
  pfVar1->field_0x54 = temp_v6;
  temp_v0 = param_2[8];
  temp_v1 = param_2[9];
  temp_v2 = param_2[10];
  pfVar1->field_0x64 = param_2[0xb];
  pfVar1->field_0x58 = temp_v0;
  pfVar1->field_0x5c = temp_v1;
  pfVar1->field_0x60 = temp_v2;
  pfVar1->field_0x6c = pfVar1->field_0x6c | 1;
  return;
}
