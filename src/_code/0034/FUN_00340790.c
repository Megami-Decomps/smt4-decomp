/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00340790` (_code @ 0x340790, 0xe8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0029a2b0. */
/* Supplied declaration required: FUN_002a06c8. */
/* Supplied declaration required: FUN_002a0790. */
extern int FUN_002ae16c(void);
/* Supplied declaration required: FUN_002d5780. */
/* Supplied declaration required: FUN_002e11bc. */


unsigned int FUN_00340790(int param_1)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = 0;
  while ((*(int *)(param_1 + temp_v1 * 4 + 0x10) == 0 || (temp_v0 = FUN_002ae16c(), temp_v0 != 0))) {
    temp_v1 = temp_v1 + 1;
    if (temp_v1 >= 3) {
      temp_v1 = 0;
      do {
        temp_v0 = param_1 + temp_v1 * 4;
        if (*(int *)(temp_v0 + 0x10) != 0) {
          FUN_002a06c8(*(int *)(temp_v0 + 0x10),1);
          FUN_002e11bc(*(unsigned int *)(temp_v0 + 0x10),1);
          FUN_002d5780(*(unsigned int *)(temp_v0 + 0x10));
        }
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < 3);
      temp_v1 = 0;
      do {
        temp_v0 = *(int *)(param_1 + temp_v1 * 4 + 0x10);
        if (temp_v0 != 0) {
          FUN_0029a2b0(*(unsigned int *)(temp_v0 + 8),0);
        }
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < 3);
      FUN_002a0790(0);
      return 1;
    }
  }
  return 0;
}
