/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00142b2c` (_code @ 0x142b2c, 0x54 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_0063f500; /* 0x63f500 */


unsigned int FUN_00142b2c(unsigned int param_1)

{
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3;
  
  temp_v3 = param_1 == 0xffffffff;
  if (temp_v3) {
    param_1 = 0;
  }
  temp_v2 = param_1;
  temp_v1 = param_1;
  if (((!temp_v3) && (temp_v2 = 0, temp_v1 = DAT_0063f500, param_1 < 4)) &&
     (temp_v0 = param_1 * 0x70, *(int *)(temp_v0 + 0x63e71c) != 0)) {
    DAT_0063f500 = temp_v0 + 0x63e70c;
    temp_v2 = 1;
    *(char *)(temp_v0 + 0x63e778) = (char)param_1;
    temp_v1 = DAT_0063f500;
  }
  DAT_0063f500 = temp_v1;
  return temp_v2;
}
