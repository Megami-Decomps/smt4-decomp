/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0018c87c` (_code @ 0x18c87c, 0x4c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_2_stack;


void FUN_0018c87c(int *param_1,unsigned int *param_2)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  
  puVar1 = (unsigned int *)*param_2;
  while (param_2 != puVar1) {
    puVar2 = (unsigned int *)*param_2;
    puVar3 = (unsigned int *)param_2[1];
    puVar2[1] = (unsigned int)puVar3;
    *puVar3 = (unsigned int)puVar2;
    *param_1 = *param_1 - 1;
    *param_2 = 0;
    param_2[1] = 0;
    param_2 = puVar2;
  }
  return;
}

} /* extern "C" */
