/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003033d4` (_code @ 0x3033d4, 0x88 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_005806a4; /* 0x5806a4 */

extern int FUN_00162e8c(void);


int FUN_003033d4(void)

{
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_00162e8c();
  temp_v1 = *(int *)(DAT_005806a4 + 0x20c);
  if (temp_v1 == -1) {
    temp_v1 = *(int *)(DAT_005806a4 + 200);
    switch(*(unsigned int *)(DAT_005806a4 + 0xb0)) {
    case 0:
      return *(int *)(DAT_005806a4 + 200) + (unsigned int)*(unsigned char *)(temp_v0 + 0x1d);
    case 1:
      return 6;
    case 2:
      return 10;
    case 0xfffffffd:
      return 5;
    case 0xfffffffe:
      return 9;
    case 0xffffffff:
      return 8;
    }
  }
  return temp_v1;
}

} /* extern "C" */
