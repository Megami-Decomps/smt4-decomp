/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ac22c` (_code @ 0x2ac22c, 0x98 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* Supplied declaration required: FUN_00151400. */
/* Supplied declaration required: FUN_002ac900. */
/* Supplied declaration required: FUN_002b743c. */


void FUN_002ac22c(int param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = param_1;
  FUN_00151400(param_1,0);
  while (*(int *)(param_1 + 4) != 0) {
    temp_v2 = *(int *)(param_1 + 0xc);
    if (temp_v0 != 0) {
      *(unsigned char *)(temp_v2 + 0x14) = 0;
    }
    if (*(char *)(temp_v2 + 0x14) != '\0') {
      temp_v1 = temp_v2 + 0xc;
      while (temp_v1 != *(int *)(temp_v2 + 0xc)) {
        temp_v1 = *(int *)(temp_v1 + 4);
        if (*(romwright_code **)(temp_v1 + 0x10) != (romwright_code *)0x0) {
          (**(romwright_code **)(temp_v1 + 0x10))
                    (*(unsigned int *)(temp_v1 + 8),*(unsigned int *)(temp_v1 + 0xc),
                     *(unsigned int *)(temp_v1 + 0x14));
        }
      }
    }
    FUN_002ac900(temp_v2 + 8,*(unsigned int *)(temp_v2 + 0xc),temp_v2 + 0xc);
    FUN_002b743c(param_1 + 4,temp_v2);
  }
  return;
}
