/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a775c` (_code @ 0x2a775c, 0xac bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern unsigned int DAT_004dad60; /* 0x4dad60 */

/* Supplied declaration required: FUN_00152894. */
/* Supplied declaration required: FUN_00152c00. */
extern int FUN_00153228(unsigned int *, unsigned int *);
/* Supplied declaration required: FUN_00155b2c. */
/* Supplied declaration required: FUN_002b26d4. */
/* Supplied declaration required: FUN_002c415c. */


void FUN_002a775c(unsigned int *param_1)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  if (-1 < *(int *)(param_1[2] + 0xc)) {
    *param_1 = *param_1 | 0x200000;
    FUN_00152c00();
  }
  FUN_00155b2c(param_1);
  if (param_1[6] != 0) {
    temp_v0 = *(int *)(param_1[2] + 0x28);
    temp_v1 = 0;
    if (temp_v1 < temp_v0) {
      do {
        FUN_002c415c(*(unsigned int *)(param_1[6] + temp_v1 * 0x1c));
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < temp_v0);
    }
    FUN_002c415c(param_1[6]);
    param_1[6] = 0;
  }
  FUN_00152894(param_1[2],param_1[1]);
  temp_v0 = FUN_00153228(&DAT_004dad60,param_1);
  if (temp_v0 != 0) {
    FUN_002b26d4(&DAT_004dad60);
  }
  FUN_002c415c(param_1);
  return;
}
