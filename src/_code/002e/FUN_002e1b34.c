/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e1b34` (_code @ 0x2e1b34, 0x54 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043dc24; /* 0x43dc24 */
extern unsigned int *DAT_0043dc28; /* 0x43dc28 */

extern int FUN_002bf41c(unsigned int);
/* Supplied declaration required: FUN_002c45b8. */


void FUN_002e1b34(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = DAT_0043dc24;
  if ((DAT_0043dc28 != (unsigned int *)0x0) && (temp_v1 = FUN_002bf41c(*DAT_0043dc28), temp_v1 != 0)) {
    FUN_002c45b8(*DAT_0043dc28,0);
  }
  *(unsigned int *)(temp_v0 + 8) = 4;
  *(unsigned int *)(temp_v0 + 0x10) = 0;
  *(unsigned int *)(temp_v0 + 0x14) = 0;
  return;
}
