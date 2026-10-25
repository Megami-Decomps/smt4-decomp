/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011c03c` (_code @ 0x11c03c, 0x7a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "classes/Obj559edc.h"

extern "C" {

int _ZN12AsdAllocatorI9Obj55950cE9constructEPS0_RKS0_(int *, int, unsigned int);

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int spD8; /* 0xd8: local_d8 */
    unsigned int spDC; /* 0xdc: local_dc */
    unsigned int spE0; /* 0xe0: local_e0 */
} param_1_stack;

extern unsigned char DAT_0055a808; /* 0x55a808 */

extern int *_ZSt3maxIjERKT_S2_S2_(int *, unsigned int *);
/* Supplied declaration required: _ZN12AsdAllocatorI9Obj55950cE9constructEPS0_RKS0_. */
extern int allocElements184(int *, int, unsigned int);
extern unsigned int bufGrowCapacity3(unsigned int, int *);
extern unsigned int _ZN9Obj55950cC1Ev(unsigned char *);


unsigned int * FUN_0011c03c(unsigned int *param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int *piVar2;
  int temp_v1;
  int *piVar4;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  unsigned char temp_v7 [188];
  
  piVar4 = (int *)(param_1 + 3);
  *param_1 = (unsigned int)&DAT_0055a808;
  *(unsigned char *)(param_1 + 1) = 0;
  temp_v0 = _ZN9Obj55950cC1Ev(temp_v7);
  *piVar4 = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  temp_v4 = 0;
  temp_v5 = bufGrowCapacity3(0,piVar4);
  piVar2 = (int *)_ZSt3maxIjERKT_S2_S2_(&temp_v4,(unsigned int *)&temp_v5);
  temp_v3 = *piVar2;
  temp_v1 = allocElements184(piVar4,temp_v3,0);
  *piVar4 = temp_v1;
  temp_v6 = temp_v0;
  for (int temp_v2 = temp_v4; temp_v2 != 0; temp_v2 = temp_v2 - 1) {
    _ZN12AsdAllocatorI9Obj55950cE9constructEPS0_RKS0_(piVar4,temp_v1,temp_v6);
    temp_v1 = temp_v1 + 0xb8;
  }
  param_1[5] = *piVar4 + temp_v3 * 0xb8;
  param_1[4] = *piVar4 + temp_v4 * 0xb8;
  ((Obj559edc *)temp_v7)->Obj559edc::~Obj559edc();
  return param_1;
}

} /* extern "C" */
