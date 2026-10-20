/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ff858` (_code @ 0x2ff858, 0x50 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

extern int *FUN_002e4e86(int *, unsigned int *);
extern unsigned int *rt_malloc(void);
extern unsigned int FUN_002ff8b4(unsigned int, int *);


int * FUN_002ff858(int *param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
  int *piVar1;
  int temp_v0;
  unsigned int *puVar3;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  temp_v2 = param_2;
  temp_v3 = param_4;
  temp_v3 = FUN_002ff8b4(0,param_1);
  piVar1 = (int *)FUN_002e4e86(&temp_v2,(unsigned int *)&temp_v3);
  temp_v0 = *piVar1;
  puVar3 = (unsigned int *)rt_malloc();
  *param_1 = (int)puVar3;
  for (temp_v1 = temp_v2; temp_v1 != 0; temp_v1 = temp_v1 - 1) {
    if (puVar3 != (unsigned int *)0x0) {
      *puVar3 = 0;
    }
    puVar3 = puVar3 + 1;
  }
  param_1[2] = *param_1 + temp_v0 * 4;
  param_1[1] = *param_1 + temp_v2 * 4;
  return param_1;
}

} /* extern "C" */
