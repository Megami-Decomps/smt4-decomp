/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00157008` (_code @ 0x157008, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_1_stack;


void FUN_00157008(int param_1)

{
  int temp_v0;
  int *piVar2;
  int temp_v1;
  int *piVar4;
  
  temp_v1 = 0;
  do {
    temp_v0 = param_1 + temp_v1 * 0xc;
    piVar4 = *(int **)(temp_v0 + 0x118);
    for (piVar2 = *(int **)(temp_v0 + 0x114); piVar2 != piVar4; piVar2 = piVar2 + 1) {
      *(unsigned char *)(*piVar2 + 1) = 0;
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 8);
  return;
}
