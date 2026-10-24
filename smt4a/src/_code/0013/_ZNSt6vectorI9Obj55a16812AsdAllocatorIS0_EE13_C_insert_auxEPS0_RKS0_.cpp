/* NON_MATCHING: romwright 0.5.0 decompilation of `_ZNSt6vectorI9Obj55a16812AsdAllocatorIS0_EE13_C_insert_auxEPS0_RKS0_` (_code @ 0x133734, 0xda bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdOperatorDeleteArray(int);
int FUN_00307b44(int, int, int, int *);
int FUN_00307b78(...);
int vectorCountx18_00307b8a(...);
int elemVectorCount(int *);
int _ZN12AsdAllocatorI9Obj55a168E9constructEPS0_RKS0_(...);
int vectorDestroyRangeStride24(int *, int, int);

/* stack frame of param_3: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp28; /* 0x28: local_28 */
} param_3_stack;

extern int rt_malloc(void);
/* Supplied declaration required: asdOperatorDeleteArray. */
/* Supplied declaration required: FUN_00307b44. */
extern int vectorGrowCapacity_00307b66(unsigned int, int *);
/* Supplied declaration required: FUN_00307b78. */
/* Supplied declaration required: vectorCountx18_00307b8a. */
/* Supplied declaration required: elemVectorCount. */
/* Supplied declaration required: _ZN12AsdAllocatorI9Obj55a168E9constructEPS0_RKS0_. */
/* Supplied declaration required: vectorDestroyRangeStride24. */
extern int __aeabi_idivmod(int, unsigned int);


void _ZNSt6vectorI9Obj55a16812AsdAllocatorIS0_EE13_C_insert_auxEPS0_RKS0_(int *param_1,int param_2,unsigned int param_3)

{
/* irregular: 7 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  
  temp_v0 = vectorCountx18_00307b8a();
  temp_v1 = elemVectorCount(param_1);
  if (temp_v1 < temp_v0) {
    temp_v5 = param_1[1];
    temp_v4 = temp_v5 - 0x18;
    param_1[1] = temp_v5 + 0x18;
    _ZN12AsdAllocatorI9Obj55a168E9constructEPS0_RKS0_(param_1,temp_v5);
    while (param_2 != temp_v4) {
      temp_v5 = temp_v5 - 0x18;
      temp_v4 = temp_v4 - 0x18;
      FUN_00307b78(temp_v5,temp_v4);
    }
    FUN_00307b78(param_2,param_3);
  }
  else {
    temp_v2 = elemVectorCount(param_1);
    temp_v4 = vectorGrowCapacity_00307b66(temp_v2,param_1);
    temp_v5 = rt_malloc();
    FUN_00307b44(*param_1,param_2,temp_v5,param_1);
    temp_v3 = __aeabi_idivmod(param_2 - *param_1,0x18);
    _ZN12AsdAllocatorI9Obj55a168E9constructEPS0_RKS0_(param_1,temp_v3 * 0x18 + temp_v5,param_3);
    temp_v3 = __aeabi_idivmod(param_2 - *param_1,0x18);
    FUN_00307b44(param_2,param_1[1],temp_v3 * 0x18 + temp_v5 + 0x18,param_1);
    temp_v3 = elemVectorCount(param_1);
    vectorDestroyRangeStride24(param_1,*param_1,param_1[1]);
    temp_v6 = *param_1;
    vectorCountx18_00307b8a(param_1);
    asdOperatorDeleteArray(temp_v6);
    *param_1 = temp_v5;
    param_1[2] = temp_v4 * 0x18 + temp_v5;
    param_1[1] = temp_v3 * 0x18 + temp_v5 + 0x18;
  }
  return;
}

} /* extern "C" */
