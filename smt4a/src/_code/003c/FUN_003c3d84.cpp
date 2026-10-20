/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c3d84` (_code @ 0x3c3d84, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e342c(unsigned char *, unsigned int);

extern unsigned char DAT_005f1776; /* 0x5f1776 */
extern unsigned int DAT_005f1778; /* 0x5f1778 */
extern unsigned char DAT_005f177c; /* 0x5f177c */

extern unsigned int scrGetArg(void);
extern unsigned int FUN_002360dc(unsigned int);
/* Supplied declaration required: FUN_002e342c. */


unsigned int FUN_003c3d84(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = scrGetArg();
  temp_v1 = FUN_002360dc(1);
  DAT_005f1776 = 1;
  DAT_005f1778 = temp_v0;
  FUN_002e342c(&DAT_005f177c,temp_v1);
  return 1;
}

} /* extern "C" */
