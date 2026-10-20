/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004acfc4` (_code @ 0x4acfc4, 0x58 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_004ad02c(...);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern int FUN_004acdb4(...); /* 0x4acdb4 */
extern int FUN_004acea0(...); /* 0x4acea0 */
extern int FUN_004ad184(...); /* 0x4ad184 */
extern int FUN_004ad310(...); /* 0x4ad310 */

/* Supplied declaration required: FUN_004ad02c. */


void FUN_004acfc4(unsigned int param_1)

{
/* irregular: 5 native warning(s); review required */
  FUN_004ad02c(param_1,1,1,FUN_004acea0);
  FUN_004ad02c(param_1,3,1,FUN_004ad310);
  FUN_004ad02c(param_1,2,1,FUN_004acdb4);
  FUN_004ad02c(param_1,4,1,FUN_004ad184);
  return;
}

} /* extern "C" */
