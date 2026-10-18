/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001152ea` (_code @ 0x1152ea, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern int FUN_00300c20(void);
/* Supplied declaration required: FUN_00441884. */


unsigned char FUN_001152ea(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int *piVar1;
  int temp_v0 [2];
  
  piVar1 = temp_v0;
  temp_v0[0] = 0;
  FUN_00441884(piVar1,*(unsigned int *)(param_1 + 4),2);
  if ((int)piVar1 < 0) {
    temp_v0[0] = FUN_00300c20();
  }
  return temp_v0[0] < 0;
}
