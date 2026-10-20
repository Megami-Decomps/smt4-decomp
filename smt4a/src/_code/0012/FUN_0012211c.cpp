/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012211c` (_code @ 0x12211c, 0x56 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00135b16(unsigned int, unsigned int, int, int *);
int FUN_0030fcf6(unsigned int *);

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

/* Supplied declaration required: FUN_00135b16. */
extern int *FUN_002e4e86(unsigned int *, unsigned int *);
extern int FUN_002e6dac(void);
/* Supplied declaration required: FUN_0030fcf6. */
extern unsigned int FUN_0030fcfe(unsigned int, int *);


int * FUN_0012211c(int *param_1,unsigned int *param_2,unsigned int param_3,unsigned int param_4)

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
  temp_v3 = FUN_0030fcfe(0,param_1);
  temp_v2 = FUN_0030fcf6(param_2);
  piVar1 = (int *)FUN_002e4e86((unsigned int *)&temp_v2,(unsigned int *)&temp_v3);
  temp_v0 = *piVar1;
  temp_v1 = FUN_002e6dac();
  *param_1 = temp_v1;
  FUN_00135b16(*param_2,param_2[1],temp_v1,param_1);
  temp_v1 = FUN_0030fcf6(param_2);
  param_1[1] = temp_v1 * 8 + *param_1;
  param_1[2] = *param_1 + temp_v0 * 8;
  return param_1;
}

} /* extern "C" */
