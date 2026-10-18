/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a7aa0` (_code @ 0x2a7aa0, 0xac bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern unsigned int DAT_004dad60; /* 0x4dad60 */

/* Supplied declaration required: FUN_001527a0. */
/* Supplied declaration required: FUN_00152b0c. */
extern int FUN_00153134(unsigned int *, unsigned int *);
/* Supplied declaration required: FUN_00155a38. */
/* Supplied declaration required: FUN_002b288c. */
/* Supplied declaration required: FUN_002c4360. */


void FUN_002a7aa0(unsigned int *param_1)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  if (-1 < *(int *)(param_1[2] + 0xc)) {
    *param_1 = *param_1 | 0x200000;
    FUN_00152b0c();
  }
  FUN_00155a38(param_1);
  if (param_1[6] != 0) {
    temp_v0 = *(int *)(param_1[2] + 0x28);
    temp_v1 = 0;
    if (temp_v1 < temp_v0) {
      do {
        FUN_002c4360(*(unsigned int *)(param_1[6] + temp_v1 * 0x1c));
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < temp_v0);
    }
    FUN_002c4360(param_1[6]);
    param_1[6] = 0;
  }
  FUN_001527a0(param_1[2],param_1[1]);
  temp_v0 = FUN_00153134(&DAT_004dad60,param_1);
  if (temp_v0 != 0) {
    FUN_002b288c(&DAT_004dad60);
  }
  FUN_002c4360(param_1);
  return;
}
