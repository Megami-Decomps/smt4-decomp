/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030382c` (_code @ 0x30382c, 0x6c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002ff8ce(unsigned int, unsigned int, int, int *);

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

extern unsigned char DAT_005596b4; /* 0x5596b4 */
extern unsigned char DAT_0055a4c0; /* 0x55a4c0 */

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
extern int *_ZSt3maxIjERKT_S2_S2_(int *, unsigned int *);
extern int rt_malloc(void);
extern unsigned int _ZN4__rw17__rw_new_capacityISt6vectorIPv12AsdAllocatorIS2_EEEEjjPKT_(unsigned int, int *);
extern int _ZNKSt6vectorIPv12AsdAllocatorIS0_EE4sizeEv(unsigned int *);
/* Supplied declaration required: FUN_002ff8ce. */


unsigned long long FUN_0030382c(unsigned int *param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  int *piVar1;
  int *piVar2;
  int temp_v0;
  int temp_v1;
  unsigned int *puVar5;
  int temp_v2;
  int temp_v3;
  unsigned int uStack_18;
  
  puVar5 = (unsigned int *)(param_2 + 8);
  *param_1 = (unsigned int)&DAT_0055a4c0;
  *(unsigned char *)(param_1 + 1) = *(unsigned char *)(param_2 + 4);
  *(unsigned char *)((int)param_1 + 5) = *(unsigned char *)(param_2 + 5);
  piVar1 = (int *)(param_1 + 2);
  *piVar1 = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  temp_v2 = param_2;
  temp_v3 = param_3;
  uStack_18 = param_4;
  temp_v3 = _ZN4__rw17__rw_new_capacityISt6vectorIPv12AsdAllocatorIS2_EEEEjjPKT_(0,piVar1);
  temp_v2 = _ZNKSt6vectorIPv12AsdAllocatorIS0_EE4sizeEv(puVar5);
  piVar2 = (int *)_ZSt3maxIjERKT_S2_S2_(&temp_v2,(unsigned int *)&temp_v3);
  temp_v0 = *piVar2;
  temp_v1 = rt_malloc();
  *piVar1 = temp_v1;
  FUN_002ff8ce(*puVar5,*(unsigned int *)(param_2 + 0xc),temp_v1,piVar1);
  temp_v1 = _ZNKSt6vectorIPv12AsdAllocatorIS0_EE4sizeEv(puVar5);
  param_1[3] = temp_v1 * 4 + *piVar1;
  param_1[4] = *piVar1 + temp_v0 * 4;
  *param_1 = (unsigned int)&DAT_005596b4;
  return romwright_piece_4_4(temp_v2,param_1);
}

} /* extern "C" */
