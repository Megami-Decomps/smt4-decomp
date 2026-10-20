/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001358f2` (_code @ 0x1358f2, 0xb6 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e6e14(void);
int vectorCount2_002f00e8(int *);
int FUN_00307574(...);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_3_stack;

extern int vectorGrowCapacity_0012d4c6(unsigned int, int *);
extern int rt_malloc(void);
/* Supplied declaration required: FUN_002e6e14. */
/* Supplied declaration required: vectorCount2_002f00e8. */
/* Supplied declaration required: FUN_00307574. */


void FUN_001358f2(int *param_1,unsigned short *param_2,unsigned short *param_3)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned short *puVar3;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned short *puVar8;
  int *piVar9;
  
  temp_v0 = param_1[2];
  temp_v5 = *param_1;
  piVar9 = param_1;
  puVar3 = param_2;
  temp_v1 = vectorCount2_002f00e8(param_1);
  if (temp_v1 < (unsigned int)((temp_v0 - temp_v5) >> 1)) {
    puVar3 = (unsigned short *)param_1[1];
    param_1[1] = (int)(puVar3 + 1);
    if (puVar3 != (unsigned short *)0x0) {
      *puVar3 = puVar3[-1];
    }
    puVar8 = puVar3 + -1;
    while (param_2 != puVar8) {
      puVar8 = puVar8 + -1;
      puVar3 = puVar3 + -1;
      *puVar3 = *puVar8;
    }
    *param_2 = *param_3;
    return;
  }
  temp_v2 = vectorCount2_002f00e8(param_1);
  temp_v0 = vectorGrowCapacity_0012d4c6(temp_v2,param_1);
  temp_v5 = rt_malloc();
  FUN_00307574(*param_1,param_2,temp_v5,param_1,piVar9,puVar3);
  puVar3 = (unsigned short *)((((int)param_2 - *param_1) & 0xfffffffeU) + temp_v5);
  if (puVar3 != (unsigned short *)0x0) {
    *puVar3 = *param_3;
  }
  FUN_00307574(param_2,param_1[1],(((int)param_2 - *param_1) & 0xfffffffeU) + temp_v5 + 2,param_1);
  temp_v3 = vectorCount2_002f00e8(param_1);
  for (temp_v4 = *param_1; temp_v4 != param_1[1]; temp_v4 = temp_v4 + 2) {
  }
  FUN_002e6e14();
  *param_1 = temp_v5;
  param_1[2] = temp_v0 * 2 + temp_v5;
  param_1[1] = temp_v3 * 2 + temp_v5 + 2;
  return;
}

} /* extern "C" */
