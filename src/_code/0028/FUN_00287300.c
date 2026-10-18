/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00287300` (_code @ 0x287300, 0xe8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_00287300_arg0 fn_00287300_arg0;
typedef struct fn_00287300_arg0_p2c fn_00287300_arg0_p2c;
typedef struct fn_00287300_arg0_p60 fn_00287300_arg0_p60;
struct fn_00287300_arg0 {
    unsigned char field_0x0; /* +0x0 */
    unsigned char pad_0x1[0x2b];
    fn_00287300_arg0_p2c *field_0x2c; /* +0x2c */
    unsigned char pad_0x30[0x8];
    unsigned char field_0x38; /* +0x38 */
    unsigned char pad_0x39[0x3];
    unsigned char field_0x3c; /* +0x3c */
    unsigned char pad_0x3d[0x7];
    unsigned char field_0x44; /* +0x44 */
    unsigned char pad_0x45[0x7];
    unsigned char field_0x4c; /* +0x4c */
    unsigned char pad_0x4d[0x3];
    unsigned char field_0x50; /* +0x50 */
    unsigned char pad_0x51[0x3];
    int field_0x54; /* +0x54 */
    int field_0x58; /* +0x58 */
    int field_0x5c; /* +0x5c */
    fn_00287300_arg0_p60 *field_0x60; /* +0x60 */
    unsigned char pad_0x64[0x18];
    undefined4 field_0x7c; /* +0x7c */
};
struct fn_00287300_arg0_p2c {
    unsigned char field_0x0; /* +0x0 */
    unsigned char pad_0x1[0x27];
    undefined4 field_0x28; /* +0x28 */
    unsigned char pad_0x2c[0xc];
    unsigned char field_0x38; /* +0x38 */
    unsigned char pad_0x39[0x3];
    unsigned char field_0x3c; /* +0x3c */
    unsigned char pad_0x3d[0x7];
    unsigned char field_0x44; /* +0x44 */
    unsigned char pad_0x45[0x7];
    unsigned char field_0x4c; /* +0x4c */
    unsigned char pad_0x4d[0x3];
    unsigned char field_0x50; /* +0x50 */
    unsigned char pad_0x51[0x3];
    unsigned char field_0x54; /* +0x54 */
    unsigned char pad_0x55[0x3];
    unsigned char field_0x58; /* +0x58 */
    unsigned char pad_0x59[0x3];
    unsigned char field_0x5c; /* +0x5c */
    unsigned char pad_0x5d[0x3];
    unsigned char field_0x60; /* +0x60 */
    unsigned char pad_0x61[0x1b];
    unsigned char field_0x7c; /* +0x7c */
    unsigned char pad_0x7d[0xcb];
    undefined4 field_0x148; /* +0x148 */
    undefined4 field_0x14c; /* +0x14c */
};
struct fn_00287300_arg0_p60 {
    undefined4 field_0x0; /* +0x0 */
    unsigned char pad_0x4[0x34];
    undefined4 field_0x38; /* +0x38 */
    undefined4 field_0x3c; /* +0x3c */
    unsigned char pad_0x40[0x4];
    undefined4 field_0x44; /* +0x44 */
    unsigned char pad_0x48[0x4];
    undefined4 field_0x4c; /* +0x4c */
    unsigned char field_0x50; /* +0x50 */
    unsigned char pad_0x51[0x3];
    unsigned char field_0x54; /* +0x54 */
    unsigned char pad_0x55[0x3];
    undefined1 field_0x58; /* +0x58 */
};

typedef int romwright_code();

void FUN_00287300(fn_00287300_arg0 *param_1,int param_2)

{
/* irregular: irregular input(s): in_s0 */
  fn_00287300_arg0 *pfVar1;
  fn_00287300_arg0 *pfVar2;
  unsigned int temp_v0;
  fn_00287300_arg0_p60 *pfVar4;
  float in_s0;
  unsigned int temp_v1;
  
  param_1->field_0x7c = 0x3f800000;
  pfVar2 = (fn_00287300_arg0 *)param_2;
  pfVar1 = param_1;
  if (-1 < param_2) {
    pfVar2 = (fn_00287300_arg0 *)param_1->field_0x58;
    pfVar1 = pfVar2;
  }
  if (((pfVar2 != (fn_00287300_arg0 *)0x0 && (-1 < param_2 && -1 < (int)pfVar1)) &&
      (param_2 < (int)pfVar1)) &&
     (pfVar4 = param_1->field_0x60, pfVar4 != (fn_00287300_arg0_p60 *)0x0)) {
    (**(romwright_code **)(pfVar4->field_0x0 + 0x24))
              (pfVar4,*(unsigned int *)(param_1->field_0x54 + param_2 * 4));
    param_1->field_0x5c = param_2;
    if (in_s0 != 0.0f) {
      temp_v1 = pfVar4->field_0x44;
      (*(romwright_code *)pfVar4->field_0x4c)(*(unsigned int *)&pfVar4->field_0x50);
      temp_v0 = pfVar4->field_0x38;
      pfVar4->field_0x38 = temp_v1;
      pfVar4->field_0x3c = temp_v0;
      pfVar4->field_0x58 = 1;
    }
  }
  return;
}
