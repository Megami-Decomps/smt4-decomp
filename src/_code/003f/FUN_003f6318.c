/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f6318` (_code @ 0x3f6318, 0x3c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_0044e960; /* 0x44e960 */
extern unsigned int DAT_0044e964; /* 0x44e964 */

/* Supplied declaration required: FUN_0017f8f4. */


void FUN_003f6318(unsigned int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned char temp_v0 [4];
  unsigned char temp_v1 [4];
  unsigned char temp_v2 [4];
  
  FUN_0017f8f4(temp_v0,temp_v1,temp_v2);
  DAT_0044e960 = param_1;
  DAT_0044e964 = param_2;
  return;
}
