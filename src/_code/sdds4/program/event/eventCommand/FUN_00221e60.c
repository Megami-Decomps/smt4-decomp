/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00221e60` (_code @ 0x221e60, 0x58 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_0043e08c; /* 0x43e08c */

/* Supplied declaration required: FUN_0024de78. */
/* Supplied declaration required: FUN_0024df00. */
/* Supplied declaration required: FUN_0024df10. */
extern int FUN_002582e8(void);
/* Supplied declaration required: FUN_00262c64. */
extern int FUN_002bf41c(unsigned int);
/* Supplied declaration required: FUN_002c45b8. */


unsigned int FUN_00221e60(void)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002582e8();
  if (temp_v0 != 0) {
    FUN_0024df10();
    FUN_0024df00(0);
  }
  temp_v0 = FUN_002bf41c(DAT_0043e08c);
  if (temp_v0 != 0) {
    FUN_00262c64();
    FUN_0024de78();
    FUN_002c45b8(DAT_0043e08c,0);
  }
  return 1;
}
