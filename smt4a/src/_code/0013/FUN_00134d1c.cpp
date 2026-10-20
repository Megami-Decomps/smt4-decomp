/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00134d1c` (_code @ 0x134d1c, 0xb0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00135b02(unsigned int *, unsigned int *, unsigned int *);
int FUN_002e6e14(void);
int FUN_003077ac(...);
int FUN_003077c6(int *);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_3_stack;

extern int FUN_0012d4b4(unsigned int, int *);
/* Supplied declaration required: FUN_00135b02. */
extern int rt_malloc(void);
/* Supplied declaration required: FUN_002e6e14. */
/* Supplied declaration required: FUN_003077ac. */
/* Supplied declaration required: FUN_003077c6. */


void FUN_00134d1c(int *param_1,unsigned int *param_2,unsigned int *param_3)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int *puVar7;
  int *piVar8;
  
  temp_v0 = param_1[2];
  temp_v5 = *param_1;
  piVar8 = param_1;
  puVar7 = param_2;
  temp_v1 = FUN_003077c6(param_1);
  if (temp_v1 < (unsigned int)((temp_v0 - temp_v5) >> 2)) {
    puVar7 = (unsigned int *)param_1[1];
    param_1[1] = (int)(puVar7 + 1);
    if (puVar7 != (unsigned int *)0x0) {
      *puVar7 = puVar7[-1];
    }
    FUN_00135b02(param_2,puVar7 + -1,puVar7);
    *param_2 = *param_3;
    return;
  }
  temp_v2 = FUN_003077c6(param_1);
  temp_v0 = FUN_0012d4b4(temp_v2,param_1);
  temp_v5 = rt_malloc();
  FUN_003077ac(*param_1,param_2,temp_v5,param_1,piVar8,puVar7);
  puVar7 = (unsigned int *)((((int)param_2 - *param_1) & 0xfffffffcU) + temp_v5);
  if (puVar7 != (unsigned int *)0x0) {
    *puVar7 = *param_3;
  }
  FUN_003077ac(param_2,param_1[1],(((int)param_2 - *param_1) & 0xfffffffcU) + temp_v5 + 4,param_1);
  temp_v3 = FUN_003077c6(param_1);
  for (temp_v4 = *param_1; temp_v4 != param_1[1]; temp_v4 = temp_v4 + 4) {
  }
  FUN_002e6e14();
  *param_1 = temp_v5;
  param_1[2] = temp_v0 * 4 + temp_v5;
  param_1[1] = temp_v3 * 4 + temp_v5 + 4;
  return;
}

} /* extern "C" */
