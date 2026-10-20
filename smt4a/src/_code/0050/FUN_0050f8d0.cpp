/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0050f8d0` (_code @ 0x50f8d0, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002f4370(...);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern int FUN_00431fe0(...); /* 0x431fe0 */
extern unsigned int DAT_005c14b4; /* 0x5c14b4 */

/* Supplied declaration required: FUN_002f4370. */


void FUN_0050f8d0(unsigned int *param_1)

{
/* irregular: 2 native warning(s); review required */
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(unsigned char *)(param_1 + 4) = 0;
  param_1[5] = 0;
  *(unsigned char *)(param_1 + 6) = 0;
  DAT_005c14b4 = 0;
  FUN_002f4370(&DAT_005c14b4,FUN_00431fe0,0x100000);
  return;
}

} /* extern "C" */
