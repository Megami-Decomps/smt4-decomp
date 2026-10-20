/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00133db6` (_code @ 0x133db6, 0xda bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e6e14(int);
int FUN_00307a28(int, int, int, int *);
int vectorSize24A(int *);
int vecCount24b(...);
int FUN_0030c884(...);
int FUN_0030d09c(...);
int FUN_0030fd10(int *, int, int);

/* stack frame of param_3: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp28; /* 0x28: local_28 */
} param_3_stack;

extern int rt_malloc(void);
/* Supplied declaration required: FUN_002e6e14. */
/* Supplied declaration required: FUN_00307a28. */
extern int vectorGrowCapacity_00307a4a(unsigned int, int *);
/* Supplied declaration required: vectorSize24A. */
/* Supplied declaration required: vecCount24b. */
/* Supplied declaration required: FUN_0030c884. */
/* Supplied declaration required: FUN_0030d09c. */
/* Supplied declaration required: FUN_0030fd10. */
extern int __aeabi_idivmod(int, unsigned int);


void FUN_00133db6(int *param_1,int param_2,unsigned int param_3)

{
/* irregular: 7 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  
  temp_v0 = vecCount24b();
  temp_v1 = vectorSize24A(param_1);
  if (temp_v1 < temp_v0) {
    temp_v5 = param_1[1];
    temp_v4 = temp_v5 - 0x18;
    param_1[1] = temp_v5 + 0x18;
    FUN_0030d09c(param_1,temp_v5);
    while (param_2 != temp_v4) {
      temp_v4 = temp_v4 - 0x18;
      temp_v5 = temp_v5 - 0x18;
      FUN_0030c884(temp_v5,temp_v4);
    }
    FUN_0030c884(param_2,param_3);
  }
  else {
    temp_v2 = vectorSize24A(param_1);
    temp_v4 = vectorGrowCapacity_00307a4a(temp_v2,param_1);
    temp_v5 = rt_malloc();
    FUN_00307a28(*param_1,param_2,temp_v5,param_1);
    temp_v3 = __aeabi_idivmod(param_2 - *param_1,0x18);
    FUN_0030d09c(param_1,temp_v3 * 0x18 + temp_v5,param_3);
    temp_v3 = __aeabi_idivmod(param_2 - *param_1,0x18);
    FUN_00307a28(param_2,param_1[1],temp_v3 * 0x18 + temp_v5 + 0x18,param_1);
    temp_v3 = vectorSize24A(param_1);
    FUN_0030fd10(param_1,*param_1,param_1[1]);
    temp_v6 = *param_1;
    vecCount24b(param_1);
    FUN_002e6e14(temp_v6);
    *param_1 = temp_v5;
    param_1[2] = temp_v4 * 0x18 + temp_v5;
    param_1[1] = temp_v3 * 0x18 + temp_v5 + 0x18;
  }
  return;
}

} /* extern "C" */
