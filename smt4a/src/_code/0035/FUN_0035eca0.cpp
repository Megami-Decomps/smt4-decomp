/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035eca0` (_code @ 0x35eca0, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003283ac(int);

extern unsigned int DAT_0057113c; /* 0x57113c */

extern unsigned int FUN_00236038(void);
/* Supplied declaration required: FUN_003283ac. */
extern int FUN_004ee568(unsigned int);


unsigned int FUN_0035eca0(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_00236038();
  temp_v1 = FUN_004ee568(DAT_0057113c);
  FUN_003283ac(((unsigned int)*(unsigned short *)(*(int *)(temp_v1 + 0x28) + 0x110) & (1 << (temp_v0 & 0xff))) != 0);
  return 1;
}

} /* extern "C" */
