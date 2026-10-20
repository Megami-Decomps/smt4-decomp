/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00133508` (_code @ 0x133508, 0xc4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00135ac4(int, int, int);
int FUN_002e6e14(int);
int FUN_00307bf4(...);
int vectorCount32_00307c16(int *);
int vectorCount32_00307c1e(...);
int FUN_0030ed3c(...);
int rt_memcpy_w(int, unsigned int, int);

/* stack frame of param_3: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp28; /* 0x28: local_28 */
} param_3_stack;

extern int vectorGrowCapacity_0012d4a2(unsigned int, int *);
/* Supplied declaration required: FUN_00135ac4. */
extern int rt_malloc(void);
/* Supplied declaration required: FUN_002e6e14. */
/* Supplied declaration required: FUN_00307bf4. */
/* Supplied declaration required: vectorCount32_00307c16. */
/* Supplied declaration required: vectorCount32_00307c1e. */
/* Supplied declaration required: FUN_0030ed3c. */
/* Supplied declaration required: rt_memcpy_w. */


void FUN_00133508(int *param_1,int param_2,unsigned int param_3)

{
/* irregular: 7 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  
  temp_v0 = vectorCount32_00307c1e();
  temp_v1 = vectorCount32_00307c16(param_1);
  if (temp_v1 < temp_v0) {
    temp_v7 = param_1[1];
    param_1[1] = temp_v7 + 0x20;
    FUN_0030ed3c(param_1,temp_v7);
    FUN_00135ac4(param_2,temp_v7 - 0x20,temp_v7);
    rt_memcpy_w(param_2,param_3,0x20);
  }
  else {
    temp_v2 = vectorCount32_00307c16(param_1);
    temp_v3 = vectorGrowCapacity_0012d4a2(temp_v2,param_1);
    temp_v4 = rt_malloc();
    FUN_00307bf4(*param_1,param_2,temp_v4,param_1);
    FUN_0030ed3c(param_1,((param_2 - *param_1) & 0xffffffe0U) + temp_v4,param_3);
    FUN_00307bf4(param_2,param_1[1],((param_2 - *param_1) & 0xffffffe0U) + temp_v4 + 0x20,param_1);
    temp_v5 = vectorCount32_00307c16(param_1);
    temp_v6 = *param_1;
    for (temp_v7 = temp_v6; temp_v7 != param_1[1]; temp_v7 = temp_v7 + 0x20) {
    }
    vectorCount32_00307c1e(param_1);
    FUN_002e6e14(temp_v6);
    *param_1 = temp_v4;
    param_1[2] = temp_v3 * 0x20 + temp_v4;
    param_1[1] = temp_v5 * 0x20 + temp_v4 + 0x20;
  }
  return;
}

} /* extern "C" */
