/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a5930` (_code @ 0x2a5930, 0x110 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_002a5930_arg0 fn_002a5930_arg0;
typedef struct fn_002a5930_arg0_p2c fn_002a5930_arg0_p2c;
struct fn_002a5930_arg0 {
    unsigned char pad_0x0[0x28];
    unsigned char field_0x28; /* +0x28 */
    unsigned char pad_0x29[0x3];
    fn_002a5930_arg0_p2c *field_0x2c; /* +0x2c */
    unsigned char pad_0x30[0x34];
    int field_0x64; /* +0x64 */
    int field_0x68; /* +0x68 */
    int field_0x6c; /* +0x6c */
    unsigned char pad_0x70[0x10];
    undefined4 field_0x80; /* +0x80 */
};
struct fn_002a5930_arg0_p2c {
    unsigned char pad_0x0[0x28];
    undefined4 field_0x28; /* +0x28 */
    unsigned char field_0x2c; /* +0x2c */
    unsigned char pad_0x2d[0x37];
    unsigned char field_0x64; /* +0x64 */
    unsigned char pad_0x65[0x3];
    unsigned char field_0x68; /* +0x68 */
    unsigned char pad_0x69[0x3];
    unsigned char field_0x6c; /* +0x6c */
    unsigned char pad_0x6d[0x13];
    unsigned char field_0x80; /* +0x80 */
    unsigned char pad_0x81[0xcf];
    undefined4 field_0x150; /* +0x150 */
    undefined4 field_0x154; /* +0x154 */
};

typedef int romwright_code();

void FUN_002a5930(fn_002a5930_arg0 *param_1,int param_2)

{
/* irregular: irregular input(s): in_s0 */
  fn_002a5930_arg0 *pfVar1;
  fn_002a5930_arg0 *pfVar2;
  fn_002a5930_arg0_p2c *pfVar3;
  int temp_v0;
  int *piVar5;
  float in_s0;
  int temp_v1;
  
  param_1->field_0x80 = 0x3f800000;
  pfVar2 = (fn_002a5930_arg0 *)param_2;
  pfVar1 = param_1;
  if (-1 < param_2) {
    pfVar2 = (fn_002a5930_arg0 *)param_1->field_0x68;
    pfVar1 = pfVar2;
  }
  if ((((pfVar2 != (fn_002a5930_arg0 *)0x0 && (-1 < param_2 && -1 < (int)pfVar1)) &&
       (param_2 < (int)pfVar1)) && (pfVar3 = param_1->field_0x2c, pfVar3->field_0x150 != 0)) &&
     (piVar5 = *(int **)(*(int *)(pfVar3->field_0x28 + 0x1c) +
                        pfVar3->field_0x154 * *(int *)(pfVar3->field_0x28 + 0x28) * 4),
     piVar5 != (int *)0x0)) {
    (**(romwright_code **)(*piVar5 + 0x24))(piVar5,*(unsigned int *)(param_1->field_0x64 + param_2 * 4));
    param_1->field_0x6c = param_2;
    if (in_s0 != 0.0f) {
      temp_v1 = piVar5[0x11];
      (*(romwright_code *)piVar5[0x13])(piVar5[0x14]);
      temp_v0 = piVar5[0xe];
      piVar5[0xe] = temp_v1;
      piVar5[0xf] = temp_v0;
      *(unsigned char *)(piVar5 + 0x16) = 1;
    }
  }
  return;
}
