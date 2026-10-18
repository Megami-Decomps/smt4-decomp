/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00296e90` (_code @ 0x296e90, 0x4c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_0043e188; /* 0x43e188 */
extern int DAT_0043e18c; /* 0x43e18c */

/* Supplied declaration required: FUN_002b89e4. */


void FUN_00296e90(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned char *puVar2;
  
  temp_v0 = DAT_0043e18c;
  puVar2 = &DAT_0043e188;
  if (DAT_0043e18c != 0) {
    puVar2 = (unsigned int)(uint)*(unsigned int)(DAT_0043e18c + 8);
  }
  if (DAT_0043e18c != 0 && puVar2 != (unsigned char *)0x0) {
    *(unsigned char *)(DAT_0043e18c + 0x35) = 1;
    *(unsigned char *)(temp_v0 + 0xa10) = 1;
    FUN_002b89e4(temp_v0,*(unsigned char *)(temp_v0 + 9));
    *(unsigned char *)(temp_v0 + 8) = 3;
    *(unsigned char *)(temp_v0 + 0x34) = 0;
    *(unsigned char *)(temp_v0 + 0x35) = 0;
  }
  return;
}
