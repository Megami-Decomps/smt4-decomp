/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e1ba8` (_code @ 0x2e1ba8, 0x54 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002c43b4(unsigned int, int);

extern int DAT_0043dc24; /* 0x43dc24 */
extern unsigned int *DAT_0043dc28; /* 0x43dc28 */

extern int FUN_002bf244(unsigned int);
/* Supplied declaration required: FUN_002c43b4. */


void FUN_002e1ba8(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = DAT_0043dc24;
  if ((DAT_0043dc28 != (unsigned int *)0x0) && (temp_v1 = FUN_002bf244(*DAT_0043dc28), temp_v1 != 0)) {
    FUN_002c43b4(*DAT_0043dc28,0);
  }
  *(unsigned int *)(temp_v0 + 8) = 4;
  *(unsigned int *)(temp_v0 + 0x10) = 0;
  *(unsigned int *)(temp_v0 + 0x14) = 0;
  return;
}

} /* extern "C" */
