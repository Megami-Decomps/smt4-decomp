/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004a9428` (_code @ 0x4a9428, 0x78 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0057a9c8; /* 0x57a9c8 */

extern int FUN_0018719c(unsigned int);
extern int FUN_00336aa4(int);


unsigned int FUN_004a9428(void)

{
  int temp_v0;
  int temp_v1;
  
  temp_v1 = DAT_0057a9c8;
  if ((((DAT_0057a9c8 != 0) && (temp_v0 = FUN_0018719c(0x525), temp_v0 == 0)) &&
      (temp_v0 = FUN_00336aa4(temp_v1 + 0x28c4), temp_v0 == 0)) &&
     (((temp_v1 = *(int *)(temp_v1 + 0x74a0), temp_v1 == 0 || (temp_v1 == 1 || temp_v1 == 3)) ||
      ((temp_v1 == 2 || temp_v1 == 0xb) || temp_v1 == 0xd)))) {
    return 1;
  }
  return 0;
}

} /* extern "C" */
