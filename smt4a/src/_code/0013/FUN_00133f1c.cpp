/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00133f1c` (_code @ 0x133f1c, 0xee bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e6e14(int);
int FUN_00301d64(...);
int FUN_00301dc2(int);
int FUN_00301e56(...);
int FUN_003079e8(int, int, int, int *);
int vecCount28(int *);
int vectorCountx1C_00307a18(...);

/* stack frame of param_3: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp38; /* 0x38: local_38 */
} param_3_stack;

extern int rt_malloc(void);
/* Supplied declaration required: FUN_002e6e14. */
/* Supplied declaration required: FUN_00301d64. */
/* Supplied declaration required: FUN_00301dc2. */
/* Supplied declaration required: FUN_00301e56. */
/* Supplied declaration required: FUN_003079e8. */
/* Supplied declaration required: vecCount28. */
/* Supplied declaration required: vectorCountx1C_00307a18. */
extern int __aeabi_idivmod(int, unsigned int);


void FUN_00133f1c(int *param_1,int param_2,unsigned int param_3)

{
/* irregular: 7 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  
  temp_v0 = vectorCountx1C_00307a18();
  temp_v1 = vecCount28(param_1);
  if (temp_v1 < temp_v0) {
    temp_v4 = param_1[1];
    temp_v3 = temp_v4 - 0x1c;
    param_1[1] = temp_v4 + 0x1c;
    FUN_00301e56(param_1,temp_v4);
    while (param_2 != temp_v3) {
      temp_v4 = temp_v4 - 0x1c;
      temp_v3 = temp_v3 - 0x1c;
      FUN_00301d64(temp_v4,temp_v3);
    }
    FUN_00301d64(param_2,param_3);
  }
  else {
    temp_v1 = vecCount28(param_1);
    temp_v2 = (temp_v1 >> 1) + temp_v1 + (temp_v1 >> 3);
    temp_v0 = temp_v1 + 0x20;
    if (temp_v1 + 0x20 <= temp_v2) {
      temp_v0 = temp_v2;
    }
    temp_v3 = rt_malloc();
    FUN_003079e8(*param_1,param_2,temp_v3,param_1);
    temp_v4 = __aeabi_idivmod(param_2 - *param_1,0x1c);
    FUN_00301e56(param_1,temp_v4 * 0x1c + temp_v3,param_3);
    temp_v4 = __aeabi_idivmod(param_2 - *param_1,0x1c);
    FUN_003079e8(param_2,param_1[1],temp_v4 * 0x1c + temp_v3 + 0x1c,param_1);
    temp_v4 = vecCount28(param_1);
    temp_v6 = param_1[1];
    for (temp_v5 = *param_1; temp_v5 != temp_v6; temp_v5 = temp_v5 + 0x1c) {
      FUN_00301dc2(temp_v5);
    }
    temp_v5 = *param_1;
    vectorCountx1C_00307a18(param_1);
    FUN_002e6e14(temp_v5);
    *param_1 = temp_v3;
    param_1[2] = temp_v0 * 0x1c + temp_v3;
    param_1[1] = temp_v4 * 0x1c + temp_v3 + 0x1c;
  }
  return;
}

} /* extern "C" */
