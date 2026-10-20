/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00376628` (_code @ 0x376628, 0x54 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00290edc(void);
int FUN_003007a0(void);

typedef struct fn_00376628_arg0 fn_00376628_arg0;
typedef struct fn_00376628_arg1 fn_00376628_arg1;
struct fn_00376628_arg0 {
    unsigned char pad_0x0[0x80];
    int field_0x80; /* +0x80 */
    unsigned char pad_0x84[0x4];
    void *field_0x88; /* +0x88 */
    int field_0x8c; /* +0x8c */
};
struct fn_00376628_arg1 {
    unsigned char pad_0x0[0x80];
    unsigned char field_0x80; /* +0x80 */
    unsigned char pad_0x81[0x7];
    unsigned char field_0x88; /* +0x88 */
    unsigned char pad_0x89[0x3];
    unsigned char field_0x8c; /* +0x8c */
    unsigned char pad_0x8d[0x3];
    undefined4 field_0x90; /* +0x90 */
    unsigned char pad_0x94[0x18];
    undefined4 field_0xac; /* +0xac */
    undefined4 field_0xb0; /* +0xb0 */
};

/* Supplied declaration required: FUN_00290edc. */
/* Supplied declaration required: FUN_003007a0. */


void FUN_00376628(fn_00376628_arg0 *param_1,fn_00376628_arg1 *param_2)

{
/* irregular: 2 native warning(s); review required */
  fn_00376628_arg1 *pfVar1;
  
  FUN_00290edc();
  pfVar1 = param_2;
  FUN_003007a0();
  pfVar1->field_0xac = 0;
  pfVar1->field_0x90 = (undefined4)param_2;
  if (param_1->field_0x88 != (void *)0x0) {
    *(fn_00376628_arg1 **)((int)param_1->field_0x88 + 0xac) = pfVar1;
    pfVar1->field_0xb0 = (undefined4)param_1->field_0x88;
  }
  else {
    param_1->field_0x8c = (int)pfVar1;
    pfVar1->field_0xb0 = 0;
  }
  param_1->field_0x80 = param_1->field_0x80 + 1;
  param_1->field_0x88 = pfVar1;
  return;
}

} /* extern "C" */
