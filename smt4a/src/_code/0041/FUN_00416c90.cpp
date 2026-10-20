/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00416c90` (_code @ 0x416c90, 0x70 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00237210(void);

/* Supplied declaration required: FUN_00237210. */


int FUN_00416c90(int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  unsigned int temp_v1;
  unsigned long long temp_v2;
  
  temp_v0 = 0;
  temp_v2 = 0;
  do {
    puVar1 = (unsigned int *)(param_1 + temp_v0 * 0xb0);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(unsigned char *)(puVar1 + 0x28) = 0;
    puVar1[0x29] = 0;
    temp_v1 = (unsigned int)temp_v2;
    puVar1[4] = temp_v1;
    puVar1[3] = temp_v1;
    puVar1[2] = temp_v1;
    if (puVar1[0x2a] != 0) {
      FUN_00237210();
      puVar1[0x2a] = 0;
    }
    temp_v0 = temp_v0 + 1;
    puVar1[0x2b] = 0;
  } while (temp_v0 < 0xc);
  return param_1;
}

} /* extern "C" */
