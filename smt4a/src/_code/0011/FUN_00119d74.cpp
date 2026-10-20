/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00119d74` (_code @ 0x119d74, 0x2e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002f2da0(int *, int, int *);

/* stack frame of param_4: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: FUN_002f2da0. */
extern int FUN_002f2dec(int *, int);


unsigned long long FUN_00119d74(int param_1,unsigned int param_2,int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int uStack_14;
  
  temp_v2 = *(int *)(param_1 + 4);
  temp_v1 = param_1;
  temp_v3 = param_3;
  uStack_14 = param_4;
  while (temp_v0 = FUN_002f2dec(&temp_v2,param_1 + 0xc), temp_v0 != 0) {
    temp_v1 = temp_v2;
    FUN_002f2da0(&temp_v3,param_1,&temp_v1);
    temp_v2 = temp_v3;
  }
  return romwright_piece_4_4(temp_v2,temp_v1);
}

} /* extern "C" */
