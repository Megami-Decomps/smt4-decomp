/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00117358` (_code @ 0x117358, 0x54 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_00117358_arg0 fn_00117358_arg0;
struct fn_00117358_arg0 {
    unsigned char pad_0x0[0x4];
    undefined4 field_0x4; /* +0x4 */
    undefined4 field_0x8; /* +0x8 */
    undefined4 field_0xc; /* +0xc */
    undefined4 field_0x10; /* +0x10 */
    void *field_0x14; /* +0x14 */
    undefined4 field_0x18; /* +0x18 */
    undefined1 field_0x1c; /* +0x1c */
    undefined1 field_0x1d; /* +0x1d */
    unsigned char pad_0x1e[0x2];
    undefined4 field_0x20; /* +0x20 */
    undefined4 field_0x24; /* +0x24 */
    undefined4 field_0x28; /* +0x28 */
    undefined4 field_0x2c; /* +0x2c */
    void *field_0x30; /* +0x30 */
    undefined4 field_0x34; /* +0x34 */
    undefined1 field_0x38; /* +0x38 */
    undefined1 field_0x39; /* +0x39 */
};

extern void *FUN_0012db42(void);
extern void *FUN_001317de(void);


int FUN_00117358(fn_00117358_arg0 *param_1,unsigned char param_2)

{
/* irregular: 1 native warning(s); review required */
  void *pvVar1;
  unsigned char temp_v0;
  
  param_1->field_0x4 = 0;
  param_1->field_0x14 = (void *)0x0;
  param_1->field_0x18 = 0;
  param_1->field_0x1c = 0;
  param_1->field_0x1d = param_2;
  param_1->field_0x10 = 0;
  param_1->field_0xc = 0;
  param_1->field_0x8 = 0;
  pvVar1 = (void *)FUN_001317de();
  param_1->field_0x14 = pvVar1;
  *(unsigned int *)((int)pvVar1 + 4) = 0;
  *(void **)((int)param_1->field_0x14 + 8) = param_1->field_0x14;
  *(void **)((int)param_1->field_0x14 + 0xc) = param_1->field_0x14;
  param_1->field_0x20 = 0;
  param_1->field_0x30 = (void *)0x0;
  param_1->field_0x34 = 0;
  param_1->field_0x38 = 0;
  param_1->field_0x39 = temp_v0;
  param_1->field_0x2c = 0;
  param_1->field_0x28 = 0;
  param_1->field_0x24 = 0;
  pvVar1 = (void *)FUN_0012db42();
  param_1->field_0x30 = pvVar1;
  *(unsigned int *)((int)pvVar1 + 4) = 0;
  *(void **)((int)param_1->field_0x30 + 8) = param_1->field_0x30;
  *(void **)((int)param_1->field_0x30 + 0xc) = param_1->field_0x30;
  return (int)param_1;
}
