/* NON_MATCHING: romwright 0.5.0 decompilation of `_ZNSt6vectorIS_I9Obj55a87c12AsdAllocatorIS0_EES1_IS3_EE13_C_insert_auxEPS3_RKS3_` (_code @ 0x1344c4, 0xda bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdOperatorDeleteArray(int);
int FUN_00301bd4(int *);
int FUN_00303a3a(...);
int FUN_003078bc(int, int, int, int *);
int vectorCapacity12(...);
int _ZN12AsdAllocatorISt6vectorI9Obj55a87cS_IS1_EEE9constructEPS3_RKS3_(...);
int destroyRangeElem12(int *, int, int);

/* stack frame of param_3: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp28; /* 0x28: local_28 */
} param_3_stack;

extern int rt_malloc(void);
/* Supplied declaration required: asdOperatorDeleteArray. */
/* Supplied declaration required: FUN_00301bd4. */
/* Supplied declaration required: FUN_00303a3a. */
/* Supplied declaration required: FUN_003078bc. */
extern int vectorGrowCapacity_003078de(unsigned int, int *);
/* Supplied declaration required: vectorCapacity12. */
/* Supplied declaration required: _ZN12AsdAllocatorISt6vectorI9Obj55a87cS_IS1_EEE9constructEPS3_RKS3_. */
/* Supplied declaration required: destroyRangeElem12. */
extern int __aeabi_idivmod(int, unsigned int);


void _ZNSt6vectorIS_I9Obj55a87c12AsdAllocatorIS0_EES1_IS3_EE13_C_insert_auxEPS3_RKS3_(int *param_1,int param_2,unsigned int param_3)

{
/* irregular: 7 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  
  temp_v0 = vectorCapacity12();
  temp_v1 = FUN_00301bd4(param_1);
  if (temp_v1 < temp_v0) {
    temp_v5 = param_1[1];
    temp_v4 = temp_v5 - 0xc;
    param_1[1] = temp_v5 + 0xc;
    _ZN12AsdAllocatorISt6vectorI9Obj55a87cS_IS1_EEE9constructEPS3_RKS3_(param_1,temp_v5);
    while (param_2 != temp_v4) {
      temp_v4 = temp_v4 - 0xc;
      temp_v5 = temp_v5 - 0xc;
      FUN_00303a3a(temp_v5,temp_v4);
    }
    FUN_00303a3a(param_2,param_3);
  }
  else {
    temp_v2 = FUN_00301bd4(param_1);
    temp_v4 = vectorGrowCapacity_003078de(temp_v2,param_1);
    temp_v5 = rt_malloc();
    FUN_003078bc(*param_1,param_2,temp_v5,param_1);
    temp_v3 = __aeabi_idivmod(param_2 - *param_1,0xc);
    _ZN12AsdAllocatorISt6vectorI9Obj55a87cS_IS1_EEE9constructEPS3_RKS3_(param_1,temp_v3 * 0xc + temp_v5,param_3);
    temp_v3 = __aeabi_idivmod(param_2 - *param_1,0xc);
    FUN_003078bc(param_2,param_1[1],temp_v3 * 0xc + temp_v5 + 0xc,param_1);
    temp_v3 = FUN_00301bd4(param_1);
    destroyRangeElem12(param_1,*param_1,param_1[1]);
    temp_v6 = *param_1;
    vectorCapacity12(param_1);
    asdOperatorDeleteArray(temp_v6);
    *param_1 = temp_v5;
    param_1[2] = temp_v4 * 0xc + temp_v5;
    param_1[1] = temp_v3 * 0xc + temp_v5 + 0xc;
  }
  return;
}

} /* extern "C" */
