/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00243ce8` (_code @ 0x243ce8, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: FUN_0010284c. */


unsigned long long FUN_00243ce8(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  unsigned char uStack00000000;
  unsigned char temp_v0 [512];
  
  FUN_0010284c(temp_v0,param_4,&uStack00000000);
                    /* WARNING: Treating indirect jump as return */
  return romwright_piece_4_4(param_2,param_1);
}
