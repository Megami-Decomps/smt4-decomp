/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0029e9cc` (_code @ 0x29e9cc, 0x98 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043e2ac; /* 0x43e2ac */

/* Supplied declaration required: FUN_002b06c4. */


unsigned short FUN_0029e9cc(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned char temp_v0;
  unsigned short temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  
  if (param_1 >= 0x501) {
    return 0;
  }
  temp_v2 = param_1;
  FUN_002b06c4();
  temp_v1 = *(unsigned short *)(temp_v2 + 0x16) & 1;
  if ((*(unsigned short *)(temp_v2 + 0x16) & 1) != 0) {
    temp_v0 = *(unsigned char *)(DAT_0043e2ac + param_1 * 0x34 + 0xc20e);
    temp_v3 = temp_v0 & 2;
    if ((temp_v0 & 2) == 0) {
      while ((temp_v4 = (unsigned int)*(unsigned short *)(temp_v2 + temp_v3 * 2 + 0x7c), temp_v4 == 0 ||
             ((*(unsigned char *)(DAT_0043e2ac + temp_v4 * 0x34 + 0xc20e) & 2) == 0))) {
        temp_v3 = temp_v3 + 1;
        if (temp_v3 >= 3) {
          return 0;
        }
      }
    }
    temp_v1 = 1;
  }
  return temp_v1;
}
