/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00233d78` (_code @ 0x233d78, 0x40 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern int FUN_002bf244(unsigned int);
/* Supplied declaration required: FUN_002c43b4. */


void FUN_00233d78(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002bf244(param_1[0x5e5]);
  if (temp_v0 != 0) {
    *param_1 = *param_1 & 0xfffffcff;
    FUN_002c43b4(param_1[0x5e5],0);
    return;
  }
  return;
}
