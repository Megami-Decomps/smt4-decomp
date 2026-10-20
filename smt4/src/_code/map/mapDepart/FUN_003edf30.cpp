/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003edf30` (_code @ 0x3edf30, 0x48 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002c2218(unsigned char *);

extern unsigned int DAT_00447510; /* 0x447510 */
extern unsigned int DAT_00447514; /* 0x447514 */
extern unsigned char DAT_0049f890; /* 0x49f890 */
extern unsigned int DAT_0049f8f8; /* 0x49f8f8 */
extern unsigned int DAT_0049f8fc; /* 0x49f8fc */
extern unsigned int DAT_0049f900; /* 0x49f900 */

/* Supplied declaration required: FUN_002c2218. */


void FUN_003edf30(unsigned int param_1,unsigned int param_2,int param_3)

{
/* irregular: 1 native warning(s); review required */
  *(unsigned int *)(param_3 + 0x18) = param_1;
  *(unsigned int *)(param_3 + 0x1c) = param_2;
  DAT_00447510 = 0;
  DAT_00447514 = 0;
  FUN_002c2218(&DAT_0049f890);
  DAT_0049f8f8 = 0x439b0000;
  DAT_0049f8fc = 0x42340000;
  DAT_0049f900 = 0;
  return;
}

} /* extern "C" */
