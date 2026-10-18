/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a0e8c` (_code @ 0x1a0e8c, 0xd0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043dc58; /* 0x43dc58 */

/* Supplied declaration required: FUN_00296e90. */
/* Supplied declaration required: FUN_002a46d8. */
/* Supplied declaration required: FUN_002a7218. */
/* Supplied declaration required: FUN_002ae898. */
/* Supplied declaration required: FUN_002b8cc8. */
/* Supplied declaration required: FUN_002c415c. */


void FUN_001a0e8c(void)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = DAT_0043dc58;
  FUN_002ae898(0x2f,0);
  FUN_002a46d8(0x36);
  temp_v1 = 0;
  if (temp_v1 < *(short *)(temp_v0 + 0x74)) {
    do {
      FUN_002b8cc8();
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < *(short *)(temp_v0 + 0x74));
  }
  temp_v1 = 0;
  if (temp_v1 < *(short *)(temp_v0 + 0x7e)) {
    do {
      FUN_002b8cc8();
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < *(short *)(temp_v0 + 0x7e));
  }
  FUN_00296e90();
  if (*(int *)(temp_v0 + 0xb4) != 0) {
    FUN_002a7218();
    *(unsigned int *)(temp_v0 + 0xb4) = 0;
  }
  if (*(int *)(temp_v0 + 0xac) != 0) {
    FUN_002c415c();
    *(unsigned int *)(temp_v0 + 0xac) = 0;
  }
  if (*(int *)(temp_v0 + 0xb0) != 0) {
    FUN_002c415c();
    *(unsigned int *)(temp_v0 + 0xb0) = 0;
  }
  if (temp_v0 != 0) {
    FUN_002c415c(temp_v0);
    DAT_0043dc58 = 0;
  }
  return;
}
