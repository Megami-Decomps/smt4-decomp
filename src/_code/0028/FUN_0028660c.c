/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0028660c` (_code @ 0x28660c, 0xa4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_00434210; /* 0x434210 */

/* Supplied declaration required: FUN_0031bbc4. */


unsigned int FUN_0028660c(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned char temp_v1;
  
  if (DAT_00434210 != 0) {
    temp_v1 = *(char *)(DAT_00434210 + 0x2f4) != '\0';
    temp_v0 = DAT_00434210;
    if (temp_v1) {
      temp_v0 = *(unsigned int *)(DAT_00434210 + 0x308);
    }
    if (temp_v1 && temp_v0 != 0) {
      temp_v0 = temp_v0 & 0xffff;
      FUN_0031bbc4();
      if (temp_v0 != 0) {
        switch(*(unsigned char *)(temp_v0 + 0xa3)) {
        default:
          return 2;
        case 1:
          return 3;
        case 2:
          return 4;
        case 3:
          return 5;
        case 4:
          return 0x10;
        case 5:
          return 0x11;
        case 6:
          return 0x12;
        }
      }
    }
  }
  return 0x14;
}
