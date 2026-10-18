/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00358518` (_code @ 0x358518, 0x54 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

/* Supplied declaration required: FUN_00238ca8. */
/* Supplied declaration required: FUN_00238f4c. */


int * FUN_00358518(int *param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  int *piVar1;
  
  (**(romwright_code **)(*param_1 + 0x24))(param_1,param_2,0xb,0,0,0);
  piVar1 = param_1;
  FUN_00238ca8(param_1);
  FUN_00238f4c(param_1,0);
  return piVar1;
}
