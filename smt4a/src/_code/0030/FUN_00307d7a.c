/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00307d7a` (_code @ 0x307d7a, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_3_stack;

/* Supplied declaration required: FUN_002f8264. */
extern int FUN_0030d4b0(int *, unsigned int *);


void FUN_00307d7a(unsigned int *param_1,int param_2,int *param_3)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v2 = *(unsigned int *)(param_2 + 0x10);
  temp_v0 = FUN_0030d4b0(param_3,(unsigned int *)&temp_v2);
  if (temp_v0 != 0) {
    *param_1 = *(unsigned int *)(param_2 + 0x10);
    return;
  }
  temp_v1 = *(unsigned int *)*param_3;
  *(unsigned int *)((unsigned int *)*param_3)[1] = temp_v1;
  *(int *)(*(int *)*param_3 + 4) = ((int *)*param_3)[1];
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) - 1;
  FUN_002f8264(*param_3 + 8);
  puVar2 = (unsigned int *)*param_3;
  *puVar2 = *(unsigned int *)(param_2 + 4);
  *(unsigned int **)(param_2 + 4) = puVar2;
  *param_1 = temp_v1;
  return;
}
