/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00132c98` (_code @ 0x132c98, 0x3e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_3_stack;

extern int FUN_00132182(int *, unsigned int *);


void FUN_00132c98(unsigned int *param_1,int param_2,int *param_3)

{
  int temp_v0;
  unsigned int *puVar2;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v2 = *(unsigned int *)(param_2 + 0x10);
  temp_v0 = FUN_00132182(param_3,(unsigned int *)&temp_v2);
  if (temp_v0 != 0) {
    *param_1 = *(unsigned int *)(param_2 + 0x10);
    return;
  }
  temp_v1 = *(unsigned int *)*param_3;
  *(unsigned int *)((unsigned int *)*param_3)[1] = temp_v1;
  *(int *)(*(int *)*param_3 + 4) = ((int *)*param_3)[1];
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) - 1;
  puVar2 = (unsigned int *)*param_3;
  *puVar2 = *(unsigned int *)(param_2 + 4);
  *(unsigned int **)(param_2 + 4) = puVar2;
  *param_1 = temp_v1;
  return;
}

} /* extern "C" */
