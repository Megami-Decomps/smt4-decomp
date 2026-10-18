/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035b304` (_code @ 0x35b304, 0x8c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern signed char DAT_0057f208; /* 0x57f208 */
extern signed char DAT_0057f20a; /* 0x57f20a */
extern unsigned int *DAT_0057f20c; /* 0x57f20c */
extern unsigned int *DAT_0057f214; /* 0x57f214 */

/* Supplied declaration required: FUN_001631d0. */
/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_003344cc. */


void FUN_0035b304(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned int *puVar1;
  
  puVar1 = DAT_0057f20c;
  DAT_0057f208 = DAT_0057f208 - '\x01';
  if (DAT_0057f208 < '\x01') {
    FUN_001631d0(*DAT_0057f20c,0);
    FUN_0019a5a0(puVar1);
    DAT_0057f20c = (unsigned int *)0x0;
    DAT_0057f208 = '\0';
    FUN_003344cc();
    puVar1 = DAT_0057f214;
    if ((DAT_0057f214 != (unsigned int *)0x0) &&
       (DAT_0057f20a = DAT_0057f20a - '\x01', DAT_0057f20a < '\x01')) {
      FUN_001631d0(*DAT_0057f214,0);
      FUN_0019a5a0(puVar1);
      DAT_0057f214 = (unsigned int *)0x0;
      DAT_0057f20a = '\0';
    }
  }
  return;
}
