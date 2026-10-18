/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ca6f4` (_code @ 0x2ca6f4, 0xb0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0044e300; /* 0x44e300 */

/* Supplied declaration required: FUN_00152af8. */
/* Supplied declaration required: FUN_002637b4. */
/* Supplied declaration required: FUN_00275e58. */
/* Supplied declaration required: FUN_00291a5c. */
/* Supplied declaration required: FUN_0029c56c. */
/* Supplied declaration required: FUN_002a497c. */
/* Supplied declaration required: FUN_002a5058. */
/* Supplied declaration required: FUN_002a7604. */
/* Supplied declaration required: FUN_002a7aa0. */
/* Supplied declaration required: FUN_002c4360. */
/* Supplied declaration required: FUN_003100c8. */


void FUN_002ca6f4(void)

{
/* irregular: 11 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = DAT_0044e300;
  *(unsigned char *)(DAT_0044e300 + 4) = 1;
  FUN_002a497c(0x3a);
  FUN_003100c8();
  FUN_00152af8(*(unsigned int *)(temp_v0 + 0x8c));
  FUN_002a7aa0(*(unsigned int *)(temp_v0 + 0x8c));
  *(unsigned int *)(temp_v0 + 0x8c) = 0;
  FUN_00152af8(*(unsigned int *)(temp_v0 + 0x90));
  FUN_002a7aa0(*(unsigned int *)(temp_v0 + 0x90));
  *(unsigned int *)(temp_v0 + 0x90) = 0;
  if (*(char *)(temp_v0 + 0x85) != '\0') {
    FUN_002a7604(0);
    FUN_0029c56c(*(unsigned int *)(temp_v0 + 0x88),0);
  }
  FUN_002637b4(*(unsigned int *)(temp_v0 + 0x88));
  *(unsigned int *)(temp_v0 + 0x88) = 0;
  FUN_002a5058();
  FUN_00275e58(0);
  FUN_00291a5c();
  if (DAT_0044e300 != 0) {
    FUN_002c4360();
    DAT_0044e300 = 0;
  }
  return;
}
