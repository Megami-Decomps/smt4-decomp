/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00224070` (_code @ 0x224070, 0x7c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int *DAT_0058104c; /* 0x58104c */

/* Supplied declaration required: FUN_002e6dd4. */


void FUN_00224070(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  
  puVar1 = DAT_0058104c;
  *DAT_0058104c = 0;
  puVar1[1] = 0;
  puVar1[6] = 0;
  puVar1[8] = 0;
  puVar1[7] = 0;
  FUN_002e6dd4((int)puVar1 + 0x25,0x48);
  puVar1 = DAT_0058104c;
  DAT_0058104c[0x2c] = 0;
  puVar1[0x2d] = 0;
  puVar1[0x2e] = 0;
  puVar1[0x2f] = 0;
  puVar1[0x30] = 0;
  puVar1[0x31] = 0;
  puVar1[0x32] = 0;
  puVar1[0x33] = 0;
  puVar1[0x34] = 0;
  puVar1[0x35] = 0;
  puVar1[0x36] = 0;
  puVar1[0x37] = 0;
  puVar1[0x38] = 0;
  puVar1[0x39] = 0;
  puVar1[0x3a] = 0;
  puVar1[0x3b] = 0;
  puVar1[0x3c] = 0;
  return;
}
