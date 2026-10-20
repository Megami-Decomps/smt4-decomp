/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001329ba` (_code @ 0x1329ba, 0x32 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001329ec(int *, int, int *);

/* stack frame of param_4: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: FUN_001329ec. */
extern int FUN_002ee988(unsigned int *, unsigned int **);


unsigned long long FUN_001329ba(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int *temp_v2;
  int temp_v3;
  int temp_v4;
  
  temp_v2 = *(unsigned int **)(param_1 + 0x10);
  temp_v1 = *temp_v2;
  temp_v3 = param_3;
  temp_v4 = param_4;
  while (temp_v0 = FUN_002ee988((unsigned int *)&temp_v1,&temp_v2), temp_v0 != 0) {
    temp_v4 = temp_v1;
    FUN_001329ec(&temp_v3,param_1,&temp_v4);
    temp_v1 = temp_v3;
  }
  return romwright_piece_4_4(temp_v2,temp_v1);
}

} /* extern "C" */
