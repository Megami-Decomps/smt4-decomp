/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bcb1c` (_code @ 0x2bcb1c, 0x94 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} void_stack;

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

unsigned long long FUN_002bcb1c(void)

{
/* irregular: 10 native warning(s); review required */
  unsigned int unaff_r4;
  
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
  return romwright_piece_4_4(unaff_r4,DAT_004e3154 << 1);
}
