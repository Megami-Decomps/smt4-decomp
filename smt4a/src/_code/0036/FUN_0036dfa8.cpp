/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0036dfa8` (_code @ 0x36dfa8, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0019a5a0(int);
int FUN_0019a7f4(int, int);
int FUN_00237210(unsigned int);
int FUN_002e132c(int);

extern unsigned int DAT_0057f210; /* 0x57f210 */

extern int FUN_00164a9c(void);
/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_0019a7f4. */
/* Supplied declaration required: FUN_00237210. */
/* Supplied declaration required: FUN_002e132c. */


void FUN_0036dfa8(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_00164a9c();
  FUN_00237210(*(unsigned int *)(temp_v0 + 0xc));
  FUN_00237210(*(unsigned int *)(temp_v0 + 0x10));
  FUN_0019a7f4(0x22,0);
  FUN_002e132c(0x22);
  FUN_0019a5a0(temp_v0);
  DAT_0057f210 = 0;
  return;
}

} /* extern "C" */
