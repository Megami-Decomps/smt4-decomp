/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00373638` (_code @ 0x373638, 0x2f8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;


void FUN_00373638(int *param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int *piVar3;
  int *piVar4;
  int temp_v2;
  unsigned char temp_v3;
  
  if (param_2 == 0) {
    return;
  }
  temp_v2 = 0;
  if (*(int *)(param_2 + 0x28) != 0) {
    piVar4 = (int *)(*(int *)(param_2 + 0x28) + param_2 + 0x28);
  }
  else {
    piVar4 = (int *)0x0;
  }
  if (piVar4 != (int *)0x0) {
    if (*piVar4 != 0) {
      temp_v0 = *piVar4 + (int)piVar4;
    }
    else {
      temp_v0 = 0;
    }
    if (temp_v0 != 0) {
      if (*piVar4 != 0) {
        temp_v0 = *piVar4 + (int)piVar4;
      }
      else {
        temp_v0 = 0;
      }
      piVar3 = (int *)(temp_v0 + 8);
      temp_v0 = *piVar3;
      if (temp_v0 != 0) {
        piVar3 = (int *)((int)piVar3 + temp_v0);
      }
      if (temp_v0 == 0) {
        piVar3 = (int *)0x0;
      }
      (**(romwright_code **)(*param_1 + 0xc))(param_1,piVar3);
      temp_v0 = *piVar4;
      temp_v3 = temp_v0 != 0;
      if (temp_v3) {
        temp_v0 = temp_v0 + (int)piVar4;
      }
      if (!temp_v3) {
        temp_v0 = 0;
      }
      (**(romwright_code **)(*param_1 + 0xc))(param_1,temp_v0);
    }
    temp_v0 = piVar4[1];
    if (temp_v0 != 0) {
      temp_v1 = (int)piVar4 + temp_v0 + 4;
    }
    else {
      temp_v1 = 0;
    }
    if (temp_v1 != 0) {
      if (temp_v0 != 0) {
        temp_v0 = (int)piVar4 + temp_v0 + 4;
      }
      else {
        temp_v0 = 0;
      }
      piVar3 = (int *)(temp_v0 + 8);
      temp_v0 = *piVar3;
      if (temp_v0 != 0) {
        piVar3 = (int *)((int)piVar3 + temp_v0);
      }
      if (temp_v0 == 0) {
        piVar3 = (int *)0x0;
      }
      (**(romwright_code **)(*param_1 + 0xc))(param_1,piVar3);
      temp_v0 = piVar4[1];
      piVar3 = piVar4 + 1;
      if (temp_v0 != 0) {
        piVar3 = (int *)((int)piVar3 + temp_v0);
      }
      if (temp_v0 == 0) {
        piVar3 = (int *)0x0;
      }
      (**(romwright_code **)(*param_1 + 0xc))(param_1,piVar3);
    }
    temp_v0 = piVar4[2];
    if (temp_v0 != 0) {
      temp_v1 = (int)piVar4 + temp_v0 + 8;
    }
    else {
      temp_v1 = 0;
    }
    if (temp_v1 != 0) {
      if (temp_v0 != 0) {
        temp_v0 = (int)piVar4 + temp_v0 + 8;
      }
      else {
        temp_v0 = 0;
      }
      piVar3 = (int *)(temp_v0 + 8);
      temp_v0 = *piVar3;
      if (temp_v0 != 0) {
        piVar3 = (int *)((int)piVar3 + temp_v0);
      }
      if (temp_v0 == 0) {
        piVar3 = (int *)0x0;
      }
      (**(romwright_code **)(*param_1 + 0xc))(param_1,piVar3);
      temp_v0 = piVar4[2];
      piVar3 = piVar4 + 2;
      if (temp_v0 != 0) {
        piVar3 = (int *)((int)piVar3 + temp_v0);
      }
      if (temp_v0 == 0) {
        piVar3 = (int *)0x0;
      }
      (**(romwright_code **)(*param_1 + 0xc))(param_1,piVar3);
    }
    temp_v0 = piVar4[3];
    if (temp_v0 != 0) {
      temp_v1 = (int)piVar4 + temp_v0 + 0xc;
    }
    else {
      temp_v1 = 0;
    }
    if (temp_v1 != 0) {
      if (temp_v0 != 0) {
        temp_v0 = (int)piVar4 + temp_v0 + 0xc;
      }
      else {
        temp_v0 = 0;
      }
      piVar3 = (int *)(temp_v0 + 8);
      temp_v0 = *piVar3;
      if (temp_v0 != 0) {
        piVar3 = (int *)((int)piVar3 + temp_v0);
      }
      if (temp_v0 == 0) {
        piVar3 = (int *)0x0;
      }
      (**(romwright_code **)(*param_1 + 0xc))(param_1,piVar3);
      temp_v0 = piVar4[3];
      piVar3 = piVar4 + 3;
      if (temp_v0 != 0) {
        piVar3 = (int *)((int)piVar3 + temp_v0);
      }
      if (temp_v0 == 0) {
        piVar3 = (int *)0x0;
      }
      (**(romwright_code **)(*param_1 + 0xc))(param_1,piVar3);
    }
    temp_v0 = piVar4[4];
    if (temp_v0 != 0) {
      temp_v1 = (int)piVar4 + temp_v0 + 0x10;
    }
    else {
      temp_v1 = 0;
    }
    if (temp_v1 != 0) {
      if (temp_v0 != 0) {
        temp_v0 = (int)piVar4 + temp_v0 + 0x10;
      }
      else {
        temp_v0 = 0;
      }
      piVar3 = (int *)(temp_v0 + 8);
      temp_v0 = *piVar3;
      if (temp_v0 != 0) {
        piVar3 = (int *)((int)piVar3 + temp_v0);
      }
      if (temp_v0 == 0) {
        piVar3 = (int *)0x0;
      }
      (**(romwright_code **)(*param_1 + 0xc))(param_1,piVar3);
      temp_v0 = piVar4[4];
      piVar3 = piVar4 + 4;
      if (temp_v0 != 0) {
        piVar3 = (int *)((int)piVar3 + temp_v0);
      }
      if (temp_v0 == 0) {
        piVar3 = (int *)0x0;
      }
      (**(romwright_code **)(*param_1 + 0xc))(param_1,piVar3);
    }
    temp_v0 = piVar4[5];
    if (temp_v0 != 0) {
      temp_v1 = (int)piVar4 + temp_v0 + 0x14;
    }
    else {
      temp_v1 = 0;
    }
    if (temp_v1 != 0) {
      if (temp_v0 != 0) {
        temp_v0 = (int)piVar4 + temp_v0 + 0x14;
      }
      else {
        temp_v0 = 0;
      }
      piVar3 = (int *)(temp_v0 + 8);
      temp_v0 = *piVar3;
      if (temp_v0 != 0) {
        piVar3 = (int *)((int)piVar3 + temp_v0);
      }
      if (temp_v0 == 0) {
        piVar3 = (int *)0x0;
      }
      (**(romwright_code **)(*param_1 + 0xc))(param_1,piVar3);
      if (piVar4[5] != 0) {
        temp_v2 = (int)piVar4 + piVar4[5] + 0x14;
      }
      (**(romwright_code **)(*param_1 + 0xc))(param_1,temp_v2);
    }
    (**(romwright_code **)(*param_1 + 0xc))(param_1,piVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00373928. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(romwright_code **)(*param_1 + 0xc))(param_1,param_2);
  return;
}
