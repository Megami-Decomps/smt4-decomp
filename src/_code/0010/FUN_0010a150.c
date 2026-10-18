/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010a150` (_code @ 0x10a150, 0x80 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_00464be8; /* 0x464be8 */

extern int FUN_002bf41c(unsigned int);
extern unsigned int *FUN_002c0ac8(void);
/* Supplied declaration required: FUN_002c4360. */
/* Supplied declaration required: FUN_002c45b8. */


void FUN_0010a150(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  
  puVar1 = (unsigned int *)FUN_002c0ac8();
  temp_v0 = FUN_002bf41c(*puVar1);
  if (temp_v0 != 0) {
    FUN_002c45b8(*puVar1,0);
  }
  temp_v0 = FUN_002bf41c(puVar1[1]);
  if (temp_v0 != 0) {
    FUN_002c45b8(puVar1[1],0);
  }
  temp_v0 = FUN_002bf41c(puVar1[2]);
  if (temp_v0 != 0) {
    FUN_002c45b8(puVar1[2],0);
  }
  FUN_002c4360(puVar1);
  DAT_00464be8 = 0;
  return;
}
