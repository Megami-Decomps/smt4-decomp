/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b39f0` (_code @ 0x2b39f0, 0xc8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_004c62a1; /* 0x4c62a1 */
extern unsigned char DAT_004c62a2; /* 0x4c62a2 */
extern unsigned char DAT_004c62a8; /* 0x4c62a8 */
extern int DAT_004c6330; /* 0x4c6330 */

/* Supplied declaration required: FUN_0013b608. */
/* Supplied declaration required: FUN_0013b618. */
/* Supplied declaration required: FUN_002ba2b8. */


/* WARNING: Control flow encountered bad instruction data */

void FUN_002b39f0(void)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v0 = DAT_004c6330;
  temp_v2 = 0;
  temp_v3 = *(int *)(DAT_004c6330 + 0x18) + *(int *)(DAT_004c6330 + 0x28) * 0x1c;
  FUN_0013b608();
  temp_v1 = *(int *)(temp_v0 + 0x28) + 1;
  *(int *)(temp_v0 + 0x28) = temp_v1;
  if ((*(int *)(temp_v0 + 0x38) != 0) &&
     ((*(char *)(temp_v3 + 1) != '\0' ||
      ((temp_v1 == *(int *)(temp_v0 + 0x20) && (*(char *)(temp_v0 + 0x3c) != '\0')))))) {
    temp_v2 = *(int *)(temp_v0 + 0x38);
  }
  if (*(char *)(temp_v3 + 2) != '\0') {
    DAT_004c62a2 = 0;
    DAT_004c62a8 = 0;
    DAT_004c62a1 = 0;
  }
  else if (temp_v1 >= *(int *)(temp_v0 + 0x20)) {
    DAT_004c62a1 = 0;
  }
  else {
    FUN_002ba2b8();
  }
  FUN_0013b618();
  if (temp_v2 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}
