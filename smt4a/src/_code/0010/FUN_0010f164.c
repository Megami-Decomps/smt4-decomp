/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010f164` (_code @ 0x10f164, 0x2a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_0055929c; /* 0x55929c */

/* Supplied declaration required: FUN_0010eff8. */
extern unsigned int *FUN_00115484(void);


unsigned int * FUN_0010f164(unsigned int param_1,int param_2,int param_3)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)FUN_00115484();
  *puVar1 = (unsigned int)&DAT_0055929c;
  if (param_3 == -1) {
    param_3 = 8;
  }
  if (param_2 == -1) {
    param_2 = 0xf;
  }
  FUN_0010eff8(puVar1,param_2,param_3);
  return puVar1;
}
