/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004ad02c` (_code @ 0x4ad02c, 0x118 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_4: 4 slot(s), 13 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned char sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_4_stack;

extern unsigned char LAB_004ad144; /* 0x4ad144 */

/* Supplied declaration required: FUN_004d8f4c. */


unsigned char FUN_004ad02c(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  int *piVar1;
  int *piVar2;
  int temp_v0;
  int temp_v1;
  int *piVar5;
  
  temp_v1 = param_1 + 8;
  temp_v0 = temp_v1;
  piVar5 = (int *)temp_v1;
  piVar2 = (int *)*(int *)(param_1 + 4);
  piVar1 = (int *)(param_1 + 4);
  while (piVar2 != (int *)temp_v1) {
    piVar5 = piVar2;
    piVar1 = piVar2;
    if ((unsigned int)piVar2[4] < param_2) {
      piVar5 = (int *)temp_v0;
      piVar1 = piVar2 + 1;
    }
    temp_v0 = (int)piVar5;
    piVar5 = piVar2;
    piVar2 = (int *)*piVar1;
  }
  if ((temp_v0 == temp_v1) || (param_2 < *(unsigned int *)(temp_v0 + 0x10))) {
    temp_v0 = (**(romwright_code **)**(unsigned int **)(param_1 + 0x28))(*(unsigned int **)(param_1 + 0x28),0x1c);
    if (temp_v0 != 0) {
      if ((unsigned int *)(temp_v0 + 0x10) != (unsigned int *)0x0) {
        *(unsigned int *)(temp_v0 + 0x18) = param_4;
        *(unsigned int *)(temp_v0 + 0x10) = param_2;
        *(unsigned int *)(temp_v0 + 0x14) = (param_1 & 0xffffff00) | param_3;
      }
      *(int **)(temp_v0 + 8) = piVar5;
    }
    else {
      (**(romwright_code **)(**(int **)(param_1 + 0x28) + 8))(*(int **)(param_1 + 0x28),&LAB_004ad144,0x1c);
    }
    if (temp_v0 == 0) {
      temp_v0 = param_1 + 8;
    }
    else {
      *piVar1 = temp_v0;
      FUN_004d8f4c((int *)(param_1 + 4),temp_v0);
    }
  }
  return temp_v0 != param_1 + 8;
}
