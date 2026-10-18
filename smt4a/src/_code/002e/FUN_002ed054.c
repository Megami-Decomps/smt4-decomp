/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ed054` (_code @ 0x2ed054, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 3 slot(s), 10 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned short sp18; /* 0x18: local_18 */
    unsigned int sp20; /* 0x20: local_20 */
} param_3_stack;

#ifndef ROMWRIGHT_PIECE_2_2_DEFINED
#define ROMWRIGHT_PIECE_2_2_DEFINED
#define romwright_piece_2_2(upper, lower) ((unsigned int)(((unsigned int)(unsigned short)(upper) << 16) | (unsigned short)(lower)))
#endif
/* Supplied declaration required: FUN_00131c26. */


int FUN_002ed054(int param_1,unsigned short *param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned short *puStack_1c;
  unsigned short temp_v1;
  unsigned short uStack_16;
  unsigned int temp_v2;
  
  (*(unsigned int *)&temp_v1) = romwright_piece_2_2((short)((unsigned int)param_3 >> 0x10),*param_2);
  temp_v2 = 0;
  temp_v0 = param_1;
  puStack_1c = param_2;
  FUN_00131c26(&temp_v0,param_1,&temp_v1);
  return temp_v0 + 0x14;
}
