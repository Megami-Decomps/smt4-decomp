/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001037b8` (_code @ 0x1037b8, 0x1e bytes) from smt4a.cxi.
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
/* Supplied declaration required: FUN_002e74c4. */


int FUN_001037b8(int param_1,char *param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  unsigned char temp_v0;
  unsigned char uStack_f [3];
  
  (*(unsigned int *)&temp_v0) = romwright_piece_3_1((int)((unsigned int)param_4 >> 8),*param_2 != '\0');
  FUN_002e74c4(*(unsigned int *)(param_1 + 8),&temp_v0,1,0xffffffff);
  return param_1;
}
