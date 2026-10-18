/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00206b80` (_code @ 0x206b80, 0x124 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002bee58. */
/* Supplied declaration required: FUN_002bf818. */


void FUN_00206b80(int param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  if (0 < *(int *)(param_1 + 0x254)) {
    FUN_002bf818(param_1 + 0x1c4);
  }
  temp_v0 = *(unsigned int *)(param_1 + 0x254);
  if (temp_v0 >= 2) {
    if (temp_v0 != 2) {
      if (temp_v0 == 3) {
        FUN_002bf818(param_1 + 0x20);
        FUN_002bf818(param_1 + 0xac);
        if ((*(char *)(param_1 + 0xaa) != '\0') && (*(char *)(param_1 + 0x136) != '\0')) {
          *(unsigned char *)(param_1 + 0xa5) = 0;
          *(unsigned char *)(param_1 + 0x131) = 0;
          *(unsigned char *)(param_1 + 0x1bd) = 0;
          *(unsigned int *)(param_1 + 0x254) = 1;
          *(unsigned int *)(param_1 + 0x250) = 0;
        }
      }
    }
    else {
      temp_v1 = FUN_002bf818(param_1 + 0x20);
      if (((temp_v1 != 0) && (temp_v1 = FUN_002bf818(param_1 + 0xac), temp_v1 != 0)) &&
         (temp_v1 = FUN_002bf818(param_1 + 0x138), temp_v1 != 0)) {
        FUN_002bee58(param_1 + 0x20,3);
        FUN_002bee58(param_1 + 0xac,3);
        *(unsigned int *)(param_1 + 0x254) = 3;
        *(unsigned int *)(param_1 + 0x250) = 0;
      }
    }
  }
  *(int *)(param_1 + 0x250) = *(int *)(param_1 + 0x250) + 1;
  return;
}
