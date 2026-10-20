/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003038a0` (_code @ 0x3038a0, 0x5c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0030fd40(unsigned int, unsigned int, int, int *);
int FUN_0030fd70(unsigned int *);

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

extern int *FUN_002e4e86(unsigned int *, unsigned int *);
/* Supplied declaration required: FUN_0030fd40. */
extern int FUN_0030fd62(int *, int, unsigned int);
/* Supplied declaration required: FUN_0030fd70. */
extern unsigned int FUN_0030fd7e(unsigned int, int *);


int * FUN_003038a0(int *param_1,unsigned int *param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
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
  temp_v3 = FUN_0030fd7e(0,param_1);
  temp_v2 = FUN_0030fd70(param_2);
  piVar1 = (int *)FUN_002e4e86((unsigned int *)&temp_v2,(unsigned int *)&temp_v3);
  temp_v1 = *piVar1;
  temp_v0 = FUN_0030fd62(param_1,temp_v1,0);
  *param_1 = temp_v0;
  FUN_0030fd40(*param_2,param_2[1],temp_v0,param_1);
  temp_v0 = FUN_0030fd70(param_2);
  param_1[2] = *param_1 + temp_v1 * 0x28;
  param_1[1] = temp_v0 * 0x28 + *param_1;
  return param_1;
}

} /* extern "C" */
