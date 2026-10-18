/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0046fca8` (_code @ 0x46fca8, 0xe4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_001b315c(unsigned int);
/* Supplied declaration required: FUN_001b31ac. */
/* Supplied declaration required: FUN_001b31e0. */


unsigned int FUN_0046fca8(int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  
  temp_v6 = 0;
  if (temp_v6 < *(int *)(param_1 + 0x310)) {
    do {
      temp_v5 = *(int *)(param_1 + 0x318) + temp_v6 * 0x50;
      temp_v0 = FUN_001b315c(temp_v5);
      if (temp_v0 != 0) {
        temp_v1 = temp_v5;
        FUN_001b31ac();
        temp_v2 = temp_v5;
        FUN_001b31e0();
        temp_v3 = 0;
        if (temp_v3 < temp_v2) {
          do {
            if ((((*(char *)(temp_v1 + temp_v3 * 0x40) == '\x13') &&
                 (*(char *)(*(int *)(temp_v5 + 0x4c) + temp_v3 * 0x10 + 0xc) != '\0')) &&
                (temp_v0 = *(int *)(*(int *)(temp_v5 + 0x4c) + temp_v3 * 0x10),
                param_2 < *(int *)(temp_v0 + 0x10))) &&
               ((temp_v4 = temp_v0 + param_2 * 0x10 + *(int *)(temp_v0 + 0x14), *(int *)(temp_v4 + 4) != 0
                && (temp_v0 + *(int *)(temp_v4 + 8) != 0)))) {
              return *(unsigned int *)(*(int *)(temp_v5 + 0x4c) + temp_v3 * 0x10);
            }
            temp_v3 = temp_v3 + 1;
          } while (temp_v3 < temp_v2);
        }
      }
      temp_v6 = temp_v6 + 1;
    } while (temp_v6 < *(int *)(param_1 + 0x310));
  }
  return 0;
}
