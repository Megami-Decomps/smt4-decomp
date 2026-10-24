/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012211c` (_code @ 0x12211c, 0x56 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int elemCopyForward(unsigned int, unsigned int, int, int *);
int _ZNKSt6vectorI9Obj55aff412AsdAllocatorIS0_EE4sizeEv(unsigned int *);

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

/* Supplied declaration required: elemCopyForward. */
extern int *_ZSt3maxIjERKT_S2_S2_(unsigned int *, unsigned int *);
extern int rt_malloc(void);
/* Supplied declaration required: _ZNKSt6vectorI9Obj55aff412AsdAllocatorIS0_EE4sizeEv. */
extern unsigned int _ZN4__rw17__rw_new_capacityISt6vectorI9Obj55aff412AsdAllocatorIS2_EEEEjjPKT_(unsigned int, int *);


int * FUN_0012211c(int *param_1,unsigned int *param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  temp_v2 = param_3;
  temp_v3 = param_4;
  temp_v3 = _ZN4__rw17__rw_new_capacityISt6vectorI9Obj55aff412AsdAllocatorIS2_EEEEjjPKT_(0,param_1);
  temp_v2 = _ZNKSt6vectorI9Obj55aff412AsdAllocatorIS0_EE4sizeEv(param_2);
  piVar1 = (int *)_ZSt3maxIjERKT_S2_S2_((unsigned int *)&temp_v2,(unsigned int *)&temp_v3);
  temp_v0 = *piVar1;
  temp_v1 = rt_malloc();
  *param_1 = temp_v1;
  elemCopyForward(*param_2,param_2[1],temp_v1,param_1);
  temp_v1 = _ZNKSt6vectorI9Obj55aff412AsdAllocatorIS0_EE4sizeEv(param_2);
  param_1[1] = temp_v1 * 8 + *param_1;
  param_1[2] = *param_1 + temp_v0 * 8;
  return param_1;
}

} /* extern "C" */
