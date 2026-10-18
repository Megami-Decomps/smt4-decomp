/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011681c` (_code @ 0x11681c, 0x26 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_00559d58; /* 0x559d58 */

/* Supplied declaration required: FUN_00116732. */
extern int FUN_002f5966(int);
extern int FUN_002f9ef8(int);
extern int FUN_0030262c(unsigned int *);


int FUN_0011681c(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  *param_1 = (unsigned int)&DAT_00559d58;
  FUN_00116732(param_1);
  temp_v0 = FUN_0030262c(param_1 + 0x12);
  temp_v0 = FUN_002f9ef8(temp_v0 - 0xc);
  temp_v0 = FUN_002f5966(temp_v0 - 0x34);
  return temp_v0 - 8;
}
