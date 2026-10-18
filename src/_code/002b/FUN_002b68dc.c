/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b68dc` (_code @ 0x2b68dc, 0x1b8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char bRam00000000; /* 0x0 */
extern int DAT_0044ea00; /* 0x44ea00 */

extern int FUN_00138b68(unsigned int);
/* Supplied declaration required: FUN_002ae474. */
/* Supplied declaration required: FUN_002ae49c. */
/* Supplied declaration required: FUN_002c00e8. */


void FUN_002b68dc(void)

{
/* irregular: 3 native warning(s); review required */
  char temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  char *pcVar4;
  char *pcVar5;
  unsigned char temp_v3;
  
  temp_v1 = *(unsigned int *)(DAT_0044ea00 + 0x528);
  FUN_002ae49c();
  FUN_002ae474(temp_v1);
  temp_v2 = FUN_00138b68(temp_v1);
  if ((temp_v2 != 0x500) && (temp_v2 == 0x501)) {
    FUN_002c00e8(temp_v1);
  }
  pcVar5 = (char *)(*(int *)(DAT_0044ea00 + 0x132c) + 1);
  pcVar4 = (char *)(unsigned int)bRam00000000;
  temp_v3 = ((unsigned int)pcVar5 & 0xff) == 0;
  while (!temp_v3) {
    temp_v0 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    *pcVar5 = temp_v0;
    pcVar5 = pcVar5 + 1;
    temp_v3 = temp_v0 == '\0';
  }
  return;
}
