/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f5f98` (_code @ 0x2f5f98, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 1 byte(s) */
typedef struct {
    unsigned char sp10; /* 0x10: local_10 */
} param_4_stack;

#ifndef ROMWRIGHT_PIECE_3_1_DEFINED
#define ROMWRIGHT_PIECE_3_1_DEFINED
#define romwright_piece_3_1(upper, lower) ((unsigned int)(((unsigned int)(unsigned int)(upper) << 8) | (unsigned char)(lower)))
#endif
/* Supplied declaration required: FUN_002f5fb0. */


void FUN_002f5f98(int param_1,unsigned char *param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  unsigned char temp_v0;
  unsigned char uStack_f [3];
  unsigned int uStack_c;
  
  (*(unsigned int *)&temp_v0) = romwright_piece_3_1((int)((unsigned int)param_3 >> 8),*param_2);
  uStack_c = param_4;
  FUN_002f5fb0(param_1 + 8,&temp_v0,1,0xffffffff);
  return;
}
