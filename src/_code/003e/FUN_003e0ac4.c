/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e0ac4` (_code @ 0x3e0ac4, 0xb8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002ad8b4. */
/* Supplied declaration required: FUN_002c5df8. */


unsigned int FUN_003e0ac4(int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  char temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  FUN_002c5df8(param_2,param_1,0x70);
  param_2 = param_2 + 0x70;
  temp_v0 = *(char *)(param_1 + 0x130);
  temp_v1 = 0;
  if ((int)temp_v0 != 0) {
    do {
      temp_v2 = param_1 + temp_v1 * 0xc;
      FUN_002ad8b4(param_2,temp_v2 + 0x70);
      FUN_002c5df8(param_2 + 8,*(unsigned int *)(temp_v2 + 0x78),*(unsigned int *)(temp_v2 + 0x74));
      temp_v1 = temp_v1 + 1;
      param_2 = param_2 + 8 + ((*(int *)(temp_v2 + 0x74) + 3U) & 0xfffffffc);
    } while (temp_v1 < (unsigned int)(int)temp_v0);
  }
  if (*(int *)(param_1 + 0x138) != 0) {
    FUN_002c5df8(param_2,*(int *)(param_1 + 0x138),*(unsigned int *)(param_1 + 0x134));
    param_2 = param_2 + *(int *)(param_1 + 0x134);
  }
  if (*(int *)(param_1 + 0x13c) != 0) {
    FUN_002c5df8(param_2,*(int *)(param_1 + 0x13c),0x20);
  }
  return *(unsigned int *)(param_1 + 4);
}
