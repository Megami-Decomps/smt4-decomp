/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003efb18` (_code @ 0x3efb18, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int DAT_00573ab0; /* 0x573ab0 */
extern unsigned int DAT_00573ab4; /* 0x573ab4 */
extern int g_btlPartnerAttack; /* 0x573c50 */


unsigned int FUN_003efb18(int param_1)

{
  unsigned int temp_v0;
  
  if (((*(unsigned int *)(param_1 + 0x45a0) & DAT_00573ab0) == 0 &&
       (*(unsigned int *)(param_1 + 0x45a4) & DAT_00573ab4) == 0) || (*(int *)(g_btlPartnerAttack + 0x18) != 2)) {
    temp_v0 = 0;
  }
  else {
    temp_v0 = 1;
  }
  return temp_v0;
}

} /* extern "C" */
