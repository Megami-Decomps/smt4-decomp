/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c5dc0` (_code @ 0x2c5dc0, 0x28 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
extern int FUN_00128334(void);


/* WARNING: Control flow encountered bad instruction data */

unsigned long long FUN_002c5dc0(unsigned int param_1,unsigned int param_2,unsigned short *param_3)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int unaff_r4;
  
  temp_v0 = FUN_00128334();
  if (-1 < temp_v0) {
    *param_3 = (short)temp_v0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return romwright_piece_4_4(temp_v0,unaff_r4);
}
