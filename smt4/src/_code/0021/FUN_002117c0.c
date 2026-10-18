/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002117c0` (_code @ 0x2117c0, 0x40 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int *DAT_0043da90; /* 0x43da90 */

/* Supplied declaration required: FUN_002117a0. */
/* Supplied declaration required: FUN_00252334. */
/* Supplied declaration required: FUN_0028a22c. */
/* Supplied declaration required: FUN_002917b8. */
/* Supplied declaration required: FUN_00291944. */
/* Supplied declaration required: FUN_002c415c. */
/* Supplied declaration required: FUN_002c43b4. */


void FUN_002117c0(void)

{
/* irregular: 7 native warning(s); review required */
  unsigned int *puVar1;
  
  puVar1 = DAT_0043da90;
  FUN_00252334();
  FUN_0028a22c();
  FUN_00291944();
  FUN_002917b8();
  FUN_002117a0();
  FUN_002c43b4(*puVar1,0);
  FUN_002c415c(puVar1);
  DAT_0043da90 = (unsigned int *)0x0;
  return;
}
