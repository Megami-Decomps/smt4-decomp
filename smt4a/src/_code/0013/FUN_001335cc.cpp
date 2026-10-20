/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001335cc` (_code @ 0x1335cc, 0xda bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e6e14(int);
int FUN_00307b9a(int, int, int, int *);
int FUN_00307bce(...);
int vecCount24c(...);
int vectorSize24B(int *);
int FUN_0030d27c(...);
int FUN_0030fdc0(int *, int, int);

/* stack frame of param_3: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp28; /* 0x28: local_28 */
} param_3_stack;

extern int rt_malloc(void);
/* Supplied declaration required: FUN_002e6e14. */
/* Supplied declaration required: FUN_00307b9a. */
extern int vectorGrowCapacity_00307bbc(unsigned int, int *);
/* Supplied declaration required: FUN_00307bce. */
/* Supplied declaration required: vecCount24c. */
/* Supplied declaration required: vectorSize24B. */
/* Supplied declaration required: FUN_0030d27c. */
/* Supplied declaration required: FUN_0030fdc0. */
extern int __aeabi_idivmod(int, unsigned int);


void FUN_001335cc(int *param_1,int param_2,unsigned int param_3)

{
/* irregular: 7 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  
  temp_v0 = vecCount24c();
  temp_v1 = vectorSize24B(param_1);
  if (temp_v1 < temp_v0) {
    temp_v5 = param_1[1];
    temp_v4 = temp_v5 - 0x18;
    param_1[1] = temp_v5 + 0x18;
    FUN_0030d27c(param_1,temp_v5);
    while (param_2 != temp_v4) {
      temp_v5 = temp_v5 - 0x18;
      temp_v4 = temp_v4 - 0x18;
      FUN_00307bce(temp_v5,temp_v4);
    }
    FUN_00307bce(param_2,param_3);
  }
  else {
    temp_v2 = vectorSize24B(param_1);
    temp_v4 = vectorGrowCapacity_00307bbc(temp_v2,param_1);
    temp_v5 = rt_malloc();
    FUN_00307b9a(*param_1,param_2,temp_v5,param_1);
    temp_v3 = __aeabi_idivmod(param_2 - *param_1,0x18);
    FUN_0030d27c(param_1,temp_v3 * 0x18 + temp_v5,param_3);
    temp_v3 = __aeabi_idivmod(param_2 - *param_1,0x18);
    FUN_00307b9a(param_2,param_1[1],temp_v3 * 0x18 + temp_v5 + 0x18,param_1);
    temp_v3 = vectorSize24B(param_1);
    FUN_0030fdc0(param_1,*param_1,param_1[1]);
    temp_v6 = *param_1;
    vecCount24c(param_1);
    FUN_002e6e14(temp_v6);
    *param_1 = temp_v5;
    param_1[2] = temp_v4 * 0x18 + temp_v5;
    param_1[1] = temp_v3 * 0x18 + temp_v5 + 0x18;
  }
  return;
}

} /* extern "C" */
