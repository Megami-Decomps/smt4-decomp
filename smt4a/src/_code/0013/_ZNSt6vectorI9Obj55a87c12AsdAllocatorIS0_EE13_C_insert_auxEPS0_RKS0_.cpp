/* NON_MATCHING: romwright 0.5.0 decompilation of `_ZNSt6vectorI9Obj55a87c12AsdAllocatorIS0_EE13_C_insert_auxEPS0_RKS0_` (_code @ 0x133b48, 0xe2 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdOperatorDeleteArray(int);
int FUN_00307a98(int, int, int, int *);
int FUN_00307aba(...);
int vectorCapacity40(...);
int _ZN12AsdAllocatorI9Obj55a87cE9constructEPS0_RKS0_(...);
int destroyRangeElem40(int *, int, int);
int _ZNKSt6vectorI9Obj55a87c12AsdAllocatorIS0_EE4sizeEv(int *);

/* stack frame of param_3: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp28; /* 0x28: local_28 */
} param_3_stack;

/* Supplied declaration required: asdOperatorDeleteArray. */
/* Supplied declaration required: FUN_00307a98. */
/* Supplied declaration required: FUN_00307aba. */
/* Supplied declaration required: vectorCapacity40. */
/* Supplied declaration required: _ZN12AsdAllocatorI9Obj55a87cE9constructEPS0_RKS0_. */
/* Supplied declaration required: destroyRangeElem40. */
extern int _ZN12AsdAllocatorI9Obj55a87cE8allocateEjPKv(int *, int, int);
/* Supplied declaration required: _ZNKSt6vectorI9Obj55a87c12AsdAllocatorIS0_EE4sizeEv. */
extern int _ZN4__rw17__rw_new_capacityISt6vectorI9Obj55a87c12AsdAllocatorIS2_EEEEjjPKT_(unsigned int, int *);
extern int __aeabi_idivmod(int, unsigned int);


void _ZNSt6vectorI9Obj55a87c12AsdAllocatorIS0_EE13_C_insert_auxEPS0_RKS0_(int *param_1,int param_2,unsigned int param_3)

{
/* irregular: 7 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  
  temp_v0 = vectorCapacity40();
  temp_v1 = _ZNKSt6vectorI9Obj55a87c12AsdAllocatorIS0_EE4sizeEv(param_1);
  if (temp_v1 < temp_v0) {
    temp_v5 = param_1[1];
    temp_v4 = temp_v5 - 0x28;
    param_1[1] = temp_v5 + 0x28;
    _ZN12AsdAllocatorI9Obj55a87cE9constructEPS0_RKS0_(param_1,temp_v5);
    while (param_2 != temp_v4) {
      temp_v4 = temp_v4 - 0x28;
      temp_v5 = temp_v5 - 0x28;
      FUN_00307aba(temp_v5,temp_v4);
    }
    FUN_00307aba(param_2,param_3);
  }
  else {
    temp_v2 = _ZNKSt6vectorI9Obj55a87c12AsdAllocatorIS0_EE4sizeEv(param_1);
    temp_v4 = _ZN4__rw17__rw_new_capacityISt6vectorI9Obj55a87c12AsdAllocatorIS2_EEEEjjPKT_(temp_v2,param_1);
    temp_v5 = _ZN12AsdAllocatorI9Obj55a87cE8allocateEjPKv(param_1,temp_v4,*param_1);
    FUN_00307a98(*param_1,param_2,temp_v5,param_1);
    temp_v3 = __aeabi_idivmod(param_2 - *param_1,0x28);
    _ZN12AsdAllocatorI9Obj55a87cE9constructEPS0_RKS0_(param_1,temp_v3 * 0x28 + temp_v5,param_3);
    temp_v3 = __aeabi_idivmod(param_2 - *param_1,0x28);
    FUN_00307a98(param_2,param_1[1],temp_v3 * 0x28 + temp_v5 + 0x28,param_1);
    temp_v3 = _ZNKSt6vectorI9Obj55a87c12AsdAllocatorIS0_EE4sizeEv(param_1);
    destroyRangeElem40(param_1,*param_1,param_1[1]);
    temp_v6 = *param_1;
    vectorCapacity40(param_1);
    asdOperatorDeleteArray(temp_v6);
    *param_1 = temp_v5;
    param_1[2] = temp_v4 * 0x28 + temp_v5;
    param_1[1] = temp_v3 * 0x28 + temp_v5 + 0x28;
  }
  return;
}

} /* extern "C" */
