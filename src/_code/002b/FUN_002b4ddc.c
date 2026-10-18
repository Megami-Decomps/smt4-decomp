/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b4ddc` (_code @ 0x2b4ddc, 0x68 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0015c6bc. */
extern unsigned int FUN_002bb270(void);
/* Supplied declaration required: FUN_002bd620. */


void FUN_002b4ddc(int param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  if (*(char *)(param_1 + 0x14) != '\0') {
    temp_v1 = 0;
    if (temp_v1 < *(int *)(param_1 + 8)) {
      do {
        if (*(int *)(param_1 + temp_v1 * 4) != 0) {
          FUN_002bd620();
          *(unsigned int *)(param_1 + temp_v1 * 4) = 0;
        }
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < *(int *)(param_1 + 8));
    }
    *(unsigned int *)(param_1 + 8) = 0;
    temp_v0 = FUN_002bb270();
    FUN_0015c6bc(temp_v0,param_1);
    *(unsigned char *)(param_1 + 0x14) = 0;
  }
  return;
}
