/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001094c4` (_code @ 0x1094c4, 0x5c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_0044ea00; /* 0x44ea00 */

/* Supplied declaration required: FUN_00113208. */
extern int FUN_002c00e8(unsigned int);
extern int FUN_002c0ac8(void);
/* Supplied declaration required: FUN_002c3ba8. */


unsigned char FUN_001094c4(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002c0ac8();
  if (((*(char *)(temp_v0 + 0xf9a) != '\0') && (*(char *)(temp_v0 + 0xf9c) != '\0')) &&
     (temp_v0 = FUN_002c00e8(0), temp_v0 == 0)) {
    FUN_002c3ba8(DAT_0044ea00);
    FUN_00113208(0);
    return 0;
  }
  return 0;
}
