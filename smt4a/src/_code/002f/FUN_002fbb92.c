/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fbb92` (_code @ 0x2fbb92, 0x88 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 3 slot(s), 10 byte(s) */
typedef struct {
    unsigned short sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

#ifndef ROMWRIGHT_PIECE_2_2_DEFINED
#define ROMWRIGHT_PIECE_2_2_DEFINED
#define romwright_piece_2_2(upper, lower) ((unsigned int)(((unsigned int)(unsigned short)(upper) << 16) | (unsigned short)(lower)))
#endif
/* Supplied declaration required: FUN_002e7674. */
extern int FUN_002ee9e4(void);
/* Supplied declaration required: FUN_002ee9f4. */
/* Supplied declaration required: FUN_002eea18. */
/* Supplied declaration required: FUN_002eea5c. */
/* Supplied declaration required: FUN_002eea6a. */
extern short FUN_002eea7c(unsigned int);


void FUN_002fbb92(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 5 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  
  temp_v2 = *(int *)(param_2 + 4);
  temp_v4 = param_3;
  temp_v5 = param_4;
  if (temp_v2 == 0) {
    temp_v3 = param_2 & 0xffff0000;
    FUN_002eea5c(param_1);
    return;
  }
  temp_v3 = param_2;
  temp_v1 = FUN_002ee9e4();
  if (temp_v1 != 0) {
    FUN_002ee9f4(&temp_v3,0);
    FUN_002eea18(&temp_v3,temp_v2,0);
    temp_v5 = romwright_piece_2_2((*(unsigned short *)((unsigned char *)&temp_v5 + 2)),(short)temp_v4);
    FUN_002eea5c(param_1,&temp_v5);
    FUN_002e7674(param_1,temp_v3,temp_v4);
    FUN_002eea6a(&temp_v3);
    return;
  }
  temp_v0 = FUN_002eea7c(param_2);
  temp_v3 = romwright_piece_2_2((*(unsigned short *)((unsigned char *)&temp_v3 + 2)),temp_v0 + 1);
  FUN_002eea5c(param_1);
  FUN_002e7674(param_1,temp_v2,(temp_v3 & 0xffff) << 1);
  return;
}
