/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00309604` (_code @ 0x309604, 0x74 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern int DAT_0044ea00; /* 0x44ea00 */
extern int DAT_004729e0; /* 0x4729e0 */
extern int DAT_004729e4; /* 0x4729e4 */

/* Supplied declaration required: FUN_00248ae8. */
/* Supplied declaration required: FUN_002b7014. */
/* Supplied declaration required: FUN_002b703c. */


void FUN_00309604(unsigned int param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  FUN_002b703c();
  temp_v0 = DAT_004729e0;
  *(unsigned int *)(DAT_004729e0 + DAT_004729e4 * 4) =
       (*(unsigned int *)(DAT_0044ea00 + *(int *)(DAT_0044ea00 + 0x124c) * 4 + 0x1254) & 0xfffff0ff) |
       param_1;
  *(unsigned int *)(temp_v0 + DAT_004729e4 * 4 + 4) = 0xf0107;
  DAT_004729e4 = DAT_004729e4 + 2;
  FUN_002b7014();
  FUN_00248ae8(1);
  return;
}
