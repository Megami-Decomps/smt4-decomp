/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0019e04c` (_code @ 0x19e04c, 0xd4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int nn_math_ARMv6_MTX34CopyAsm(int, int *);

typedef int romwright_code(...);
/* stack frame of param_2: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp40; /* 0x40: local_40 */
} param_2_stack;

/* Supplied declaration required: FUN_0019e04c. */
extern int FUN_001ab8c0(int);
/* Supplied declaration required: nn_math_ARMv6_MTX34CopyAsm. */


unsigned int FUN_0019e04c(int *param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  unsigned int temp_v1;
  int *piVar4;
  int temp_v2;
  int temp_v3;
  unsigned int uStack_3c;
  unsigned int uStack_38;
  unsigned int uStack_34;
  unsigned int uStack_30;
  unsigned int uStack_2c;
  unsigned int uStack_28;
  unsigned int uStack_24;
  unsigned int temp_v4;
  unsigned int uStack_1c;
  unsigned int uStack_18;
  unsigned int temp_v5;
  
  temp_v0 = FUN_001ab8c0(*param_1);
  temp_v1 = 0;
  if (temp_v0 != 0) {
    piVar4 = *(int **)(*(int *)(*(int *)(*param_1 + 8) + 0x2c) + 0x220);
    temp_v0 = (**(romwright_code **)(**(int **)(*(int *)(*(int *)(param_2 + 8) + 0x2c) + 0x220) + 0x14))();
    puVar2 = (unsigned int *)(*(int *)(temp_v0 + 4) + param_1[2] * 0x40);
    temp_v3 = *puVar2;
    uStack_3c = puVar2[1];
    uStack_38 = puVar2[2];
    uStack_34 = puVar2[3];
    uStack_30 = puVar2[4];
    uStack_2c = puVar2[5];
    uStack_28 = puVar2[6];
    uStack_24 = puVar2[7];
    temp_v5 = puVar2[0xb];
    temp_v4 = puVar2[8];
    uStack_1c = puVar2[9];
    uStack_18 = puVar2[10];
    temp_v0 = (**(romwright_code **)(*piVar4 + 0x1c))(piVar4);
    nn_math_ARMv6_MTX34CopyAsm(*(int *)(temp_v0 + 4) + param_1[1] * 0x30,&temp_v3);
    temp_v2 = *param_1;
    for (temp_v0 = *(int *)(temp_v2 + 0xc); temp_v0 != 0; temp_v0 = *(int *)(temp_v0 + 0x18)) {
      FUN_0019e04c((int *)*(unsigned int *)(temp_v0 + 8),temp_v2);
    }
    temp_v1 = 1;
  }
  return temp_v1;
}

} /* extern "C" */
