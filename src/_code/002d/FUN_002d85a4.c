/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002d85a4` (_code @ 0x2d85a4, 0x1a4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043e360; /* 0x43e360 */

/* Supplied declaration required: FUN_002899c4. */
extern int FUN_002b902c(unsigned int);
extern int FUN_002bffbc(unsigned int);
/* Supplied declaration required: FUN_002c0ba8. */


unsigned int FUN_002d85a4(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  
  temp_v0 = FUN_002b902c(3);
  if ((temp_v0 != 0) || (temp_v0 = FUN_002b902c(0xc), temp_v0 != 0)) {
    DAT_0043e360 = DAT_0043e360 + 1;
  }
  temp_v0 = FUN_002b902c(6);
  if ((temp_v0 != 0) || (temp_v0 = FUN_002b902c(0xf), temp_v0 != 0)) {
    DAT_0043e360 = DAT_0043e360 + 0x10;
  }
  temp_v0 = FUN_002b902c(4);
  if ((temp_v0 != 0) || (temp_v0 = FUN_002b902c(0xd), temp_v0 != 0)) {
    DAT_0043e360 = DAT_0043e360 - 1;
  }
  temp_v0 = FUN_002b902c(5);
  if ((temp_v0 != 0) || (temp_v0 = FUN_002b902c(0xe), temp_v0 != 0)) {
    DAT_0043e360 = DAT_0043e360 - 0x10;
  }
  temp_v0 = FUN_002b902c(8);
  if (temp_v0 != 0) {
    DAT_0043e360 = DAT_0043e360 - 0x100;
  }
  temp_v0 = FUN_002b902c(7);
  if (temp_v0 != 0) {
    DAT_0043e360 = DAT_0043e360 + 0x100;
  }
  if (DAT_0043e360 >= 0x800) {
    DAT_0043e360 = DAT_0043e360 - 0x800;
  }
  if (DAT_0043e360 < 0) {
    DAT_0043e360 = DAT_0043e360 + 0x800;
  }
  temp_v0 = FUN_002bffbc(0);
  if (temp_v0 != 0) {
    temp_v1 = FUN_002c0ba8(DAT_0043e360);
    FUN_002899c4(DAT_0043e360,temp_v1 ^ 1,1);
  }
  temp_v0 = FUN_002bffbc(1);
  if (temp_v0 != 0) {
    temp_v2 = 1;
  }
  else {
    temp_v4 = 0;
    temp_v0 = DAT_0043e360 + ((unsigned int)(DAT_0043e360 >> 0x1f) >> 0x18);
    do {
      temp_v3 = 0;
      do {
        FUN_002c0ba8(temp_v3 + temp_v4 * 0x10 + (temp_v0 >> 8) * 0x100);
        temp_v3 = temp_v3 + 1;
      } while (temp_v3 < 0x10);
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < 0x10);
    temp_v2 = 0;
  }
  return temp_v2;
}
