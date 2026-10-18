/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0014c4c8` (_code @ 0x14c4c8, 0x1dc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern unsigned char DAT_004ea168; /* 0x4ea168 */

/* Supplied declaration required: FUN_0014c6a8. */
/* Supplied declaration required: FUN_0014fbc4. */
/* Supplied declaration required: FUN_00150ed8. */
/* Supplied declaration required: FUN_00150f9c. */
/* Supplied declaration required: FUN_00151018. */
/* Supplied declaration required: FUN_00151050. */
/* Supplied declaration required: FUN_00151374. */
/* Supplied declaration required: FUN_002bae7c. */
/* Supplied declaration required: FUN_002baed8. */
/* Supplied declaration required: FUN_002baf30. */
/* Supplied declaration required: FUN_002bafb0. */
/* Supplied declaration required: FUN_002c3820. */
/* Supplied declaration required: FUN_002c38a4. */


void FUN_0014c4c8(int param_1)

{
/* irregular: irregular input(s): in_stack_fffffff4; 14 native warning(s); review required */
  unsigned int *puVar1;
  int *piVar2;
  int *piVar3;
  int temp_v0;
  unsigned int uStack_14;
  int temp_v1;
  unsigned int in_stack_fffffff4;
  
  if (*(char *)(param_1 + 0x1f6) == '\x01') {
    temp_v0 = 0;
    uStack_14 = 0;
    FUN_0014fbc4(&temp_v1);
    temp_v0 = temp_v1;
    if (*(int *)(param_1 + 0x1c0) < *(int *)(param_1 + 0x1bc)) {
      puVar1 = (unsigned int *)(*(int *)(param_1 + 0x1b8) + *(int *)(param_1 + 0x1c0) * 8);
      *puVar1 = temp_v1;
      puVar1[1] = in_stack_fffffff4;
      *(int *)(param_1 + 0x1c0) = *(int *)(param_1 + 0x1c0) + 1;
    }
    FUN_0014c6a8(param_1,&temp_v0);
  }
  FUN_002c38a4(param_1 + 0x1c4);
  piVar3 = *(int **)(param_1 + 0x1d4);
  if (*(int **)(param_1 + 0x1d4) != (int *)(param_1 + 0x1d4)) {
    do {
      piVar2 = (int *)*piVar3;
      (**(romwright_code **)(piVar3[-1] + 8))(piVar3 + -1);
      piVar3 = piVar2;
    } while (piVar2 != (int *)(param_1 + 0x1d4));
  }
  piVar3 = *(int **)(param_1 + 0x1e0);
  if (*(int **)(param_1 + 0x1e0) != (int *)(param_1 + 0x1e0)) {
    do {
      piVar2 = (int *)*piVar3;
      (**(romwright_code **)(piVar3[-1] + 0xc))(piVar3 + -1);
      piVar3 = piVar2;
    } while (piVar2 != (int *)(param_1 + 0x1e0));
  }
  FUN_00151050(&DAT_004ea168);
  FUN_002baed8();
  FUN_00150ed8();
  FUN_002bae7c();
  FUN_00150ed8();
  piVar3 = *(int **)(param_1 + 0x1e0);
  if (*(int **)(param_1 + 0x1e0) != (int *)(param_1 + 0x1e0)) {
    do {
      piVar2 = (int *)*piVar3;
      (**(romwright_code **)(piVar3[-1] + 8))(piVar3 + -1);
      piVar3 = piVar2;
    } while (piVar2 != (int *)(param_1 + 0x1e0));
  }
  FUN_002bafb0();
  FUN_00151018();
  FUN_00150f9c();
  FUN_002baf30();
  FUN_00151374();
  piVar3 = *(int **)(param_1 + 0x1d4);
  if (*(int **)(param_1 + 0x1d4) != (int *)(param_1 + 0x1d4)) {
    do {
      piVar2 = (int *)*piVar3;
      (**(romwright_code **)(piVar3[-1] + 0xc))(piVar3 + -1);
      piVar3 = piVar2;
    } while (piVar2 != (int *)(param_1 + 0x1d4));
  }
  FUN_002c3820(param_1 + 0x1c4);
  return;
}
