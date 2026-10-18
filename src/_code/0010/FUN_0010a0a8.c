/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010a0a8` (_code @ 0x10a0a8, 0x60 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_0044ea00; /* 0x44ea00 */

/* Supplied declaration required: FUN_00113708. */
extern int FUN_002c00e8(unsigned int);
extern int FUN_002c0ac8(void);
/* Supplied declaration required: FUN_002c3ba8. */


unsigned char FUN_0010a0a8(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_002c0ac8();
  if ((((*(char *)(temp_v0 + 0xf60) != '\0') && (*(char *)(temp_v0 + 0xf63) != '\0')) &&
      (temp_v1 = FUN_002c00e8(0), temp_v1 == 0)) && (*(char *)(temp_v0 + 0xc) != '\0')) {
    FUN_002c3ba8(DAT_0044ea00);
    FUN_00113708(0);
  }
  return 0;
}
