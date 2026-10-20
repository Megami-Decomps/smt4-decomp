/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f1798` (_code @ 0x2f1798, 0x4c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0030c59e(int, int, int *, int *);

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
extern int *wordRefMax(int *, int *);
extern int rt_malloc(void);
/* Supplied declaration required: FUN_0030c59e. */
extern int vectorGrowCapacity_0030c5b4(unsigned int, int *);


/* WARNING: Type propagation algorithm not settling */

unsigned long long FUN_002f1798(int *param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  int temp_v1;
  int temp_v2 [3];
  
  temp_v2[1] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  temp_v2[0] = param_2;
  temp_v2[2] = param_4;
  temp_v2[2] = vectorGrowCapacity_0030c5b4(0,param_1);
  piVar1 = (int *)wordRefMax(temp_v2,temp_v2 + 2);
  temp_v0 = *piVar1;
  temp_v1 = rt_malloc();
  *param_1 = temp_v1;
  FUN_0030c59e(temp_v1,temp_v2[0],temp_v2 + 1,param_1);
  param_1[2] = *param_1 + temp_v0 * 4;
  param_1[1] = *param_1 + temp_v2[0] * 4;
  return romwright_piece_4_4(temp_v2[0],param_1);
}

} /* extern "C" */
