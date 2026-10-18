/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00350320` (_code @ 0x350320, 0x8c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;


unsigned int FUN_00350320(int param_1)

{
  int *piVar1;
  int temp_v0;
  
  temp_v0 = 0;
  if (temp_v0 < *(int *)(param_1 + 0x2e8)) {
    do {
      piVar1 = *(int **)(param_1 + temp_v0 * 4 + 0x2ec);
      if (piVar1 != (int *)0x0) {
        (**(romwright_code **)(*piVar1 + 0x28))();
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < *(int *)(param_1 + 0x2e8));
  }
  temp_v0 = 0;
  if (temp_v0 < *(int *)(param_1 + 0x484)) {
    do {
      piVar1 = *(int **)(param_1 + temp_v0 * 4 + 0x488);
      if (piVar1 != (int *)0x0) {
        (**(romwright_code **)(*piVar1 + 0x18))();
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < *(int *)(param_1 + 0x484));
  }
  return *(unsigned int *)(param_1 + 0x158);
}
