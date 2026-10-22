/* NON_MATCHING: found outside every function: its address is in FUN_0027f3e4's literal pool; not written yet. */
/* romwright 0.5.0 decompilation of FUN_002c639c for reference (not compiled; its own view of the boundaries):

unsigned int FUN_002c639c(unsigned int *param_1,unsigned int param_2,int param_3)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  char extraout_r1;
  unsigned int *puVar4;
  unsigned int uVar5;
  code *pcVar6;
  int unaff_r6;
  unsigned int uVar7;
  char *pcVar8;
  int in_stack_ffffffa0;
  char acStack_57 [35];
  char *pcStack_34;
  int uStack_30;
  int iStack_2c;
  unsigned int uStack_28;
  int iStack_24;
  int iStack_20;
  unsigned int uStack_1c;
  int iStack_18;
  
  puVar4 = (unsigned int *)((param_3 + 7U) & 0xfffffff8);
  uStack_30 = *puVar4;
  iStack_2c = puVar4[1];
  iVar3 = FUN_0015599c();
  if (iStack_2c < 0) {
    iStack_24 = 0x2d;
  }
  else if ((int)(*param_1 << 0x1e) < 0) {
    iStack_24 = 0x2b;
  }
  else {
    iStack_24 = ((*param_1 & 7) >> 2) << 5;
  }
  if ((iVar3 == 3) || (6 < iVar3)) {
    FUN_001009e8(param_1,param_2,iVar3,iStack_24);
    return 2;
  }
  if ((int)(*param_1 << 0x1a) < 0) {
    uVar7 = param_1[7];
  }
  else {
    uVar7 = 6;
  }
  if (param_2 != 0x65) {
    if (param_2 != 0x66) {
      if (param_2 == 0x67) {
        if ((int)uVar7 < 1) {
          uVar7 = 1;
        }
        uVar5 = uVar7;
        if (0x11 < (int)uVar7) {
          uVar5 = 0x11;
        }
        FUN_002c6202(&iStack_20,acStack_57 + 3,&uStack_30,uVar5,0);
        unaff_r6 = 0;
        uStack_28 = uStack_1c;
        param_2 = uVar7;
        if (-1 < (int)(*param_1 << 0x1c)) {
          if ((int)uStack_1c < (int)uVar7) {
            param_2 = uStack_1c;
          }
          for (; (1 < (int)param_2 && (acStack_57[param_2 + 2] == '0')); param_2 = param_2 - 1) {
          }
        }
        if ((iStack_20 >= (int)uVar7) || (-5 >= iStack_20)) {
          unaff_r6 = 0;
          in_stack_ffffffa0 = 1;
          pcStack_34 = (char *)iStack_20;
          uStack_28 = uStack_1c;
        }
        else {
          if (iStack_20 < 1) {
            param_2 = param_2 - iStack_20;
            unaff_r6 = iStack_20;
          }
          else if ((int)param_2 < (int)(iStack_20 + 1U)) {
            param_2 = iStack_20 + 1U;
          }
          in_stack_ffffffa0 = (iStack_20 - unaff_r6) + 1;
          pcStack_34 = (char *)0x80000000;
        }
      }
    }
    else {
      pcStack_34 = (char *)0x80000000;
      FUN_002c6202(&iStack_20,acStack_57 + 3,&uStack_30,uVar7,1);
      unaff_r6 = 0;
      uStack_28 = uStack_1c;
      param_2 = uStack_1c;
      if (iStack_18 == 0) {
        param_2 = iStack_20 + uVar7 + 1;
      }
      if (-1 < (int)(uVar7 - param_2)) {
        unaff_r6 = -1 - (uVar7 - param_2);
        param_2 = uVar7 + 1;
      }
      in_stack_ffffffa0 = param_2 - uVar7;
    }
  }
  else {
    if ((int)uVar7 >= 0x11) {
      iVar3 = 0x11;
    }
    else {
      iVar3 = uVar7 + 1;
    }
    FUN_002c6202(&iStack_20,acStack_57 + 3,&uStack_30,iVar3,0);
    param_2 = uVar7 + 1;
    uStack_28 = uStack_1c;
    unaff_r6 = 0;
    in_stack_ffffffa0 = 1;
    pcStack_34 = (char *)iStack_20;
    uStack_28 = uStack_1c;
  }
  if ((-1 < (int)(*param_1 << 0x1c)) && ((int)param_2 <= in_stack_ffffffa0)) {
    in_stack_ffffffa0 = -1;
  }
  acStack_57[2] = 0;
  pcVar8 = acStack_57 + 2;
  if (pcStack_34 != (char *)0x80000000) {
    iStack_20 = 2;
    uStack_1c = 0x2b;
    if ((int)pcStack_34 < 0) {
      pcStack_34 = (char *)-(int)pcStack_34;
      uStack_1c = 0x2d;
    }
    while ((iVar3 = iStack_20, iStack_20 = iStack_20 - 1, 0 < iVar3 || (pcStack_34 != (char *)0x0)))
    {
      pcStack_34 = (char *)func_0x0014e6f8(pcStack_34);
      pcVar8 = pcVar8 + -1;
      *pcVar8 = extraout_r1 + '0';
    }
    pcVar8[-1] = (char)uStack_1c;
    if ((int)(*param_1 << 0x14) < 0) {
      cVar2 = 'E';
    }
    else {
      cVar2 = 'e';
    }
    pcVar8 = pcVar8 + -2;
    *pcVar8 = cVar2;
  }
  pcStack_34 = acStack_57 + (2 - (int)pcVar8);
  param_1[6] = (param_1[6] -
               (int)(acStack_57 + (2 - (int)pcVar8) +
                    (iStack_24 != 0) + param_2 + (in_stack_ffffffa0 >> 0x1f))) - 1;
  if (-1 < (int)(*param_1 << 0x1b)) {
    FUN_002c67dc(param_1);
  }
  if (iStack_24 != 0) {
    (*(code *)param_1[1])(iStack_24,param_1[2]);
    param_1[8] = param_1[8] + 1;
  }
  if ((int)(*param_1 << 0x1b) < 0) {
    FUN_002c67dc(param_1);
  }
  while (uVar7 = param_2 - 1, 0 < (int)param_2) {
    if ((unaff_r6 >= 0) && ((int)uStack_28 > unaff_r6)) {
      pcVar6 = (code *)param_1[1];
      cVar2 = acStack_57[unaff_r6 + 3];
      uVar5 = param_1[2];
    }
    else {
      pcVar6 = (code *)param_1[1];
      uVar5 = param_1[2];
      cVar2 = '0';
    }
    (*pcVar6)(cVar2,uVar5);
    unaff_r6 = unaff_r6 + 1;
    param_1[8] = param_1[8] + 1;
    in_stack_ffffffa0 = in_stack_ffffffa0 - 1;
    param_2 = uVar7;
    if (in_stack_ffffffa0 == 0) {
      iVar3 = libcLocaleGetTables();
      (*(code *)param_1[1])
                (*(unsigned char *)((int)*(int **)(iVar3 + 0xc) + **(int **)(iVar3 + 0xc)),param_1[2]);
      param_1[8] = param_1[8] + 1;
    }
  }
  while (pcVar1 = pcStack_34, pcStack_34 = pcStack_34 + -1, 0 < (int)pcVar1) {
    cVar2 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    (*(code *)param_1[1])(cVar2,param_1[2]);
    param_1[8] = param_1[8] + 1;
  }
  FUN_002c6808(param_1);
  return 2;
}
*/
#include "common.h"
