/* NON_MATCHING: unimplemented 0x800-byte menu/input state machine; reference draft retained and no byte-identical SMT IV twin found. */
/* romwright 0.5.0 decompilation of FUN_002a0b58 for reference (not compiled; its own view of the boundaries):

unsigned int FUN_002a0b58(void)

{
  unsigned short uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned char bVar10;
  unsigned char bVar11;
  
  iVar6 = DAT_00589164;
  if (DAT_00589164 != 0) {
    iVar2 = *(int *)(DAT_00589164 + 0xec) - 1;
    *(int *)(DAT_00589164 + 0xec) = iVar2;
    if (iVar2 < 1) {
      *(unsigned int *)(iVar6 + 0xec) = 0x1e;
      *(unsigned int *)(iVar6 + 0xe8) = 0x3f800000;
      *(float *)(iVar6 + 0xe8) = *(float *)(iVar6 + 0xe8) - 0.053333335f;
    }
    else if (0xf < iVar2) {
      *(float *)(iVar6 + 0xe8) = *(float *)(iVar6 + 0xe8) - 0.053333335f;
    }
    if (*(int *)(iVar6 + 0xec) < 0xf) {
      *(float *)(iVar6 + 0xe8) = *(float *)(iVar6 + 0xe8) + 0.053333335f;
    }
  }
  switch(*(unsigned int *)(iVar6 + 8)) {
  case 0:
    iVar2 = FUN_0018206c(0x24,0);
    if (iVar2 != 0) {
      iVar2 = FUN_00163aa4(iVar6 + 0x5c);
      bVar10 = iVar2 != 0;
      iVar2 = 0;
      if (bVar10) {
        iVar2 = *(int *)(iVar6 + 0x154);
      }
      bVar11 = iVar2 != 0;
      if (bVar10 && bVar11) {
        iVar2 = *(int *)(iVar6 + 0x158);
      }
      if ((bVar10 && bVar11) && iVar2 != 0) {
        uVar1 = FUN_001643b4(0x24,0x1f);
        *(unsigned short *)(iVar6 + 0x14) = uVar1;
        *(short *)(iVar6 + 0x1a) = *(short *)(iVar6 + 0x1a) + 1;
        uVar1 = FUN_001643b4(0x24,0x20);
        *(unsigned short *)(iVar6 + 0x16) = uVar1;
        *(short *)(iVar6 + 0x1a) = *(short *)(iVar6 + 0x1a) + 1;
        uVar1 = FUN_001643b4(0x24,0x21);
        *(unsigned short *)(iVar6 + 0x18) = uVar1;
        *(short *)(iVar6 + 0x1a) = *(short *)(iVar6 + 0x1a) + 1;
        iVar2 = DAT_00589164;
        iVar3 = FUN_002a4860(DAT_00589164 + 0xf0);
        iVar2 = FUN_002a4894(iVar2 + 0xf0);
        FUN_00187180(0x3a,1);
        iVar4 = FUN_00192798();
        FUN_0019de98(iVar4 + (iVar3 + iVar2) * 0x94 + 0x14,0xf4f4f4ff);
        func_0x0024b0e8();
        uVar8 = *(unsigned int *)(iVar6 + 0x154);
        FUN_00275bc8(uVar8,*(unsigned int *)(iVar6 + 0x158));
        *(unsigned int *)(iVar6 + 8) = 1;
        *(unsigned int *)(iVar6 + 0x15c) = uVar8;
      }
    }
    break;
  case 1:
    iVar2 = FUN_002a4860(iVar6 + 0xf0);
    iVar3 = FUN_002a4894(iVar6 + 0xf0);
    uVar9 = iVar2 + iVar3;
    FUN_00187180(0x3a,1);
    FUN_00192798();
    iVar2 = iVar6 + uVar9 * 4;
    iVar3 = *(int *)(iVar2 + 0x28);
    if (-1 < *(short *)(iVar6 + 0x1c)) {
      iVar4 = FUN_00284140();
      if (iVar4 != 6) {
        iVar4 = 9;
        FUN_001517b4(9,1);
        if (iVar4 == 0) goto code_r0x002a0df0;
      }
      if (uVar9 != 0) {
        if (uVar9 != 1) {
          if (uVar9 == 2) {
            DAT_00588fc2 = 0x32;
            uVar8 = FUN_00358c60();
            *(unsigned int *)(iVar6 + 0x30) = uVar8;
          }
        }
        else {
          DAT_00588fc1 = 0x50;
          DAT_00588fc3 = 0x30;
          uVar8 = FUN_003164ac(0x50);
          *(unsigned int *)(iVar6 + 0x2c) = uVar8;
        }
      }
      else {
        DAT_00588fc0 = 0x32;
        uVar8 = FUN_0032b62c();
        *(unsigned int *)(iVar6 + 0x28) = uVar8;
      }
      FUN_00169ddc(0x100020e);
    }
code_r0x002a0df0:
    bVar10 = 0;
    bVar11 = 0;
    iVar4 = FUN_00284140((int)*(short *)(iVar6 + 0x1e));
    if (iVar4 != 1) {
      if (iVar4 == 2) {
        bVar10 = 1;
      }
    }
    else {
      iVar4 = FUN_002e5c50();
      if (iVar4 < 1) {
        bVar10 = 1;
      }
    }
    iVar4 = FUN_00284140((int)*(short *)(iVar6 + 0x20));
    if (iVar4 != 1) {
      if (iVar4 == 2) {
        bVar11 = 1;
      }
    }
    else {
      iVar4 = FUN_002e5c50();
      if (iVar4 < 1) {
        bVar11 = 1;
      }
    }
    if (!bVar10) {
      iVar4 = 4;
      FUN_001517b4(4,0);
      if (iVar4 != 0) {
        iVar4 = *(int *)(iVar2 + 0x28) - 1;
        *(int *)(iVar2 + 0x28) = iVar4;
        if (iVar4 < 1) {
          iVar4 = 0;
        }
        *(int *)(iVar2 + 0x28) = iVar4;
        uVar8 = 4;
        FUN_001517b4(uVar8,0);
      }
      else if (!bVar11) {
        iVar4 = 3;
        FUN_001517b4(3,0);
        if (iVar4 != 0) goto code_r0x002a0ee4;
        iVar4 = FUN_00284140((int)*(short *)(iVar6 + 0x22));
        if ((iVar4 == 1) || (iVar4 == 2)) {
          iVar4 = FUN_001834a4(0x24,0x33);
          iVar7 = FUN_002618c8();
          iVar5 = func_0x00284120((int)*(short *)(iVar6 + 0x22));
          uVar8 = FUN_002e4ea4((iVar7 - iVar5) * 10,(int)**(short **)(iVar4 + 0xc));
          *(unsigned int *)(iVar2 + 0x28) = uVar8;
        }
      }
      else {
code_r0x002a0ee4:
        iVar4 = *(int *)(iVar2 + 0x28) + 1;
        *(int *)(iVar2 + 0x28) = iVar4;
        if (10 < iVar4) {
          iVar4 = 10;
        }
        *(int *)(iVar2 + 0x28) = iVar4;
        uVar8 = 3;
        FUN_001517b4(uVar8,0);
      }
    }
    else {
      iVar4 = *(int *)(iVar2 + 0x28) - 1;
      *(int *)(iVar2 + 0x28) = iVar4;
      if (iVar4 < 1) {
        iVar4 = 0;
      }
      *(int *)(iVar2 + 0x28) = iVar4;
      uVar8 = 4;
      FUN_001517b4(uVar8,0);
    }
    DAT_00588fc0 = func_0x002bd718(*(unsigned int *)(iVar6 + 0x28));
    DAT_00588fc1 = func_0x002a0a20(*(unsigned int *)(iVar6 + 0x2c));
    DAT_00588fc2 = func_0x00316508(*(unsigned int *)(iVar6 + 0x30));
    DAT_00588fc3 = func_0x002e0780(*(unsigned int *)(iVar6 + 0x2c));
    if (*(int *)(iVar2 + 0x28) != iVar3) {
      FUN_00138718();
      uVar8 = func_0x003de09c();
      func_0x0032ccf8(0,uVar8,1);
      uVar8 = func_0x003de09c();
      func_0x0032ccf8(1,uVar8);
      if (uVar9 >= 2) {
        if (uVar9 == 2) {
          FUN_00164288();
          uVar8 = FUN_0014af98();
          FUN_001628c0(0x2a1318,uVar8,2,1);
        }
      }
      else {
        FUN_00169ddc(0x100020e);
      }
    }
    else {
      iVar3 = iVar6 + 0xf0;
      FUN_00228b04(iVar3,1);
      iVar2 = DAT_00589164;
      if (iVar3 != 0) {
        iVar6 = FUN_002a4860(DAT_00589164 + 0xf0);
        iVar2 = FUN_002a4894(iVar2 + 0xf0);
        FUN_00187180(0x3a,1);
        iVar3 = FUN_00192798();
        FUN_0019de98(iVar3 + (iVar6 + iVar2) * 0x94 + 0x14,0xf4f4f4ff);
        func_0x0024b0e8();
      }
      else {
        iVar3 = FUN_002a4894(DAT_00589164 + 0xf0);
        iVar4 = 0;
        do {
          if ((iVar4 != iVar3) &&
             (iVar7 = FUN_00284140((int)*(short *)(iVar2 + iVar4 * 2 + 0x14)), iVar7 == 6)) {
            FUN_00169ddc(0x100020d);
            FUN_002a4964(iVar2 + 0xf0,iVar4);
            iVar6 = DAT_00589164;
            iVar2 = FUN_002a4860(DAT_00589164 + 0xf0);
            iVar6 = FUN_002a4894(iVar6 + 0xf0);
            FUN_00187180(0x3a,1);
            iVar3 = FUN_00192798();
            FUN_0019de98(iVar3 + (iVar2 + iVar6) * 0x94 + 0x14,0xf4f4f4ff);
            func_0x0024b0e8();
            return 0;
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < 3);
        iVar2 = 0;
        FUN_001517b4(0,1);
        if (iVar2 != 0) {
          FUN_001641b4(0x100020e);
          FUN_00275f44(*(unsigned int *)(iVar6 + 0x15c),6);
          uVar8 = 2;
        }
        else {
          iVar2 = 1;
          FUN_001517b4();
          if (iVar2 == 0) {
            return 0;
          }
          FUN_001641b4(0x100020f);
          FUN_00184758(iVar6 + 0x5c,3,0);
          FUN_00184c00(iVar6 + 0x5c,1,0);
          FUN_001a9110(&DAT_00588fc0,iVar6 + 0x34);
          FUN_00138718();
          uVar8 = func_0x003de09c();
          func_0x0032ccf8(0,uVar8,1);
          uVar8 = func_0x003de09c();
          func_0x0032ccf8(1,uVar8);
          uVar8 = 3;
        }
        *(unsigned int *)(iVar6 + 8) = uVar8;
      }
    }
    break;
  case 2:
    iVar2 = FUN_00224880(*(unsigned int *)(iVar6 + 0x15c));
    if (iVar2 == 2) {
      iVar2 = FUN_002a4b74();
      if (iVar2 != 0) {
        if (iVar2 == 1) {
          *(unsigned int *)(iVar6 + 8) = 1;
        }
      }
      else {
        FUN_00184758(iVar6 + 0x5c,3,0);
        FUN_00184c00(iVar6 + 0x5c,1,0);
        iVar2 = FUN_00162858();
        if (iVar2 != 0) {
          DAT_00588fc4 = 0;
          FUN_00358dbc();
          iVar2 = FUN_0014af84();
          uVar8 = *(unsigned int *)(iVar2 + 0x27e94);
          *(unsigned int *)(iVar6 + 0x34) = *(unsigned int *)(iVar2 + 0x27e90);
          *(unsigned int *)(iVar6 + 0x38) = uVar8;
          *(unsigned char *)(iVar6 + 0x38) = 0;
          *(unsigned int *)(iVar6 + 8) = 1;
        }
        else {
          DAT_00588fc4 = 1;
          *(unsigned int *)(iVar6 + 8) = 3;
        }
      }
      FUN_0034913c();
    }
    break;
  case 3:
    iVar2 = FUN_00163aa4(iVar6 + 0x5c);
    if (iVar2 != 0) {
      *(unsigned int *)(iVar6 + 8) = 4;
    }
    break;
  case 4:
    return 0xffffffff;
  }
  return 0;
}
*/
#include "common.h"
