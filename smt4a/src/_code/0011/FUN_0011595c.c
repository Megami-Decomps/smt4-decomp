/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011595c` (_code @ 0x11595c, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_00559880; /* 0x559880 */

extern int FUN_002eb7d0(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002ece58. */
extern unsigned int FUN_002eff58(int, unsigned int);
extern unsigned int *FUN_002f2a44(void);


unsigned int * FUN_0011595c(unsigned int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  unsigned int temp_v1;
  
  puVar1 = (unsigned int *)FUN_002f2a44();
  *puVar1 = (unsigned int)&DAT_00559880;
  temp_v0 = FUN_002eb7d0(0x20,0);
  temp_v1 = 0;
  if (temp_v0 != 0) {
    temp_v1 = FUN_002eff58(temp_v0,param_2);
  }
  FUN_002ece58(puVar1,temp_v1);
  return puVar1;
}
