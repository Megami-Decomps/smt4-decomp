/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00387454` (_code @ 0x387454, 0x78 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_003874d4; /* 0x3874d4 */
extern signed char DAT_005b3270; /* 0x5b3270 */

/* Supplied declaration required: FUN_00100388. */
/* Supplied declaration required: FUN_001642e4. */
/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_00387368. */


void FUN_00387454(void)

{
/* irregular: 4 native warning(s); review required */
  unsigned char *puVar1;
  unsigned char *puVar2;
  int temp_v0;
  unsigned char temp_v1 [260];
  
  if (DAT_005b3270 == '\0') {
    temp_v0 = 0;
    do {
      FUN_00100388(temp_v1,&LAB_003874d4,temp_v0 + 1);
      puVar1 = temp_v1;
      FUN_001642e4(temp_v1,0,1,0x80);
      puVar2 = puVar1;
      FUN_00387368();
      *(unsigned char **)(temp_v0 * 4 + 0x635770) = puVar2;
      FUN_0019a5a0(puVar1);
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 0x16);
    DAT_005b3270 = '\x01';
  }
  return;
}
