/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001341d4` (_code @ 0x1341d4, 0x80 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

void _ZN4__rw10__rw_throwEiz(int kind, ...);
int asdOperatorDeleteArray(int);
int _ZNSt6vectorI9Obj55aff412AsdAllocatorIS0_EE10_C_destroyEPS0_S4_(int *, int, int);
int _ZSt18uninitialized_copyIP9Obj55aff4S1_12AsdAllocatorIS0_EET0_T_S5_S4_RT1_(int, int, int, int *);
int _ZNKSt6vectorI9Obj55aff412AsdAllocatorIS0_EE4sizeEv(int *);

/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp20; /* 0x20: local_20 */
} param_2_stack;

extern unsigned char LAB_00134258; /* 0x134258 */

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: _ZN4__rw10__rw_throwEiz. */
extern int *_ZSt3maxIjERKT_S2_S2_(unsigned int *, unsigned int *);
/* Supplied declaration required: asdOperatorDeleteArray. */
extern int _ZN12AsdAllocatorI9Obj55aff4E8allocateEjPKv(int *, int, int);
/* Supplied declaration required: _ZNSt6vectorI9Obj55aff412AsdAllocatorIS0_EE10_C_destroyEPS0_S4_. */
/* Supplied declaration required: _ZSt18uninitialized_copyIP9Obj55aff4S1_12AsdAllocatorIS0_EET0_T_S5_S4_RT1_. */
/* Supplied declaration required: _ZNKSt6vectorI9Obj55aff412AsdAllocatorIS0_EE4sizeEv. */
extern unsigned int _ZN4__rw17__rw_new_capacityISt6vectorI9Obj55aff412AsdAllocatorIS2_EEEEjjPKT_(unsigned int, int *);


unsigned long long FUN_001341d4(int *param_1,unsigned int param_2)

{
/* irregular: 5 native warning(s); review required */
  unsigned int temp_v0;
  int *piVar2;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int uStack_1c;
  int *piStack_18;
  unsigned int temp_v5;
  
  piStack_18 = param_1;
  temp_v5 = param_2;
  if (param_2 >= 0x20000000) {
    temp_v4 = 0x1fffffff;
    _ZN4__rw10__rw_throwEiz(8,&LAB_00134258,&LAB_00134258);
  }
  if ((unsigned int)((param_1[2] - *param_1) >> 3) < temp_v5) {
    temp_v0 = _ZNKSt6vectorI9Obj55aff412AsdAllocatorIS0_EE4sizeEv(param_1);
    temp_v4 = _ZN4__rw17__rw_new_capacityISt6vectorI9Obj55aff412AsdAllocatorIS2_EEEEjjPKT_(temp_v0,param_1);
    piVar2 = (int *)_ZSt3maxIjERKT_S2_S2_(&temp_v5,(unsigned int *)&temp_v4);
    temp_v3 = *piVar2;
    temp_v1 = _ZN12AsdAllocatorI9Obj55aff4E8allocateEjPKv(param_1,temp_v3,*param_1);
    _ZSt18uninitialized_copyIP9Obj55aff4S1_12AsdAllocatorIS0_EET0_T_S5_S4_RT1_(*param_1,param_1[1],temp_v1,param_1);
    _ZNSt6vectorI9Obj55aff412AsdAllocatorIS0_EE10_C_destroyEPS0_S4_(param_1,*param_1,param_1[1]);
    asdOperatorDeleteArray(*param_1);
    temp_v2 = _ZNKSt6vectorI9Obj55aff412AsdAllocatorIS0_EE4sizeEv(param_1);
    *param_1 = temp_v1;
    param_1[2] = temp_v1 + temp_v3 * 8;
    param_1[1] = temp_v2 * 8 + temp_v1;
  }
  return romwright_piece_4_4(uStack_1c,temp_v4);
}

} /* extern "C" */
