/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003d9fc8` (_code @ 0x3d9fc8, 0xe8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0023eb7c. */
/* Supplied declaration required: FUN_00254c6c. */
/* Supplied declaration required: FUN_0028c880. */
/* Supplied declaration required: FUN_002a06c8. */
/* Supplied declaration required: FUN_002d5780. */


void FUN_003d9fc8(int param_1)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int *puVar4;
  int temp_v3;
  unsigned char temp_v4;
  
  temp_v3 = 0;
  do {
    temp_v0 = param_1 + temp_v3 * 0x28;
    puVar4 = (unsigned int *)(temp_v0 + 400);
    temp_v1 = *(unsigned int *)(temp_v0 + 0x1b4);
    temp_v4 = (temp_v1 & 2) != 0;
    if (temp_v4) {
      temp_v1 = *puVar4;
    }
    if (temp_v4 && temp_v1 != 0) {
      if (*(int *)(*(int *)(temp_v1 + 8) + 0xc) < 0) {
        FUN_002a06c8(temp_v1,1);
      }
      FUN_0028c880(*(unsigned int *)(*puVar4 + 8),0);
      FUN_0023eb7c(*puVar4,0);
      FUN_002d5780(*puVar4);
      FUN_00254c6c(*(unsigned int *)(*puVar4 + 8),1);
      puVar4 = (unsigned int *)*puVar4;
      *puVar4 = *puVar4 | 2;
      *(unsigned char *)(*(int *)(puVar4[2] + 0x2c) + 0x1f6) = 0;
      if (-1 < *(int *)(temp_v0 + 0x1ac)) {
        temp_v2 = param_1 + *(int *)(temp_v0 + 0x1ac) * 8;
        *(unsigned int *)(temp_v2 + 0x1030) = *(unsigned int *)(temp_v0 + 0x194);
        *(unsigned int *)(temp_v2 + 0x1034) = *(unsigned int *)(temp_v0 + 0x1ac);
      }
    }
    temp_v3 = temp_v3 + 1;
  } while (temp_v3 < 0x32);
  return;
}
