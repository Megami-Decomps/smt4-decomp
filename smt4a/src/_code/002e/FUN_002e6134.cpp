/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e6134` (_code @ 0x2e6134, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int msgBoxFlagsClearBit7(unsigned int);

extern unsigned char g_messageMain; /* 0x57f588 */

/* Supplied declaration required: msgBoxFlagsClearBit7. */


void FUN_002e6134(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  
  temp_v0 = (*(int *)((unsigned char *)&g_messageMain + 0x4));
  if (((*(int *)((unsigned char *)&g_messageMain + 0x4)) != 0) && (*(char *)((*(int *)((unsigned char *)&g_messageMain + 0x4)) + 0x95) == '\x02')) {
    puVar1 = (unsigned int *)((*(int *)((unsigned char *)&g_messageMain + 0x4)) + 0xc);
    *(unsigned char *)((*(int *)((unsigned char *)&g_messageMain + 0x4)) + 0x95) = 0;
    if ((*puVar1 & 0x20) == 0) {
      msgBoxFlagsClearBit7(*(unsigned int *)(temp_v0 + 4));
      return;
    }
  }
  return;
}

} /* extern "C" */
