/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0024edd4` (_code @ 0x24edd4, 0x78 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

/* Supplied declaration required: FUN_003e94f0. */


void FUN_0024edd4(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = *(int *)(param_1 + 8);
  if ((*(int *)(temp_v0 + 0x58) - *(int *)(temp_v0 + 0x54)) >> 2 != 0) {
    piVar1 = (int *)(*(int *)(temp_v0 + 8) + 0x14);
    temp_v1 = *piVar1;
    if (temp_v1 == 0) {
      temp_v1 = 0;
    }
    else {
      temp_v1 = (int)piVar1 + temp_v1;
    }
    temp_v2 = 0;
    if (temp_v1 != 0) {
      piVar1 = (int *)(temp_v1 + param_2 * 0x10 + 0x28);
      temp_v1 = *piVar1;
      if (temp_v1 != 0) {
        temp_v2 = temp_v1 + (int)piVar1;
      }
    }
    FUN_003e94f0(&temp_v2,*(unsigned int *)(*(int *)(temp_v0 + 0x34) + param_2 * 4),
                 *(unsigned int *)(*(int *)(temp_v0 + 0x54) + param_2 * 4));
    *(unsigned char *)(param_1 + 0x58) = 1;
  }
  return;
}
