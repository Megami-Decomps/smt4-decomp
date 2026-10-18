/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00230c80` (_code @ 0x230c80, 0x2c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_00230cac; /* 0x230cac */
extern unsigned char DAT_004c5344; /* 0x4c5344 */

/* Supplied declaration required: FUN_002be624. */
extern unsigned char *FUN_002be650(void);


unsigned char * FUN_00230c80(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned char *puVar1;
  
  puVar1 = (unsigned char *)FUN_002be650();
  if (puVar1 == (unsigned char *)0x0) {
    FUN_002be624(&DAT_004c5344,&LAB_00230cac,param_1);
    puVar1 = &DAT_004c5344;
  }
  return puVar1;
}
