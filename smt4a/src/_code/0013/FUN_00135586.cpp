/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00135586` (_code @ 0x135586, 0xc2 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdOperatorDeleteArray(int);
int _ZNKSt6vectorIPv12AsdAllocatorIS0_EE4sizeEv(int *);
int _ZSt18uninitialized_copyIPPvS1_12AsdAllocatorIS0_EET0_T_S5_S4_RT1_(...);
int _ZSt13copy_backwardIPPvS1_ET0_T_S3_S2_(unsigned int *, unsigned int *, unsigned int *);
int _ZNKSt6vectorIPv12AsdAllocatorIS0_EE8capacityEv(...);

/* stack frame of param_3: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp28; /* 0x28: local_28 */
} param_3_stack;

/* Supplied declaration required: asdOperatorDeleteArray. */
extern int _ZN4__rw17__rw_new_capacityISt6vectorIPv12AsdAllocatorIS2_EEEEjjPKT_(unsigned int, int *);
/* Supplied declaration required: _ZNKSt6vectorIPv12AsdAllocatorIS0_EE4sizeEv. */
/* Supplied declaration required: _ZSt18uninitialized_copyIPPvS1_12AsdAllocatorIS0_EET0_T_S5_S4_RT1_. */
/* Supplied declaration required: _ZSt13copy_backwardIPPvS1_ET0_T_S3_S2_. */
/* Supplied declaration required: _ZNKSt6vectorIPv12AsdAllocatorIS0_EE8capacityEv. */
extern int _ZN12AsdAllocatorIPvE8allocateEjPKv(int *, int, int);


void FUN_00135586(int *param_1,unsigned int *param_2,unsigned int *param_3)

{
/* irregular: 5 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned int *puVar8;
  int temp_v7;
  
  temp_v0 = _ZNKSt6vectorIPv12AsdAllocatorIS0_EE8capacityEv();
  temp_v1 = _ZNKSt6vectorIPv12AsdAllocatorIS0_EE4sizeEv(param_1);
  if (temp_v1 < temp_v0) {
    puVar8 = (unsigned int *)param_1[1];
    param_1[1] = (int)(puVar8 + 1);
    if (puVar8 != (unsigned int *)0x0) {
      *puVar8 = puVar8[-1];
    }
    _ZSt13copy_backwardIPPvS1_ET0_T_S3_S2_(param_2,puVar8 + -1,puVar8);
    *param_2 = *param_3;
  }
  else {
    temp_v2 = _ZNKSt6vectorIPv12AsdAllocatorIS0_EE4sizeEv(param_1);
    temp_v3 = _ZN4__rw17__rw_new_capacityISt6vectorIPv12AsdAllocatorIS2_EEEEjjPKT_(temp_v2,param_1);
    temp_v4 = _ZN12AsdAllocatorIPvE8allocateEjPKv(param_1,temp_v3,*param_1);
    _ZSt18uninitialized_copyIPPvS1_12AsdAllocatorIS0_EET0_T_S5_S4_RT1_(*param_1,param_2,temp_v4,param_1);
    puVar8 = (unsigned int *)((((int)param_2 - *param_1) & 0xfffffffcU) + temp_v4);
    if (puVar8 != (unsigned int *)0x0) {
      *puVar8 = *param_3;
    }
    _ZSt18uninitialized_copyIPPvS1_12AsdAllocatorIS0_EET0_T_S5_S4_RT1_(param_2,param_1[1],(((int)param_2 - *param_1) & 0xfffffffcU) + temp_v4 + 4,param_1);
    temp_v5 = _ZNKSt6vectorIPv12AsdAllocatorIS0_EE4sizeEv(param_1);
    temp_v7 = *param_1;
    for (temp_v6 = temp_v7; temp_v6 != param_1[1]; temp_v6 = temp_v6 + 4) {
    }
    _ZNKSt6vectorIPv12AsdAllocatorIS0_EE8capacityEv(param_1);
    asdOperatorDeleteArray(temp_v7);
    *param_1 = temp_v4;
    param_1[2] = temp_v3 * 4 + temp_v4;
    param_1[1] = temp_v5 * 4 + temp_v4 + 4;
  }
  return;
}

} /* extern "C" */
