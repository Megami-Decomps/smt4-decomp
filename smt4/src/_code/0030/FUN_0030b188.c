/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030b188` (_code @ 0x30b188, 0x54 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002499b4(void);
/* Supplied declaration required: FUN_0028dcb0. */
/* Supplied declaration required: FUN_002939f4. */
extern unsigned int FUN_00296cc8(unsigned int);


unsigned int FUN_0030b188(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_00296cc8(0);
  FUN_002939f4();
  temp_v1 = FUN_002499b4();
  if ((temp_v1 != 0) && (((unsigned int)*(unsigned short *)(temp_v1 + 0x1c6) & (1 << (temp_v0 & 0xff))) != 0)) {
    FUN_0028dcb0(1);
    return 1;
  }
  FUN_0028dcb0(0);
  return 1;
}
