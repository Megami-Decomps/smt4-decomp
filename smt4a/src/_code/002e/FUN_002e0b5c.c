/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e0b5c` (_code @ 0x2e0b5c, 0xe0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern signed char DAT_005b40c8; /* 0x5b40c8 */

/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Supplied declaration required: FUN_0013ebd8. */
extern unsigned int FUN_0014374c(unsigned int);
/* Supplied declaration required: FUN_00429d98. */


unsigned int FUN_002e0b5c(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned char temp_v4;
  
  temp_v3 = 1;
  if (DAT_005b40c8 != '\0') {
    temp_v3 = 2;
  }
  else {
    temp_v2 = FUN_0014374c(0);
    FUN_00429d98();
    FUN_0013ebd8();
    if ((temp_v2 & 0x80000000) == 0) {
      DAT_005b40c8 = '\x01';
    }
    else {
      temp_v0 = (temp_v2 & 0x3fc00) >> 10;
      if ((((temp_v0 != 0x11) || ((temp_v2 & 0x3ff) < 0x154)) || ((temp_v2 & 0x3ff) >= 0x168)) &&
         (((temp_v0 != 0x11 || ((temp_v2 & 0x3ff) < 0x168)) || ((temp_v2 & 0x3ff) >= 0x186)))) {
        if (temp_v0 != 0x11) {
          return 0;
        }
        temp_v0 = temp_v2 & 0x3ff;
        temp_v4 = SBORROW4(0x186,temp_v0);
        temp_v1 = 0x186 - temp_v0;
        if (temp_v0 >= 0x186) {
          temp_v4 = SBORROW4(temp_v0,400);
          temp_v1 = temp_v0 - 400;
        }
        if (temp_v1 < 0 == temp_v4) {
          return 0;
        }
      }
      if (((temp_v2 & 0x3ff) < 0x154) || ((temp_v2 & 0x3ff) >= 0x168)) {
        temp_v3 = 4;
      }
      else {
        temp_v3 = 3;
      }
    }
  }
  return temp_v3;
}
