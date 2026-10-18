/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003491e8` (_code @ 0x3491e8, 0x50 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_0057f588; /* 0x57f588 */
extern int DAT_0057f58c; /* 0x57f58c */

/* Supplied declaration required: FUN_00165088. */


void FUN_003491e8(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned char *puVar2;
  
  temp_v0 = DAT_0057f58c;
  puVar2 = &DAT_0057f588;
  if (DAT_0057f58c != 0) {
    puVar2 = (unsigned int)(uint)*(unsigned int)(DAT_0057f58c + 8);
  }
  if (DAT_0057f58c != 0 && puVar2 != (unsigned char *)0x0) {
    *(unsigned char *)(DAT_0057f58c + 0x35) = 1;
    *(unsigned char *)(temp_v0 + 0x19c4) = 1;
    FUN_00165088(temp_v0,*(unsigned char *)(temp_v0 + 9));
    *(unsigned char *)(temp_v0 + 8) = 3;
    *(unsigned char *)(temp_v0 + 0x34) = 0;
    *(unsigned char *)(temp_v0 + 0x35) = 0;
  }
  return;
}
