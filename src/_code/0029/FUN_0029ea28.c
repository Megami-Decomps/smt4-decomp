/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0029ea28` (_code @ 0x29ea28, 0xdc bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0044e144; /* 0x44e144 */

/* Supplied declaration required: FUN_002bdac0. */
/* Supplied declaration required: FUN_002bf030. */


void FUN_0029ea28(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = DAT_0044e144;
  FUN_002bf030(DAT_0044e144 + 0x418,0);
  FUN_002bf030(temp_v0 + 0x4a4,1);
  FUN_002bf030(temp_v0 + 0x530,2);
  temp_v1 = 0;
  do {
    temp_v2 = temp_v0 + temp_v1 * 0x8c;
    FUN_002bdac0(temp_v2 + 0x7ec,4,0);
    FUN_002bdac0(temp_v2 + 0xd64,1,0);
    temp_v2 = DAT_0044e144;
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 10);
  *(unsigned char *)(DAT_0044e144 + 0x1e60) = 0;
  if ((*(char *)(temp_v2 + 0x1e67) != '\t') &&
     (temp_v1 = *(int *)(temp_v2 + 0x12dc), (temp_v1 == 4 || temp_v1 == 5) || temp_v1 == 6)) {
    *(unsigned int *)(temp_v2 + 0x12e0) = 0;
  }
  *(unsigned int *)(temp_v0 + 0x18) = 0;
  *(unsigned char *)(temp_v0 + 0x12f0) = 0;
  *(unsigned int *)(temp_v0 + 0x1c) = 0;
  *(unsigned char *)(temp_v0 + 0x20) = 0;
  *(unsigned int *)(temp_v2 + 0x10) = 0;
  *(unsigned int *)(temp_v2 + 0x12dc) = 1;
  return;
}
