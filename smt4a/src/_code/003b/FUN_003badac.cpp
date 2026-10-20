/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003badac` (_code @ 0x3badac, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003465ec(int, int, unsigned int);

extern unsigned char DAT_0059eaf8; /* 0x59eaf8 */
extern unsigned char DAT_0059ec78; /* 0x59ec78 */
extern unsigned char *DAT_0059ee0c; /* 0x59ee0c */
extern unsigned int DAT_0059ee10; /* 0x59ee10 */

/* Supplied declaration required: FUN_003465ec. */


void FUN_003badac(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = *(int *)(param_1 + 0xc);
  DAT_0059ee0c = &DAT_0059ec78;
  DAT_0059ee10 = 8;
  FUN_003465ec(temp_v0,temp_v0 + 0x24,*(unsigned int *)(temp_v0 + 0x8c));
  DAT_0059ee0c = &DAT_0059eaf8;
  DAT_0059ee10 = 8;
  return;
}

} /* extern "C" */
