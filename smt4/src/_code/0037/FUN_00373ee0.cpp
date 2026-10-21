/* NON_MATCHING: C++ destructor twin requires FUN_00373ee0 -> _ZN9Obj421874D1Ev and vtable base421874 -> _ZTV9Obj421874(size3c) before an honest member implementation; config edits are integrator-only. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
extern unsigned char DAT_0042187c; /* 0x42187c */


unsigned int * FUN_00373ee0(unsigned int *param_1)

{
  unsigned int *puVar1;
  int *piVar2;
  int *piVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  
  *param_1 = (unsigned int)&DAT_0042187c;
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

} /* extern "C" */
