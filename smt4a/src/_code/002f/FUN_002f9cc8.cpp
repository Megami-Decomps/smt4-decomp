/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f9cc8` (_code @ 0x2f9cc8, 0x2a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e7232(void);

/* Supplied declaration required: FUN_002e7232. */


void FUN_002f9cc8(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  
  puVar2 = *(unsigned int **)(param_1 + 0x48);
  temp_v0 = puVar2[0xe];
  *puVar2 = 0;
  puVar2[1] = 0;
  *(unsigned int *)(*(int *)(param_1 + 0x48) + 0x38) = 0;
  if (temp_v0 != 0) {
    FUN_002e7232();
  }
  *(unsigned char *)(*(int *)(param_1 + 0x48) + 0x34) = 0;
  *(unsigned char *)(param_1 + 0x50) = 0;
  return;
}

} /* extern "C" */
