/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012cfde` (_code @ 0x12cfde, 0x72 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int sysMemClear(unsigned char [40], int);
int _ZN12AsdAllocatorI9Obj55a87cE9constructEPS0_RKS0_(int *, int, unsigned char *);
int _ZN9Obj55a87cC1Ev(unsigned char [40]);

/* stack frame of param_2: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_2_stack;

extern int *_ZSt3maxIjERKT_S2_S2_(int *, unsigned int *);
/* Supplied declaration required: sysMemClear. */
/* Supplied declaration required: _ZN12AsdAllocatorI9Obj55a87cE9constructEPS0_RKS0_. */
/* Supplied declaration required: _ZN9Obj55a87cC1Ev. */
extern int _ZN12AsdAllocatorI9Obj55a87cE8allocateEjPKv(int *, int, unsigned int);
extern unsigned int _ZN4__rw17__rw_new_capacityISt6vectorI9Obj55a87c12AsdAllocatorIS2_EEEEjjPKT_(unsigned int, int *);


int * FUN_0012cfde(int *param_1,int param_2)

{
/* irregular: 3 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned char temp_v3 [40];
  int temp_v4;
  int temp_v5;
  unsigned char *temp_v6;
  
  sysMemClear(temp_v3,0x28);
  _ZN9Obj55a87cC1Ev(temp_v3);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  temp_v4 = param_2;
  temp_v5 = _ZN4__rw17__rw_new_capacityISt6vectorI9Obj55a87c12AsdAllocatorIS2_EEEEjjPKT_(0,param_1);
  piVar1 = (int *)_ZSt3maxIjERKT_S2_S2_(&temp_v4,(unsigned int *)&temp_v5);
  temp_v2 = *piVar1;
  temp_v0 = _ZN12AsdAllocatorI9Obj55a87cE8allocateEjPKv(param_1,temp_v2,0);
  *param_1 = temp_v0;
  temp_v6 = temp_v3;
  for (temp_v1 = temp_v4; temp_v1 != 0; temp_v1 = temp_v1 - 1) {
    _ZN12AsdAllocatorI9Obj55a87cE9constructEPS0_RKS0_(param_1,temp_v0,temp_v6);
    temp_v0 = temp_v0 + 0x28;
  }
  param_1[2] = *param_1 + temp_v2 * 0x28;
  param_1[1] = *param_1 + temp_v4 * 0x28;
  return param_1;
}

} /* extern "C" */
