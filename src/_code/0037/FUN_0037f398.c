/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037f398` (_code @ 0x37f398, 0xe0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_00421a24; /* 0x421a24 */
extern unsigned char DAT_00421a5c; /* 0x421a5c */
extern unsigned char DAT_00421a8c; /* 0x421a8c */

/* Supplied declaration required: FUN_002a2268. */
/* Supplied declaration required: FUN_002b4ddc. */
/* Supplied declaration required: FUN_002c423c. */


unsigned int * FUN_0037f398(unsigned int *param_1)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  
  param_1[0x11] = (unsigned int)&DAT_00421a8c;
  *param_1 = (unsigned int)&DAT_00421a5c;
  if (*(char *)(param_1 + 0x14) != '\0') {
    *(unsigned char *)((int)param_1 + 0x52) = 1;
    temp_v0 = 0;
    if (temp_v0 < (unsigned int)param_1[0x34]) {
      do {
        if (param_1[temp_v0 * 0xd0 + 0x36] != 0) {
          FUN_002a2268(param_1[0x19]);
          param_1[temp_v0 * 0xd0 + 0x36] = 0;
        }
        temp_v0 = temp_v0 + 1;
      } while (temp_v0 < (unsigned int)param_1[0x34]);
    }
    temp_v0 = 0;
    if (temp_v0 < (unsigned int)param_1[0x34]) {
      do {
        if (param_1[temp_v0 * 0xd0 + 0x42] != 0) {
          FUN_002b4ddc();
          param_1[temp_v0 * 0xd0 + 0x42] = 0;
        }
        temp_v0 = temp_v0 + 1;
      } while (temp_v0 < (unsigned int)param_1[0x34]);
    }
    param_1[0x19] = 0;
    *(unsigned char *)(param_1 + 3) = 0;
    *(unsigned char *)(param_1 + 0x14) = 0;
    FUN_002c423c(param_1);
  }
  *param_1 = (unsigned int)&DAT_00421a24;
  return param_1;
}
