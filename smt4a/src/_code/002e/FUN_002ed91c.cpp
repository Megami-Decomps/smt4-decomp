/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ed91c` (_code @ 0x2ed91c, 0x52 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0031066a(int, int, int, int *);

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

extern int *_ZSt3maxIjERKT_S2_S2_(int *, unsigned int *);
extern int rt_malloc(int);
/* Supplied declaration required: FUN_0031066a. */
extern unsigned int bufGrowCapacity(unsigned int, int *);


int * FUN_002ed91c(int *param_1,int *param_2,int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  temp_v2 = param_3;
  temp_v3 = param_4;
  temp_v3 = bufGrowCapacity(0,param_1);
  temp_v2 = param_2[1] - *param_2;
  piVar1 = (int *)_ZSt3maxIjERKT_S2_S2_(&temp_v2,(unsigned int *)&temp_v3);
  temp_v1 = *piVar1;
  temp_v0 = rt_malloc(temp_v1);
  *param_1 = temp_v0;
  FUN_0031066a(*param_2,param_2[1],temp_v0,param_1);
  param_1[1] = (param_2[1] - *param_2) + *param_1;
  param_1[2] = *param_1 + temp_v1;
  return param_1;
}

} /* extern "C" */
