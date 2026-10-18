/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00310924` (_code @ 0x310924, 0x2a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

/* Supplied declaration required: FUN_00110b36. */
/* Supplied declaration required: FUN_002ee9c0. */


void FUN_00310924(unsigned int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int *puVar2;
  int temp_v0;
  
  temp_v0 = *(unsigned int *)(param_2 + 0x14);
  FUN_002ee9c0(param_1,&temp_v0);
  puVar2 = *(unsigned int **)(param_2 + 0x10);
  for (puVar1 = (unsigned int *)*puVar2; puVar1 != puVar2; puVar1 = (unsigned int *)*puVar1) {
    FUN_00110b36(param_1,puVar1 + 2);
  }
  return;
}
