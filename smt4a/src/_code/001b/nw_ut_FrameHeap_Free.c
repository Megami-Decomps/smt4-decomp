/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_ut_FrameHeap_Free` (_code @ 0x1b058c, 0x90 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_001b058c_arg0 fn_001b058c_arg0;
struct fn_001b058c_arg0 {
    unsigned char pad_0x0[0xc];
    int field_0xc; /* +0xc */
    int field_0x10; /* +0x10 */
    unsigned char pad_0x14[0x14];
    int field_0x28; /* +0x28 */
    int field_0x2c; /* +0x2c */
    void *field_0x30; /* +0x30 */
};

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

/* Supplied declaration required: FUN_001b061c. */


int nw_ut_FrameHeap_Free(fn_001b058c_arg0 *param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  void *pvVar1;
  
  if ((param_2 & 1) != 0) {
    FUN_001b061c(param_1,param_1->field_0xc,param_1->field_0x28 - param_1->field_0xc);
    param_1->field_0x30 = (void *)0x0;
    param_1->field_0x28 = param_1->field_0xc;
  }
  if ((param_2 & 2) != 0) {
    FUN_001b061c(param_1,param_1->field_0x2c,param_1->field_0x10 - param_1->field_0x2c);
    for (pvVar1 = param_1->field_0x30; pvVar1 != (void *)0x0; pvVar1 = *(void **)((int)pvVar1 + 0xc)
        ) {
      *(int *)((int)pvVar1 + 8) = param_1->field_0x10;
    }
    param_1->field_0x2c = param_1->field_0x10;
  }
  return (int)param_1;
}
