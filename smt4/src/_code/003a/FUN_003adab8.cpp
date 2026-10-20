/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003adab8` (_code @ 0x3adab8, 0x74 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_00439ca8; /* 0x439ca8 */

extern int FUN_002c09d0(unsigned int);
extern int FUN_002d0058(int);


unsigned int FUN_003adab8(void)

{
  int temp_v0;
  int temp_v1;
  
  temp_v1 = DAT_00439ca8;
  if ((((DAT_00439ca8 != 0) && (temp_v0 = FUN_002c09d0(0x525), temp_v0 == 0)) &&
      (temp_v0 = FUN_002d0058(temp_v1 + 0x2460), temp_v0 == 0)) &&
     (((temp_v1 = *(int *)(temp_v1 + 0x7e38), temp_v1 == 0 || (temp_v1 == 1 || temp_v1 == 2)) ||
      (temp_v1 == 7 || temp_v1 == 9)))) {
    return 1;
  }
  return 0;
}

} /* extern "C" */
