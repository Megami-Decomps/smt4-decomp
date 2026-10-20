/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001035cc` (_code @ 0x1035cc, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00123650(void);

extern unsigned char DAT_005c4c10; /* 0x5c4c10 */

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: FUN_00123650. */


unsigned long long FUN_001035cc(void)

{
/* irregular: irregular input(s): in_r3; 2 native warning(s); review required */
  unsigned int in_r3;
  
  FUN_00123650();
  return romwright_piece_4_4((*(unsigned int *)((unsigned char *)&DAT_005c4c10 + 0x4)),in_r3);
}

} /* extern "C" */
