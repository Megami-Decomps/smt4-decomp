/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001219a0` (_code @ 0x1219a0, 0x58 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002b4ea0. */
/* Supplied declaration required: FUN_002b4eb8. */


void FUN_001219a0(char *param_1)

{
/* irregular: 2 native warning(s); review required */
  char *pcVar1;
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  if (*param_1 != '\0') {
    temp_v0 = 0;
    do {
      FUN_002b4eb8(param_1,temp_v0 & 0xff);
      FUN_002b4ea0((int)(char)temp_v0,*(unsigned int *)(param_1 + temp_v0 * 4 + 0x7c),
                   *(unsigned int *)(param_1 + temp_v0 * 4 + 0x284));
      temp_v1 = temp_v0 + 1;
      pcVar1 = param_1 + temp_v0 * 4 + 0x7c;
      pcVar1[0] = '\0';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
      pcVar1 = param_1 + temp_v0 * 4 + 0x284;
      pcVar1[0] = '\0';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
      temp_v0 = temp_v1;
    } while ((int)temp_v1 < 2);
    *param_1 = '\0';
  }
  return;
}
