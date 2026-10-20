/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013425c` (_code @ 0x13425c, 0xdc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdOperatorDeleteArray(int);
int vectorCopyHeader(...);
int vectorSize12A(int *);
int FUN_00307940(int, int, int, int *);
int FUN_00307974(...);
int FUN_0030d358(...);

/* stack frame of param_3: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp28; /* 0x28: local_28 */
} param_3_stack;

extern int rt_malloc(void);
/* Supplied declaration required: asdOperatorDeleteArray. */
/* Supplied declaration required: vectorCopyHeader. */
/* Supplied declaration required: vectorSize12A. */
/* Supplied declaration required: FUN_00307940. */
extern int vectorGrowCapacity_00307962(unsigned int, int *);
/* Supplied declaration required: FUN_00307974. */
/* Supplied declaration required: FUN_0030d358. */
extern int __aeabi_idivmod(int, unsigned int);


void FUN_0013425c(int *param_1,int param_2,unsigned int param_3)

{
/* irregular: 6 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  
  temp_v0 = FUN_00307974();
  temp_v1 = vectorSize12A(param_1);
  if (temp_v1 < temp_v0) {
    temp_v6 = param_1[1];
    temp_v5 = temp_v6 - 0xc;
    param_1[1] = temp_v6 + 0xc;
    FUN_0030d358(param_1,temp_v6);
    while (param_2 != temp_v5) {
      temp_v5 = temp_v5 - 0xc;
      temp_v6 = temp_v6 - 0xc;
      vectorCopyHeader(temp_v6,temp_v5);
    }
    vectorCopyHeader(param_2,param_3);
  }
  else {
    temp_v2 = vectorSize12A(param_1);
    temp_v6 = vectorGrowCapacity_00307962(temp_v2,param_1);
    temp_v3 = rt_malloc();
    FUN_00307940(*param_1,param_2,temp_v3,param_1);
    temp_v5 = __aeabi_idivmod(param_2 - *param_1,0xc);
    FUN_0030d358(param_1,temp_v5 * 0xc + temp_v3,param_3);
    temp_v5 = __aeabi_idivmod(param_2 - *param_1,0xc);
    FUN_00307940(param_2,param_1[1],temp_v5 * 0xc + temp_v3 + 0xc,param_1);
    temp_v4 = vectorSize12A(param_1);
    temp_v7 = *param_1;
    for (temp_v5 = temp_v7; temp_v5 != param_1[1]; temp_v5 = temp_v5 + 0xc) {
    }
    FUN_00307974(param_1);
    asdOperatorDeleteArray(temp_v7);
    *param_1 = temp_v3;
    param_1[1] = temp_v4 * 0xc + temp_v3 + 0xc;
    param_1[2] = temp_v6 * 0xc + temp_v3;
  }
  return;
}

} /* extern "C" */
