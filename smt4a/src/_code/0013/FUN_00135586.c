/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00135586` (_code @ 0x135586, 0xc2 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp28; /* 0x28: local_28 */
} param_3_stack;

/* Supplied declaration required: FUN_002e6e14. */
extern int FUN_002ff8b4(unsigned int, int *);
/* Supplied declaration required: FUN_002ff8c6. */
/* Supplied declaration required: FUN_0030759c. */
/* Supplied declaration required: FUN_003075b6. */
/* Supplied declaration required: FUN_003075ca. */
extern int FUN_0030771a(int *, int, int);


void FUN_00135586(int *param_1,unsigned int *param_2,unsigned int *param_3)

{
/* irregular: 5 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned int *puVar8;
  int temp_v7;
  
  temp_v0 = FUN_003075ca();
  temp_v1 = FUN_002ff8c6(param_1);
  if (temp_v1 < temp_v0) {
    puVar8 = (unsigned int *)param_1[1];
    param_1[1] = (int)(puVar8 + 1);
    if (puVar8 != (unsigned int *)0x0) {
      *puVar8 = puVar8[-1];
    }
    FUN_003075b6(param_2,puVar8 + -1,puVar8);
    *param_2 = *param_3;
  }
  else {
    temp_v2 = FUN_002ff8c6(param_1);
    temp_v3 = FUN_002ff8b4(temp_v2,param_1);
    temp_v4 = FUN_0030771a(param_1,temp_v3,*param_1);
    FUN_0030759c(*param_1,param_2,temp_v4,param_1);
    puVar8 = (unsigned int *)((((int)param_2 - *param_1) & 0xfffffffcU) + temp_v4);
    if (puVar8 != (unsigned int *)0x0) {
      *puVar8 = *param_3;
    }
    FUN_0030759c(param_2,param_1[1],(((int)param_2 - *param_1) & 0xfffffffcU) + temp_v4 + 4,param_1);
    temp_v5 = FUN_002ff8c6(param_1);
    temp_v7 = *param_1;
    for (temp_v6 = temp_v7; temp_v6 != param_1[1]; temp_v6 = temp_v6 + 4) {
    }
    FUN_003075ca(param_1);
    FUN_002e6e14(temp_v7);
    *param_1 = temp_v4;
    param_1[2] = temp_v3 * 4 + temp_v4;
    param_1[1] = temp_v5 * 4 + temp_v4 + 4;
  }
  return;
}
