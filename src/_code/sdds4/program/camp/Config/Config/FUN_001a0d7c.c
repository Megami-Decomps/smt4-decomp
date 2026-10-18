/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a0d7c` (_code @ 0x1a0d7c, 0xd0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043dc58; /* 0x43dc58 */

/* Supplied declaration required: FUN_00297128. */
/* Supplied declaration required: FUN_002a497c. */
/* Supplied declaration required: FUN_002a755c. */
/* Supplied declaration required: FUN_002aeb2c. */
/* Supplied declaration required: FUN_002b9008. */
/* Supplied declaration required: FUN_002c4360. */


void FUN_001a0d7c(void)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = DAT_0043dc58;
  FUN_002aeb2c(0x2f,0);
  FUN_002a497c(0x36);
  temp_v1 = 0;
  if (temp_v1 < *(short *)(temp_v0 + 0x74)) {
    do {
      FUN_002b9008();
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < *(short *)(temp_v0 + 0x74));
  }
  temp_v1 = 0;
  if (temp_v1 < *(short *)(temp_v0 + 0x7e)) {
    do {
      FUN_002b9008();
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < *(short *)(temp_v0 + 0x7e));
  }
  FUN_00297128();
  if (*(int *)(temp_v0 + 0xb4) != 0) {
    FUN_002a755c();
    *(unsigned int *)(temp_v0 + 0xb4) = 0;
  }
  if (*(int *)(temp_v0 + 0xac) != 0) {
    FUN_002c4360();
    *(unsigned int *)(temp_v0 + 0xac) = 0;
  }
  if (*(int *)(temp_v0 + 0xb0) != 0) {
    FUN_002c4360();
    *(unsigned int *)(temp_v0 + 0xb0) = 0;
  }
  if (temp_v0 != 0) {
    FUN_002c4360(temp_v0);
    DAT_0043dc58 = 0;
  }
  return;
}
