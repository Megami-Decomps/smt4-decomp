/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00312b28` (_code @ 0x312b28, 0x48 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00295228(unsigned int, int);
int FUN_002b9024(void);

extern int btlGetMainState(void);
/* Supplied declaration required: FUN_00295228. */
/* Supplied declaration required: FUN_002b9024. */


unsigned int FUN_00312b28(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = btlGetMainState();
  if ((((*(unsigned int *)(temp_v0 + 0x44a0) & 2) == 0) &&
      (temp_v2 = (unsigned int)*(unsigned short *)(temp_v0 + 0xf2), temp_v2 != 0)) &&
     (temp_v1 = temp_v2, FUN_002b9024(), temp_v1 != 0)) {
    FUN_00295228(temp_v2,3);
  }
  return 1;
}

} /* extern "C" */
