/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023599c` (_code @ 0x23599c, 0x51 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: FUN_001558f8. */


/* WARNING: Control flow encountered bad instruction data */

unsigned long long FUN_0023599c(int param_1)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = param_1 >> 0x17;
  temp_v2 = param_1 << 8;
  if (temp_v0 != 0) {
    temp_v2 = temp_v2 | 0x80000000;
  }
  if ((int)temp_v0 >= 0) {
    temp_v1 = -temp_v0 + 0xbe;
    if (temp_v0 < 0xbf) {
      if (temp_v1 >= 0x20) {
        temp_v0 = temp_v2 >> ((-temp_v0 + 0x9e) & 0xff);
      }
      else {
        temp_v0 = temp_v2 << ((0x20 - temp_v1) & 0xff);
      }
      return romwright_piece_4_4(temp_v2 >> (temp_v1 & 0xff),temp_v0);
    }
  }
  else if ((unsigned int)(param_1 << 1) < 0x7f000000) {
    return 0;
  }
  FUN_001558f8();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
