/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010c4a6` (_code @ 0x10c4a6, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_3_stack;

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: FUN_002f5d38. */


long long FUN_0010c4a6(unsigned int param_1,int param_2,int param_3)

{
/* irregular: 1 native warning(s); review required */
  unsigned char temp_v0;
  
  if (param_3 != 9) {
    temp_v0 = *(unsigned char *)(param_2 + 0x25);
    FUN_002f5d38();
    return (unsigned long long)(temp_v0 >> 4) << 0x20;
  }
  return romwright_piece_4_4(param_2,3);
}
