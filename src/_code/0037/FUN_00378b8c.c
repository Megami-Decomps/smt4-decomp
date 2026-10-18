/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00378b8c` (_code @ 0x378b8c, 0xa8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002c3944. */


unsigned int FUN_00378b8c(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  
  if (*(char *)(param_1 + 0x5e) != '\0') {
    temp_v2 = 0;
  }
  else {
    *(unsigned int *)(param_1 + 0x58) = *(unsigned int *)(param_1 + 0xc);
    *(unsigned char *)(param_1 + 0x5c) = *(unsigned char *)(param_1 + 0x18);
    temp_v3 = *(int *)(param_1 + 0x44);
    temp_v5 = *(int *)(param_1 + 0x1c);
    temp_v6 = (unsigned int)*(unsigned char *)(param_1 + 0x5d);
    if (temp_v6 != 0) {
      temp_v4 = 0;
      do {
        temp_v1 = temp_v3 * 0x280 * temp_v4;
        temp_v0 = temp_v4 * 4;
        temp_v6 = temp_v6 - 1;
        temp_v4 = temp_v4 + 1;
        *(unsigned int *)(param_1 + temp_v0 + 0x24) = temp_v1 + ((temp_v5 + 0x1fU) & 0xffffffe0);
      } while (temp_v6 != 0);
    }
    *(unsigned int *)(param_1 + 0x48) = 0;
    FUN_002c3944(*(unsigned int *)(param_1 + 0x1c),*(unsigned int *)(param_1 + 0x20));
    temp_v6 = (unsigned int)*(unsigned char *)(param_1 + 0x5d);
    if (temp_v6 != 0) {
      temp_v3 = 0;
      do {
        temp_v5 = temp_v3 * 4;
        temp_v6 = temp_v6 - 1;
        temp_v3 = temp_v3 + 1;
        *(unsigned int *)(param_1 + temp_v5 + 0x34) = 0;
      } while (temp_v6 != 0);
    }
    temp_v2 = 1;
    *(unsigned char *)(param_1 + 0x5e) = 1;
  }
  return temp_v2;
}
