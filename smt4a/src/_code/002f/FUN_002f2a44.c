/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f2a44` (_code @ 0x2f2a44, 0x26 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_0055b22c; /* 0x55b22c */

extern int FUN_002e760a(unsigned int);
extern unsigned int FUN_002e7634(void);
/* Supplied declaration required: FUN_002ece58. */
extern unsigned int *FUN_003022b4(void);


unsigned int * FUN_002f2a44(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  unsigned int temp_v1;
  
  puVar1 = (unsigned int *)FUN_003022b4();
  *puVar1 = (unsigned int)&DAT_0055b22c;
  temp_v0 = FUN_002e760a(0x20);
  temp_v1 = 0;
  if (temp_v0 != 0) {
    temp_v1 = FUN_002e7634();
  }
  FUN_002ece58(puVar1,temp_v1);
  return puVar1;
}
