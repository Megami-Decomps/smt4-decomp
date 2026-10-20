/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037658c` (_code @ 0x37658c, 0x9c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001b4ddc(...);
int sysMemClear(...);
int FUN_003007a0(...);
int rt_memcpy_w(...);

typedef struct fn_0037658c_arg0 fn_0037658c_arg0;
struct fn_0037658c_arg0 {
    unsigned char pad_0x0[0x80];
    int field_0x80; /* +0x80 */
    undefined4 field_0x84; /* +0x84 */
    int field_0x88; /* +0x88 */
    unsigned char pad_0x8c[0x4];
    undefined4 field_0x90; /* +0x90 */
    unsigned char pad_0x94[0x4];
    undefined4 field_0x98; /* +0x98 */
    unsigned char pad_0x9c[0x10];
    undefined4 field_0xac; /* +0xac */
    undefined4 field_0xb0; /* +0xb0 */
};

/* Supplied declaration required: FUN_001b4ddc. */
/* Supplied declaration required: sysMemClear. */
/* Supplied declaration required: FUN_003007a0. */
/* Supplied declaration required: rt_memcpy_w. */


int FUN_0037658c(fn_0037658c_arg0 *param_1,int param_2)

{
/* irregular: 4 native warning(s); review required */
  fn_0037658c_arg0 *pfVar1;
  
  pfVar1 = param_1;
  FUN_003007a0();
  rt_memcpy_w();
  sysMemClear(pfVar1,0x90);
  pfVar1->field_0x84 = 1;
  *(unsigned char *)&pfVar1->field_0x88 = 8;
  *(unsigned char *)((int)&pfVar1->field_0x88 + 1) = 0;
  *(unsigned char *)((int)&pfVar1->field_0x88 + 2) = 0;
  FUN_001b4ddc(pfVar1);
  pfVar1->field_0x98 = pfVar1->field_0x98 | 1;
  pfVar1->field_0x90 = *(unsigned int *)(param_2 + 0x90);
  if (*(int *)(param_2 + 0xac) != 0) {
    *(fn_0037658c_arg0 **)(*(int *)(param_2 + 0xac) + 0xb0) = pfVar1;
    pfVar1->field_0xac = *(unsigned int *)(param_2 + 0xac);
  }
  else {
    pfVar1->field_0xac = 0;
    param_1->field_0x88 = (int)pfVar1;
  }
  *(fn_0037658c_arg0 **)(param_2 + 0xac) = pfVar1;
  pfVar1->field_0xb0 = param_2;
  param_1->field_0x80 = param_1->field_0x80 + 1;
  return (int)pfVar1;
}

} /* extern "C" */
