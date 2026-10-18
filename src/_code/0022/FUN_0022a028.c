/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0022a028` (_code @ 0x22a028, 0x68 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_2_stack;

extern unsigned char LAB_002d0630; /* 0x2d0630 */

#ifndef ROMWRIGHT_PIECE_3_1_DEFINED
#define ROMWRIGHT_PIECE_3_1_DEFINED
#define romwright_piece_3_1(upper, lower) ((unsigned int)(((unsigned int)(unsigned int)(upper) << 8) | (unsigned char)(lower)))
#endif
/* Supplied declaration required: FUN_002b48dc. */
extern unsigned int FUN_002c0e4c(unsigned int);
extern unsigned int FUN_002c0e9c(void);
extern unsigned int FUN_002c0ec4(unsigned int, unsigned int);


void FUN_0022a028(unsigned char param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2 [2];
  
  temp_v0 = FUN_002c0ec4(5,3);
  temp_v1 = FUN_002c0e9c();
  temp_v0 = FUN_002c0e4c(temp_v0);
  temp_v2[0] = romwright_piece_3_1(temp_v2[0]._1_3_,param_1);
  temp_v2[0] = (temp_v2[0] & 0xff0000ff) | (param_2 << 8);
  FUN_002b48dc(temp_v2,temp_v1,temp_v0,4,&LAB_002d0630);
  return;
}
