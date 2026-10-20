/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037c618` (_code @ 0x37c618, 0x5c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001631d0(unsigned int, int);
int FUN_0019a5a0(...);
int FUN_0039a17c(unsigned int);
int FUN_003b5fc8(unsigned int);

extern unsigned int *DAT_0057f130; /* 0x57f130 */

/* Supplied declaration required: FUN_001631d0. */
/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_0039a17c. */
/* Supplied declaration required: FUN_003b5fc8. */


void FUN_0037c618(void)

{
/* irregular: 4 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  
  puVar1 = DAT_0057f130;
  FUN_003b5fc8(DAT_0057f130[0x44]);
  temp_v0 = 0;
  do {
    FUN_0039a17c(puVar1[temp_v0 + 0x41]);
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 3);
  FUN_0019a5a0(puVar1[0x4e]);
  FUN_001631d0(*puVar1,0);
  FUN_0019a5a0(puVar1);
  DAT_0057f130 = (unsigned int *)0x0;
  return;
}

} /* extern "C" */
