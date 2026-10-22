/* NON_MATCHING: runs save/load UI initialization, slot selection, save-data copies, and confirmation substates; typed save-menu work and asynchronous save-operation contracts remain unreconstructed. */
/* romwright 0.5.0 decompilation of FUN_001c8e28 for reference (not compiled; its own view of the boundaries):

unsigned int FUN_001c8e28(void)

{
  char cVar1;
  unsigned int *puVar2;
  int iVar3;
  unsigned int *puVar4;
  unsigned short *puVar5;
  int iVar6;
  unsigned int uVar7;
  int iVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  unsigned int *puVar11;
  unsigned char bVar12;
  unsigned char bVar13;
  float fVar14;
  
  puVar2 = DAT_0044de2c;
  FUN_002c09bc();
  puVar4 = DAT_0044de2c;
  switch(puVar2[2]) {
  case 0:
    FUN_002a0cc8(1);
    iVar8 = 0;
    puVar2[3] = 0;
    puVar2[2] = 1;
    puVar2[4] = iVar8;
    break;
  case 1:
    switch(puVar2[4]) {
    case 0:
      FUN_0028c040();
      FUN_0029a128(9);
      FUN_0029c4c8(0);
      FUN_0029dfc0(1);
      FUN_0029e874(1);
      FUN_002996d8(0);
      FUN_0029e788();
      FUN_0026b60c(1);
      iVar8 = puVar2[4] + 1;
      puVar2[4] = iVar8;
      break;
    case 1:
      iVar8 = func_0x0026b5fc();
      if (iVar8 == 0) {
        return 0;
      }
      iVar8 = func_0x0026b5ec();
      if (iVar8 != 0) {
        uVar9 = FUN_0026b5dc();
        FUN_002bcd68(puVar2 + 0x93,uVar9,0x80);
      }
      else {
        FUN_002c4938(puVar2 + 0x93,0x80);
      }
      *(unsigned char *)(puVar2 + 0xd3) = iVar8 != 0;
      iVar8 = puVar2[4] + 1;
      puVar2[4] = iVar8;
      break;
    case 2:
      FUN_0026b60c(2);
      iVar8 = puVar2[4] + 1;
      puVar2[4] = iVar8;
      break;
    case 3:
      iVar8 = func_0x0026b5fc();
      if (iVar8 == 0) {
        return 0;
      }
      iVar8 = FUN_002a60b4(0x36,0);
      bVar13 = iVar8 == 0;
      iVar8 = 0;
      if (!bVar13) {
        iVar8 = puVar2[0x90];
      }
      bVar12 = iVar8 == 0;
      if (!bVar13 && !bVar12) {
        iVar8 = puVar2[0x91];
      }
      if ((bVar13 || bVar12) || iVar8 == 0) {
        return 0;
      }
      iVar8 = FUN_002adee0(puVar2[0xd8]);
      if (iVar8 == 0) {
        return 0;
      }
      iVar8 = func_0x0026b5ec();
      if (iVar8 != 0) {
        uVar9 = FUN_0026b5dc();
        FUN_002bcd68(puVar2 + 0xb3,uVar9,0x80);
      }
      else {
        FUN_002c4938(puVar2 + 0xb3,0x80);
      }
      *(unsigned char *)((int)puVar2 + 0x34d) = iVar8 != 0;
      uVar9 = FUN_0026b5dc();
      FUN_002bcd68(uVar9,puVar2[0xdf],0x80);
      uVar9 = FUN_0026b5c8();
      FUN_002ad8b4(uVar9,puVar2[0xe0]);
      uVar9 = FUN_002c09bc();
      FUN_002bcd68(uVar9,puVar2[0xe1],0x24d28);
      iVar8 = 0;
      do {
        if (*(char *)((int)DAT_0044de2c + iVar8 + 0x34c) == '\0') {
          puVar4 = (unsigned int *)FUN_002b63ac();
          *(unsigned int *)((int)puVar2 + iVar8 * 0x80 + 0x25e) = *puVar4;
          *(unsigned int *)((int)puVar2 + iVar8 * 0x80 + 0x262) = puVar4[1];
          *(unsigned int *)((int)puVar2 + iVar8 * 0x80 + 0x266) = puVar4[2];
          *(unsigned short *)((int)puVar2 + iVar8 * 0x80 + 0x26a) = *(unsigned short *)(puVar4 + 3);
        }
        puVar4 = DAT_0044de2c;
        iVar8 = iVar8 + 1;
      } while (iVar8 < 2);
      FUN_002a0428(DAT_0044de2c[0xd8],1);
      FUN_0029a014(*(unsigned int *)(puVar4[0xd8] + 8),0);
      iVar3 = DAT_0044de30;
      puVar11 = (unsigned int *)puVar4[0xd4];
      iVar8 = DAT_0044de30 * 0x20;
      iVar6 = DAT_0044de30 * 0x20;
      *puVar11 = *(unsigned int *)((int)puVar4 + DAT_0044de30 * 0x80 + 0x25e);
      puVar11[1] = *(unsigned int *)((int)puVar4 + iVar3 * 0x80 + 0x262);
      puVar11[2] = *(unsigned int *)((int)puVar4 + iVar3 * 0x80 + 0x266);
      *(unsigned short *)(puVar11 + 3) = *(unsigned short *)((int)puVar4 + iVar3 * 0x80 + 0x26a);
      *(unsigned int *)((int)puVar11 + 0xe) = *(unsigned int *)((int)puVar4 + iVar3 * 0x80 + 0x28a);
      *(unsigned int *)((int)puVar11 + 0x12) = *(unsigned int *)((int)puVar4 + iVar3 * 0x80 + 0x28e);
      *(unsigned int *)((int)puVar11 + 0x16) = *(unsigned int *)((int)puVar4 + iVar3 * 0x80 + 0x292);
      *(unsigned short *)((int)puVar11 + 0x1a) = *(unsigned short *)((int)puVar4 + iVar3 * 0x80 + 0x296);
      FUN_002bcd68(puVar11 + 7,puVar4 + iVar6 + 0x9f,0xe);
      *(unsigned short *)((int)puVar11 + 0x2a) = *(unsigned short *)(puVar4 + iVar3 * 0x20 + 0x9c);
      *(unsigned short *)(puVar11 + 0xb) = *(unsigned short *)((int)puVar4 + iVar3 * 0x80 + 0x272);
      puVar11[0xc] = puVar4[iVar3 * 0x20 + 0x9b];
      FUN_002bf694(puVar11 + 0x13,puVar4 + iVar8 + 0x93);
      *(unsigned char *)((int)puVar11 + 0x76) = *(unsigned char *)(puVar4 + iVar3 * 0x20 + 0xa6);
      iVar6 = FUN_002c09bc();
      FUN_002bf694(iVar6 + 0x54,puVar4 + iVar8 + 0x93);
      FUN_0029a0e8(puVar4[0xd4]);
      if (puVar4 + DAT_0044de30 * 0x20 != (unsigned int *)0xfffffdb4) {
        FUN_0026b5a8(*(char *)(puVar4 + DAT_0044de30 * 0x20 + 0xac) != '\0');
      }
      bVar13 = *(char *)((int)DAT_0044de2c + DAT_0044de30 + 0x34c) == '\0';
      if (!bVar13) {
        FUN_0029c4c8(0);
        FUN_0029dfc0(1);
        FUN_0029e874(1);
      }
      else {
        FUN_0029c4c8(0);
        FUN_0029dfc0(0);
        FUN_0029e874(1);
      }
      FUN_002996d8(!bVar13);
      FUN_0029a084(1,*(unsigned short *)(puVar4[0xd4] + 8));
      FUN_0029a084(2,*(unsigned short *)(puVar4[0xd4] + 10));
      FUN_0029a084(0,*(unsigned short *)(puVar4[0xd4] + 6));
      uVar9 = FUN_002b63ac();
      FUN_002bcd68(uVar9,puVar2[0xd4],0xe);
      statusPanelSetOpen(1);
      *(unsigned char *)((int)puVar2 + 0x355) = 1;
      iVar8 = puVar2[4] + 1;
      puVar2[4] = iVar8;
      break;
    case 4:
      iVar8 = FUN_0029e0f8();
      if ((iVar8 != 0) &&
         (puVar2[4] = puVar2[4] + 1, *(char *)((int)DAT_0044de2c + DAT_0044de30 + 0x34c) == '\0')) {
        FUN_0029dfc0(0);
        FUN_0029e874(1);
        FUN_002996d8(0);
      }
      break;
    case 5:
      iVar8 = 6;
      puVar2[4] = iVar8;
      break;
    case 6:
      if (*(char *)((int)DAT_0044de2c + DAT_0044de30 + 0x34c) == '\0') {
        FUN_0029dfc0(0);
        FUN_002996d8(0);
      }
      iVar8 = func_0x001ddc24();
      puVar4 = DAT_0044de2c;
      if (iVar8 != 0) {
        if (*(char *)((int)DAT_0044de2c + 0x23e) != '\0') {
          *(unsigned char *)(DAT_0044de2c + 0x1c) = 1;
          puVar4[7] = 0x3f800000;
          puVar4[DAT_0044de30 + 0xb] = 0x3f800000;
        }
        uVar9 = FUN_002beda4(puVar4 + 0x27);
        puVar4[0x19] = uVar9;
        uVar9 = FUN_002beda4(puVar4 + 0x4a);
        puVar4[0x1a] = uVar9;
        uVar9 = FUN_002beda4(puVar4 + 0x6d);
        puVar4[0x1b] = uVar9;
        FUN_002bf818(puVar4 + 0x27);
        FUN_002bf818(puVar4 + 0x4a);
        FUN_002bf818(puVar4 + 0x6d);
        puVar2[4] = puVar2[4] + 1;
        if (*(char *)((int)DAT_0044de2c + DAT_0044de30 + 0x34c) == '\0') {
          FUN_0029dfc0(0);
          FUN_002996d8(0);
        }
      }
      break;
    case 7:
      if (*(char *)((int)DAT_0044de2c + 0x23e) != '\0') {
        *(unsigned char *)(DAT_0044de2c + 0x1c) = 1;
        puVar4[7] = 0x3f800000;
        puVar4[DAT_0044de30 + 0xb] = 0x3f800000;
      }
      uVar9 = FUN_002beda4(puVar4 + 0x27);
      puVar4[0x19] = uVar9;
      uVar9 = FUN_002beda4(puVar4 + 0x4a);
      puVar4[0x1a] = uVar9;
      uVar9 = FUN_002beda4(puVar4 + 0x6d);
      puVar4[0x1b] = uVar9;
      FUN_002bf818(puVar4 + 0x27);
      FUN_002bf818(puVar4 + 0x4a);
      FUN_002bf818(puVar4 + 0x6d);
      if (*(char *)(puVar2 + 0x1c) != '\0') {
        FUN_002a0cc8(0);
        *(unsigned char *)(puVar2 + 0xd5) = 1;
        puVar2[3] = 0;
        puVar2[2] = 2;
        puVar2[4] = 0;
        uVar9 = FUN_002b8584(0x36,0x51);
        puVar2[0x10] = uVar9;
        uVar9 = FUN_002b8584(0x36,0x52);
        puVar2[0x11] = uVar9;
        *(unsigned char *)((int)puVar2 + 0x37a) = 1;
      }
    }
    break;
  case 2:
    iVar8 = FUN_00299fc0();
    if ((iVar8 != 0) && (*(char *)((int)puVar2 + 0x355) != '\0')) {
      *(unsigned char *)((int)puVar2 + 0x355) = 0;
      FUN_002996d8(1);
      FUN_002a0cc8(0);
    }
    iVar8 = FUN_00299fc0();
    if ((iVar8 != 0) &&
       ((iVar8 = FUN_002bfde4(1), iVar8 != 0 || (iVar8 = buttonHelpHasEnabledEntryForId(2), iVar8 != 0)))) {
      FUN_002b8e84(0x100016e);
      FUN_002a0cc8(0);
      FUN_0029c4c8(0);
      FUN_0029dfc0(1);
      FUN_0029e874(1);
      FUN_002996d8(0);
      if (*(char *)((int)DAT_0044de2c + DAT_0044de30 + 0x34c) == '\0') {
        FUN_0029dfc0(0);
      }
      uVar9 = FUN_002b63ac();
      FUN_002bcd68(uVar9,puVar2 + 0xd9,0xe);
      FUN_0029963c(1,*(unsigned short *)(puVar2 + 0xdb));
      FUN_0029963c(2,*(unsigned short *)((int)puVar2 + 0x36e));
      FUN_0029963c(0,*(unsigned short *)((int)puVar2 + 0x36a));
      *(unsigned char *)((int)puVar2 + 0x355) = 1;
      FUN_0029ee6c(0,0x323232ff);
      *(unsigned char *)((int)puVar2 + 0x71) = 1;
      *(unsigned char *)(puVar2 + 0x1c) = 1;
      FUN_002bd8e8(puVar2 + 0x27,2,0);
      FUN_002bd8e8(puVar2 + 0x4a,2,0);
      FUN_002bd8e8(puVar2 + 0x6d,2,0);
      puVar2[2] = 3;
      puVar2[3] = 0;
      return 0;
    }
    iVar8 = DAT_0044de30;
    puVar4 = DAT_0044de2c;
    iVar6 = ifTouchGetSelectionModeForRegion((int)(short)DAT_0044de2c[0x10]);
    if (((iVar6 == 1) || (iVar6 = ifTouchGetSelectionModeForRegion((int)(short)puVar4[0x10]), iVar6 == 2)) &&
       (iVar6 = ifTouchGetSelectionModeForRegion((int)(short)puVar4[0x11]), iVar6 != 1)) {
      DAT_0044de30 = 0;
    }
    iVar6 = ifTouchGetSelectionModeForRegion((int)(short)puVar4[0x11]);
    if (((iVar6 == 1) || (iVar6 = ifTouchGetSelectionModeForRegion((int)(short)puVar4[0x11]), iVar6 == 2)) &&
       (iVar6 = ifTouchGetSelectionModeForRegion((int)(short)puVar4[0x10]), iVar6 != 1)) {
      DAT_0044de30 = 1;
    }
    iVar6 = ifTouchGetSelectionModeForRegion((int)(short)puVar4[0x10]);
    if (iVar6 == 6) {
      *(unsigned char *)(puVar4 + 0x17) = 1;
      DAT_0044de30 = 0;
    }
    iVar6 = ifTouchGetSelectionModeForRegion((int)(short)puVar4[0x11]);
    if (iVar6 == 6) {
      *(unsigned char *)(puVar4 + 0x17) = 1;
      DAT_0044de30 = 1;
    }
    iVar6 = func_0x001ff8e0(5);
    if (((iVar6 != 0) || (iVar6 = func_0x001ff8e0(6), iVar6 != 0)) &&
       ((*(unsigned char *)(puVar4 + 10) = 0, puVar4[6] == DAT_0044de30 &&
        (*(char *)((int)DAT_0044de2c + DAT_0044de30 + 0x34c) != '\0')))) {
      FUN_0029dfc0(1);
      FUN_002996d8(1);
    }
    iVar6 = FUN_002b8cec(5);
    if (iVar6 != 0) {
      DAT_0044de30 = DAT_0044de30 - 1;
      FUN_002996d8(0);
      *(unsigned char *)(puVar4 + 10) = 1;
    }
    iVar6 = FUN_002b8cec(6);
    if (iVar6 != 0) {
      DAT_0044de30 = DAT_0044de30 + 1;
      FUN_002996d8(0);
      *(unsigned char *)(puVar4 + 10) = 1;
    }
    DAT_0044de30 = (DAT_0044de30 + 2) % 2;
    if (DAT_0044de30 != iVar8) {
      FUN_002b8e84(0x100016c);
    }
    FUN_002d9014();
    iVar8 = DAT_0044de30 + 1;
    puVar4[DAT_0044de30 + 0xb] = 0x3f800000;
    puVar4[iVar8 % 2 + 0xb] = 0x3f000000;
    fVar14 = (float)puVar4[8] - 1.0f;
    puVar4[8] = fVar14;
    if (fVar14 <= 0.0f) {
      fVar14 = 30.0f;
      puVar4[7] = 0x3f800000;
      puVar4[8] = 0x41f00000;
    }
    if (0x41700000 < (int)fVar14) {
      puVar4[7] = (float)puVar4[7] - 0.053333335f;
    }
    if ((int)fVar14 < 0x41700000) {
      puVar4[7] = (float)puVar4[7] + 0.053333335f;
    }
    iVar8 = FUN_002bfde4(0);
    if (iVar8 == 0) {
      uVar7 = buttonHelpHasEnabledEntryForId(1);
      bVar13 = uVar7 == 0;
      if (bVar13) {
        uVar7 = (unsigned int)*(unsigned char *)(puVar4 + 0x17);
      }
      if (!bVar13 || uVar7 != 0) goto code_r0x001c9900;
    }
    else {
code_r0x001c9900:
      cVar1 = *(char *)((int)DAT_0044de2c + DAT_0044de30 + 0x34c);
      bVar13 = cVar1 == '\0';
      if (bVar13) {
        cVar1 = *(char *)((int)puVar4 + 0x49);
      }
      if (!(bVar13 && cVar1 == '\0')) {
        FUN_002b8e84(0x100016d);
        if (*(char *)(puVar4 + 10) != '\0') {
          *(unsigned char *)(puVar4 + 10) = 0;
          FUN_002d9014();
        }
        *(unsigned char *)(puVar4 + 0x15) = 1;
        iVar8 = FUN_00299fc0();
        if ((iVar8 != 0) && (*(char *)((int)DAT_0044de2c + DAT_0044de30 + 0x34c) != '\0')) {
          FUN_002996d8(1);
        }
        if (puVar4[0x92] == 0) {
          uVar9 = puVar4[0x90];
          FUN_00297060(uVar9,puVar4[0x91]);
          puVar4[0x92] = uVar9;
        }
        if (*(char *)((int)puVar4 + 0x49) != '\0') {
          uVar9 = puVar4[0x92];
          if (*(char *)((int)DAT_0044de2c + DAT_0044de30 + 0x34c) != '\0') {
            uVar10 = 0;
            FUN_00296f4c(uVar9,uVar10);
          }
          else {
            FUN_00296f4c(uVar9,5);
          }
        }
        else {
          *(unsigned char *)((int)puVar4 + 0x55) = 1;
          *(unsigned char *)((int)puVar4 + 0x73) = 0;
          uVar9 = puVar4[0x92];
          uVar10 = 3;
          FUN_00296f4c(uVar9,uVar10);
        }
      }
      else {
        *(unsigned char *)(puVar4 + 0x15) = 0;
        *(unsigned char *)(puVar4 + 0x17) = 0;
      }
    }
    if (*(char *)(puVar2 + 0x15) != '\0') {
      FUN_002b8cc8();
      FUN_002b8cc8();
      *(unsigned char *)((int)puVar2 + 0x37a) = 0;
      if (*(char *)((int)puVar2 + 0x49) != '\0') {
        FUN_0026b584(1);
        puVar2[2] = 8;
        puVar2[3] = 0;
      }
      else {
        FUN_0026b584(1);
        *(unsigned char *)((int)puVar2 + 0x72) = 0;
        *(unsigned char *)((int)puVar2 + 0x73) = 0;
        puVar2[2] = 5;
        puVar2[3] = 0;
        messageMainSetEnabled(0);
      }
      FUN_002a0cc8(1);
    }
    break;
  case 3:
    uVar9 = FUN_002beda4(DAT_0044de2c + 0x27);
    puVar4[0x19] = uVar9;
    uVar9 = FUN_002beda4(puVar4 + 0x4a);
    puVar4[0x1a] = uVar9;
    uVar9 = FUN_002beda4(puVar4 + 0x6d);
    puVar4[0x1b] = uVar9;
    FUN_002bf818(puVar4 + 0x27);
    FUN_002bf818(puVar4 + 0x4a);
    FUN_002bf818(puVar4 + 0x6d);
    if ((*(char *)((int)puVar4 + 0x23e) != '\0') && (iVar8 = FUN_00295618(), iVar8 != 0)) {
      *(unsigned char *)(puVar4 + 0x12) = 1;
    }
    iVar8 = FUN_00299fc0();
    if (((iVar8 != 0) || (iVar8 = func_0x001a6d48(), iVar8 != 0)) &&
       (*(char *)((int)puVar2 + 0x355) != '\0')) {
      *(unsigned char *)((int)puVar2 + 0x355) = 0;
      FUN_0029ca58();
      puVar2[2] = 4;
      puVar2[3] = 0;
    }
    break;
  case 4:
    uVar9 = FUN_002beda4(DAT_0044de2c + 0x27);
    puVar4[0x19] = uVar9;
    uVar9 = FUN_002beda4(puVar4 + 0x4a);
    puVar4[0x1a] = uVar9;
    uVar9 = FUN_002beda4(puVar4 + 0x6d);
    puVar4[0x1b] = uVar9;
    FUN_002bf818(puVar4 + 0x27);
    FUN_002bf818(puVar4 + 0x4a);
    FUN_002bf818(puVar4 + 0x6d);
    if ((*(char *)((int)puVar4 + 0x23e) != '\0') && (iVar8 = FUN_00295618(), iVar8 != 0)) {
      *(unsigned char *)(puVar4 + 0x12) = 1;
    }
    if (*(char *)(puVar2 + 0x12) == '\0') {
      return 0;
    }
    iVar8 = FUN_00295618();
    if (iVar8 == 0) {
      return 0;
    }
    uVar9 = FUN_0026b5dc();
    FUN_002bcd68(uVar9,puVar2[0xdf],0x80);
    uVar9 = FUN_0026b5c8();
    FUN_002ad8b4(uVar9,puVar2[0xe0]);
    uVar9 = FUN_002c09bc();
    FUN_002bcd68(uVar9,puVar2[0xe1],0x24d28);
    FUN_002b827c(3);
    uVar9 = 0x10;
    DAT_0044de30 = DAT_0044de34;
    puVar2[2] = uVar9;
    puVar2[3] = 0;
    break;
  case 5:
    iVar8 = FUN_00299fc0();
    if ((iVar8 != 0) && (*(char *)((int)puVar2 + 0x355) != '\0')) {
      *(unsigned char *)((int)puVar2 + 0x355) = 0;
      FUN_002996d8(1);
    }
    puVar4 = DAT_0044de2c;
    if (*(char *)((int)DAT_0044de2c + 0x72) != '\0') {
      iVar8 = FUN_0019e0c0(DAT_0044de2c[0x92]);
      if (iVar8 == 2) {
        DAT_0044de28 = '\x01';
      }
    }
    else if (*(char *)((int)DAT_0044de2c + 0x73) != '\0') {
      DAT_0044de2c[0x1e] = DAT_0044de2c[0x1e] + 1;
      FUN_0019e0c0(puVar4[0x92]);
      iVar8 = func_0x0026b5fc();
      if (iVar8 != 0) {
        if ((int)puVar4[0x1e] < 0x1f) {
          FUN_0026b584();
        }
        else {
          gameDataRemoveHomeButtonHold(1);
        }
      }
      iVar8 = func_0x0026b5fc();
      bVar13 = iVar8 != 0;
      iVar8 = 0;
      iVar6 = 0;
      if (bVar13) {
        iVar6 = puVar4[0x1e];
        iVar8 = iVar6 - 0x1e;
      }
      if ((bVar13 && iVar6 != 0x1e) && iVar8 < 0 == (bVar13 && SBORROW4(iVar6,0x1e))) {
        messageMainSetEnabled(1);
        FUN_002b8838(0x9e);
        *(unsigned char *)((int)puVar4 + 0x72) = 1;
        iVar8 = func_0x0026b5ec();
        if (iVar8 != 0) {
          gameDataRemoveHomeButtonHold(1);
          iVar8 = FUN_002c09bc();
          FUN_002bcd68(puVar4 + DAT_0044de30 * 0x20 + 0x93,iVar8 + 0x2470c,0x80);
          *(unsigned char *)((int)puVar4 + DAT_0044de30 + 0x34c) = 1;
          FUN_00296f4c(puVar4[0x92],4);
        }
        else {
          gameDataRemoveHomeButtonHold(1);
          FUN_00296f4c(puVar4[0x92],4);
        }
      }
    }
    else if (*(char *)((int)DAT_0044de2c + 0x355) == '\0') {
      *(unsigned char *)((int)DAT_0044de2c + 0x73) = 1;
      FUN_0026b60c(DAT_0044de30 + 1);
      FUN_0019e0c0(puVar4[0x92]);
      puVar4[0x1e] = 0;
    }
    if ((DAT_0044de28 != '\0') && (*(char *)((int)puVar2 + 0x355) == '\0')) {
      FUN_0029ca58();
      FUN_002b827c(3);
      puVar2[2] = 6;
      puVar2[3] = 0;
    }
    break;
  case 6:
    iVar8 = FUN_0026b564();
    if ((iVar8 != 0) && (iVar8 = FUN_00295618(), iVar8 != 0)) {
      FUN_0029c3c0(0,0xc,0xff);
      FUN_0029c3c0(1,0xc,0xff);
      puVar2[2] = 7;
      puVar2[3] = 0;
    }
    break;
  case 7:
    iVar8 = FUN_002896bc();
    if (iVar8 == 0) {
      return 0;
    }
    iVar8 = FUN_0026b5dc();
    if (*(char *)(iVar8 + 0x62) == '\x02') {
      func_0x002ced88();
    }
    DAT_0044de38 = FUN_002c5300(0x100,0x100,0,0x80,1);
    DAT_0044de3c = FUN_002c5300(0x100,0x100,0,8,1);
    DAT_0044de40 = FUN_002c5300(0x100,0x100,0,0x24d28,1);
    uVar9 = FUN_0026b5dc();
    FUN_002bcd68(DAT_0044de38,uVar9,0x80);
    uVar9 = FUN_0026b5c8();
    FUN_002ad8b4(DAT_0044de3c,uVar9);
    uVar9 = FUN_002c09bc();
    FUN_002bcd68(DAT_0044de40,uVar9,0x24d28);
    uVar9 = FUN_0026b5dc();
    FUN_002bcd68(uVar9,puVar2[0xdf],0x80);
    uVar9 = FUN_0026b5c8();
    FUN_002ad8b4(uVar9,puVar2[0xe0]);
    uVar9 = FUN_002c09bc();
    FUN_002bcd68(uVar9,puVar2[0xe1],0x24d28);
    puVar2[2] = 0x10;
    puVar2[3] = 0;
    break;
  case 8:
    iVar8 = FUN_00299fc0();
    if ((iVar8 != 0) && (*(char *)((int)DAT_0044de2c + DAT_0044de30 + 0x34c) != '\0')) {
      FUN_002996d8(1);
    }
    puVar4 = DAT_0044de2c;
    cVar1 = *(char *)((int)DAT_0044de2c + 0x55);
    bVar13 = cVar1 == '\0';
    if (bVar13) {
      cVar1 = *(char *)((int)DAT_0044de2c + 0x71);
    }
    if (!(bVar13 && cVar1 == '\0')) {
      iVar8 = func_0x002febe0();
      if ((iVar8 != 0) && (*(char *)((int)puVar4 + 0x72) == '\0')) {
        FUN_00296f4c(puVar4[0x92],2);
        *(unsigned char *)((int)puVar4 + 0x72) = 1;
        *(unsigned char *)((int)puVar4 + 0x355) = 1;
        uVar9 = FUN_0026b5dc();
        FUN_002bcd68(puVar4 + DAT_0044de30 * 0x20 + 0x93,uVar9,0x80);
        iVar8 = DAT_0044de30;
        *(unsigned char *)((int)puVar4 + DAT_0044de30 + 0x34c) = 1;
        puVar11 = (unsigned int *)puVar4[0xd4];
        *puVar11 = *(unsigned int *)((int)puVar4 + iVar8 * 0x80 + 0x25e);
        puVar11[1] = *(unsigned int *)((int)puVar4 + iVar8 * 0x80 + 0x262);
        puVar11[2] = *(unsigned int *)((int)puVar4 + iVar8 * 0x80 + 0x266);
        *(unsigned short *)(puVar11 + 3) = *(unsigned short *)((int)puVar4 + iVar8 * 0x80 + 0x26a);
        *(unsigned int *)((int)puVar11 + 0xe) = *(unsigned int *)((int)puVar4 + iVar8 * 0x80 + 0x28a);
        *(unsigned int *)((int)puVar11 + 0x12) = *(unsigned int *)((int)puVar4 + iVar8 * 0x80 + 0x28e);
        *(unsigned int *)((int)puVar11 + 0x16) = *(unsigned int *)((int)puVar4 + iVar8 * 0x80 + 0x292);
        *(unsigned short *)((int)puVar11 + 0x1a) = *(unsigned short *)((int)puVar4 + iVar8 * 0x80 + 0x296);
        FUN_002bcd68(puVar11 + 7,puVar4 + iVar8 * 0x20 + 0x9f,0xe);
        *(unsigned short *)((int)puVar11 + 0x2a) = *(unsigned short *)(puVar4 + iVar8 * 0x20 + 0x9c);
        *(unsigned short *)(puVar11 + 0xb) = *(unsigned short *)((int)puVar4 + iVar8 * 0x80 + 0x272);
        puVar11[0xc] = puVar4[iVar8 * 0x20 + 0x9b];
        FUN_002bf694(puVar11 + 0x13,puVar4 + iVar8 * 0x20 + 0x93);
        *(unsigned char *)((int)puVar11 + 0x76) = *(unsigned char *)(puVar4 + iVar8 * 0x20 + 0xa6);
        iVar6 = FUN_002c09bc();
        FUN_002bf694(iVar6 + 0x54,puVar4 + iVar8 * 0x20 + 0x93);
        FUN_0029a0e8(puVar4[0xd4]);
        if (puVar4 + DAT_0044de30 * 0x20 != (unsigned int *)0xfffffdb4) {
          FUN_0026b5a8(*(char *)(puVar4 + DAT_0044de30 * 0x20 + 0xac) != '\0');
        }
        FUN_0029c4c8(0);
        FUN_0029dfc0(1);
        FUN_0029e874(1);
        FUN_002996d8(0);
        FUN_0029963c(1,*(unsigned short *)(puVar4[0xd4] + 8));
        FUN_0029963c(2,*(unsigned short *)(puVar4[0xd4] + 10));
        FUN_0029963c(0,*(unsigned short *)(puVar4[0xd4] + 6));
        messageMainSetEnabled(1);
        FUN_002b8838(0x9e);
      }
      if ((*(char *)((int)puVar4 + 0x355) != '\0') && (iVar8 = FUN_00299fc0(), iVar8 != 0)) {
        *(unsigned char *)((int)puVar4 + 0x355) = 0;
        FUN_002996d8(1);
      }
      uVar7 = FUN_0019e0c0(puVar4[0x92]);
      bVar13 = uVar7 == 2;
      if (bVar13) {
        uVar7 = (unsigned int)*(unsigned char *)((int)puVar4 + 0x355);
      }
      if (bVar13 && uVar7 == 0) {
        DAT_0044de29 = '\x01';
        *(unsigned char *)(puVar4 + 0x15) = 0;
        *(unsigned char *)((int)puVar4 + 0x55) = 0;
        *(unsigned char *)(puVar4 + 0x17) = 0;
        *(unsigned char *)((int)puVar4 + 0x72) = 0;
      }
    }
    else {
      iVar8 = FUN_0019e0c0(DAT_0044de2c[0x92]);
      if (iVar8 == 2) {
        iVar8 = messageMainGetChoiceResult();
        if (iVar8 != 0) {
          gameDataRemoveHomeButtonHold(1);
          *(unsigned char *)((int)puVar4 + 0x55) = 0;
          *(unsigned char *)(puVar4 + 0x15) = 0;
          *(unsigned char *)(puVar4 + 0x17) = 0;
          *(unsigned char *)((int)puVar4 + 0x72) = 0;
          FUN_002b8838(0xa8);
        }
        else {
          FUN_002123dc();
          messageMainSetEnabled(0);
          *(unsigned char *)((int)puVar4 + 0x55) = 1;
          uVar9 = FUN_0026b5dc();
          FUN_002bcd68(uVar9,puVar4[0xdf],0x80);
          uVar9 = FUN_0026b5c8();
          FUN_002ad8b4(uVar9,puVar4[0xe0]);
          uVar9 = FUN_002c09bc();
          FUN_002bcd68(uVar9,puVar4[0xe1],0x24d28);
          FUN_00296f4c(puVar4[0x92],1);
          iVar8 = FUN_002c09bc();
          *(char *)(iVar8 + 3) = (char)DAT_0044de30 + '\x01';
          puVar5 = (unsigned short *)FUN_002c09bc();
          *puVar5 = 3;
          iVar8 = FUN_002c09bc();
          *(unsigned char *)(iVar8 + 2) = *(unsigned char *)((int)puVar4 + 0x379);
          FUN_002c09bc();
          FUN_001a1a64();
          FUN_0026b4cc();
          gameCounterAddSaturating(0x20,1);
          iVar8 = FUN_002c09bc();
          FUN_00322d18(DAT_0044de30 + 1,*(unsigned char *)(iVar8 + 2));
        }
      }
    }
    if (DAT_0044de29 != '\0') {
      FUN_0029ca58();
      puVar2[2] = 9;
      puVar2[3] = 0;
      *(unsigned char *)((int)puVar2 + 0x71) = 1;
      FUN_002bd8e8(puVar2 + 0x27,2);
      FUN_002bd8e8(puVar2 + 0x4a,2,0);
      FUN_002bd8e8(puVar2 + 0x6d,2,0);
    }
    else if (*(char *)(puVar2 + 0x15) == '\0') {
      FUN_002a0cc8(0);
      puVar2[2] = 2;
      puVar2[3] = 0;
      *(unsigned char *)((int)puVar2 + 0x37a) = 1;
      uVar9 = FUN_002b8584(0x36,0x51);
      puVar2[0x10] = uVar9;
      uVar9 = FUN_002b8584(0x36,0x52);
      puVar2[0x11] = uVar9;
    }
    break;
  case 9:
    uVar9 = FUN_002beda4(DAT_0044de2c + 0x27);
    puVar4[0x19] = uVar9;
    uVar9 = FUN_002beda4(puVar4 + 0x4a);
    puVar4[0x1a] = uVar9;
    uVar9 = FUN_002beda4(puVar4 + 0x6d);
    puVar4[0x1b] = uVar9;
    FUN_002bf818(puVar4 + 0x27);
    FUN_002bf818(puVar4 + 0x4a);
    FUN_002bf818(puVar4 + 0x6d);
    if ((*(char *)((int)puVar4 + 0x23e) != '\0') && (iVar8 = FUN_00295618(), iVar8 != 0)) {
      *(unsigned char *)(puVar4 + 0x12) = 1;
    }
    iVar8 = FUN_00295618();
    cVar1 = '\0';
    if (iVar8 != 0) {
      cVar1 = *(char *)(puVar2 + 0x12);
    }
    if (iVar8 == 0 || cVar1 == '\0') {
      return 0;
    }
    puVar2[2] = 0x10;
    puVar2[3] = 0;
    break;
  case 0xf:
    iVar8 = FUN_002896bc();
    if (iVar8 == 0) {
      return 0;
    }
    puVar2[2] = 0x10;
    puVar2[3] = 0;
    break;
  case 0x10:
    if (puVar2[3] == 0) {
      FUN_00152bec(puVar2[0xd8]);
    }
    if (2 < (int)puVar2[3]) {
      FUN_00202f9c();
    }
    puVar2[3] = puVar2[3] + 1;
    break;
  case 0x11:
    FUN_00322b80();
    puVar2[2] = 0x12;
    puVar2[3] = 0;
    break;
  case 0x12:
    iVar8 = func_0x002febd0();
    if (iVar8 != 0) {
      puVar2[2] = 0x13;
      puVar2[3] = 0;
    }
    break;
  case 0x13:
    FUN_00224bd0();
    puVar2[2] = 0x14;
    puVar2[3] = 0;
    break;
  case 0x14:
    iVar8 = func_0x001b0bec();
    if (iVar8 == 0) {
      return 0;
    }
    FUN_002db9f8();
    uVar9 = 0x15;
    puVar2[2] = uVar9;
    puVar2[3] = 0;
    break;
  case 0x15:
    FUN_002c57c8(1,0);
    puVar2 = DAT_0044de2c;
    if (DAT_0044de2c != (unsigned int *)0x0) {
      *(unsigned char *)(DAT_0044de2c + 1) = 1;
      FUN_002c43b4(*puVar2,0);
      FUN_002c415c(puVar2);
      DAT_0044de2c = (unsigned int *)0x0;
    }
    return 0xffffffff;
  }
  return 0;
}
*/
#include "common.h"
