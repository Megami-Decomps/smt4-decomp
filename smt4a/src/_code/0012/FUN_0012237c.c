/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012237c` (_code @ 0x12237c, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern signed char DAT_00594982; /* 0x594982 */
extern unsigned int DAT_00594b58; /* 0x594b58 */
extern unsigned int DAT_00594b5c; /* 0x594b5c */

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: FUN_001a0eb0. */
/* Supplied declaration required: FUN_004311c0. */
extern void nn_cfg_CTR_Initialize(void);


unsigned long long FUN_0012237c(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  if (DAT_00594982 == '\0') {
    nn_cfg_CTR_Initialize();
    temp_v0 = 0;
    FUN_004311c0();
    DAT_00594b58 = temp_v0;
    DAT_00594b5c = temp_v1;
    FUN_001a0eb0();
    DAT_00594982 = '\x01';
  }
  return romwright_piece_4_4(DAT_00594b5c,DAT_00594b58);
}
