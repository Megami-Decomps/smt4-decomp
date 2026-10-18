/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00146a74` (_code @ 0x146a74, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern int DAT_005c0ad8; /* 0x5c0ad8 */

/* Supplied declaration required: FUN_0014a900. */


void FUN_00146a74(void)

{
/* irregular: 1 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  
  piVar1 = &temp_v0;
  if (DAT_005c0ad8 == 0) {
    temp_v0 = 0;
    FUN_0014a900();
    if (((unsigned int)piVar1 & 0x80000000) == 0) {
      DAT_005c0ad8 = temp_v0;
    }
  }
  return;
}
