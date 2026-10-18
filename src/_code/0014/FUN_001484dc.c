/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001484dc` (_code @ 0x1484dc, 0x38 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_004ef9c0; /* 0x4ef9c0 */

extern int FUN_00150144(unsigned char *, int);
/* Supplied declaration required: FUN_002b743c. */


void FUN_001484dc(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned char *puVar2;
  
  puVar2 = &DAT_004ef9c0;
  temp_v0 = FUN_00150144(&DAT_004ef9c0,param_1);
  if (temp_v0 != 0) {
    puVar2 = (unsigned char *)(temp_v0 + 0x18);
  }
  FUN_002b743c(puVar2,param_1 + 4);
  *(unsigned int *)(param_1 + 0x14) = 0;
  return;
}
