/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031f24c` (_code @ 0x31f24c, 0x6c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0028dcb0. */
extern int FUN_002939f4(void);


unsigned int FUN_0031f24c(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v2 = 0;
  while( 1 ) {
    temp_v0 = FUN_002939f4();
    temp_v1 = *(unsigned int *)(*(int *)(temp_v0 + 0x1fc0) + temp_v2 * 0x288);
    if ((((temp_v1 & 0x10) != 0 && (temp_v1 & 1) != 0) && ((temp_v1 & 0x40) == 0)) &&
       ((temp_v1 & 0x100) != 0)) break;
    temp_v2 = temp_v2 + 1;
    if (temp_v2 >= 0x6d) {
      FUN_0028dcb0(0);
      return 1;
    }
  }
  FUN_0028dcb0(1);
  return 1;
}
