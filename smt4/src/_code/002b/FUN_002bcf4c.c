/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bcf4c` (_code @ 0x2bcf4c, 0x74 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int iRam00000000; /* 0x0 */
extern int DAT_004e3154; /* 0x4e3154 */
extern int DAT_004e3158; /* 0x4e3158 */

/* Unsupported intrinsic, declaration required: coprocessor_function (CALLOTHER). */
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
/* WARNING: Removing unreachable block (ram,0x002bd2dc) */
/* WARNING: Removing unreachable block (ram,0x002bd76c) */

unsigned long long FUN_002bcf4c(unsigned int param_1)

{
/* irregular: irregular input(s): in_ZR, in_cr0, in_cr2, in_cr5; 15 native warning(s); review required */
  char in_ZR;
  unsigned int in_cr0;
  unsigned int in_cr2;
  unsigned int in_cr5;
  
  if (in_ZR == '\0') {
    coprocessor_function(0,3,0,in_cr5,in_cr2,in_cr0);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (0 < DAT_004e3158) {
    if (0 < DAT_004e3158) {
      iRam00000000 = DAT_004e3154;
      return romwright_piece_4_4(((int)param_1 >> 2) << (param_1 & 0xff),DAT_004e3154 << 1);
    }
    iRam00000000 = DAT_004e3154;
    DAT_004e3158 = 0xb4;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return 0x4e315400000000;
}
