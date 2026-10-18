/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c7bd4` (_code @ 0x2c7bd4, 0xbc bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_001f7090. */
/* Supplied declaration required: FUN_0024fab8. */
/* Supplied declaration required: FUN_0024fd10. */
/* Supplied declaration required: FUN_002691f0. */
/* Supplied declaration required: FUN_00269404. */
/* Supplied declaration required: FUN_00269594. */
/* Supplied declaration required: FUN_002e7c30. */


int * FUN_002c7bd4(int param_1)

{
/* irregular: 7 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  int *piVar3;
  unsigned int temp_v1;
  
  piVar3 = *(int **)(*(int *)(param_1 + 0x30) + 0x24);
  piVar1 = piVar3;
  FUN_0024fd10();
  FUN_0024fab8(piVar1,**(unsigned short **)(param_1 + 0x30),param_1 + 0xc);
  temp_v1 = (unsigned int)**(unsigned short **)(param_1 + 0x30);
  if (piVar1[0xc] != 0) {
    FUN_00269594();
  }
  FUN_00269404(temp_v1,*piVar1,piVar3);
  piVar1[0xc] = temp_v1;
  if (piVar1[0xb] == 0) {
    temp_v0 = *piVar1;
    FUN_001f7090();
    piVar1[0xb] = temp_v0;
    *(int *)(temp_v0 + 0x4c) = piVar1[0xc];
  }
  temp_v0 = *(int *)(*(int *)(param_1 + 0x2c) + 0x50);
  if (temp_v0 != 0) {
    FUN_002691f0();
    *(int *)(piVar1[0xb] + 0x50) = temp_v0;
  }
  FUN_002e7c30(piVar1[0xb],*(unsigned int *)(param_1 + 0x2c));
  *(unsigned short *)(piVar1[0xb] + 0xc) = *(unsigned short *)(*(int *)(param_1 + 0x2c) + 0xc);
  return piVar1;
}
