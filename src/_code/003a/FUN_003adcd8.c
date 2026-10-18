/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003adcd8` (_code @ 0x3adcd8, 0x74 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00439ca8; /* 0x439ca8 */

extern int FUN_002c0ba8(unsigned int);
extern int FUN_002cffac(int);


unsigned int FUN_003adcd8(void)

{
  int temp_v0;
  int temp_v1;
  
  temp_v1 = DAT_00439ca8;
  if ((((DAT_00439ca8 != 0) && (temp_v0 = FUN_002c0ba8(0x525), temp_v0 == 0)) &&
      (temp_v0 = FUN_002cffac(temp_v1 + 0x2460), temp_v0 == 0)) &&
     (((temp_v1 = *(int *)(temp_v1 + 0x7e38), temp_v1 == 0 || (temp_v1 == 1 || temp_v1 == 2)) ||
      (temp_v1 == 7 || temp_v1 == 9)))) {
    return 1;
  }
  return 0;
}
