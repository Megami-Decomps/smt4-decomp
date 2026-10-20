/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0033bf40` (_code @ 0x33bf40, 0x68 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_00580ca0; /* 0x580ca0 */

extern int FUN_004ffa14(unsigned int);


unsigned int FUN_0033bf40(int param_1)

{
  int temp_v0;
  int temp_v1;
  
  temp_v1 = 0;
  while (((temp_v0 = DAT_00580ca0 + temp_v1 * 0x3c, *(char *)(temp_v0 + 0x90) == '\0' ||
          (*(short *)(temp_v0 + 0xa6) != param_1)) ||
         (temp_v0 = FUN_004ffa14(*(unsigned int *)(*(int *)(temp_v0 + 0xa8) + 4)), temp_v0 == 0))) {
    temp_v1 = temp_v1 + 1;
    if (temp_v1 >= 0x23) {
      return 0;
    }
  }
  return 1;
}

} /* extern "C" */
