/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011a6dc` (_code @ 0x11a6dc, 0x3a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00117044(unsigned int, unsigned int, unsigned int, int);

typedef int romwright_code(...);
/* Supplied declaration required: FUN_00117044. */
extern int FUN_002e760a(unsigned int);
extern unsigned int FUN_002fde5c(void);


void FUN_0011a6dc(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v2 = *(int *)(*(int *)(param_1 + 0x1a0) + 4);
  if (*(int **)(param_1 + 0xbc) != (int *)0x0) {
    (**(romwright_code **)(**(int **)(param_1 + 0xbc) + 4))();
  }
  temp_v0 = FUN_002e760a(0x18);
  temp_v1 = 0;
  if (temp_v0 != 0) {
    temp_v1 = FUN_002fde5c();
  }
  *(unsigned int *)(param_1 + 0xbc) = temp_v1;
  FUN_00117044(temp_v1,*(unsigned int *)(temp_v2 + 0x18),*(unsigned int *)(param_1 + 0xb8),param_1 + 0xc4);
  return;
}

} /* extern "C" */
