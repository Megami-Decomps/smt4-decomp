/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013400a` (_code @ 0x13400a, 0xbc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdOperatorDeleteArray(int);
int _ZN9Obj55aff4aSERKS_(...);
int _ZNSt6vectorI9Obj55aff412AsdAllocatorIS0_EE10_C_destroyEPS0_S4_(int *);
int _ZSt18uninitialized_copyIP9Obj55aff4S1_12AsdAllocatorIS0_EET0_T_S5_S4_RT1_(...);
int _ZN12AsdAllocatorI9Obj55aff4E9constructEPS0_RKS0_(...);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

extern int rt_malloc(void);
/* Supplied declaration required: asdOperatorDeleteArray. */
/* Supplied declaration required: _ZN9Obj55aff4aSERKS_. */
/* Supplied declaration required: _ZNSt6vectorI9Obj55aff412AsdAllocatorIS0_EE10_C_destroyEPS0_S4_. */
/* Supplied declaration required: _ZSt18uninitialized_copyIP9Obj55aff4S1_12AsdAllocatorIS0_EET0_T_S5_S4_RT1_. */
/* Supplied declaration required: _ZN12AsdAllocatorI9Obj55aff4E9constructEPS0_RKS0_. */


void FUN_0013400a(int *param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 5 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  
  temp_v3 = param_1[1];
  temp_v0 = (temp_v3 - *param_1) >> 3;
  if (temp_v0 < (unsigned int)((param_1[2] - *param_1) >> 3)) {
    temp_v4 = temp_v3 - 8;
    param_1[1] = temp_v3 + 8;
    _ZN12AsdAllocatorI9Obj55aff4E9constructEPS0_RKS0_(param_1,temp_v3,temp_v4,param_4,param_1,param_2);
    while (param_2 != temp_v4) {
      temp_v4 = temp_v4 - 8;
      temp_v3 = temp_v3 - 8;
      _ZN9Obj55aff4aSERKS_(temp_v3,temp_v4);
    }
    _ZN9Obj55aff4aSERKS_(param_2,param_3);
    return;
  }
  temp_v2 = (temp_v0 >> 1) + temp_v0 + (temp_v0 >> 3);
  temp_v1 = temp_v0 + 0x20;
  if (temp_v0 + 0x20 <= temp_v2) {
    temp_v1 = temp_v2;
  }
  temp_v3 = rt_malloc();
  _ZSt18uninitialized_copyIP9Obj55aff4S1_12AsdAllocatorIS0_EET0_T_S5_S4_RT1_(*param_1,param_2,temp_v3,param_1);
  _ZN12AsdAllocatorI9Obj55aff4E9constructEPS0_RKS0_(param_1,((param_2 - *param_1) & 0xfffffff8U) + temp_v3,param_3);
  _ZSt18uninitialized_copyIP9Obj55aff4S1_12AsdAllocatorIS0_EET0_T_S5_S4_RT1_(param_2,param_1[1],((param_2 - *param_1) & 0xfffffff8U) + temp_v3 + 8,param_1);
  temp_v5 = param_1[1];
  temp_v4 = *param_1;
  _ZNSt6vectorI9Obj55aff412AsdAllocatorIS0_EE10_C_destroyEPS0_S4_(param_1);
  asdOperatorDeleteArray(*param_1);
  *param_1 = temp_v3;
  param_1[2] = temp_v1 * 8 + temp_v3;
  param_1[1] = ((temp_v5 - temp_v4) >> 3) * 8 + temp_v3 + 8;
  return;
}

} /* extern "C" */
