/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003804ac` (_code @ 0x3804ac, 0x50 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_004fe5dc(int, unsigned int, int);

extern unsigned int DAT_0057113c; /* 0x57113c */

extern int FUN_0014aa78(void);
extern int FUN_00236038(unsigned int);
extern unsigned int FUN_004ee568(unsigned int);
/* Supplied declaration required: FUN_004fe5dc. */


unsigned int FUN_003804ac(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v0 = FUN_00236038(0);
  temp_v1 = FUN_004ee568(DAT_0057113c);
  temp_v2 = FUN_0014aa78();
  FUN_004fe5dc(0,temp_v1,*(int *)(temp_v2 + 0x1ed4) + temp_v0 * 0x1d0);
  return 1;
}

} /* extern "C" */
