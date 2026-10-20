/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b7edc` (_code @ 0x3b7edc, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int scrGetArg(...);

extern int g_btlPartnerAttack; /* 0x573c50 */

/* Supplied declaration required: scrGetArg. */


unsigned int FUN_003b7edc(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v1 = scrGetArg();
  temp_v2 = scrGetArg(1);
  temp_v0 = g_btlPartnerAttack;
  *(unsigned int *)(g_btlPartnerAttack + 0x1c) = temp_v1;
  *(unsigned int *)(temp_v0 + 0x20) = temp_v2;
  return 1;
}

} /* extern "C" */
