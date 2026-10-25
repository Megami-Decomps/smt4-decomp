/* NON_MATCHING: found outside every function: its address is in FUN_0028a420's literal pool; not written yet. */
/* romwright 0.5.0 decompilation of FUN_0032c8d4 for reference (not compiled; its own view of the boundaries):

/* WARNING: Removing unreachable block (ram,0x0032d8f8) * /

unsigned int FUN_0032c8d4(void)

{
  char cVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned char uVar4;
  unsigned short uVar5;
  unsigned short uVar6;
  int iVar7;
  unsigned int uVar8;
  unsigned int *puVar9;
  int *piVar10;
  char **ppcVar11;
  unsigned char *puVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  unsigned int *puVar17;
  unsigned int uVar18;
  int iVar19;
  unsigned int uVar20;
  char *pcVar21;
  unsigned char bVar22;
  unsigned long long uVar23;
  unsigned int uStack_658;
  unsigned int uStack_654;
  char *pcStack_650;
  unsigned int uStack_64c;
  unsigned int uStack_648;
  unsigned char auStack_640 [12];
  char acStack_634 [58];
  unsigned short uStack_5fa;
  
  puVar2 = DAT_0043da90;
  if (DAT_0043da90[8] == 0xe) {
    iVar7 = DAT_0043da90[6];
    if (!((iVar7 == 4 || iVar7 == 5) || iVar7 == 0x35)) {
      iVar7 = FUN_0029e1c8();
      FUN_002a0cc8(iVar7 == 0);
    }
    else {
      FUN_002a0cc8(1);
    }
  }
  FUN_002bf818(puVar2 + 0x1d8);
  FUN_002bf818(puVar2 + 0x1fb);
  uVar4 = ifTouchGetSelectionMode();
  iVar7 = puVar2[6];
  *(unsigned char *)(puVar2 + 0xc) = uVar4;
  if ((((iVar7 != 7 && iVar7 != 8) && ((iVar7 != 9 && iVar7 != 0x1b) && iVar7 != 0x1c)) &&
      (*(short *)(puVar2 + 0x1a6) != 3)) && (*(short *)(puVar2 + 0x1a6) != 4)) {
    FUN_002b8ee0(puVar2 + 0x192,0);
    iVar7 = FUN_0029e958(puVar2 + 0xd);
    iVar19 = 0;
    if (0 < iVar7) {
      do {
        if (iVar19 <= puVar2[5] - 1) {
          FUN_002b8ee0(puVar2 + iVar19 * 0x23 + 0x241,0);
        }
        iVar19 = iVar19 + 1;
      } while (iVar19 < iVar7);
    }
    iVar7 = FUN_0028f670();
    if ((iVar7 == 0) && (iVar7 = FUN_001f302c(), iVar7 == 2)) {
      FUN_002b8ee0(puVar2 + 0x21e,0);
    }
  }
  puVar17 = DAT_0043da90;
  switch(puVar2[6]) {
  case 0:
    uVar18 = FUN_002b898c();
    puVar2[0x922] = uVar18;
    func_0x00241b40();
    puVar2[8] = 6;
    puVar2[6] = 1;
    messageBannerInitSelection(1,0);
    messageInitializeSavedBanner();
    FUN_00299138();
    break;
  case 1:
    puVar2[5] = 0;
    puVar2[6] = 2;
    break;
  case 2:
    iVar7 = FUN_002b89a4(0);
    if (iVar7 != 0) {
      puVar2[6] = puVar2[8];
      uVar18 = FUN_0029e908(puVar2 + 0xd);
      uVar8 = dataTable15GetUnlockedEntryId((int)*(char *)(puVar2 + 0x26),uVar18);
      bVar22 = *(char *)((int)puVar2 + 0xab) != '\0';
      uVar20 = uVar8;
      if (bVar22) {
        uVar20 = (unsigned int)*(unsigned char *)((int)puVar2 + 0xad);
      }
      if (!bVar22 || uVar20 == 3) {
        uVar18 = FUN_00241a64(uVar8);
        FUN_0029ee6c(uVar18,0x323232ff);
        if (uVar8 == 0x2d) {
          FUN_00253fe8(0xa11923ff,1,0x12,0x15);
        }
      }
      iVar7 = FUN_00292844(uVar8);
      puVar17 = DAT_0043da90;
      if ((*(unsigned char *)(iVar7 + 3) & 0xf) != 0) {
        pcVar21 = (char *)((int)DAT_0043da90 + 0xe3b);
        if (*(char *)((int)DAT_0043da90 + 0xe3b) == '\0') {
          iVar7 = 0;
          do {
            *(unsigned short *)((int)puVar17 + iVar7 * 2 + 0xe22) = 0xffff;
            *(unsigned short *)((int)puVar17 + iVar7 * 6 + 0xe28) = 0xffff;
            *(unsigned short *)((int)puVar17 + iVar7 * 6 + 0xe2a) = 0xffff;
            puVar12 = auStack_640;
            *(unsigned short *)((int)puVar17 + iVar7 * 6 + 0xe2c) = 0xffff;
            FUN_00257a50(puVar12,iVar7,0);
            if (puVar12 != (unsigned char *)0x0) {
              iVar19 = asdTMTexTableEntryAt(0x24,iVar7 + 0x87);
              uVar5 = FUN_002b8584(0x24,iVar7 + 0x87);
              *(unsigned short *)((int)puVar17 + iVar7 * 2 + 0xe22) = uVar5;
              iVar13 = asdTMTexTableEntryAt(0x24,0x7f);
              iVar14 = (int)(short)(*(short *)(iVar19 + 8) + *(short *)(iVar13 + 8));
              FUN_0029e054(iVar14,(int)(short)(*(short *)(iVar19 + 10) + *(short *)(iVar13 + 10)),
                           (int)**(short **)(iVar13 + 0xc),(int)(*(short **)(iVar13 + 0xc))[1]);
              *(short *)((int)puVar17 + iVar7 * 6 + 0xe28) = (short)iVar14;
              iVar13 = asdTMTexTableEntryAt(0x24,0x80);
              iVar14 = (int)(short)(*(short *)(iVar19 + 8) + *(short *)(iVar13 + 8));
              FUN_0029e054(iVar14,(int)(short)(*(short *)(iVar19 + 10) + *(short *)(iVar13 + 10)),
                           (int)**(short **)(iVar13 + 0xc),(int)(*(short **)(iVar13 + 0xc))[1]);
              *(short *)((int)puVar17 + iVar7 * 6 + 0xe2a) = (short)iVar14;
              iVar13 = asdTMTexTableEntryAt(0x24,0x81);
              iVar14 = (int)(short)(*(short *)(iVar19 + 8) + *(short *)(iVar13 + 8));
              FUN_0029e054(iVar14,(int)(short)(*(short *)(iVar13 + 10) + *(short *)(iVar19 + 10)),
                           (int)**(short **)(iVar13 + 0xc),(int)(*(short **)(iVar13 + 0xc))[1]);
              *(short *)((int)puVar17 + iVar7 * 6 + 0xe2c) = (short)iVar14;
              *pcVar21 = *(char *)((int)puVar17 + 0xe3b) + '\x04';
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 < 3);
        }
      }
      else {
        FUN_0028a924(1,0,0xffffffff);
      }
      uVar20 = FUN_0029e958(puVar2 + 0xd);
      iVar7 = 0;
      if (0 < (int)uVar20) {
        do {
          iVar19 = (int)(8 - uVar20) / 2 + 4;
          if ((uVar20 & 1) != 0) {
            iVar19 = (int)(7 - uVar20) / 2 + 0x14;
          }
          uVar5 = FUN_002b8584(0x1d,iVar19 + iVar7);
          iVar7 = iVar7 + 1;
          *(unsigned short *)((int)puVar2 + (unsigned int)*(unsigned char *)((int)puVar2 + 0xe3a) * 2 + 0xdf0) = uVar5;
          *(char *)((int)puVar2 + 0xe3a) = *(char *)((int)puVar2 + 0xe3a) + '\x01';
        } while (iVar7 < (int)uVar20);
      }
      if (*(char *)((int)puVar2 + 0xab) != '\0') {
        if (*(char *)((int)puVar2 + 0x99) == '\x01') {
          if (*(char *)((int)puVar2 + 0xad) == '\x03') {
            uVar18 = 0x4f;
          }
          else {
            uVar18 = 0x50;
          }
          FUN_002b8838(uVar18);
        }
      }
      else {
        uVar5 = FUN_002b8584(0x1d,0xe0);
        *(unsigned short *)(puVar2 + 0x380) = uVar5;
        *(char *)((int)puVar2 + 0xe3a) = *(char *)((int)puVar2 + 0xe3a) + '\x01';
        if (*(char *)((int)puVar2 + 0x99) == '\x01') {
          iVar7 = FUN_00262f14();
          if (iVar7 == 0) {
            uVar18 = 3;
          }
          else {
            uVar18 = 4;
          }
          FUN_002b8838(uVar18);
          FUN_002579bc(0);
        }
        if ((*(char *)(puVar2 + 0x26) == '\x01') && ('\x01' < *(char *)((int)puVar2 + 0x99))) {
          iVar7 = FUN_00262f14();
          if (iVar7 == 0) {
            uVar18 = 1;
          }
          else {
            uVar18 = 2;
          }
          FUN_002b8838(uVar18);
          FUN_002579bc(1);
        }
      }
    }
    break;
  case 3:
    iVar7 = 0;
    do {
      FUN_002bd8e8(puVar2 + iVar7 * 0x23 + 0x241,1,0);
      iVar7 = iVar7 + 1;
    } while (iVar7 < 8);
    *(unsigned char *)((int)puVar2 + 0x99) = *(unsigned char *)(puVar2 + 0x26);
    *(unsigned char *)(puVar2 + 0x26) = *(unsigned char *)((int)puVar2 + 0x9a);
    FUN_00298ad8();
    puVar17 = DAT_0043da90;
    if (*(char *)((int)puVar2 + 0x25bd) != '\0') {
      puVar9 = DAT_0043da90 + 6;
      DAT_0043da90[7] = 0;
      puVar17[9] = *puVar9;
      puVar17[5] = 0;
      puVar17[6] = 0x1b;
      *(unsigned char *)((int)puVar2 + 0x25bd) = 0;
    }
    else {
      puVar2[8] = 6;
      puVar17 = DAT_0043da90;
      puVar9 = DAT_0043da90 + 6;
      DAT_0043da90[9] = DAT_0043da90[6];
      *puVar9 = 2;
      puVar17[7] = 0;
      puVar17[5] = 0;
    }
    FUN_0029ee6c(0,0x323232ff);
    if (puVar2[9] == 0x1f) break;
    dataTable15GetUnlockedEntryId((int)*(char *)(puVar2 + 0x26),
                 (int)*(char *)((int)puVar2 + *(char *)(puVar2 + 0x26) + 0x9b));
    iVar7 = FUN_00292844();
    if ((*(unsigned char *)(iVar7 + 3) & 0xf) == 0) {
      dataTable15GetUnlockedEntryId((int)*(char *)((int)puVar2 + 0x99),
                   (int)*(char *)((int)puVar2 + *(char *)((int)puVar2 + 0x99) + 0x9b));
      iVar19 = FUN_00292844();
      if ((*(unsigned char *)(iVar19 + 3) & 0xf) != 0) {
        FUN_0028a368(1);
      }
    }
    if (*(unsigned char *)(iVar7 + 3) >> 4 != 0) break;
    dataTable15GetUnlockedEntryId((int)*(char *)((int)puVar2 + 0x99),
                 (int)*(char *)((int)puVar2 + *(char *)((int)puVar2 + 0x99) + 0x9b));
    iVar7 = FUN_00292844();
    if ((*(unsigned char *)(iVar7 + 3) & 0xf0) == 0) break;
    FUN_00299138();
    messageBannerInitSelection(1,0);
    messageInitializeSavedBanner();
    break;
  case 4:
    FUN_002bf818();
    iVar7 = 0;
    do {
      FUN_002bf818(puVar2 + iVar7 * 0x23 + 0x241);
      iVar7 = iVar7 + 1;
    } while (iVar7 < 8);
    puVar17 = puVar2 + 0x1b5;
    if (*(short *)(puVar2 + 0x1c9) != 2) {
      if (*(short *)(puVar2 + 0x1c9) != 1) {
        FUN_002bf818(puVar17);
      }
      else {
        FUN_002b8ee0(puVar17,0);
      }
    }
    else {
      FUN_002b8ee0(puVar17,1);
    }
    iVar7 = func_0x00213bf4();
    if (((iVar7 == 0) || (*(char *)((int)puVar2 + 0x6d2) == '\0')) ||
       (*(char *)((int)puVar2 + 0x75e) == '\0')) break;
    uVar18 = FUN_0029e908(puVar2 + 0xd);
    iVar7 = dataTable15GetUnlockedEntryId((int)*(char *)(puVar2 + 0x26),uVar18);
    iVar19 = puVar2[8];
    if (iVar19 != 0xe) {
      if (iVar19 != 0x1a) {
        if (iVar19 == 10) {
          uVar18 = 9;
          FUN_002b8838(uVar18);
        }
        else if (iVar19 != 0xc) {
          if (iVar19 == 0xd) {
            uVar18 = 8;
            FUN_002b8838(uVar18);
          }
          else if (iVar19 == 0x2b) {
            uVar18 = 5;
            FUN_002b8838(uVar18);
          }
          else if (iVar19 == 0x2c) {
            uVar18 = 0x98;
            FUN_002b8838(uVar18);
          }
          else if (iVar19 != 0x2d) {
            func_0x00241b40();
          }
        }
        else {
          uVar18 = 7;
          FUN_002b8838(uVar18);
        }
      }
      else {
        if (iVar7 != 0x11) {
          if (iVar7 == 0x12) {
            uVar18 = 0xf;
          }
          else if (iVar7 == 0x13) {
            uVar18 = 0x10;
          }
          else if (iVar7 != 0x14) {
            if (iVar7 == 0x15) {
              uVar18 = 0x12;
            }
            else if (iVar7 == 0x16) {
              uVar18 = 0x13;
            }
            else {
              if (iVar7 != 0x17) goto code_r0x0032d518;
              uVar18 = 0x14;
            }
          }
          else {
            iVar19 = FUN_002c09d0(0x410);
            if (iVar19 == 0) {
              uVar18 = 0x16;
            }
            else {
              uVar18 = 0x11;
            }
          }
        }
        else {
          iVar19 = FUN_002c09d0(0x410);
          if (iVar19 == 0) {
            uVar18 = 0x15;
          }
          else {
            uVar18 = 0xe;
          }
        }
        FUN_002b8838(uVar18);
      }
    }
    else {
      iVar19 = FUN_0029ee54(puVar2 + 0x77);
      if (iVar19 < 1) {
        uVar18 = 7;
      }
      else {
        uVar18 = 0x32;
      }
      FUN_002b8838(uVar18);
    }
code_r0x0032d518:
    FUN_00299900(iVar7);
    puVar17 = DAT_0043da90;
    iVar7 = puVar2[8];
    piVar10 = DAT_0043da90 + 6;
    DAT_0043da90[9] = DAT_0043da90[6];
    *piVar10 = iVar7;
    puVar17[7] = 0;
    puVar17[5] = 0;
    if (iVar7 == 0x30) {
      func_0x002419b0();
      FUN_00275be8(2);
    }
    break;
  case 5:
    FUN_002bf818();
    if (*(char *)((int)puVar2 + 0x75e) == '\0') break;
    if (puVar2[9] == 0x2b) {
      FUN_001a0e8c();
    }
    if (puVar2[9] == 0x2c) {
      FUN_001abb2c();
    }
    puVar17 = DAT_0043da90;
    iVar7 = puVar2[8];
    if (iVar7 != 0xf) {
      if (iVar7 < 0xf) {
        if (iVar7 == 6) {
          uVar18 = FUN_0029e908(puVar2 + 0xd);
          dataTable15GetUnlockedEntryId((int)*(char *)(puVar2 + 0x26),uVar18);
          iVar7 = FUN_00292844();
          if ((*(unsigned char *)(iVar7 + 3) & 0xf) == 0) {
            FUN_0028a924(1,0,0xffffffff);
            FUN_0028a368(1);
          }
          if (((*(unsigned char *)(iVar7 + 3) & 0xf0) == 0) && (iVar7 = FUN_002485b8(), iVar7 == 0)) {
            FUN_00299138();
            messageBannerInitSelection(1,0);
            messageInitializeSavedBanner();
          }
          FUN_002bd8e8(puVar2 + 0x192,1,0);
          iVar7 = 0;
          do {
            FUN_002bd8e8(puVar2 + iVar7 * 0x23 + 0x241,1,0);
            iVar7 = iVar7 + 1;
          } while (iVar7 < 8);
          FUN_002bd8e8(puVar2 + 0x21e,1,0);
          if (puVar2[9] != 0x2d) {
            func_0x00241b40();
          }
          puVar17 = DAT_0043da90;
          puVar9 = DAT_0043da90 + 6;
          DAT_0043da90[9] = DAT_0043da90[6];
          *puVar9 = 1;
          puVar17[7] = 0;
          puVar17[5] = 0;
          break;
        }
        if (iVar7 != 0xb) break;
        FUN_0028a924(9,puVar2[0xb],0xffffffff);
        FUN_0028a368(1);
        FUN_0029e774();
        puVar9 = DAT_0043da90;
        iVar7 = puVar2[8];
        puVar17 = DAT_0043da90 + 6;
        DAT_0043da90[7] = 0;
        puVar9[9] = *puVar17;
        puVar9[5] = 0;
        puVar9[6] = iVar7;
      }
      else {
        if (iVar7 != 0x11) {
          if (iVar7 == 0x15) {
            puVar9 = DAT_0043da90 + 6;
            DAT_0043da90[9] = DAT_0043da90[6];
            *puVar9 = 0x15;
            puVar17[7] = 0;
            puVar17[5] = 0;
          }
          break;
        }
        FUN_0028a924(7,puVar2[0xb],0xffffffff);
        FUN_0028a368(1);
        puVar17 = DAT_0043da90;
        iVar7 = puVar2[8];
        piVar10 = DAT_0043da90 + 6;
        DAT_0043da90[9] = DAT_0043da90[6];
        *piVar10 = iVar7;
        puVar17[7] = 0;
        puVar17[5] = 0;
      }
    }
    else {
      iVar7 = FUN_0029efc0(puVar2 + 0x77);
      iVar19 = FUN_0029efa8(puVar2 + 0x77);
      FUN_0028a924(6,puVar2[(iVar19 + iVar7) * 2 + 0x38f],puVar2[(iVar19 + iVar7) * 2 + 0x390]);
      FUN_0028a368(1);
      puVar9 = DAT_0043da90;
      iVar7 = puVar2[8];
      puVar17 = DAT_0043da90 + 6;
      DAT_0043da90[7] = 0;
      puVar9[9] = *puVar17;
      puVar9[5] = 0;
      puVar9[6] = iVar7;
    }
    if (iVar7 == 0x30) {
      func_0x002419b0();
      FUN_00275be8(2);
    }
    break;
  case 6:
    func_0x00331ecc();
    break;
  case 7:
    FUN_002bf818();
    iVar7 = 0;
    do {
      FUN_002bf818(puVar2 + iVar7 * 0x23 + 0x241);
      iVar7 = iVar7 + 1;
    } while (iVar7 < 8);
    FUN_002bf818(puVar2 + 0x21e);
    puVar17 = DAT_0043da90;
    if (*(char *)((int)puVar2 + 0x6d2) != '\0') {
      puVar9 = DAT_0043da90 + 6;
      DAT_0043da90[7] = 0;
      puVar17[9] = *puVar9;
      puVar17[5] = 0;
      puVar17[6] = 8;
    }
    break;
  case 8:
    iVar7 = FUN_0029ae44();
    if (iVar7 != 0) {
      cVar1 = (char)iVar7 + *(char *)(puVar2 + 0x2b);
      *(char *)(puVar2 + 0x2b) = cVar1;
      if (cVar1 < '\0') {
        uVar4 = 2;
        *(unsigned char *)(puVar2 + 0x2b) = uVar4;
      }
      else if ('\x02' < cVar1) {
        uVar4 = 0;
        *(unsigned char *)(puVar2 + 0x2b) = uVar4;
      }
      puVar12 = auStack_640;
      FUN_00257a50(auStack_640,(int)*(char *)((int)puVar2 + 0xad),(int)*(char *)(puVar2 + 0x2b));
      if (puVar12 != (unsigned char *)0x0) {
        if (*(char *)(puVar2 + 0x2b) != '\0') {
          FUN_0029c4c8(0);
          FUN_0029d8f4(auStack_640,0);
        }
        else {
          FUN_0029c4c8(1);
          FUN_0029defc((int)(short)uStack_5fa,0);
          FUN_0029c4e4(auStack_640,1);
          FUN_0029c4ac(0);
        }
        statusPanelSetOpen(1);
        FUN_0029e890((int)*(char *)(puVar2 + 0x2b),1);
      }
    }
    iVar7 = FUN_0029e02c();
    if (iVar7 == 0) {
      iVar7 = FUN_0029e010();
      if (iVar7 < 0) {
        FUN_002bd8e8(puVar2 + 0x21e,2,0);
        FUN_002bd8e8(puVar2 + 0x192,2,0);
        iVar7 = 0;
        do {
          FUN_002bd8e8(puVar2 + iVar7 * 0x23 + 0x241,2,0);
          iVar7 = iVar7 + 1;
        } while (iVar7 < 8);
      }
      else {
        iVar7 = FUN_0029e010();
        if (0 < iVar7) {
          FUN_002bd8e8(puVar2 + 0x21e,1,0);
          FUN_002bd8e8(puVar2 + 0x192,1,0);
          iVar7 = 0;
          do {
            FUN_002bd8e8(puVar2 + iVar7 * 0x23 + 0x241,1,0);
            iVar7 = iVar7 + 1;
          } while (iVar7 < 8);
        }
      }
      FUN_002b8838(0x50);
      puVar9 = DAT_0043da90;
      puVar17 = DAT_0043da90 + 6;
      DAT_0043da90[7] = 0;
      puVar9[9] = *puVar17;
      puVar9[5] = 0;
      puVar9[6] = 9;
    }
    break;
  case 9:
    if (*(short *)(puVar2 + 0x1a6) != 2) {
      FUN_002b8ee0(puVar2 + 0x21e,0);
      FUN_002b8ee0(puVar2 + 0x192,0);
      iVar7 = 0;
      do {
        FUN_002b8ee0(puVar2 + iVar7 * 0x23 + 0x241,0);
        iVar7 = iVar7 + 1;
      } while (iVar7 < 8);
    }
    else {
      FUN_002b8ee0(puVar2 + 0x21e,1);
      FUN_002b8ee0(puVar2 + 0x192,1);
      iVar7 = 0;
      do {
        FUN_002b8ee0(puVar2 + iVar7 * 0x23 + 0x241,1);
        iVar7 = iVar7 + 1;
      } while (iVar7 < 8);
    }
    puVar17 = DAT_0043da90;
    if ((*(char *)((int)puVar2 + 0x6d2) != '\0') && (*(char *)((int)puVar2 + 0x902) != '\0')) {
      puVar9 = DAT_0043da90 + 6;
      DAT_0043da90[7] = 0;
      puVar17[9] = *puVar9;
      puVar17[5] = 0;
      puVar17[6] = 6;
      if (*(char *)((int)puVar2 + 0xad) != 3) {
        puVar12 = auStack_640;
        FUN_00257a50(auStack_640,(int)*(char *)((int)puVar2 + 0xad),(int)*(char *)(puVar2 + 0x2b));
        if (puVar12 != (unsigned char *)0x0) {
          FUN_0029da34(0,1,uStack_5fa,auStack_640);
        }
      }
    }
    break;
  case 10:
    uVar18 = 0xb;
    FUN_00331158(uVar18);
    break;
  case 0xb:
    iVar7 = FUN_0028a318();
    if (iVar7 == 0) break;
    iVar7 = FUN_0028e9d4(puVar17[0xb]);
    if (iVar7 == 0) {
      FUN_0026a3c4(0xb);
    }
    iVar7 = FUN_0029ee54(puVar17 + 0x2c);
    if (iVar7 < 1) {
      FUN_002bd8e8(puVar17 + 0x1b5,3,0);
      puVar17[8] = 6;
      puVar17 = DAT_0043da90;
      puVar9 = DAT_0043da90 + 6;
      DAT_0043da90[9] = DAT_0043da90[6];
      *puVar9 = 5;
      puVar17[7] = 0;
    }
    else {
      FUN_002bd8e8(puVar17 + 0x1b5,1,0);
      puVar17[8] = 10;
      puVar17 = DAT_0043da90;
      puVar9 = DAT_0043da90 + 6;
      DAT_0043da90[9] = DAT_0043da90[6];
      *puVar9 = 4;
      puVar17[7] = 0;
    }
    puVar17[5] = 0;
    FUN_00299138();
    messageBannerInitSelection(1,0);
    messageInitializeSavedBanner();
    break;
  case 0xc:
    uVar18 = 0xc;
    FUN_00331158(uVar18);
    break;
  case 0xd:
    FUN_00331158(0xd);
    break;
  case 0xe:
    FUN_0018a3e0();
    break;
  case 0xf:
    iVar7 = FUN_0028a318();
    if (iVar7 != 0) {
      iVar7 = FUN_0029efc0(puVar17 + 0x77);
      iVar19 = FUN_0029efa8(puVar17 + 0x77);
      iVar7 = FUN_002987d8(puVar17[(iVar19 + iVar7) * 2 + 0x390],
                           puVar17[(iVar19 + iVar7) * 2 + 0x38f]);
      if (iVar7 == 0) {
        FUN_00262d40();
      }
      FUN_0029dfc0(0);
      FUN_002bd8e8(puVar17 + 0x1b5,1,0);
      puVar17[8] = 0xe;
      puVar17 = DAT_0043da90;
      puVar9 = DAT_0043da90 + 6;
      DAT_0043da90[9] = DAT_0043da90[6];
      *puVar9 = 4;
      puVar17[7] = 0;
      puVar17[5] = 0;
      FUN_00298d0c(1);
    }
    break;
  case 0x10:
    iVar7 = DAT_0043da90[7];
    if (iVar7 == 0) {
      iVar7 = func_0x003acb08();
      if (iVar7 != 0) {
        puVar17[7] = puVar17[7] + 1;
        FUN_00299bc4(puVar17 + 0x90,1);
      }
      break;
    }
    if (iVar7 != 1) {
      if ((iVar7 == 2) && (iVar7 = FUN_00241a44(), iVar7 != 0)) {
        FUN_003aceb4();
        FUN_003ad390();
        FUN_00299900(0);
        FUN_002bd8e8(puVar17 + 0x1b5,3,0);
        puVar17[8] = 6;
        puVar9 = DAT_0043da90;
        puVar17 = DAT_0043da90 + 6;
        DAT_0043da90[7] = 0;
        puVar9[9] = *puVar17;
        puVar9[5] = 0;
        puVar9[6] = 5;
      }
      break;
    }
    iVar7 = FUN_0029efc0(DAT_0043da90 + 0x90);
    iVar19 = FUN_0029efa8(puVar17 + 0x90);
    acStack_634[0] = '\0';
    uVar18 = asdTMTexTableEntryAt(0x1d,0x56d);
    uStack_654 = (unsigned int)*(short *)((int)puVar17 + 0xe06);
    pcStack_650 = acStack_634;
    uStack_648 = 1;
    uStack_64c = 0;
    uStack_658 = (unsigned int)*(short *)(puVar17 + 0x381);
    puVar9 = puVar17 + 0x90;
    FUN_0029f5d8(puVar9,uVar18,puVar17 + 899,(int)*(short *)((int)puVar17 + 0xe02));
    if (puVar9 == (unsigned int *)0x0) {
      puVar9 = puVar17 + 0x90;
      FUN_0029efd8(puVar9,1);
      if (puVar9 == (unsigned int *)0x0) {
        iVar13 = 0;
        FUN_002c1658(0,1);
        if (!(iVar13 == 0 && acStack_634[0] == '\0')) {
          uVar20 = (unsigned int)*(unsigned short *)((int)puVar17 + (iVar7 + iVar19) * 2 + 0x1db4);
          if (uVar20 == 0) break;
          FUN_00288e68();
          iVar7 = FUN_00298848();
          if (iVar7 != 0) {
            iVar7 = FUN_0028d1f4(uVar20);
            piVar10 = (int *)FUN_002a8764();
            if (iVar7 <= *piVar10) {
              campReleaseScreenTouchRegions(puVar17 + 0x90,1);
              puVar17[0xb] = uVar20;
              FUN_002bd8e8(puVar17 + 0x1b5,3,0);
              puVar17[8] = 0x11;
              puVar17 = DAT_0043da90;
              puVar9 = DAT_0043da90 + 6;
              DAT_0043da90[9] = DAT_0043da90[6];
              *puVar9 = 5;
              puVar17[7] = 0;
              puVar17[5] = 0;
              uVar18 = 0x100016d;
              FUN_002bc01c(uVar18);
              break;
            }
          }
          uVar18 = 0x100016e;
        }
        else {
          iVar7 = 1;
          FUN_002c1658();
          if (iVar7 != 0) {
            campReleaseScreenTouchRegions(puVar17 + 0x90);
            FUN_003ac468();
            puVar17[7] = puVar17[7] + 1;
            uVar18 = 0x100016e;
          }
          else {
            iVar7 = 9;
            FUN_002c1658(9,1);
            if (iVar7 == 0) break;
            FUN_0029e39c(2,0);
            FUN_0029e328(0xb);
            FUN_0029e328(0xe);
            FUN_0029e328(0xf);
            FUN_0029e328(0x11);
            FUN_0029e328(3);
            FUN_0029ee6c(0,0x323232ff);
            uVar4 = FUN_002b898c();
            *(unsigned char *)((int)puVar17 + 0x31) = uVar4;
            puVar17 = DAT_0043da90;
            puVar9 = DAT_0043da90 + 6;
            DAT_0043da90[9] = DAT_0043da90[6];
            *puVar9 = 0x28;
            puVar17[7] = 0;
            puVar17[5] = 0;
            uVar18 = 0x100016d;
          }
        }
        FUN_002bc01c(uVar18);
        break;
      }
    }
    selectionSetUnitByRecordId((int)*(short *)((int)puVar17 + (iVar7 + iVar19) * 2 + 0x1db4));
    FUN_003aca0c();
    uVar18 = FUN_0029e908(puVar17 + 0xd);
    dataTable15GetUnlockedEntryId((int)*(char *)(puVar17 + 0x26),uVar18);
    FUN_00299900();
    break;
  case 0x11:
    iVar7 = FUN_0028a318();
    if (iVar7 != 0) {
      FUN_0029efc0(puVar17 + 0x77);
      FUN_0029efa8(puVar17 + 0x77);
      iVar7 = FUN_0028d1f4(puVar17[0xb]);
      piVar10 = (int *)FUN_002a8764();
      puVar9 = DAT_0043da90;
      if (*piVar10 < iVar7) {
        uVar20 = 0x79f;
        iVar7 = 0;
        while( 1 ) {
          iVar19 = FUN_00262cb0(uVar20 & 0xffff);
          if ((iVar19 != 0) && (uVar8 = uVar20, FUN_00288e68(), uVar8 != 0)) {
            iVar19 = iVar7 * 2;
            iVar7 = iVar7 + 1;
            *(short *)((int)puVar9 + iVar19 + 0x1db4) = (short)uVar20;
          }
          uVar20 = uVar20 + 1;
          if (0x802 < uVar20) break;
          while (uVar20 == 0) {
            uVar20 = 1;
          }
        }
        uVar18 = statusGetAvailableChoiceCount();
        uStack_658 = 1;
        uStack_654 = 1;
        FUN_0029f848(puVar9 + 0x90,uVar18,0xb,1);
        FUN_00282f80(10);
      }
      FUN_0029dfc0(0);
      FUN_002bd8e8(puVar17 + 0x1b5,1,0);
      puVar17[8] = 0x10;
      puVar17 = DAT_0043da90;
      puVar9 = DAT_0043da90 + 6;
      DAT_0043da90[9] = DAT_0043da90[6];
      *puVar9 = 4;
      puVar17[7] = 0;
      puVar17[5] = 0;
    }
    break;
  case 0x12:
    FUN_002bf818();
    iVar7 = 0;
    do {
      FUN_002bf818(puVar2 + iVar7 * 0x23 + 0x241);
      iVar7 = iVar7 + 1;
    } while (iVar7 < 8);
    if (*(char *)((int)puVar2 + 0x6d2) != '\0') {
      FUN_0028a924(0xc,0,0xffffffff);
      FUN_0028a368(0);
      FUN_0029e774();
      FUN_002579bc(1);
      puVar17 = DAT_0043da90;
      puVar9 = DAT_0043da90 + 6;
      DAT_0043da90[9] = DAT_0043da90[6];
      *puVar9 = 0x14;
      puVar17[7] = 0;
      puVar17[5] = 0;
    }
    break;
  case 0x13:
    FUN_002bf818();
    iVar7 = 0;
    do {
      FUN_002bf818(puVar2 + iVar7 * 0x23 + 0x241);
      iVar7 = iVar7 + 1;
    } while (iVar7 < 8);
    if (*(char *)((int)puVar2 + 0x6d2) != '\0') {
      FUN_0028a924(0xd,0,0xffffffff);
      FUN_0028a368(0);
      FUN_0029e774();
      puVar17 = DAT_0043da90;
      puVar9 = DAT_0043da90 + 6;
      DAT_0043da90[9] = DAT_0043da90[6];
      *puVar9 = 0x14;
      puVar17[7] = 0;
      puVar17[5] = 0;
    }
    break;
  case 0x14:
    iVar7 = FUN_0028a318();
    if (iVar7 != 0) {
      iVar7 = func_0x002f6538();
      if (iVar7 != 0) {
        *(unsigned char *)(puVar17 + 0x26) = 4;
        *(unsigned char *)(puVar17 + 0x27) = 2;
      }
      if (*(char *)(puVar17 + 0x26) != '\b') {
        FUN_0028a924(1,0,0xffffffff);
      }
      if (*(char *)(puVar17 + 0x96f) != '\0') {
        iVar7 = func_0x002f6538();
        if (iVar7 == 0) {
          *(unsigned char *)(puVar17 + 0x26) = 1;
        }
        *(unsigned char *)(puVar17 + 0x96f) = 0;
      }
      func_0x0031121c();
      FUN_00298ad8();
      FUN_002bd8e8(puVar17 + 0x192,1,0);
      iVar7 = 0;
      do {
        FUN_002bd8e8(puVar17 + iVar7 * 0x23 + 0x241,1,0);
        iVar7 = iVar7 + 1;
      } while (iVar7 < 8);
      puVar17[8] = 6;
      puVar3 = DAT_0043da90;
      puVar9 = DAT_0043da90 + 6;
      DAT_0043da90[7] = 0;
      puVar3[9] = *puVar9;
      puVar3[5] = 0;
      puVar3[6] = 2;
      if (*(char *)(puVar17 + 0x26) != '\b') {
        iVar7 = FUN_002485b8();
        if (iVar7 == 0) {
          messageBannerInitSelection(1,0);
          messageInitializeSavedBanner();
        }
        iVar7 = FUN_00241a14();
        if (iVar7 == 0) {
          FUN_00299138();
        }
      }
      func_0x00241b40();
      if (*(char *)(puVar17 + 0x26) != '\b') {
        FUN_00299138();
        messageBannerInitSelection(1,0);
        messageInitializeSavedBanner();
        if (*(char *)(puVar17 + 0x26) != '\b') break;
      }
      FUN_00269da0(2);
      uniteRequestScriptEntry(0);
    }
    break;
  case 0x15:
    FUN_00298940();
    iVar7 = FUN_0029e02c();
    if (iVar7 == 0) {
      iVar7 = FUN_0029e010();
      if (iVar7 < 0) {
        FUN_002bd8e8(puVar2 + 0x1b5,2,0);
      }
      else {
        iVar7 = FUN_0029e010();
        if (0 < iVar7) {
          FUN_002bd8e8(puVar2 + 0x1b5,1,0);
        }
      }
      puVar2[8] = 0xe;
      puVar17 = DAT_0043da90;
      puVar9 = DAT_0043da90 + 6;
      DAT_0043da90[9] = DAT_0043da90[6];
      *puVar9 = 4;
      puVar17[7] = 0;
      puVar17[5] = 0;
    }
    break;
  case 0x16:
    FUN_002bf818();
    iVar7 = 0;
    do {
      FUN_002bf818(puVar2 + iVar7 * 0x23 + 0x241);
      iVar7 = iVar7 + 1;
    } while (iVar7 < 8);
    if (*(char *)((int)puVar2 + 0x6d2) != '\0') {
      FUN_0028a924(4,0,0xffffffff);
      FUN_0028a368(0);
      FUN_0029e774();
      FUN_002579bc(1);
      puVar9 = DAT_0043da90;
      puVar17 = DAT_0043da90 + 6;
      DAT_0043da90[7] = 0;
      puVar9[9] = *puVar17;
      puVar9[5] = 0;
      puVar9[6] = 0x18;
    }
    break;
  case 0x17:
    FUN_002bf818();
    iVar7 = 0;
    do {
      FUN_002bf818(puVar2 + iVar7 * 0x23 + 0x241);
      iVar7 = iVar7 + 1;
    } while (iVar7 < 8);
    if (*(char *)((int)puVar2 + 0x6d2) != '\0') {
      FUN_0028a924(0xf,0,0xffffffff);
      FUN_0028a368(0);
      FUN_0029e774();
      FUN_002579bc(1);
      puVar17 = DAT_0043da90;
      DAT_0043da90[9] = DAT_0043da90[6];
      puVar17[7] = 0;
      puVar17[5] = 0;
      puVar17[6] = 0x19;
    }
    break;
  case 0x18:
  case 0x19:
    uStack_658 = 0;
    uStack_654 = 0;
    pcStack_650 = (char *)0x0;
    uStack_64c = 0;
    ppcVar11 = &pcStack_650;
    FUN_00222b5c(ppcVar11,&uStack_658);
    if (ppcVar11 != (char **)0x0) {
      iVar7 = FUN_002a8764();
      uVar8 = uStack_654;
      uVar20 = uStack_658;
      iVar19 = -1;
      iVar13 = -1;
      if (((unsigned int)pcStack_650 & 1) == 0) {
        if (((unsigned int)pcStack_650 & 2) != 0) {
          iVar19 = 0;
        }
        else if (((unsigned int)pcStack_650 & 4) != 0) {
          iVar19 = 1;
        }
        else if (((unsigned int)pcStack_650 & 8) != 0) {
          iVar19 = 2;
        }
      }
      iVar14 = 0;
      do {
        uVar23 = FUN_0024db9c(1,0,iVar14);
        if (((unsigned int)uVar23 & uVar20) != 0 || ((unsigned int)((unsigned long long)uVar23 >> 0x20) & uVar8) != 0) {
          iVar13 = iVar14 - 1;
          break;
        }
        iVar14 = iVar14 + 1;
      } while (iVar14 < 0x19);
      if (puVar17[6] == 0x18) {
        iVar19 = iVar7 + iVar19;
        if (*(char *)(iVar19 + 0x9108) == *(char *)(iVar7 + iVar13 + 0x90f0)) {
          *(unsigned char *)(iVar19 + 0x9108) = 0xff;
          uVar18 = 0x1000172;
        }
        else {
          *(unsigned char *)(iVar19 + 0x9108) = 0xff;
          cVar1 = *(char *)(iVar7 + iVar13 + 0x90f0);
          if (-1 < cVar1) {
            *(char *)(iVar19 + 0x9108) = cVar1;
          }
          uVar18 = 0x1000171;
        }
        FUN_002bc01c(uVar18);
      }
      FUN_0026b9bc();
      if (puVar17[6] == 0x18) {
        FUN_0028a924(4,0,0xffffffff);
        FUN_0028a368(0);
      }
      if (puVar17[6] == 0x19) {
        FUN_0028a924(0xf,0,0xffffffff);
        FUN_0028a368(0);
      }
    }
    iVar7 = FUN_0028a318();
    if (iVar7 == 0) break;
    FUN_00298ad8();
    FUN_00262d40();
    FUN_0028a924(1,0,0xffffffff);
    FUN_002bd8e8(puVar17 + 0x192,1,0);
    iVar7 = 0;
    do {
      FUN_002bd8e8(puVar17 + iVar7 * 0x23 + 0x241,1,0);
      iVar7 = iVar7 + 1;
    } while (iVar7 < 8);
    puVar17[8] = 6;
    puVar17 = DAT_0043da90;
    puVar9 = DAT_0043da90 + 6;
    DAT_0043da90[9] = DAT_0043da90[6];
    *puVar9 = 2;
    puVar17[7] = 0;
    puVar17[5] = 0;
    iVar7 = FUN_002485b8();
    if (iVar7 == 0) {
      messageBannerInitSelection(1,0);
      messageInitializeSavedBanner();
    }
    iVar7 = FUN_00241a14();
    if (iVar7 == 0) {
      FUN_00299138();
    }
    func_0x00241b40();
    FUN_00299138();
    messageBannerInitSelection(1,0);
    messageInitializeSavedBanner();
    break;
  case 0x1a:
    uVar18 = FUN_0029e908(puVar2 + 0xd);
    dataTable15GetUnlockedEntryId((int)*(char *)(puVar2 + 0x26),uVar18);
    FUN_0018854c();
    break;
  case 0x1b:
    iVar7 = FUN_002b89a4(0);
    if (iVar7 != 0) {
      func_0x002c58ac();
      FUN_001f3044();
      FUN_00269da0(2);
      puVar9 = DAT_0043da90;
      puVar17 = DAT_0043da90 + 6;
      DAT_0043da90[7] = 0;
      puVar9[9] = *puVar17;
      puVar9[5] = 0;
      puVar9[6] = 0x1c;
    }
    break;
  case 0x1c:
    iVar7 = func_0x0021697c();
    if (iVar7 != 0) {
      *(unsigned char *)((int)puVar2 + 0xab) = 1;
      *(unsigned char *)(puVar2 + 0x2b) = 0;
      *(unsigned char *)((int)puVar2 + 0xad) = 3;
      FUN_002bd8e8(puVar2 + 0x21e,1,0);
      uniteRequestScriptEntry(0);
      puVar2[8] = 6;
      puVar17 = DAT_0043da90;
      puVar9 = DAT_0043da90 + 6;
      DAT_0043da90[9] = DAT_0043da90[6];
      *puVar9 = 2;
      puVar17[7] = 0;
      puVar17[5] = 0;
    }
    break;
  case 0x1d:
    FUN_002bf818();
    iVar7 = 0;
    do {
      FUN_002bf818(puVar2 + iVar7 * 0x23 + 0x241);
      iVar7 = iVar7 + 1;
    } while (iVar7 < 8);
    FUN_002bf818(puVar2 + 0x21e);
    if ((*(char *)((int)puVar2 + 0x6d2) != '\0') && (iVar7 = FUN_0028f670(), iVar7 != 0)) {
      FUN_0026b9bc();
      FUN_00269da0(2);
      FUN_00262d40();
      puVar17 = DAT_0043da90;
      uVar20 = 0x79f;
      iVar7 = 0;
      while( 1 ) {
        iVar19 = FUN_00262cb0(uVar20 & 0xffff);
        if ((iVar19 != 0) && (uVar8 = uVar20, FUN_00288e68(), uVar8 != 0)) {
          iVar19 = iVar7 * 2;
          iVar7 = iVar7 + 1;
          *(short *)((int)puVar17 + iVar19 + 0x1db4) = (short)uVar20;
        }
        uVar20 = uVar20 + 1;
        if (0x802 < uVar20) break;
        while (uVar20 == 0) {
          uVar20 = 1;
        }
      }
      uVar18 = statusGetAvailableChoiceCount();
      uStack_658 = 1;
      uStack_654 = 1;
      FUN_0029f848(puVar17 + 0x90,uVar18,0xb,1);
      FUN_00282f80(10);
      puVar2[8] = 6;
      puVar17 = DAT_0043da90;
      puVar9 = DAT_0043da90 + 6;
      DAT_0043da90[9] = DAT_0043da90[6];
      *puVar9 = 5;
      puVar17[7] = 0;
      puVar17[5] = 0;
      FUN_002a035c();
      uniteRequestScriptEntry(0);
    }
    break;
  case 0x1e:
    iVar7 = func_0x002419f8();
    if ((iVar7 == 0xf) && (iVar7 = FUN_0026ab40(), iVar7 != 0)) {
      FUN_0029c3c0(0,0x14,0xff);
      puVar17 = DAT_0043da90;
      puVar9 = DAT_0043da90 + 6;
      DAT_0043da90[9] = DAT_0043da90[6];
      *puVar9 = 0x1f;
      puVar17[7] = 0;
      puVar17[5] = 0;
      FUN_0029c3b0(10);
      FUN_001df6d8();
    }
    else {
      iVar7 = 1;
      FUN_002c1658();
      if ((iVar7 != 0) && (iVar7 = messageMainIsWindowActive(), iVar7 != 0)) {
        FUN_0028971c();
        FUN_002bc01c(0x100016d);
        iVar7 = FUN_002bc088();
        if (iVar7 != 0) {
          FUN_002bc02c();
        }
      }
    }
    break;
  case 0x1f:
    iVar7 = FUN_002b89a4(0);
    if (iVar7 != 0) {
      FUN_00223dcc();
      func_0x002ae7cc();
      FUN_0028a924(1,0,0xffffffff);
      FUN_0028a368(1);
      *(unsigned char *)((int)puVar2 + 0xab) = 0;
      FUN_00269cd0();
      puVar17 = DAT_0043da90;
      puVar9 = DAT_0043da90 + 6;
      DAT_0043da90[9] = DAT_0043da90[6];
      *puVar9 = 3;
      puVar17[7] = 0;
      puVar17[5] = 0;
      FUN_002a03d8(0,10);
      iVar7 = FUN_002b8740();
      if (iVar7 != 0) {
        FUN_0021e150();
      }
      else {
        iVar7 = FUN_002b879c();
        if (iVar7 != 0) {
          FUN_002c8628();
        }
        else {
          FUN_00290f48(0x2d);
        }
      }
      func_0x00201538(1);
    }
    break;
  case 0x20:
    FUN_002bf818();
    FUN_002bf818();
    iVar7 = 0;
    do {
      FUN_002bf818(puVar2 + iVar7 * 0x23 + 0x241);
      iVar7 = iVar7 + 1;
    } while (iVar7 < 8);
    iVar7 = func_0x0021697c();
    if (iVar7 != 0) {
      puVar12 = auStack_640;
      FUN_00257a50(auStack_640,(int)*(char *)((int)puVar2 + 0xad),(int)*(char *)(puVar2 + 0x2b));
      if (puVar12 != (unsigned char *)0x0) {
        iVar7 = FUN_0026dae4();
        if (iVar7 != 0) {
          if (*(char *)(puVar2 + 0x2b) != '\0') {
            FUN_0029c4c8(0);
            FUN_0029d8f4(auStack_640,0,1);
          }
          else {
            FUN_0029c4c8(1);
            FUN_0029defc((int)(short)uStack_5fa,0);
            FUN_0029c4e4(auStack_640,1);
            FUN_0029c4ac(0);
          }
          FUN_0029e890((int)*(char *)(puVar2 + 0x2b),1);
          uVar20 = FUN_002d96a4();
          statusPanelSetOpen(uVar20 != uStack_5fa);
        }
        else {
          FUN_0029e890((int)*(char *)(puVar2 + 0x2b),1);
          FUN_0029e874(1);
          FUN_0029e788();
        }
      }
      else {
        *(unsigned char *)((int)puVar2 + 0xad) = 3;
        *(unsigned char *)(puVar2 + 0x2b) = 0;
        FUN_0029e890(0xffffffff,1);
        FUN_0029ca58();
        dataTable15GetUnlockedEntryId((int)*(char *)(puVar2 + 0x26),
                     (int)*(char *)((int)puVar2 + *(char *)(puVar2 + 0x26) + 0x9b));
        FUN_002a035c();
        uniteRequestScriptEntry(0);
      }
      func_0x00241b40();
      FUN_0026b9bc();
      FUN_00262d40();
      FUN_002bd8e8(puVar2 + 0x21e,1,0);
      FUN_002bd8e8(puVar2 + 0x192,1,0);
      iVar7 = 0;
      do {
        FUN_002bd8e8(puVar2 + iVar7 * 0x23 + 0x241,1,0);
        iVar7 = iVar7 + 1;
      } while (iVar7 < 8);
      puVar2[8] = 6;
      puVar9 = DAT_0043da90;
      puVar17 = DAT_0043da90 + 6;
      DAT_0043da90[7] = 0;
      puVar9[9] = *puVar17;
      puVar9[5] = 0;
      puVar9[6] = 2;
    }
    break;
  case 0x21:
    FUN_002bf818();
    iVar7 = 0;
    do {
      FUN_002bf818(puVar2 + iVar7 * 0x23 + 0x241);
      iVar7 = iVar7 + 1;
    } while (iVar7 < 8);
    FUN_002bf818(puVar2 + 0x21e);
    if ((*(char *)((int)puVar2 + 0x6d2) != '\0') && (iVar7 = FUN_001922f8(), iVar7 != 0)) {
      puVar2[8] = 6;
      puVar17 = DAT_0043da90;
      puVar9 = DAT_0043da90 + 6;
      DAT_0043da90[9] = DAT_0043da90[6];
      *puVar9 = 5;
      puVar17[7] = 0;
      puVar17[5] = 0;
      FUN_00262d40();
      puVar17 = DAT_0043da90;
      uVar20 = 0x79f;
      iVar7 = 0;
      while( 1 ) {
        iVar19 = FUN_00262cb0(uVar20 & 0xffff);
        if ((iVar19 != 0) && (uVar8 = uVar20, FUN_00288e68(), uVar8 != 0)) {
          iVar19 = iVar7 * 2;
          iVar7 = iVar7 + 1;
          *(short *)((int)puVar17 + iVar19 + 0x1db4) = (short)uVar20;
        }
        uVar20 = uVar20 + 1;
        if (0x802 < uVar20) break;
        while (uVar20 == 0) {
          uVar20 = 1;
        }
      }
      uVar18 = statusGetAvailableChoiceCount();
      uStack_658 = 1;
      uStack_654 = 1;
      FUN_0029f848(puVar17 + 0x90,uVar18,0xb,1);
      FUN_00282f80(10);
      FUN_0026b9bc();
      iVar7 = dataTable15GetUnlockedEntryId((int)*(char *)(puVar2 + 0x26),
                           (int)*(char *)((int)puVar2 + *(char *)(puVar2 + 0x26) + 0x9b));
      if (iVar7 == 0x19) {
        FUN_00299138();
        messageBannerInitSelection(1,0);
        messageInitializeSavedBanner();
      }
      FUN_00269da0(2);
      uniteRequestScriptEntry(0);
      func_0x00223d9c();
    }
    break;
  case 0x22:
    iVar7 = func_0x001eb458(puVar2[3]);
    if (iVar7 != 4) break;
    iVar7 = func_0x002f6124();
    if (iVar7 == 0) {
      FUN_002fe354();
      FUN_0028a924(1,0,0xffffffff);
      FUN_0028a368(1);
      FUN_002bd8e8(puVar2 + 0x192,1,0);
      iVar7 = 0;
      do {
        FUN_002bd8e8(puVar2 + iVar7 * 0x23 + 0x241,1,0);
        iVar7 = iVar7 + 1;
      } while (iVar7 < 8);
      FUN_0026b9bc();
      puVar2[8] = 6;
      puVar17 = DAT_0043da90;
      puVar9 = DAT_0043da90 + 6;
      DAT_0043da90[9] = DAT_0043da90[6];
      *puVar9 = 2;
      puVar17[7] = 0;
      puVar17[5] = 0;
      iVar7 = FUN_002485b8();
      if (iVar7 == 0) {
        messageBannerInitSelection(1,0);
        messageInitializeSavedBanner();
      }
      iVar7 = FUN_00241a14();
      if (iVar7 == 0) {
        FUN_00299138();
      }
      func_0x00241b40();
      break;
    }
    FUN_002fe354();
    puVar17 = DAT_0043da90;
    DAT_0043da90[9] = DAT_0043da90[6];
    puVar17[6] = 0x30;
    puVar17[7] = 0;
    puVar17[5] = 0;
    func_0x002419b0();
    FUN_00275be8(2);
    break;
  case 0x23:
    iVar7 = FUN_00241990();
    if (iVar7 == 0) break;
    FUN_00296934();
    if (*(char *)(puVar2 + 0x96f) != '\0') {
      *(unsigned char *)(puVar2 + 0x26) = 1;
      FUN_00298ad8();
      *(unsigned char *)(puVar2 + 0x96f) = 0;
    }
    FUN_00299900(0);
    goto code_r0x0032f574;
  case 0x24:
    iVar7 = FUN_00241990();
    if (iVar7 != 0) {
      if (cRam00493788 == '\0') {
        cRam00493788 = FUN_002cf750();
      }
      uRam0049378a = uiQuestProcessPendingUpdate();
      uRam0049378c = FUN_002eff34();
      iVar7 = FUN_00215cbc();
      iVar19 = FUN_002cf738();
      iVar13 = FUN_00223cd8();
      iVar14 = func_0x002eff4c();
      iVar15 = func_0x002cf768();
      FUN_00296934();
      if (cRam00493788 != '\0') {
        iVar16 = FUN_002c2950();
        *(unsigned short *)(iVar16 + 0x22) = 0;
        FUN_00273f5c();
        naviClearObjectBlock();
        FUN_0027d908();
      }
      puVar17 = DAT_0043da90;
      if (!((((iVar7 == 0 && iVar19 == 0) && iVar13 == 0) && iVar14 == 0) && iVar15 == 0)) {
        cRam00493784 = (char)iVar7;
        uRam00493785 = (unsigned char)iVar19;
        uRam00493786 = (unsigned char)iVar13;
        uRam00493787 = (unsigned char)iVar14;
        puVar9 = DAT_0043da90 + 6;
        DAT_0043da90[9] = DAT_0043da90[6];
        *puVar9 = 0x30;
        puVar17[7] = 0;
        puVar17[5] = 0;
        func_0x002419b0();
        FUN_00275be8(2);
      }
      else {
        FUN_00299900(0);
        puVar2[8] = 6;
        puVar17 = DAT_0043da90;
        puVar9 = DAT_0043da90 + 6;
        DAT_0043da90[9] = DAT_0043da90[6];
        *puVar9 = 5;
        puVar17[7] = 0;
        puVar17[5] = 0;
        FUN_00299138();
        messageBannerInitSelection(1,0);
        messageInitializeSavedBanner();
      }
      if (cRam00493784 == '\0') {
        iVar7 = FUN_002c2950();
        *(unsigned short *)(iVar7 + 0x1e) = uRam0049378a;
        FUN_00273d34();
        FUN_00273c54();
      }
    }
    break;
  case 0x28:
    FUN_0029e1ec();
    puVar2[6] = 0x29;
    break;
  case 0x29:
    uVar18 = FUN_0029e908(puVar2 + 0xd);
    uVar18 = dataTable15GetUnlockedEntryId((int)*(char *)(puVar2 + 0x26),uVar18);
    puVar17 = DAT_0043da90;
    iVar7 = FUN_0029e1c8();
    if (iVar7 != 0) {
      useCounterRelease();
      uVar18 = FUN_0029e908(puVar17 + 0xd);
      dataTable15GetUnlockedEntryId((int)*(char *)(puVar17 + 0x26),uVar18);
      FUN_00299900();
      FUN_002b8838(*(unsigned char *)((int)puVar17 + 0x31));
      if (puVar17[9] == 0xe) {
        FUN_0029dfc0(0);
      }
      puVar3 = DAT_0043da90;
      iVar7 = puVar17[9];
      puVar9 = DAT_0043da90 + 6;
      DAT_0043da90[7] = 0;
      puVar3[9] = *puVar9;
      puVar3[5] = 0;
      puVar3[6] = iVar7;
      if (iVar7 == 0x30) {
        func_0x002419b0();
        FUN_00275be8(2);
      }
      if (puVar17[6] == 0x1a) {
        uVar18 = 3;
      }
      else {
        uVar18 = 1;
      }
      puVar17[7] = uVar18;
    }
    else {
      iVar7 = useCounterGetCurrentValue();
      if (iVar7 != 0x4b) {
        FUN_00282f80(uVar18);
      }
    }
    break;
  case 0x2a:
    iVar7 = func_0x00222b30();
    if (iVar7 != 0) {
      func_0x00241b40();
      puVar9 = DAT_0043da90;
      puVar17 = DAT_0043da90 + 6;
      DAT_0043da90[7] = 0;
      puVar9[9] = *puVar17;
      puVar9[5] = 0;
      puVar9[6] = 6;
    }
    break;
  case 0x2b:
    FUN_0018b978();
    iVar7 = func_0x00192a78();
    if (iVar7 != 0) {
      FUN_00299900(0);
      FUN_002bd8e8(puVar2 + 0x1b5,3,0);
      puVar2[8] = 6;
      puVar9 = DAT_0043da90;
      puVar17 = DAT_0043da90 + 6;
      DAT_0043da90[7] = 0;
      puVar9[9] = *puVar17;
      puVar9[5] = 0;
      puVar9[6] = 5;
    }
    break;
  case 0x2c:
    func_0x0019514c();
    iVar7 = func_0x001a168c();
    if (iVar7 != 0) {
      FUN_00299900(0);
      FUN_002bd8e8(puVar2 + 0x1b5,0);
      puVar2[8] = 6;
      puVar9 = DAT_0043da90;
      puVar17 = DAT_0043da90 + 6;
      DAT_0043da90[7] = 0;
      puVar9[9] = *puVar17;
      puVar9[5] = 0;
      puVar9[6] = 5;
    }
    break;
  case 0x2d:
    FUN_002bf818();
    iVar7 = 0;
    do {
      FUN_002bf818(puVar2 + iVar7 * 0x23 + 0x241);
      iVar7 = iVar7 + 1;
    } while (iVar7 < 8);
    if ((*(char *)((int)puVar2 + 0x6d2) != '\0') && (iVar7 = FUN_002bf244(puVar2[4]), iVar7 == 0)) {
      puVar2[8] = 6;
      puVar17 = DAT_0043da90;
      puVar9 = DAT_0043da90 + 6;
      DAT_0043da90[9] = DAT_0043da90[6];
      *puVar9 = 5;
      puVar17[7] = 0;
      puVar17[5] = 0;
    }
    break;
  case 0x2e:
    FUN_002bf818();
    iVar7 = 0;
    do {
      FUN_002bf818(puVar2 + iVar7 * 0x23 + 0x241);
      iVar7 = iVar7 + 1;
    } while (iVar7 < 8);
    FUN_002bf818(puVar2 + 0x21e);
    if (puVar2[5] == 1) {
      FUN_0030aa50(1);
    }
    if ((((int)puVar2[5] < 2) || (*(char *)((int)puVar2 + 0x6d2) == '\0')) ||
       (iVar7 = FUN_00282b88(), iVar7 != 0)) break;
    goto code_r0x0032f574;
  case 0x2f:
    if (puVar2[5] == 1) {
      FUN_0030a9d8();
    }
    if (((int)puVar2[5] < 2) || (iVar7 = FUN_00282b88(), iVar7 != 0)) break;
    iVar7 = FUN_00215a14();
    puVar17 = DAT_0043da90;
    if (iVar7 != 0) {
      DAT_0049378e = 1;
      DAT_0049f950 = 1;
      puVar9 = DAT_0043da90 + 6;
      DAT_0043da90[9] = DAT_0043da90[6];
      *puVar9 = 0x36;
      puVar17[7] = 0;
      puVar17[5] = 0;
      break;
    }
code_r0x0032f574:
    puVar2[8] = 6;
    puVar17 = DAT_0043da90;
    puVar9 = DAT_0043da90 + 6;
    DAT_0043da90[9] = DAT_0043da90[6];
    *puVar9 = 5;
    puVar17[7] = 0;
    puVar17[5] = 0;
    FUN_00299138();
    messageBannerInitSelection(1,0);
    messageInitializeSavedBanner();
    break;
  case 0x30:
    FUN_002bf818();
    iVar7 = 0;
    do {
      FUN_002bf818(puVar2 + iVar7 * 0x23 + 0x241);
      iVar7 = iVar7 + 1;
    } while (iVar7 < 8);
    iVar7 = func_0x00213bf4();
    if (((iVar7 != 0) && (*(char *)((int)puVar2 + 0x6d2) != '\0')) &&
       (iVar7 = FUN_0025a084(), puVar17 = DAT_0043da90, iVar7 != 0)) {
      puVar9 = DAT_0043da90 + 6;
      DAT_0043da90[7] = 0;
      puVar17[9] = *puVar9;
      puVar17[5] = 0;
      puVar17[6] = 0x36;
    }
    break;
  case 0x31:
  case 0x32:
  case 0x33:
    iVar7 = func_0x00200084();
    if (iVar7 == 0) break;
    FUN_00298ad8();
    puVar2[8] = 6;
    messageBannerInitSelection(1,0);
    messageInitializeSavedBanner();
    FUN_002bd8e8(puVar2 + 0x192,1,0);
    iVar7 = 0;
    do {
      FUN_002bd8e8(puVar2 + iVar7 * 0x23 + 0x241,1,0);
      iVar7 = iVar7 + 1;
    } while (iVar7 < 8);
    FUN_002bd8e8(puVar2 + 0x21e,1,0);
    func_0x00241b40();
    puVar17 = DAT_0043da90;
    puVar9 = DAT_0043da90 + 6;
    DAT_0043da90[9] = DAT_0043da90[6];
    *puVar9 = 1;
    puVar17[7] = 0;
    puVar17[5] = 0;
    break;
  case 0x34:
    iVar7 = campCecIsActive();
    if (iVar7 != 0) {
      iVar7 = func_0x00200084();
      if (iVar7 != 0) {
        iVar7 = FUN_00292844(0x31);
        uVar4 = *(unsigned char *)(iVar7 + 2);
        *(unsigned char *)((int)puVar2 + 0x9a) = uVar4;
        *(unsigned char *)((int)puVar2 + 0x99) = *(unsigned char *)(puVar2 + 0x26);
        *(unsigned char *)(puVar2 + 0x26) = uVar4;
        FUN_00298ad8();
        puVar2[8] = 6;
        FUN_002bd8e8(puVar2 + 0x192,1,0);
        iVar7 = 0;
        do {
          FUN_002bd8e8(puVar2 + iVar7 * 0x23 + 0x241,1,0);
          iVar7 = iVar7 + 1;
        } while (iVar7 < 8);
        FUN_002bd8e8(puVar2 + 0x21e,1,0);
        func_0x00241b40();
        puVar9 = DAT_0043da90;
        puVar17 = DAT_0043da90 + 6;
        DAT_0043da90[7] = 0;
        puVar9[9] = *puVar17;
        puVar9[5] = 0;
        puVar9[6] = 1;
      }
      else {
        iVar7 = func_0x001ebde8();
        if (iVar7 != 0) {
          campCecDestroyOverlay();
          iVar7 = FUN_00241a14();
          if (iVar7 == 0) {
            FUN_00299138();
          }
          *(unsigned char *)(puVar2 + 0x26) = 9;
          FUN_00298ad8();
          FUN_002bd8e8(puVar2 + 0x192,1,0);
          iVar7 = 0;
          do {
            FUN_002bd8e8(puVar2 + iVar7 * 0x23 + 0x241,1,0);
            iVar7 = iVar7 + 1;
          } while (iVar7 < 8);
          puVar2[8] = 6;
          puVar17 = DAT_0043da90;
          puVar9 = DAT_0043da90 + 6;
          DAT_0043da90[9] = DAT_0043da90[6];
          *puVar9 = 2;
          puVar17[7] = 0;
          puVar17[5] = 0;
          campReleaseTouchRegions();
        }
      }
    }
    else {
      iVar7 = 0;
      while( 1 ) {
        FUN_002bf818(puVar2 + iVar7 * 0x23 + 0x241);
        iVar7 = iVar7 + 1;
        if (7 < iVar7) break;
        if ((iVar7 == 7) && (*(char *)((int)puVar2 + 0xd62) != '\0')) {
          FUN_001ffc5c();
        }
      }
      FUN_002bf818(puVar2 + 0x192);
    }
    break;
  case 0x35:
    iVar7 = func_0x001eb84c();
    if (iVar7 == 0) break;
    iVar7 = FUN_0029ee54(puVar2 + 0x77);
    if (iVar7 < 1) {
      uVar18 = 7;
    }
    else {
      uVar18 = 0x32;
    }
    FUN_002b8838(uVar18);
    puVar9 = DAT_0043da90;
    iVar7 = puVar2[9];
    puVar17 = DAT_0043da90 + 6;
    DAT_0043da90[7] = 0;
    puVar9[9] = *puVar17;
    puVar9[5] = 0;
    puVar9[6] = iVar7;
    if (iVar7 == 0x30) {
      func_0x002419b0();
      FUN_00275be8(2);
    }
    break;
  case 0x36:
    if (*(char *)((int)puVar2 + 0x248e) != '\0') {
      FUN_00297410(0x24);
      uVar6 = 0;
      do {
        iVar7 = FUN_00254058(uVar6);
        if ((iVar7 != 0) && ((*(short *)(iVar7 + 2) == 0 || (iVar7 = FUN_002c09d0(), iVar7 != 0))))
        {
          gameSetAuxiliaryProgressFlag(uVar6);
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < 0x50);
      FUN_002a46d8(0x24);
    }
    puVar17 = DAT_0043da90;
    campReleaseTouchRegions();
    FUN_0028a22c();
    FUN_00291944();
    FUN_002917b8();
    campFreeFileSlot();
    FUN_002c43b4(*puVar17,0);
    FUN_002c415c(puVar17);
    DAT_0043da90 = (unsigned int *)0x0;
  }
  puVar2[5] = puVar2[5] + 1;
  return 0;
}
*/
#include "common.h"
