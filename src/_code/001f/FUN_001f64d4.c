/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001f64d4` (_code @ 0x1f64d4, 0x4c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern unsigned int DAT_00464b7c; /* 0x464b7c */
extern unsigned int DAT_00464b84; /* 0x464b84 */

/* Supplied declaration required: FUN_002abdb0. */
/* Supplied declaration required: FUN_002c4360. */
/* Supplied declaration required: FUN_002d5558. */


void FUN_001f64d4(int param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1;
  
  temp_v0 = param_1 + 0x30;
  temp_v1 = *(int *)(param_1 + 0xc4) == 1;
  if (temp_v1) {
    temp_v0 = *(int *)(param_1 + 200);
  }
  if ((temp_v1 && temp_v0 == 0) && (*(int *)(param_1 + 0x10c) != 0)) {
    FUN_002d5558();
  }
  FUN_002c4360(param_1);
  FUN_002abdb0(DAT_00464b7c,DAT_00464b84);
  return;
}
