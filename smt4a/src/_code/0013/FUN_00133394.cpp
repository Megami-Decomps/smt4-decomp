/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00133394` (_code @ 0x133394, 0xe2 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e6e14(int);
int FUN_00307c28(int, int, int, int *);
int FUN_00307c4a(...);
int FUN_00307c56(int *);
int vectorCapacity184(...);
int FUN_0030fdd8(int *, int, int);
int FUN_00311458(...);

/* stack frame of param_3: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp28; /* 0x28: local_28 */
} param_3_stack;

/* Supplied declaration required: FUN_002e6e14. */
/* Supplied declaration required: FUN_00307c28. */
/* Supplied declaration required: FUN_00307c4a. */
/* Supplied declaration required: FUN_00307c56. */
/* Supplied declaration required: vectorCapacity184. */
/* Supplied declaration required: FUN_0030fdd8. */
/* Supplied declaration required: FUN_00311458. */
extern int FUN_00311470(int *, int, int);
extern int FUN_0031147e(unsigned int, int *);
extern int __aeabi_idivmod(int, unsigned int);


void FUN_00133394(int *param_1,int param_2,unsigned int param_3)

{
/* irregular: 7 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  
  temp_v0 = vectorCapacity184();
  temp_v1 = FUN_00307c56(param_1);
  if (temp_v1 < temp_v0) {
    temp_v5 = param_1[1];
    temp_v4 = temp_v5 - 0xb8;
    param_1[1] = temp_v5 + 0xb8;
    FUN_00311458(param_1,temp_v5);
    while (param_2 != temp_v4) {
      temp_v4 = temp_v4 - 0xb8;
      temp_v5 = temp_v5 - 0xb8;
      FUN_00307c4a(temp_v5,temp_v4);
    }
    FUN_00307c4a(param_2,param_3);
  }
  else {
    temp_v2 = FUN_00307c56(param_1);
    temp_v4 = FUN_0031147e(temp_v2,param_1);
    temp_v5 = FUN_00311470(param_1,temp_v4,*param_1);
    FUN_00307c28(*param_1,param_2,temp_v5,param_1);
    temp_v3 = __aeabi_idivmod(param_2 - *param_1,0xb8);
    FUN_00311458(param_1,temp_v3 * 0xb8 + temp_v5,param_3);
    temp_v3 = __aeabi_idivmod(param_2 - *param_1,0xb8);
    FUN_00307c28(param_2,param_1[1],temp_v3 * 0xb8 + temp_v5 + 0xb8,param_1);
    temp_v3 = FUN_00307c56(param_1);
    FUN_0030fdd8(param_1,*param_1,param_1[1]);
    temp_v6 = *param_1;
    vectorCapacity184(param_1);
    FUN_002e6e14(temp_v6);
    *param_1 = temp_v5;
    param_1[2] = temp_v4 * 0xb8 + temp_v5;
    param_1[1] = temp_v3 * 0xb8 + temp_v5 + 0xb8;
  }
  return;
}

} /* extern "C" */
