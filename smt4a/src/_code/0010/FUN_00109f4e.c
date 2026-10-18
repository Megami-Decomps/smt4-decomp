/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00109f4e` (_code @ 0x109f4e, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 5 slot(s), 5 byte(s) */
typedef struct {
    unsigned char sp14; /* 0x14: local_14 */
    unsigned char sp15; /* 0x15: local_15 */
    unsigned char sp16; /* 0x16: local_16 */
    unsigned char sp17; /* 0x17: local_17 */
    unsigned char sp18; /* 0x18: local_18 */
} param_4_stack;

#ifndef ROMWRIGHT_PIECE_3_1_DEFINED
#define ROMWRIGHT_PIECE_3_1_DEFINED
#define romwright_piece_3_1(upper, lower) ((unsigned int)(((unsigned int)(unsigned int)(upper) << 8) | (unsigned char)(lower)))
#endif
/* Supplied declaration required: FUN_002ec934. */


void FUN_00109f4e(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1;
  unsigned char uStack_13 [3];
  
  temp_v0 = 0x4d264443;
  (*(unsigned int *)&temp_v1) = romwright_piece_3_1((int)((unsigned int)param_4 >> 8),0x4c);
  FUN_002ec934(param_1,&temp_v0,5);
  return;
}
