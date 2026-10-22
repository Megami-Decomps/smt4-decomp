/* NON_MATCHING: handles character-info menu selections, repopulates the information panel, and switches child jobs; typed menu work and several callback contracts remain unreconstructed. */
/* romwright 0.5.0 decompilation of FUN_00342e24 for reference (not compiled; its own view of the boundaries):

unsigned int FUN_00342e24(int param_1)

{
  unsigned char uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  int iVar4;
  unsigned int *puVar5;
  unsigned int uVar6;
  int uStack_28;
  unsigned int uStack_24;
  unsigned int uStack_20;
  unsigned int uStack_1c;
  
  uVar6 = 0;
  switch(*(unsigned int *)(param_1 + 0xe8)) {
  case 0:
    iVar4 = FUN_00224880(*(unsigned int *)(param_1 + 0x4c));
    if (iVar4 != 2) {
      iVar4 = FUN_002a4b60();
      if (iVar4 == *(int *)(param_1 + 0x148)) {
        return 0;
      }
      iVar4 = FUN_0031d62c();
      if (iVar4 == 0) {
        return 0;
      }
      iVar4 = FUN_002a4b60();
      *(int *)(param_1 + 0x148) = iVar4;
      if (iVar4 != 0) {
        uVar6 = FUN_0032e478();
        uVar3 = 0x15;
      }
      else {
        uVar6 = FUN_0032e478();
        uVar3 = 0x14;
      }
      FUN_0037b578(uVar6,uVar3);
      return 0;
    }
    uVar2 = messageGetChoiceResult();
    if (uVar2 == 0xffffffff) {
      FUN_0034913c();
      *(unsigned short *)(param_1 + 0x108) = *(unsigned short *)(param_1 + 0x10a);
      FUN_00331380(1);
      func_0x003bb4a0();
      func_0x003a7754(1);
      FUN_001681cc(0x9e);
      *(unsigned int *)(param_1 + 0xe8) = 0xffffffff;
      *(unsigned int *)(param_1 + 0xf8) = 3;
      return 3;
    }
    if (uVar2 < 2) {
      *(char *)(param_1 + 0x10d) = (char)uVar2;
    }
    *(unsigned int *)(param_1 + 0x164) = (unsigned int)*(unsigned char *)(*(int *)(param_1 + 8) + 0x21);
    FUN_0032e30c();
    *(unsigned char *)(*(int *)(param_1 + 8) + 0x21) = *(unsigned char *)(param_1 + 0x10d);
    if (*(short *)(*(int *)(param_1 + 8) + 0x34) == 0) {
      FUN_002e6dd0(*(int *)(param_1 + 8) + 0x50,0x14);
    }
    FUN_002a5cf4();
    FUN_0032e30c(*(unsigned int *)(param_1 + 8));
    FUN_0032e25c(*(unsigned int *)(param_1 + 8),(int)*(short *)(param_1 + 0x108));
    characterInfoPanelPopulate(*(unsigned int *)(param_1 + 0xc),*(unsigned int *)(param_1 + 8),
                 *(unsigned int *)(param_1 + 0x58));
    FUN_002e264c(*(unsigned int *)(param_1 + 8));
    FUN_00281720(*(unsigned int *)(param_1 + 4),1);
    *(unsigned int *)(param_1 + 0x1c) = 0;
    *(unsigned char *)(param_1 + 0x20) = 0;
    *(unsigned int *)(param_1 + 0x30) = 0;
    *(unsigned char *)(param_1 + 0x34) = 0;
    FUN_0019de98(0,0xf4f4f4ff);
    *(unsigned int *)(param_1 + 0xec) = 3;
    *(unsigned int *)(param_1 + 0xe8) = 0xffffffff;
    *(unsigned int *)(param_1 + 0x44) = 0;
    *(unsigned int *)(param_1 + 0xf8) = 5;
    *(unsigned int *)(param_1 + 0xfc) = 4;
    *(unsigned char *)(param_1 + 0x48) = 0;
    FUN_001681cc(0xbf);
    buttonHelpSetMode(0);
    break;
  case 1:
    iVar4 = FUN_00224880(*(unsigned int *)(param_1 + 0x4c));
    if (iVar4 != 2) {
      return 0;
    }
    FUN_002c39dc(0x10,0,0xffffffff);
    FUN_00284ee4(0);
    *(unsigned int *)(param_1 + 0xf8) = 5;
    *(unsigned int *)(param_1 + 0xfc) = 3;
    func_0x003bb4a0();
    FUN_00331380(1);
    *(unsigned int *)(param_1 + 0xe8) = 0xffffffff;
    *(unsigned int *)(param_1 + 0xec) = 0xffffffff;
    return 3;
  case 2:
    iVar4 = FUN_00224880(*(unsigned int *)(param_1 + 0x4c));
    if (iVar4 != 2) {
      return 0;
    }
    FUN_00331380(1);
    *(unsigned int *)(param_1 + 0xf8) = 3;
    func_0x003bb4a0();
    func_0x003a7754(1);
    uVar3 = 0xffffffff;
    uVar6 = 3;
    *(unsigned int *)(param_1 + 0xe8) = uVar3;
    return uVar6;
  case 3:
    iVar4 = FUN_00224880(*(unsigned int *)(param_1 + 0x4c));
    if (iVar4 != 2) {
      return 0;
    }
    *(unsigned int *)(param_1 + 0xe8) = 0xffffffff;
    *(unsigned int *)(param_1 + 0xf8) = 1;
    *(unsigned int *)(param_1 + 0xec) = 0xffffffff;
    *(unsigned int *)(param_1 + 0x14c) = 0;
    break;
  case 4:
  case 7:
    iVar4 = FUN_00224880(*(unsigned int *)(param_1 + 0x4c));
    if (iVar4 != 2) {
      return 0;
    }
    iVar4 = messageGetChoiceResult();
    if (iVar4 != 0) {
      if (iVar4 != 1) {
        return 0;
      }
      *(unsigned int *)(param_1 + 0xe8) = 0xffffffff;
      *(unsigned int *)(param_1 + 0xec) = 0xffffffff;
      *(unsigned short *)(param_1 + 0x108) = *(unsigned short *)(param_1 + 0x10a);
      FUN_00331380(1);
      func_0x003bb4a0();
      func_0x003a7754(1);
      iVar4 = FUN_00349af0();
      if (iVar4 == 0) {
        uVar6 = 0xb9;
      }
      else {
        uVar6 = 0xba;
      }
      FUN_001681cc(uVar6);
      *(unsigned int *)(param_1 + 0xf8) = 3;
      return 3;
    }
code_r0x00343274:
    FUN_003c1060();
    *(unsigned int *)(param_1 + 0xfc) = 0xffffffff;
    *(unsigned int *)(param_1 + 0xf8) = 2;
    *(unsigned int *)(param_1 + 0xe8) = 0xffffffff;
    *(unsigned int *)(param_1 + 0xec) = 0;
    uVar6 = FUN_0032e478();
    FUN_0037b578(uVar6,0x14);
    *(unsigned char *)(param_1 + 0x154) = 1;
    FUN_001681cc(0xe4);
    FUN_0015f490((int)*(short *)(param_1 + 0x108),0,1);
    break;
  case 5:
    iVar4 = FUN_00224880(*(unsigned int *)(param_1 + 0x4c));
    if (iVar4 != 2) {
      return 0;
    }
    iVar4 = messageGetChoiceResult();
    if (iVar4 == -1) {
      *(unsigned int *)(param_1 + 0xe8) = 0xffffffff;
      *(unsigned int *)(param_1 + 0xec) = 0xffffffff;
      FUN_00331380(1);
      func_0x003bb4a0();
      func_0x003a7754(1);
      *(unsigned int *)(param_1 + 0xf8) = 3;
      return 3;
    }
    if (iVar4 == 0) goto code_r0x00343274;
    if (iVar4 != 1) {
      return 0;
    }
    *(unsigned short *)(param_1 + 0x108) = 0;
    *(unsigned char *)(param_1 + 0x10d) = 0;
    *(unsigned int *)(param_1 + 0x164) = (unsigned int)*(unsigned char *)(*(int *)(param_1 + 8) + 0x21);
    FUN_0032e30c();
    *(unsigned char *)(*(int *)(param_1 + 8) + 0x21) = *(unsigned char *)(param_1 + 0x10d);
    FUN_0032e25c(*(unsigned int *)(param_1 + 8),(int)*(short *)(param_1 + 0x108));
    if (*(short *)(*(int *)(param_1 + 8) + 0x34) == 0) {
      FUN_002e6dd0(*(int *)(param_1 + 8) + 0x50,0x14);
    }
    *(unsigned char *)(param_1 + 0x154) = 1;
    FUN_002a5cf4();
    FUN_0032e30c(*(unsigned int *)(param_1 + 8));
    FUN_0032e25c(*(unsigned int *)(param_1 + 8),(int)*(short *)(param_1 + 0x108));
    characterInfoPanelPopulate(*(unsigned int *)(param_1 + 0xc),*(unsigned int *)(param_1 + 8),
                 *(unsigned int *)(param_1 + 0x58));
    FUN_002e264c(*(unsigned int *)(param_1 + 8));
    FUN_00281720(*(unsigned int *)(param_1 + 4),1);
    *(unsigned int *)(param_1 + 0x1c) = 0;
    *(unsigned char *)(param_1 + 0x20) = 0;
    *(unsigned int *)(param_1 + 0x30) = 0;
    *(unsigned char *)(param_1 + 0x34) = 0;
    FUN_0019de98(0,0xf4f4f4ff);
    *(unsigned int *)(param_1 + 0xec) = 3;
    *(unsigned int *)(param_1 + 0xe8) = 0xffffffff;
    *(unsigned int *)(param_1 + 0x44) = 0;
    *(unsigned int *)(param_1 + 0xf8) = 5;
    *(unsigned int *)(param_1 + 0xfc) = 4;
    *(unsigned char *)(param_1 + 0x48) = 0;
    FUN_001681cc(0xbf);
    buttonHelpSetMode(0);
    break;
  case 6:
    iVar4 = FUN_00224880(*(unsigned int *)(param_1 + 0x4c));
    if (iVar4 != 2) {
      return 0;
    }
    FUN_002e2680(0);
    *(unsigned char *)(param_1 + 0x154) = 1;
    FUN_00281720(*(unsigned int *)(param_1 + 4),1);
    FUN_002a5cf4();
    *(unsigned int *)(param_1 + 0xe8) = 0xffffffff;
    *(unsigned int *)(param_1 + 0xec) = 0xffffffff;
    *(unsigned int *)(param_1 + 0x14c) = 0;
    *(unsigned int *)(param_1 + 0xf8) = 5;
    *(unsigned int *)(param_1 + 0xfc) = 1;
    break;
  case 8:
    iVar4 = FUN_00224880(*(unsigned int *)(param_1 + 0x4c));
    if (iVar4 != 2) {
      return 0;
    }
    FUN_001681cc(0x9e);
    *(unsigned int *)(param_1 + 0xe8) = 0xffffffff;
    *(unsigned int *)(param_1 + 0xec) = 9;
    *(unsigned int *)(param_1 + 0xf8) = 2;
    break;
  case 9:
    FUN_00224880(*(unsigned int *)(param_1 + 0x4c));
    *(unsigned int *)(param_1 + 0x134) = 0;
    *(unsigned int *)(param_1 + 0x128) = 0;
    *(unsigned int *)(param_1 + 0x120) = 0;
    *(unsigned int *)(param_1 + 0x124) = 0x20;
    *(unsigned int *)(param_1 + 0x15c) = *(unsigned int *)(*(int *)(param_1 + 8) + 0x24);
    *(unsigned int *)(*(int *)(param_1 + 8) + 0x24) = 0;
    characterInfoPanelPopulate(*(unsigned int *)(param_1 + 0xc),*(unsigned int *)(param_1 + 8),
                 *(unsigned int *)(param_1 + 0x58));
    *(unsigned char *)(param_1 + 0x114) = 1;
    *(unsigned int *)(param_1 + 0xe8) = 0xffffffff;
    *(unsigned int *)(param_1 + 0xec) = 0xffffffff;
    *(unsigned int *)(param_1 + 0xf8) = 6;
    *(unsigned int *)(param_1 + 0xfc) = 2;
    break;
  case 10:
    iVar4 = FUN_00224880(*(unsigned int *)(param_1 + 0x4c));
    if (iVar4 != 2) {
      return 0;
    }
    iVar4 = messageGetChoiceResult();
    if (iVar4 != 0) {
      if (iVar4 != 1) {
        return 0;
      }
      *(unsigned int *)(param_1 + 0xe8) = 0xffffffff;
      *(unsigned int *)(param_1 + 0xec) = 9;
      FUN_001681cc(0x9e);
    }
    else {
      *(unsigned char *)(param_1 + 0x12d) = 0;
      *(unsigned int *)(param_1 + 0x44) = 0;
      *(unsigned int *)(param_1 + 0xec) = 3;
      *(unsigned int *)(param_1 + 0xe8) = 0xffffffff;
      *(unsigned int *)(param_1 + 0xf8) = 7;
      *(unsigned int *)(param_1 + 0xfc) = 2;
      *(unsigned char *)(param_1 + 0x48) = 0;
      buttonHelpSetMode();
    }
    break;
  case 0xb:
    iVar4 = FUN_00224880(*(unsigned int *)(param_1 + 0x4c));
    if (iVar4 != 2) {
      return 0;
    }
    FUN_001681cc(0x9e);
    *(unsigned int *)(param_1 + 0xe8) = 0xffffffff;
    *(unsigned int *)(param_1 + 0xec) = 0xc;
    *(unsigned int *)(param_1 + 0xf8) = 2;
    break;
  case 0xc:
    FUN_00224880(*(unsigned int *)(param_1 + 0x4c));
    *(unsigned char *)(param_1 + 0x114) = 1;
    *(unsigned int *)(param_1 + 0xe8) = 0xffffffff;
    *(unsigned int *)(param_1 + 0xec) = 0xffffffff;
    *(unsigned int *)(param_1 + 0xf8) = 6;
    *(unsigned int *)(param_1 + 0xfc) = 2;
    uVar6 = FUN_0035a9fc();
    *(unsigned int *)(param_1 + 0x124) = uVar6;
    *(unsigned int *)(param_1 + 0x158) = (unsigned int)*(unsigned char *)(*(int *)(param_1 + 8) + 0x23);
    uVar1 = FUN_00344bc8(*(int *)(param_1 + 0x128) + *(int *)(param_1 + 0x120));
    *(unsigned char *)(*(int *)(param_1 + 8) + 0x23) = uVar1;
    characterInfoPanelPopulate(*(unsigned int *)(param_1 + 0xc),*(unsigned int *)(param_1 + 8),
                 *(unsigned int *)(param_1 + 0x58));
    FUN_001681cc(0x9e);
    uVar6 = FUN_0032ec7c(*(unsigned char *)(*(int *)(param_1 + 8) + 0x23));
    FUN_0037b578(*(unsigned int *)(param_1 + 0x58),uVar6);
    break;
  case 0xd:
    iVar4 = FUN_00224880(*(unsigned int *)(param_1 + 0x4c));
    if (iVar4 != 2) {
      return 0;
    }
    iVar4 = messageGetChoiceResult();
    if (iVar4 != 0) {
      if (iVar4 != 1) {
        return 0;
      }
      *(unsigned int *)(param_1 + 0xe8) = 0xc;
      *(unsigned int *)(param_1 + 0xec) = 0xffffffff;
      *(unsigned int *)(param_1 + 0xf8) = 2;
      break;
    }
    goto code_r0x0034364c;
  case 0xe:
    iVar4 = FUN_00224880(*(unsigned int *)(param_1 + 0x4c));
    if (iVar4 != 2) {
      return 0;
    }
    FUN_0019ea64(0);
    *(unsigned char *)(param_1 + 0x154) = 1;
    FUN_00281720(*(unsigned int *)(param_1 + 4),1);
    iVar4 = messageGetChoiceResult();
    if (iVar4 != 0) {
      FUN_002e2680(0);
      *(unsigned int *)(param_1 + 0xe8) = 0xffffffff;
      *(unsigned int *)(param_1 + 0xec) = 0xffffffff;
      *(unsigned int *)(param_1 + 0x14c) = 0;
      *(unsigned int *)(param_1 + 0xf8) = 5;
      *(unsigned int *)(param_1 + 0xfc) = 1;
    }
    else {
      iVar4 = *(int *)(param_1 + 8);
      uVar6 = FUN_003fd528();
      FUN_002e59f8(uVar6,iVar4 + 0xe,0x12);
      characterInfoPanelPopulate(*(unsigned int *)(param_1 + 0xc),*(unsigned int *)(param_1 + 8),
                   *(unsigned int *)(param_1 + 0x58));
      FUN_002e264c(*(unsigned int *)(param_1 + 8));
      *(unsigned int *)(param_1 + 0xe8) = 0xffffffff;
      *(unsigned int *)(param_1 + 0xec) = 3;
      *(unsigned int *)(param_1 + 0xf8) = 5;
      *(unsigned int *)(param_1 + 0xfc) = 4;
    }
    break;
  case 0xf:
    iVar4 = FUN_00224880(*(unsigned int *)(param_1 + 0x4c));
    if (iVar4 != 2) {
      return 0;
    }
    *(unsigned int *)(param_1 + 0xe8) = 0xffffffff;
    *(unsigned int *)(param_1 + 0xec) = 0x10;
    *(unsigned int *)(param_1 + 0xf8) = 2;
    break;
  case 0x10:
    iVar4 = FUN_00164af0(10);
    if ((iVar4 != 0) || (iVar4 = FUN_002e1a18(4), iVar4 != 0)) {
      *(unsigned char *)(param_1 + 0x111) = *(char *)(param_1 + 0x111) == '\0';
      *(unsigned int *)(param_1 + 0x1c) = 0;
      *(unsigned int *)(param_1 + 0x14) = 0x14a;
      sysPlayVoice(0x100020e);
    }
    if (*(char *)(param_1 + 0x111) != '\0') {
      uStack_28 = *(unsigned int *)(param_1 + 0x1c);
      uStack_24 = 1;
      iVar4 = FUN_0039a2d8(param_1 + 0x14,0x14a,0,3);
      if (iVar4 != 0) {
        *(unsigned char *)(param_1 + 0x20) = 1;
      }
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    }
    if (*(int *)(param_1 + 0x14c) == 0) {
      *(unsigned int *)(param_1 + 0xe8) = 0xffffffff;
      *(unsigned int *)(param_1 + 0xf8) = 1;
      uVar6 = 3;
      *(unsigned int *)(param_1 + 0xec) = 0xffffffff;
    }
    iVar4 = *(int *)(param_1 + 4);
    FUN_002e2114();
    if ((iVar4 != 0) && (*(char *)(param_1 + 0x188) == '\0')) {
      FUN_00281720(*(unsigned int *)(param_1 + 4),1);
      *(unsigned char *)(param_1 + 0x188) = 1;
      return uVar6;
    }
    iVar4 = *(int *)(param_1 + 4);
    FUN_002e2114();
    if (iVar4 != 0) {
      return uVar6;
    }
    FUN_00281720(*(unsigned int *)(param_1 + 4),0);
    return uVar6;
  case 0x11:
    if (*(int *)(param_1 + 0x18c) == 0) {
      iVar4 = FUN_00224880(*(unsigned int *)(param_1 + 0x4c));
      if (iVar4 != 2) {
        return 0;
      }
      iVar4 = messageGetChoiceResult();
      if (iVar4 == 0) {
        uVar6 = *(unsigned int *)(param_1 + 8);
        puVar5 = (unsigned int *)FUN_001801a4();
        uStack_28 = *puVar5;
        uStack_24 = puVar5[1];
        uStack_20 = puVar5[2];
        uStack_1c = puVar5[3];
        FUN_002e59f8(&uStack_28,uVar6,0xe);
        *(unsigned int *)(param_1 + 0xe8) = 0xffffffff;
        *(unsigned int *)(param_1 + 0xf8) = 4;
        *(unsigned int *)(param_1 + 0xec) = 0xffffffff;
        return 3;
      }
      if (iVar4 == 1) {
        puVar5 = (unsigned int *)FUN_001801a4();
        *puVar5 = *(unsigned int *)(param_1 + 0x17a);
        puVar5[1] = *(unsigned int *)(param_1 + 0x17e);
        puVar5[2] = *(unsigned int *)(param_1 + 0x182);
        *(unsigned short *)(puVar5 + 3) = *(unsigned short *)(param_1 + 0x186);
        puVar5 = *(unsigned int **)(param_1 + 8);
        *puVar5 = *(unsigned int *)(param_1 + 0x17a);
        puVar5[1] = *(unsigned int *)(param_1 + 0x17e);
        puVar5[2] = *(unsigned int *)(param_1 + 0x182);
        *(unsigned short *)(puVar5 + 3) = *(unsigned short *)(param_1 + 0x186);
        if (DAT_0057f118 != 0) {
          characterInfoPanelPopulate(*(unsigned int *)(DAT_0057f118 + 0xc),*(unsigned int *)(DAT_0057f118 + 8),
                       *(unsigned int *)(DAT_0057f118 + 0x58));
        }
        FUN_0039a41c(0);
        *(unsigned char *)(param_1 + 0x188) = 0;
        *(unsigned int *)(param_1 + 0x18c) = 1;
        return 0;
      }
      if (iVar4 != 2) {
        return 0;
      }
      *(unsigned int *)(param_1 + 0xe8) = 0xffffffff;
      *(unsigned int *)(param_1 + 0xec) = 0x10;
      *(unsigned int *)(param_1 + 0xf8) = 2;
      break;
    }
    iVar4 = *(int *)(param_1 + 4);
    FUN_002e2114();
    if (iVar4 == 0) {
      FUN_00281720(*(unsigned int *)(param_1 + 4),0);
    }
    iVar4 = *(int *)(param_1 + 4);
    FUN_002e2114();
    if (iVar4 == 0) {
      return 0;
    }
    if (*(char *)(param_1 + 0x188) != '\0') {
      return 0;
    }
    iVar4 = FUN_00344c6c();
    if (iVar4 == 0) {
      return 0;
    }
    FUN_00281720(*(unsigned int *)(param_1 + 4),1);
    *(unsigned char *)(param_1 + 0x188) = 1;
    *(unsigned int *)(param_1 + 0xfc) = 1;
    *(unsigned int *)(param_1 + 0xe8) = 0xffffffff;
    *(unsigned int *)(param_1 + 0xf8) = 5;
    *(unsigned int *)(param_1 + 0xec) = 0xffffffff;
    *(unsigned int *)(param_1 + 0x14c) = 0;
    *(unsigned int *)(param_1 + 0x18c) = 0;
    break;
  case 0x12:
    iVar4 = FUN_00224880(*(unsigned int *)(param_1 + 0x4c));
    if (iVar4 != 2) {
      return 0;
    }
    FUN_001681cc(0x9e);
    *(unsigned int *)(param_1 + 0xe8) = 0xffffffff;
    *(unsigned int *)(param_1 + 0xec) = 0x13;
    *(unsigned int *)(param_1 + 0xf8) = 2;
    break;
  case 0x13:
    FUN_00224880(*(unsigned int *)(param_1 + 0x4c));
    *(unsigned char *)(param_1 + 0x114) = 1;
    *(unsigned int *)(param_1 + 0xe8) = 0xffffffff;
    *(unsigned int *)(param_1 + 0x128) = 0;
    *(unsigned int *)(param_1 + 0xec) = 0xffffffff;
    *(unsigned int *)(param_1 + 0x120) = 0;
    *(unsigned int *)(param_1 + 0x124) = 0xb;
    *(unsigned int *)(param_1 + 0xf8) = 6;
    *(unsigned int *)(param_1 + 0xfc) = 2;
    *(unsigned int *)(param_1 + 0x160) = (unsigned int)*(unsigned char *)(*(int *)(param_1 + 8) + 0x42);
    *(unsigned char *)(*(int *)(param_1 + 8) + 0x42) = 0;
    uVar6 = FUN_003192e0();
    controllerApplyPreset(uVar6,*(int *)(param_1 + 0x128) + *(int *)(param_1 + 0x120));
    characterInfoPanelPopulate(*(unsigned int *)(param_1 + 0xc),*(unsigned int *)(param_1 + 8),
                 *(unsigned int *)(param_1 + 0x58));
    break;
  case 0x14:
    iVar4 = FUN_00224880(*(unsigned int *)(param_1 + 0x4c));
    if (iVar4 != 2) {
      return 0;
    }
    iVar4 = messageGetChoiceResult();
    goto joined_r0x0034387c;
  case 0x15:
    iVar4 = FUN_00224880(*(unsigned int *)(param_1 + 0x4c));
    if (iVar4 != 2) {
      return 0;
    }
    FUN_001681cc(0x9e);
    *(unsigned int *)(param_1 + 0xe8) = 0xffffffff;
    *(unsigned int *)(param_1 + 0xec) = 0x16;
    *(unsigned int *)(param_1 + 0xf8) = 2;
    break;
  case 0x16:
    FUN_00224880(*(unsigned int *)(param_1 + 0x4c));
    *(unsigned char *)(param_1 + 0x114) = 1;
    *(unsigned int *)(param_1 + 0xe8) = 0xffffffff;
    *(unsigned int *)(param_1 + 0xec) = 0xffffffff;
    *(unsigned int *)(param_1 + 0x124) = 9;
    *(unsigned int *)(param_1 + 0xf8) = 6;
    *(unsigned int *)(param_1 + 0xfc) = 2;
    iVar4 = FUN_0018719c(0x581);
    if (iVar4 == 0) {
      *(int *)(param_1 + 0x124) = *(int *)(param_1 + 0x124) - 1;
    }
    *(unsigned int *)(param_1 + 0x128) = 0;
    *(unsigned int *)(param_1 + 0x120) = 0;
    *(unsigned int *)(param_1 + 0x168) = (unsigned int)*(unsigned char *)(*(int *)(param_1 + 8) + 0x22);
    *(unsigned char *)(*(int *)(param_1 + 8) + 0x22) = 0;
    characterInfoPanelPopulate(*(unsigned int *)(param_1 + 0xc),*(unsigned int *)(param_1 + 8),
                 *(unsigned int *)(param_1 + 0x58));
    return 3;
  case 0x17:
    iVar4 = FUN_00224880(*(unsigned int *)(param_1 + 0x4c));
    if (iVar4 != 2) {
      return 0;
    }
    iVar4 = messageGetChoiceResult();
joined_r0x0034387c:
    if (iVar4 != 0) {
      if (iVar4 != 1) {
        return 0;
      }
      *(unsigned int *)(param_1 + 0xe8) = 0xffffffff;
      *(unsigned int *)(param_1 + 0xf8) = 6;
      *(unsigned int *)(param_1 + 0xec) = 0xffffffff;
      FUN_001681cc(0x9e);
      return 3;
    }
code_r0x0034364c:
    *(unsigned char *)(param_1 + 0x12d) = 0;
    *(unsigned int *)(param_1 + 0x44) = 0;
    *(unsigned int *)(param_1 + 0xec) = 3;
    *(unsigned int *)(param_1 + 0xe8) = 0xffffffff;
    *(unsigned int *)(param_1 + 0xf8) = 7;
    *(unsigned int *)(param_1 + 0xfc) = 2;
    *(unsigned char *)(param_1 + 0x48) = 0;
    FUN_001681cc(0xbf);
    buttonHelpSetMode(0);
    break;
  case 0xffffffff:
    if (*(int *)(param_1 + 0xec) == -1) {
      return 0;
    }
    FUN_00275f44(*(unsigned int *)(param_1 + 0x4c),
                 *(unsigned int *)(param_1 + *(int *)(param_1 + 0xec) * 4 + 0x88));
    uVar3 = *(unsigned int *)(param_1 + 0xec);
    *(unsigned int *)(param_1 + 0xe8) = uVar3;
    return uVar6;
  default:
    return uVar6;
  }
  uVar6 = 3;
  return uVar6;
}
*/
#include "common.h"
