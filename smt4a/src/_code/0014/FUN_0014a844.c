/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0014a844` (_code @ 0x14a844, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_0061a5cc; /* 0x61a5cc */
extern unsigned int DAT_0061a5d0; /* 0x61a5d0 */


void FUN_0014a844(int param_1,unsigned int param_2)

{
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = param_2;
  temp_v1 = DAT_0061a5d0;
  if (((param_1 != 0x400) && (temp_v0 = DAT_0061a5cc, temp_v1 = param_2, param_1 != 0x401)) &&
     (temp_v1 = DAT_0061a5d0, param_1 == 0x402)) {
    temp_v0 = param_2;
    temp_v1 = param_2;
  }
  DAT_0061a5d0 = temp_v1;
  DAT_0061a5cc = temp_v0;
  return;
}
