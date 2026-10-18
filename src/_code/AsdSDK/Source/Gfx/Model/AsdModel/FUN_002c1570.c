/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c1570` (_code @ 0x2c1570, 0x58 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00471b90; /* 0x471b90 */
extern unsigned int DAT_004e9ba8; /* 0x4e9ba8 */

extern unsigned int FUN_0011cd48(char *);
/* Supplied declaration required: FUN_002c3a24. */
/* Supplied declaration required: FUN_002c3aa8. */


unsigned int FUN_002c1570(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  
  FUN_002c3aa8(&DAT_004e9ba8);
  if (0 < DAT_00471b90) {
    DAT_00471b90 = DAT_00471b90 + 1;
    FUN_002c3a24(&DAT_004e9ba8);
    return 0x82067f9;
  }
  temp_v0 = FUN_0011cd48("srv:");
  FUN_002c3a24(&DAT_004e9ba8);
  return temp_v0;
}
