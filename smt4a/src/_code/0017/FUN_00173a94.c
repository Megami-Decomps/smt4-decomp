/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00173a94` (_code @ 0x173a94, 0x8c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_00646e74; /* 0x646e74 */

/* Supplied declaration required: FUN_001915c4. */
/* Supplied declaration required: FUN_001b6668. */


unsigned char FUN_00173a94(int param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned char temp_v0;
  
  temp_v0 = 0;
  if (*(char *)(param_1 + 0x38) != '\0') {
    *(unsigned int *)(param_1 + 0x1c) = 0x20;
    *(unsigned int *)(param_1 + 0x20) = 0x3f666666;
    *(unsigned int *)(param_1 + 0x24) = 0;
    *(unsigned int *)(param_1 + 0x28) = 0xffffffff;
    *(unsigned char **)(param_1 + 0x18) = &DAT_00646e74;
    while (*(int *)(param_1 + 0xc) != 0) {
      FUN_001b6668(param_1 + 0xc,*(unsigned int *)(param_1 + 0x14));
    }
    FUN_001915c4(param_1 + 8,*(unsigned int *)(param_1 + 0x2c),*(unsigned int *)(param_1 + 0x30));
    *(unsigned int *)(param_1 + 0x2c) = 0;
    *(unsigned int *)(param_1 + 0x30) = 0;
    *(unsigned int *)(param_1 + 0x34) = 0;
    *(unsigned char *)(param_1 + 0x38) = 0;
    temp_v0 = 1;
  }
  return temp_v0;
}
