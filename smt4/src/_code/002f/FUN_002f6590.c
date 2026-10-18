/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f6590` (_code @ 0x2f6590, 0x7c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int *DAT_0044e190; /* 0x44e190 */

/* Supplied declaration required: FUN_002a780c. */
/* Supplied declaration required: FUN_002b8cc8. */
/* Supplied declaration required: FUN_002c415c. */
/* Supplied declaration required: FUN_002c424c. */
/* Supplied declaration required: FUN_002c43b4. */


void FUN_002f6590(void)

{
/* irregular: 5 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  
  puVar1 = DAT_0044e190;
  temp_v0 = 0;
  if (*(char *)(DAT_0044e190 + 0x120) != '\0') {
    do {
      FUN_002b8cc8();
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < (int)(unsigned int)*(unsigned char *)(puVar1 + 0x120));
  }
  *(unsigned char *)(puVar1 + 0x120) = 0;
  FUN_002c424c(puVar1 + 0x10b,0x29,0xffffffff);
  FUN_002a780c(puVar1[0x8a8]);
  FUN_002c43b4(*puVar1,0);
  FUN_002c415c(puVar1);
  DAT_0044e190 = (unsigned int *)0x0;
  return;
}
