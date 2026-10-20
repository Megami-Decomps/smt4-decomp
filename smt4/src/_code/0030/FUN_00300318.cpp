/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00300318` (_code @ 0x300318, 0x34 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int scrGetArg(int);
int FUN_0033b0ac(unsigned int, int, unsigned int);

extern unsigned int btlGetMainState(void);
/* Supplied declaration required: scrGetArg. */
/* Supplied declaration required: FUN_0033b0ac. */


unsigned int FUN_00300318(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned short temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = scrGetArg(0);
  temp_v1 = scrGetArg(1);
  temp_v2 = btlGetMainState();
  FUN_0033b0ac(temp_v2,temp_v0,temp_v1);
  return 1;
}

} /* extern "C" */
