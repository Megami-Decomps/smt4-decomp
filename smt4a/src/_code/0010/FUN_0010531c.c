/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010531c` (_code @ 0x10531c, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_0055870c; /* 0x55870c */

/* Supplied declaration required: FUN_002ea446. */
extern unsigned int *FUN_002eb77c(void);


unsigned int * FUN_0010531c(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)FUN_002eb77c();
  puVar1[0xf] = 0;
  *puVar1 = (unsigned int)&DAT_0055870c;
  FUN_002ea446(puVar1,puVar1[9]);
  return puVar1;
}
