/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00230e14` (_code @ 0x230e14, 0x2c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_00230e40; /* 0x230e40 */
extern unsigned char DAT_004c5344; /* 0x4c5344 */

/* Supplied declaration required: FUN_002be7fc. */
extern unsigned char *FUN_002be828(void);


unsigned char * FUN_00230e14(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned char *puVar1;
  
  puVar1 = (unsigned char *)FUN_002be828();
  if (puVar1 == (unsigned char *)0x0) {
    FUN_002be7fc(&DAT_004c5344,&LAB_00230e40,param_1);
    puVar1 = &DAT_004c5344;
  }
  return puVar1;
}
