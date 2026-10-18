/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00457010` (_code @ 0x457010, 0x14c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern unsigned char DAT_0055bc98; /* 0x55bc98 */


unsigned int * FUN_00457010(unsigned int *param_1)

{
  unsigned int *puVar1;
  int *piVar2;
  int *piVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  
  *param_1 = (unsigned int)&DAT_0055bc98;
  puVar5 = (unsigned int *)param_1[4];
  if (puVar5 != (unsigned int *)0x0) {
    puVar4 = (unsigned int *)puVar5[3];
    for (puVar1 = (unsigned int *)puVar5[2]; puVar1 != puVar4; puVar1 = puVar1 + 1) {
      piVar2 = (int *)*puVar1;
      piVar3 = (int *)piVar2[1];
      if (piVar3 != (int *)0x0) {
        (**(romwright_code **)(*piVar2 + 4))(piVar2);
        (**(romwright_code **)(*piVar3 + 0xc))(piVar3,piVar2);
      }
    }
    puVar5[3] = puVar5[2];
    if ((int *)puVar5[1] != (int *)0x0 && puVar5[2] != 0) {
      (**(romwright_code **)(*(int *)puVar5[1] + 0xc))();
    }
    (**(romwright_code **)(*(int *)*puVar5 + 0xc))((int *)*puVar5,puVar5);
    param_1[4] = 0;
  }
  puVar5 = (unsigned int *)param_1[5];
  if (puVar5 != (unsigned int *)0x0) {
    puVar4 = (unsigned int *)puVar5[3];
    for (puVar1 = (unsigned int *)puVar5[2]; puVar1 != puVar4; puVar1 = puVar1 + 1) {
      piVar2 = (int *)*puVar1;
      piVar3 = (int *)piVar2[1];
      if (piVar3 != (int *)0x0) {
        (**(romwright_code **)(*piVar2 + 4))(piVar2);
        (**(romwright_code **)(*piVar3 + 0xc))(piVar3,piVar2);
      }
    }
    puVar5[3] = puVar5[2];
    if ((int *)puVar5[1] != (int *)0x0 && puVar5[2] != 0) {
      (**(romwright_code **)(*(int *)puVar5[1] + 0xc))();
    }
    (**(romwright_code **)(*(int *)*puVar5 + 0xc))((int *)*puVar5,puVar5);
    param_1[5] = 0;
  }
  return param_1;
}
