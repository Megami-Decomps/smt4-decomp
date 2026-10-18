/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00155a08` (_code @ 0x155a08, 0x30 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

/* Supplied declaration required: FUN_00159028. */
/* Supplied declaration required: FUN_00159370. */


void FUN_00155a08(int *param_1,int *param_2)

{
/* irregular: 2 native warning(s); review required */
  if ((param_1[1] & ~(*param_1 << 1)) < 0 && (param_2[1] & ~(*param_2 << 1)) < 0) {
    FUN_00159028(*param_1,param_1[1],param_1[2]);
    FUN_00159370();
  }
  return;
}
