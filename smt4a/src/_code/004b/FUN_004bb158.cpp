/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004bb158` (_code @ 0x4bb158, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00187180(int, int);
int FUN_00192748(void);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_2_stack;

/* Supplied declaration required: FUN_00187180. */
/* Supplied declaration required: FUN_00192748. */


void FUN_004bb158(unsigned int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  FUN_00187180(0x33,param_2 + 1);
  FUN_00192748();
  return;
}

} /* extern "C" */
