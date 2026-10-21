/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004080bc` (_code @ 0x4080bc, 0xb0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int controllerSetDestination(unsigned int, int *);
int FUN_00407598(void);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_4_stack;

/* Supplied declaration required: controllerSetDestination. */
/* Supplied declaration required: FUN_00407598. */


void FUN_004080bc(int *param_1,int param_2,int param_3,int param_4)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  int temp_v1;
  int temp_v2;
  unsigned char temp_v3;
  
  param_1[4] = 0;
  *(unsigned char *)(param_1 + 5) = 0;
  temp_v3 = param_2 == 0;
  if (-1 < param_2) {
    param_4 = *param_1;
    temp_v3 = param_4 == param_2;
  }
  if (!temp_v3 && (-1 < param_2 && param_2 <= param_4)) {
    param_1[1] = param_2;
    param_1[0x166] = param_3;
    temp_v0 = *(int *)(*(int *)(*(int *)(param_1[0x165] + 0x34) + 0x48) + param_2 * 4);
    piVar2 = *(int **)(temp_v0 + 0x30);
    temp_v1 = *(int *)(temp_v0 + 0x20);
    temp_v2 = *(int *)(temp_v0 + 0x24);
    param_1[0x16d] = *(int *)(temp_v0 + 0x1c);
    param_1[0x16e] = temp_v1;
    param_1[0x16f] = temp_v2;
    temp_v0 = *piVar2;
    temp_v1 = piVar2[1];
    param_1[0x172] = piVar2[2];
    param_1[0x170] = temp_v0;
    param_1[0x171] = temp_v1;
    FUN_00407598();
  }
  if (*(char *)((int)param_1 + 0x15) == '\0') {
    return;
  }
  param_1[0x182] = param_1[0x185];
  param_1[0x183] = param_1[0x186];
  param_1[0x184] = param_1[0x187];
  controllerSetDestination(*(unsigned int *)(param_1[7] + 4),param_1 + 0x182);
  return;
}

} /* extern "C" */
