/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002dfcf4` (_code @ 0x2dfcf4, 0x9c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int *DAT_00447a48; /* 0x447a48 */

/* Supplied declaration required: FUN_00287b64. */
/* Supplied declaration required: FUN_002c0ba8. */


void FUN_002dfcf4(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  puVar1 = DAT_00447a48;
  temp_v1 = 0;
  *(unsigned char *)(DAT_00447a48 + 1) = 1;
  *puVar1 = 0;
  *(unsigned short *)((int)puVar1 + 10) = 0;
  *(unsigned short *)(puVar1 + 3) = 0;
  puVar1[4] = 0;
  do {
    puVar1 = DAT_00447a48;
    if (*(char *)(DAT_00447a48 + temp_v1 * 10 + 7) != '\0') {
      temp_v2 = (int)*(short *)((int)DAT_00447a48 + temp_v1 * 0x28 + 0x3e);
      if (((*(short *)(DAT_00447a48 + temp_v1 * 10 + 0xf) != 0) &&
          (temp_v0 = FUN_002c0ba8(), temp_v0 == 0)) ||
         ((temp_v2 != 0 && (temp_v2 = FUN_002c0ba8(temp_v2), temp_v2 != 0)))) {
        FUN_00287b64((int)(short)puVar1[temp_v1 * 10 + 0xe]);
      }
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 0x18);
  return;
}
