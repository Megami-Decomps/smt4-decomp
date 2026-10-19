/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037667c` (_code @ 0x37667c, 0x70 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_0037667c_arg0 fn_0037667c_arg0;
typedef struct fn_0037667c_arg1 fn_0037667c_arg1;
struct fn_0037667c_arg0 {
    unsigned char pad_0x0[0x80];
    int field_0x80; /* +0x80 */
    unsigned char pad_0x84[0x4];
    void *field_0x88; /* +0x88 */
    int field_0x8c; /* +0x8c */
};
struct fn_0037667c_arg1 {
    unsigned char pad_0x0[0x80];
    unsigned char field_0x80; /* +0x80 */
    unsigned char pad_0x81[0x7];
    unsigned char field_0x88; /* +0x88 */
    unsigned char pad_0x89[0x3];
    unsigned char field_0x8c; /* +0x8c */
    unsigned char pad_0x8d[0x3];
    int field_0x90; /* +0x90 */
    unsigned char pad_0x94[0x18];
    undefined4 field_0xac; /* +0xac */
    undefined4 field_0xb0; /* +0xb0 */
};

/* Supplied declaration required: FUN_001642e4. */
/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_00290edc. */
/* Supplied declaration required: FUN_003007a0. */


void FUN_0037667c(fn_0037667c_arg0 *param_1,fn_0037667c_arg1 *param_2,unsigned int param_3,
                 unsigned int param_4)

{
/* irregular: 4 native warning(s); review required */
  fn_0037667c_arg1 *pfVar1;
  int uStack_18;
  
  uStack_18 = param_4;
  FUN_001642e4(param_2,&uStack_18,1,0x80);
  pfVar1 = param_2;
  FUN_00290edc();
  FUN_0019a5a0();
  FUN_003007a0();
  param_2->field_0xac = 0;
  param_2->field_0x90 = (int)pfVar1;
  if (param_1->field_0x88 != (void *)0x0) {
    *(fn_0037667c_arg1 **)((int)param_1->field_0x88 + 0xac) = param_2;
    param_2->field_0xb0 = (undefined4)param_1->field_0x88;
  }
  else {
    param_1->field_0x8c = (int)param_2;
    param_2->field_0xb0 = 0;
  }
  param_1->field_0x80 = param_1->field_0x80 + 1;
  param_1->field_0x88 = param_2;
  return;
}
