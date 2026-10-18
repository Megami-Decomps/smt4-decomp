/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003856f8` (_code @ 0x3856f8, 0x90 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern int DAT_00581288; /* 0x581288 */

extern int FUN_0018719c(unsigned int);
extern int FUN_002e5db4(void);
/* Supplied declaration required: FUN_003fd7c0. */


void FUN_003856f8(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  if (*(int *)(DAT_00581288 + 0x18c) == 0) {
    return;
  }
  temp_v0 = FUN_0018719c(0x4c9);
  if ((temp_v0 != 0) && (temp_v0 = FUN_002e5db4(), temp_v0 == 0)) {
    FUN_003fd7c0(*(unsigned int *)(*(int *)(DAT_00581288 + 0x18c) + 4),3,2);
    return;
  }
  FUN_003fd7c0(*(unsigned int *)(*(int *)(DAT_00581288 + 0x18c) + 4),param_1,2);
  return;
}
