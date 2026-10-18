/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bcfc0` (_code @ 0x2bcfc0, 0x14 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int iRam00000000; /* 0x0 */
extern int DAT_004e3154; /* 0x4e3154 */
extern int DAT_004e3158; /* 0x4e3158 */

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x002bd2e6) overlaps instruction at (ram,0x002bd2e4)
    */
/* WARNING: Removing unreachable block (ram,0x002bcb58) */
/* WARNING: Removing unreachable block (ram,0x002bcb54) */
/* WARNING: Removing unreachable block (ram,0x002bcb5c) */
/* WARNING: Removing unreachable block (ram,0x002bc68c) */
/* WARNING: Removing unreachable block (ram,0x002bd76c) */
/* WARNING: Removing unreachable block (ram,0x002bd2dc) */

unsigned long long FUN_002bcfc0(unsigned int param_1,unsigned int param_2)

{
/* irregular: 9 native warning(s); review required */
  if (DAT_004e3158 < 1) {
    return 0x4e315400000000;
  }
  if (DAT_004e3158 < 1) {
    iRam00000000 = DAT_004e3154;
    DAT_004e3158 = 0xb4;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iRam00000000 = DAT_004e3154;
  return romwright_piece_4_4(((int)param_2 >> 2) << (param_2 & 0xff),DAT_004e3154 << 1);
}
