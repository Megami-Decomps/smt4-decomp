/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037713c` (_code @ 0x37713c, 0x38 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_4_stack;


void FUN_0037713c(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x18);
  if (piVar1 != (int *)0x0) {
    (**(romwright_code **)(*piVar1 + 8))(piVar1,param_1,param_2,param_3,param_4);
  }
  return;
}
