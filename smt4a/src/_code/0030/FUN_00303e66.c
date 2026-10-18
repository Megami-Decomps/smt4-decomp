/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00303e66` (_code @ 0x303e66, 0x22 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
} param_2_stack;

/* Supplied declaration required: FUN_00134d1c. */


void FUN_00303e66(int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  
  puVar1 = *(unsigned int **)(param_1 + 100);
  if (puVar1 != *(unsigned int **)(param_1 + 0x68)) {
    *(unsigned int **)(param_1 + 100) = puVar1 + 1;
    if (puVar1 != (unsigned int *)0x0) {
      *puVar1 = param_2;
    }
    return;
  }
  temp_v0 = param_2;
  FUN_00134d1c(param_1 + 0x60,puVar1,&temp_v0,*(unsigned int **)(param_1 + 0x68),param_1);
  return;
}
