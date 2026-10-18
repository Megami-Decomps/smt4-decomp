/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00389294` (_code @ 0x389294, 0xe4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002ac350. */
/* Supplied declaration required: FUN_002ac384. */
extern int FUN_002ac3b8(unsigned int);


unsigned int FUN_00389294(int param_1,int param_2)

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
      temp_v0 = FUN_002ac3b8(temp_v5);
      if (temp_v0 != 0) {
        temp_v1 = temp_v5;
        FUN_002ac384();
        temp_v2 = temp_v5;
        FUN_002ac350();
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
