/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031f3c8` (_code @ 0x31f3c8, 0x6c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0028df54. */
extern int FUN_00293c98(void);


unsigned int FUN_0031f3c8(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v2 = 0;
  while( 1 ) {
    temp_v0 = FUN_00293c98();
    temp_v1 = *(unsigned int *)(*(int *)(temp_v0 + 0x1fc0) + temp_v2 * 0x288);
    if ((((temp_v1 & 0x10) != 0 && (temp_v1 & 1) != 0) && ((temp_v1 & 0x40) == 0)) &&
       ((temp_v1 & 0x100) != 0)) break;
    temp_v2 = temp_v2 + 1;
    if (temp_v2 >= 0x6d) {
      FUN_0028df54(0);
      return 1;
    }
  }
  FUN_0028df54(1);
  return 1;
}
