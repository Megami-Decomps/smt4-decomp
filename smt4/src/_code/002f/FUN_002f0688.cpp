/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f0688` (_code @ 0x2f0688, 0x3c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0028dcb0(int);

extern unsigned int DAT_0043427c; /* 0x43427c */

extern int FUN_0027e928(unsigned int);
/* Supplied declaration required: FUN_0028dcb0. */
extern unsigned int FUN_00296cc8(unsigned int);


unsigned int FUN_002f0688(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_00296cc8(0);
  temp_v1 = FUN_0027e928(DAT_0043427c);
  FUN_0028dcb0(((unsigned int)*(unsigned short *)(*(int *)(temp_v1 + 0x28) + 0xfa) & (1 << (temp_v0 & 0xff))) != 0);
  return 1;
}

} /* extern "C" */
