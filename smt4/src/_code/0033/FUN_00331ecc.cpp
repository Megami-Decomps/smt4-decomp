/* NON_MATCHING: Large camp command/party-panel input controller updates help presets, guests, selections, and navigation; the reference retains unresolved callback/result types and overlapping camp-state views. */
/* romwright 0.5.0 decompilation of FUN_00331ecc for reference (not compiled; its own view of the boundaries):

void FUN_00331ecc(void)

{
  char cVar1;
  unsigned char bVar2;
  unsigned char uVar3;
  char cVar4;
  char cVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  unsigned int uVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  unsigned int extraout_r1;
  unsigned int *puVar13;
  short *psVar14;
  int iVar15;
  unsigned char *puVar16;
  unsigned int uVar17;
  unsigned int uVar18;
  unsigned char bVar19;
  unsigned char bVar20;
  unsigned char bVar21;
  int iStack_638;
  int iStack_634;
  short *psStack_630;
  short sStack_5f2;
  unsigned char uStack_28;
  unsigned char uStack_20;
  
  iVar12 = DAT_0043da90;
  piVar6 = &iStack_638;
  FUN_002bf818(DAT_0043da90 + 0xd64);
  iVar7 = FUN_0028f670();
  if ((((iVar7 == 0) && (iVar7 = FUN_002c09d0(0x418), iVar7 == 0)) ||
      ((iVar7 = FUN_0028f670(), iVar7 == 0 &&
       ((iVar7 = FUN_002c09d0(0x453), iVar7 != 0 && (iVar7 = FUN_002c09d0(0x425), iVar7 == 0))))))
     || ((iVar7 = FUN_0028f670(), iVar7 == 0 && (iVar7 = FUN_00224090(), iVar7 == 0)))) {
    iVar7 = FUN_002b898c();
    iVar12 = DAT_0043da2c;
    if (iVar7 == 0x9e || iVar7 == 0x9b) {
      return;
    }
    if (iVar7 == 0x9a) {
      return;
    }
    puVar16 = (unsigned char *)(DAT_0043da2c + 0x4c9);
    if (*(char *)(DAT_0043da2c + 0x4c9) != -0x62) {
      if (DAT_0043da38 < 0) {
        iVar7 = 0;
        do {
          if (*(char *)(DAT_0043da2c + iVar7 + 0x4b8) != '\0') {
            DAT_0043da38 = 0x9e;
            return;
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < 6);
      }
      DAT_0043da38 = -1;
      FUN_002b827c(0x9e);
      iVar7 = FUN_002ae794(*(unsigned char *)(iVar12 + 0x4c9));
      iVar8 = FUN_002ae794(0x9e);
      if (iVar7 != 0 && iVar8 != 0) {
        *(unsigned char *)(iVar12 + 0x4ca) = *(unsigned char *)(iVar12 + 0x4c9);
        *puVar16 = 0x9e;
        uVar18 = 0x102;
        uVar17 = 0;
        do {
          bVar19 = *(short *)(iVar8 + uVar17 * 2) != 0;
          if (bVar19) {
            uVar18 = (unsigned int)(unsigned char)(&uStack_28)[uVar17];
          }
          if (!bVar19) {
            uVar18 = 0x12;
          }
          FUN_002b8454(uVar17 & 0xff,uVar18);
          uVar17 = uVar17 + 1;
          uVar18 = extraout_r1;
        } while ((int)uVar17 < 6);
        if (*(char *)(iVar7 + 0xc) != '\0') {
          if (*(char *)(iVar8 + 0xc) != '\0') {
            *(unsigned char *)(DAT_0043da2c + 0x4c5) = 0;
            FUN_001385f8();
            return;
          }
          *(unsigned char *)(DAT_0043da2c + 0x4c5) = 1;
          FUN_002ae5e0();
          return;
        }
        *(unsigned char *)(DAT_0043da2c + 0x4c5) = 1;
        FUN_001385f8();
        return;
      }
    }
    return;
  }
  iVar7 = FUN_002b898c();
  if (iVar7 == 0x9e) {
    func_0x00241b40();
  }
  iVar8 = func_0x00222b30();
  iVar7 = DAT_0043da90;
  if (iVar8 == 0) {
    puVar13 = (unsigned int *)(DAT_0043da90 + 0x18);
    *(unsigned int *)(DAT_0043da90 + 0x24) = *(unsigned int *)(DAT_0043da90 + 0x18);
    *puVar13 = 0x2a;
    *(unsigned int *)(iVar7 + 0x1c) = 0;
    *(unsigned int *)(iVar7 + 0x14) = 0;
    return;
  }
  iVar7 = FUN_002b898c();
  if (((iVar7 == 4) || (iVar7 = FUN_002b898c(), iVar7 == 2)) && (iVar7 = FUN_00262f14(), iVar7 == 0)
     ) {
    uVar3 = 1;
    if (*(char *)(iVar12 + 0x98) != '\x01') {
      uVar3 = 3;
    }
    FUN_002b8838(uVar3);
  }
  iVar7 = FUN_002b898c();
  if (((iVar7 == 3) || (iVar7 = FUN_002b898c(), iVar7 == 1)) && (iVar7 = FUN_00262f14(), iVar7 != 0)
     ) {
    if (*(char *)(iVar12 + 0x98) == '\x01') {
      uVar9 = 2;
    }
    else {
      uVar9 = 4;
    }
    FUN_002b8838(uVar9);
  }
  bVar19 = 0;
  bVar20 = 0;
  iVar7 = ifTouchGetSelectionMode();
  iVar8 = ifTouchGetSelectedRegion();
  psStack_630 = (short *)(iVar12 + 0xe00);
  ifTouchGetSelectionModeForRegion((int)*(short *)(iVar12 + 0xe04));
  ifTouchGetSelectionModeForRegion((int)*(short *)(iVar12 + 0xe06));
  ifTouchGetSelectionModeForRegion((int)*(short *)(iVar12 + 0xe02));
  iStack_638 = 0;
  cVar1 = *(char *)(iVar12 + 0xad);
  cVar5 = *(char *)(iVar12 + 0xac);
  if (iVar7 != 6) {
    if (iVar7 == 1 || iVar7 == 2) {
      iVar7 = FUN_0029e908(iVar12 + 0x34);
      iVar15 = 0;
      iVar10 = FUN_0029e958(iVar12 + 0x34);
      if (0 < iVar10) {
        do {
          iVar10 = FUN_002c09d0(0x520);
          if ((((iVar10 != 0) || (iVar10 = FUN_002c09d0(0x521), iVar10 != 0)) ||
              (iVar10 = FUN_002c09d0(0x526), iVar10 != 0)) ||
             ((iVar10 = FUN_002c09d0(0x527), iVar10 != 0 ||
              (iVar10 = FUN_002c09d0(0x215), iVar10 != 0)))) {
            if (*(short *)(iVar12 + iVar15 * 2 + 0xdf0) == iVar8) {
              uVar9 = FUN_00240d74(iVar12 + 0x34);
              FUN_002992bc(iVar12 + 0x34,iVar15);
              iVar8 = FUN_0029e908(iVar12 + 0x34);
              bVar20 = iVar8 == iVar7;
              if (!bVar20) {
                FUN_002992bc(iVar12 + 0x34,uVar9);
              }
              bVar19 = 0;
              *(unsigned char *)(iVar12 + 0xad) = 3;
              break;
            }
          }
          else if (*(short *)(iVar12 + iVar15 * 2 + 0xdf0) == iVar8) {
            FUN_002992bc(iVar12 + 0x34,iVar15);
            *(unsigned char *)(iVar12 + 0xad) = 3;
            bVar20 = 1;
            iVar8 = FUN_0029e908(iVar12 + 0x34);
            if (iVar8 != iVar7) {
              FUN_002bc01c(0x100016c);
            }
            break;
          }
          iVar15 = iVar15 + 1;
          iVar10 = FUN_0029e958(iVar12 + 0x34);
        } while (iVar15 < iVar10);
      }
    }
  }
  else {
    iVar10 = 0;
    iVar7 = FUN_0029e958(iVar12 + 0x34);
    if (0 < iVar7) {
      do {
        if (*(short *)(iVar12 + iVar10 * 2 + 0xdf0) == iVar8) {
          *(unsigned char *)(iVar12 + 0xad) = 3;
          bVar19 = 1;
          iVar7 = FUN_002c09d0(0x520);
          if (((iVar7 != 0) || (iVar7 = FUN_002c09d0(0x521), iVar7 != 0)) ||
             ((iVar7 = FUN_002c09d0(0x526), iVar7 != 0 ||
              ((iVar7 = FUN_002c09d0(0x527), iVar7 != 0 || (iVar7 = FUN_002c09d0(0x215), iVar7 != 0)
               ))))) {
            iVar10 = 0;
            iVar7 = FUN_0029e958(iVar12 + 0x34);
            if (0 < iVar7) {
              do {
                if (*(short *)(iVar12 + iVar10 * 2 + 0xdf0) == iVar8) {
                  iVar7 = FUN_0029e908(iVar12 + 0x34);
                  iStack_634 = FUN_00240d74(iVar12 + 0x34);
                  FUN_002992bc(iVar12 + 0x34,iVar10);
                  iVar15 = FUN_0029e908(iVar12 + 0x34);
                  if (iVar15 != iVar7) {
                    FUN_002992bc(iVar12 + 0x34,iStack_634);
                    bVar19 = 0;
                  }
                }
                iVar10 = iVar10 + 1;
                iVar7 = FUN_0029e958(iVar12 + 0x34);
              } while (iVar10 < iVar7);
            }
          }
          break;
        }
        iVar10 = iVar10 + 1;
        iVar7 = FUN_0029e958(iVar12 + 0x34);
      } while (iVar10 < iVar7);
    }
    if (((((*psStack_630 == iVar8) && (iVar7 = FUN_002c09d0(0x520), iVar7 == 0)) &&
         (iVar7 = FUN_002c09d0(0x521), iVar7 == 0)) &&
        ((iVar7 = FUN_002c09d0(0x526), iVar7 == 0 && (iVar7 = FUN_002c09d0(0x527), iVar7 == 0)))) &&
       (iVar7 = FUN_002c09d0(0x215), iVar7 == 0)) {
      iVar7 = dataTable15GetUnlockedEntryId((int)*(char *)(iVar12 + 0x98),
                           (int)*(char *)((int)*(char *)(iVar12 + 0x98) + iVar12 + 0x9b));
      if ((iVar7 == 0x32) || (iVar7 == 0x33 || iVar7 == 0x34)) {
        campCecDestroyOverlay();
        FUN_00262d40();
        iVar7 = FUN_002485b8();
        if (iVar7 == 0) {
          FUN_0029e648(1,0);
          messageInitializeSavedBanner();
        }
        iVar7 = FUN_00241a14();
        if (iVar7 == 0) {
          FUN_00299138();
        }
      }
      *(unsigned char *)(iVar12 + 0x99) = *(unsigned char *)(iVar12 + 0x98);
      *(unsigned char *)(iVar12 + 0x98) = 6;
      FUN_002992bc(iVar12 + 0x34,0);
      bVar19 = 1;
      iVar7 = 0;
      iStack_634 = 0;
      psStack_630 = (short *)0x0;
      do {
        psVar14 = (short *)0x0;
        do {
          iVar10 = dataTable15GetUnlockedEntryId(iVar7,psVar14);
          iVar8 = iVar7;
          if (iVar10 == 5) goto LAB_0033239c;
          psVar14 = (short *)((int)psVar14 + 1);
        } while ((int)psVar14 < 10);
        iVar7 = iVar7 + 1;
        iVar8 = iStack_634;
        psVar14 = psStack_630;
      } while (iVar7 < 0xf);
LAB_0033239c:
      psStack_630 = psVar14;
      iStack_634 = iVar8;
      iVar7 = 0;
      *(char *)(iStack_634 + iVar12 + 0x9b) = (char)psStack_630;
      do {
        psVar14 = (short *)0x0;
        do {
          iVar10 = dataTable15GetUnlockedEntryId(iVar7,psVar14);
          iVar8 = iVar7;
          if (iVar10 == 0x18) goto LAB_003323f0;
          psVar14 = (short *)((int)psVar14 + 1);
        } while ((int)psVar14 < 10);
        iVar7 = iVar7 + 1;
        iVar8 = iStack_634;
        psVar14 = psStack_630;
      } while (iVar7 < 0xf);
LAB_003323f0:
      psStack_630 = psVar14;
      iStack_634 = iVar8;
      *(char *)(iVar12 + iStack_634 + 0x9b) = (char)psStack_630;
      iVar7 = FUN_00292844(5);
      cVar4 = *(char *)(iVar7 + 2);
      if (cVar4 != '\0') {
        uVar18 = 0;
        iStack_634 = 0;
        do {
          iVar7 = FUN_00292844(uVar18 & 0xff);
          if ((((iVar7 != 0) && (*(char *)(iVar7 + 1) == cVar4)) &&
              ((*(short *)(iVar7 + 0x56) == 0 || (iVar8 = FUN_002c09d0(), iVar8 != 0)))) &&
             ((*(short *)(iVar7 + 0x58) == 0 || (iVar7 = FUN_00292f28(), iVar7 != 0)))) {
            iStack_634 = iStack_634 + 1;
          }
          uVar18 = uVar18 + 1;
        } while ((int)uVar18 < 0x35);
        if (iStack_634 < 2) {
          FUN_00298ad8();
          FUN_0029e8b8(iVar12 + 0x34,0);
          *(unsigned char *)(iVar12 + 0x25bc) = 1;
        }
      }
    }
  }
  iVar7 = FUN_0029e02c();
  bVar2 = 0;
  if (iVar7 != 0) {
    if (*(char *)(iVar12 + 0xab) != '\0') {
      *(char *)(iVar12 + 0xad) = cVar1;
    }
    FUN_0029acb0();
    iVar7 = FUN_0029e010();
    if (iVar7 < 0) {
      FUN_002bd8e8(iVar12 + 0x878,4,0);
      FUN_002bd8e8(iVar12 + 0x648,4,0);
      iVar7 = 0;
      do {
        FUN_002bd8e8(iVar12 + iVar7 * 0x8c + 0x904,4,0);
        iVar7 = iVar7 + 1;
      } while (iVar7 < 8);
    }
    else {
      iVar7 = FUN_0029e010();
      if (0 < iVar7) {
        FUN_002bd8e8(iVar12 + 0x878,3,0);
        FUN_002bd8e8(iVar12 + 0x648,3,0);
        iVar7 = 0;
        do {
          FUN_002bd8e8(iVar12 + iVar7 * 0x8c + 0x904,3,0);
          iVar7 = iVar7 + 1;
        } while (iVar7 < 8);
      }
    }
    iVar7 = DAT_0043da90;
    puVar13 = (unsigned int *)(DAT_0043da90 + 0x18);
    *(unsigned int *)(DAT_0043da90 + 0x1c) = 0;
    *(unsigned int *)(iVar7 + 0x24) = *puVar13;
    *(unsigned int *)(iVar7 + 0x14) = 0;
    *(unsigned int *)(iVar7 + 0x18) = 7;
  }
  else {
    if (*(char *)(iVar12 + 0xab) != '\0') {
      iVar7 = 0;
      do {
        iVar8 = ifTouchGetSelectionModeForRegion((int)*(short *)(iVar12 + iVar7 * 2 + 0xe22));
        uVar3 = (unsigned char)iVar7;
        if (iVar8 != 6) {
          if (iVar8 == 1 || iVar8 == 2) {
            *(unsigned char *)(iVar12 + 0xad) = uVar3;
          }
        }
        else if (*(char *)(iVar12 + 0xad) == iVar7) {
          bVar19 = 1;
        }
        else {
          *(unsigned char *)(iVar12 + 0xad) = uVar3;
        }
        iVar8 = iVar12 + iVar7 * 6;
        iVar10 = ifTouchGetSelectionModeForRegion((int)*(short *)(iVar8 + 0xe28));
        if ((iVar10 == 6 || iVar10 == 1) || iVar10 == 2) {
          *(unsigned char *)(iVar12 + 0xac) = 1;
          *(unsigned char *)(iVar12 + 0xad) = uVar3;
        }
        iVar10 = ifTouchGetSelectionModeForRegion((int)*(short *)(iVar8 + 0xe2a));
        if ((iVar10 == 6 || iVar10 == 1) || iVar10 == 2) {
          *(unsigned char *)(iVar12 + 0xac) = 2;
          *(unsigned char *)(iVar12 + 0xad) = uVar3;
        }
        iVar8 = ifTouchGetSelectionModeForRegion((int)*(short *)(iVar8 + 0xe2c));
        if ((iVar8 == 6 || iVar8 == 1) || iVar8 == 2) {
          *(unsigned char *)(iVar12 + 0xac) = 0;
          *(unsigned char *)(iVar12 + 0xad) = uVar3;
        }
        cVar4 = *(char *)(iVar12 + 0xad);
        bVar21 = cVar4 == cVar1;
        if (bVar21) {
          cVar4 = *(char *)(iVar12 + 0xac);
        }
        if (!bVar21 || cVar4 != cVar5) {
          FUN_002bc01c(0x100016c);
        }
        cVar4 = *(char *)(iVar12 + 0xad);
        bVar21 = cVar4 == cVar1;
        if (bVar21) {
          cVar4 = *(char *)(iVar12 + 0xac);
        }
        if (!bVar21 || cVar4 != cVar5) {
          bVar2 = 1;
          FUN_0029dfc0(0);
          break;
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < 3);
    }
    iVar7 = 0;
    FUN_002c1658(0,1);
    if (!(iVar7 == 0 && !bVar19)) {
      uVar9 = FUN_0029e908(iVar12 + 0x34);
      iStack_634 = dataTable15GetUnlockedEntryId((int)*(char *)(iVar12 + 0x98),uVar9);
      iVar7 = FUN_00292844();
      iVar8 = FUN_00198f84();
      if (iVar8 == 0) {
        if ((*(char *)(iVar12 + 0xab) != '\0') && ('\x02' >= *(char *)(iVar12 + 0xad))) {
          iVar7 = FUN_0026dae4();
          if (((iVar7 != 0) && (iVar7 = FUN_0029e0f8(), iVar7 != 0)) &&
             (iVar7 = FUN_0029563c(), iVar7 != 0)) {
            func_0x002dabac((int)*(char *)(iVar12 + 0xad));
            FUN_002bd8e8(iVar12 + 0x878,3,0);
            FUN_002bd8e8(iVar12 + 0x648,3,0);
            iVar7 = 0;
            do {
              FUN_002bd8e8(iVar12 + iVar7 * 0x8c + 0x904,3,0);
              iVar8 = DAT_0043da90;
              iVar7 = iVar7 + 1;
            } while (iVar7 < 8);
            puVar13 = (unsigned int *)(DAT_0043da90 + 0x18);
            *(unsigned int *)(DAT_0043da90 + 0x1c) = 0;
            *(unsigned int *)(iVar8 + 0x24) = *puVar13;
            *(unsigned int *)(iVar8 + 0x14) = 0;
            *(unsigned int *)(iVar8 + 0x18) = 0x20;
            campReleaseTouchRegions();
            FUN_00269cd0();
            uVar9 = 0x100016d;
            FUN_002bc01c(uVar9);
          }
        }
        else {
          cVar5 = *(char *)(iVar7 + 2);
          if (cVar5 != '\0') {
            uVar17 = 0;
            uVar18 = uVar17;
            do {
              iVar8 = FUN_00292844(uVar17 & 0xff);
              if ((((iVar8 != 0) && (*(char *)(iVar8 + 1) == cVar5)) &&
                  ((*(short *)(iVar8 + 0x56) == 0 || (iVar10 = FUN_002c09d0(), iVar10 != 0)))) &&
                 ((*(short *)(iVar8 + 0x58) == 0 || (iVar8 = FUN_00292f28(), iVar8 != 0)))) {
                uVar18 = uVar18 + 1;
              }
              uVar17 = uVar17 + 1;
            } while ((int)uVar17 < 0x35);
            if ((int)uVar18 < 2) {
              *(unsigned char *)(iVar12 + 0x98) = *(unsigned char *)(iVar7 + 2);
              FUN_00298ad8();
              FUN_0029e8b8(iVar12 + 0x34,0);
              *(unsigned char *)(iVar12 + 0x25bc) = 1;
            }
          }
          func_0x001d0750();
          if ((*(char *)(iVar7 + 2) == '\0') || (*(char *)(iVar12 + 0x25bc) != '\0')) {
            if (*(int *)(iVar12 + 0x18) != 6) {
              FUN_00299900(0);
              if ((*(unsigned char *)(iVar7 + 3) & 0xf0) != 0) {
                if (iStack_634 != 10) {
                  FUN_0029cc44(1);
                }
                FUN_0026a55c();
              }
              campReleaseTouchRegions();
            }
          }
          else if (*(int *)(iVar12 + 0x20) != 0x34) {
            FUN_0026a38c(0);
            *(unsigned char *)(iVar12 + 0x9a) = *(unsigned char *)(iVar7 + 2);
            uVar3 = FUN_0029e908(iVar12 + 0x34);
            *(unsigned char *)((int)*(char *)(iVar12 + 0x98) + iVar12 + 0x9b) = uVar3;
            if ((*(unsigned char *)(iVar7 + 3) & 0xf) == 0) {
              dataTable15GetUnlockedEntryId((int)*(char *)(iVar12 + 0x9a),0);
              iVar8 = FUN_00292844();
              if ((*(unsigned char *)(iVar8 + 3) & 0xf) != 0) {
                FUN_0026d5a4();
              }
            }
            if (*(unsigned char *)(iVar7 + 3) >> 4 == 0) {
              dataTable15GetUnlockedEntryId((int)*(char *)(iVar12 + 0x9a),0);
              iVar7 = FUN_00292844();
              if ((*(unsigned char *)(iVar7 + 3) & 0xf0) != 0) {
                FUN_0026a55c();
                FUN_0029cc44(1);
              }
            }
            campReleaseTouchRegions();
            iVar7 = DAT_0043da90;
            puVar13 = (unsigned int *)(DAT_0043da90 + 0x18);
            *(unsigned int *)(DAT_0043da90 + 0x1c) = 0;
            *(unsigned int *)(iVar7 + 0x24) = *puVar13;
            *(unsigned int *)(iVar7 + 0x14) = 0;
            *(unsigned int *)(iVar7 + 0x18) = 3;
          }
          else {
            campReleaseTouchRegions();
            FUN_0029ee6c(0,0x323232ff);
            FUN_0026a55c();
            FUN_0026a598();
            *(unsigned int *)(iVar12 + 0x18) = *(unsigned int *)(iVar12 + 0x20);
          }
          FUN_002bc01c(0x100016d);
        }
      }
    }
    else {
      iVar7 = FUN_002c09d0(0x520);
      if (((iVar7 == 0) && (iVar7 = FUN_002c09d0(0x521), iVar7 == 0)) &&
         ((iVar7 = FUN_002c09d0(0x526), iVar7 == 0 &&
          ((iVar7 = FUN_002c09d0(0x527), iVar7 == 0 && (iVar7 = FUN_002c09d0(0x215), iVar7 == 0)))))
         ) {
        iVar7 = 1;
        FUN_002c1658();
        if (iVar7 != 0) {
          bVar2 = 1;
          uVar18 = 0;
          do {
            iVar7 = FUN_00292844(uVar18 & 0xff);
            if ((iVar7 != 0) &&
               ((((*(short *)(iVar7 + 0x5a) != 0 && (iVar8 = FUN_002c09d0(), iVar8 != 0)) ||
                 (((*(short *)(iVar7 + 0x5c) != 0 && (iVar8 = FUN_002c09d0(), iVar8 != 0)) ||
                  ((*(short *)(iVar7 + 0x5e) != 0 && (iVar8 = FUN_002c09d0(), iVar8 != 0)))))) ||
                (((*(short *)(iVar7 + 0x60) != 0 && (iVar8 = FUN_002c09d0(), iVar8 != 0)) ||
                 ((*(short *)(iVar7 + 0x62) != 0 && (iVar7 = FUN_002c09d0(), iVar7 != 0)))))))) {
              bVar2 = 0;
            }
            uVar18 = uVar18 + 1;
          } while ((int)uVar18 < 0x35);
          if (bVar2) {
            uVar9 = 0x100016e;
            if (((*(char *)(iVar12 + 0xab) == '\0') || (*(char *)(iVar12 + 0xad) >= '\x03')) ||
               (!(!bVar20 && !bVar19))) {
              if (*(char *)(iVar12 + 0x98) != '\x01') {
                uVar18 = 0;
                do {
                  iVar7 = FUN_00292844(uVar18 & 0xff);
                  if ((iVar7 != 0) && ((unsigned int)*(unsigned char *)(iVar7 + 2) == (int)*(char *)(iVar12 + 0x98)))
                  {
                    *(unsigned char *)(iVar12 + 0x9a) = *(unsigned char *)(iVar7 + 1);
                    break;
                  }
                  uVar18 = uVar18 + 1;
                } while ((int)uVar18 < 0x35);
                if ((*(unsigned char *)(iVar7 + 3) & 0xf) != 0) {
                  dataTable15GetUnlockedEntryId((int)*(char *)(iVar12 + 0x98),
                               (int)*(char *)((int)*(char *)(iVar12 + 0x98) + iVar12 + 0x9b));
                  iVar8 = FUN_00292844();
                  if ((*(unsigned char *)(iVar8 + 3) & 0xf) == 0) {
                    FUN_0026d5a4();
                  }
                }
                if ((*(unsigned char *)(iVar7 + 3) & 0xf0) != 0) {
                  dataTable15GetUnlockedEntryId((int)*(char *)(iVar12 + 0x98),
                               (int)*(char *)((int)*(char *)(iVar12 + 0x98) + iVar12 + 0x9b));
                  iVar7 = FUN_00292844();
                  if (*(unsigned char *)(iVar7 + 3) >> 4 == 0) {
                    FUN_0026a55c();
                    FUN_0029cc44(1);
                  }
                }
                iVar7 = DAT_0043da90;
                puVar13 = (unsigned int *)(DAT_0043da90 + 0x18);
                *(unsigned int *)(DAT_0043da90 + 0x24) = *(unsigned int *)(DAT_0043da90 + 0x18);
                *puVar13 = 3;
                *(unsigned int *)(iVar7 + 0x1c) = 0;
                *(unsigned int *)(iVar7 + 0x14) = 0;
                iVar7 = dataTable15GetUnlockedEntryId((int)*(char *)(iVar12 + 0x98),
                                     (int)*(char *)((int)*(char *)(iVar12 + 0x98) + iVar12 + 0x9b));
                iVar8 = dataTable15GetUnlockedEntryId((int)*(char *)(iVar12 + 0x9a),
                                     (int)*(char *)((int)*(char *)(iVar12 + 0x9a) + iVar12 + 0x9b));
                if ((iVar7 == 0x32 || iVar7 == 0x33) || iVar7 == 0x34) {
                  campCecDestroyOverlay();
                  FUN_00262d40();
                  iVar10 = FUN_002485b8();
                  if (iVar10 == 0) {
                    FUN_0029e648(1,0);
                    messageInitializeSavedBanner();
                  }
                  iVar10 = FUN_00241a14();
                  if (iVar10 == 0) {
                    FUN_00299138();
                  }
                }
                if ((iVar8 == 7) &&
                   (((iVar7 == 0x21 || iVar7 == 0x22 || (iVar7 == 0x2e || iVar7 == 0x2f)) ||
                    (iVar7 == 0x24 || iVar7 == 0x30)))) {
                  FUN_002a035c();
                  uniteRequestScriptEntry(0xf);
                  iVar8 = DAT_0043da90;
                  puVar13 = (unsigned int *)(DAT_0043da90 + 0x18);
                  *(unsigned int *)(DAT_0043da90 + 0x24) = *(unsigned int *)(DAT_0043da90 + 0x18);
                  *puVar13 = 0x1e;
                  *(unsigned int *)(iVar8 + 0x1c) = 0;
                  *(unsigned int *)(iVar8 + 0x14) = 0;
                  iStack_638 = 1;
                  FUN_002b8838(0x9e);
                }
                if (((iVar7 == 0x2a || iVar7 == 0x2b) || (iVar7 == 0x2c || iVar7 == 0x2d)) &&
                   (iVar7 = func_0x002419f8(), iVar7 != 0)) {
                  FUN_002a035c();
                  uniteRequestScriptEntry(0);
                }
                FUN_002bc01c(0x100016e);
              }
              else {
                FUN_0026a598();
                FUN_0026d5a4();
                FUN_0029cc44(1);
                FUN_0026a55c();
                iVar7 = DAT_0043da90;
                puVar13 = (unsigned int *)(DAT_0043da90 + 0x18);
                *(unsigned int *)(DAT_0043da90 + 0x1c) = 0;
                *(unsigned int *)(iVar7 + 0x24) = *puVar13;
                *(unsigned int *)(iVar7 + 0x14) = 0;
                *(unsigned int *)(iVar7 + 0x18) = 0x30;
                func_0x002419b0();
                FUN_00275be8(2);
              }
              campReleaseTouchRegions();
            }
            else {
              *(unsigned char *)(iVar12 + 0xad) = 3;
              FUN_002bc01c(uVar9);
            }
          }
        }
        else if ((*(char *)(iVar12 + 0xab) != '\0') &&
                ((cVar5 = *(char *)(iVar12 + 0xad), cVar5 < '\x03' || (bVar2)))) {
          iVar7 = 5;
          FUN_002c1658(5,1);
          if (iVar7 != 0) {
            cVar4 = *(char *)(iVar12 + 0xad) - '\x01';
            *(char *)(iVar12 + 0xad) = cVar4;
            if (cVar4 >= '\0') {
              if (cVar4 != '\x03') {
                do {
                  piVar11 = &iStack_634;
                  FUN_00257a50(&iStack_634,(int)*(char *)(iVar12 + 0xad),
                               (int)*(char *)(iVar12 + 0xac));
                  if (piVar11 != (int *)0x0) break;
                  cVar4 = *(char *)(iVar12 + 0xad) - '\x01';
                  *(char *)(iVar12 + 0xad) = cVar4;
                  if (cVar4 < '\0') {
                    *(unsigned char *)(iVar12 + 0xad) = 3;
                    break;
                  }
                } while (cVar4 != '\x03');
              }
            }
            else {
              *(unsigned char *)(iVar12 + 0xad) = 3;
            }
            cVar4 = *(char *)(iVar12 + 0xad);
joined_r0x00333130:
            if (cVar4 == cVar5) goto LAB_003333b4;
          }
          else {
            iVar7 = 6;
            FUN_002c1658(6,1);
            if (iVar7 != 0) {
              cVar4 = *(char *)(iVar12 + 0xad) + '\x01';
              *(char *)(iVar12 + 0xad) = cVar4;
              if ('\x03' < cVar4) {
                *(unsigned char *)(iVar12 + 0xad) = 0;
              }
              if (cVar4 != '\x03') {
                do {
                  piVar11 = &iStack_634;
                  FUN_00257a50(&iStack_634,(int)*(char *)(iVar12 + 0xad),
                               (int)*(char *)(iVar12 + 0xac));
                  if (piVar11 != (int *)0x0) break;
                  cVar4 = *(char *)(iVar12 + 0xad) + '\x01';
                  *(char *)(iVar12 + 0xad) = cVar4;
                  if ('\x03' < cVar4) {
                    *(unsigned char *)(iVar12 + 0xad) = 0;
                  }
                } while (cVar4 != '\x03');
              }
              cVar4 = *(char *)(iVar12 + 0xad);
              goto joined_r0x00333130;
            }
            iVar7 = 4;
            FUN_002c1658(4,1);
            if (iVar7 != 0) {
              cVar5 = *(char *)(iVar12 + 0xac) - '\x01';
              *(char *)(iVar12 + 0xac) = cVar5;
              if (cVar5 < '\0') {
                uVar3 = 2;
                *(unsigned char *)(iVar12 + 0xac) = uVar3;
              }
            }
            else {
              iVar7 = 3;
              FUN_002c1658(3,1);
              if (iVar7 == 0) goto LAB_003333b4;
              cVar5 = *(char *)(iVar12 + 0xac) + '\x01';
              *(char *)(iVar12 + 0xac) = cVar5;
              if ('\x02' < cVar5) {
                uVar3 = 0;
                *(unsigned char *)(iVar12 + 0xac) = uVar3;
              }
            }
          }
          FUN_0029dfc0(0);
          uVar9 = 0x100016c;
          FUN_002bc01c(uVar9);
        }
        else if (*(char *)(iVar12 + 0xad) == '\x03') {
          if (*(char *)(iVar12 + 0xab) != '\0') {
            iVar7 = 5;
            FUN_002c1658(5,1);
            if (((iVar7 != 0) && (!bVar20)) && (!bVar19)) {
              cVar4 = *(char *)(iVar12 + 0xad);
              cVar5 = cVar4 - '\x01';
              *(char *)(iVar12 + 0xad) = cVar5;
              if (cVar5 >= '\0') {
                if (cVar5 != '\x03') {
                  do {
                    piVar11 = &iStack_634;
                    FUN_00257a50(&iStack_634,(int)*(char *)(iVar12 + 0xad),
                                 (int)*(char *)(iVar12 + 0xac));
                    if (piVar11 != (int *)0x0) break;
                    cVar5 = *(char *)(iVar12 + 0xad) - '\x01';
                    *(char *)(iVar12 + 0xad) = cVar5;
                    if (cVar5 < '\0') {
                      *(unsigned char *)(iVar12 + 0xad) = 3;
                      break;
                    }
                  } while (cVar5 != '\x03');
                }
              }
              else {
                *(unsigned char *)(iVar12 + 0xad) = 3;
              }
              if (*(char *)(iVar12 + 0xad) != cVar4) {
                uVar9 = 0x100016c;
                FUN_002bc01c(uVar9);
              }
              goto LAB_003333b4;
            }
            if (*(char *)(iVar12 + 0xab) != '\0') {
              iVar7 = 6;
              FUN_002c1658(6,1);
              if (((iVar7 != 0) && (!bVar20)) && (!bVar19)) {
                cVar4 = *(char *)(iVar12 + 0xad);
                cVar5 = cVar4 + '\x01';
                *(char *)(iVar12 + 0xad) = cVar5;
                if ('\x03' < cVar5) {
                  *(unsigned char *)(iVar12 + 0xad) = 0;
                }
                if (cVar5 != '\x03') {
                  do {
                    piVar11 = &iStack_634;
                    FUN_00257a50(&iStack_634,(int)*(char *)(iVar12 + 0xad),
                                 (int)*(char *)(iVar12 + 0xac));
                    if (piVar11 != (int *)0x0) break;
                    cVar5 = *(char *)(iVar12 + 0xad) + '\x01';
                    *(char *)(iVar12 + 0xad) = cVar5;
                    if ('\x03' < cVar5) {
                      *(unsigned char *)(iVar12 + 0xad) = 0;
                    }
                  } while (cVar5 != '\x03');
                }
                if (*(char *)(iVar12 + 0xad) != cVar4) {
                  uVar9 = 0x100016c;
                  FUN_002bc01c(uVar9);
                }
                goto LAB_003333b4;
              }
            }
          }
          iVar7 = iVar12 + 0x34;
          FUN_0029efd8(iVar7,1);
          if (iVar7 != 0 || bVar20) {
            uVar3 = FUN_0029e908(iVar12 + 0x34);
            *(unsigned char *)((int)*(char *)(iVar12 + 0x98) + iVar12 + 0x9b) = uVar3;
            uVar9 = FUN_0029e908(iVar12 + 0x34);
            iVar7 = dataTable15GetUnlockedEntryId((int)*(char *)(iVar12 + 0x98),uVar9);
            uVar9 = FUN_00241a64();
            FUN_0029ee6c(uVar9,0x323232ff);
            if (iVar7 == 0x2d) {
              FUN_00253fe8(0xa11923ff,1,0x12,0x15);
            }
          }
        }
      }
    }
  }
LAB_003333b4:
  if (*(char *)(iVar12 + 0xab) == '\0') {
    return;
  }
  if (iStack_638 == 0) {
    if ((!bVar20) || (iVar7 = FUN_0029e0f8(), iVar7 != 0)) {
      if (*(char *)(iVar12 + 0xad) != '\x03') {
        if ((*(char *)(iVar12 + 0xad) != cVar1) && (cVar1 == '\x03')) {
          FUN_002a035c();
          FUN_002b8838(0x50);
          FUN_0029e890((int)*(char *)(iVar12 + 0xac),1);
          FUN_0029e874(1);
          FUN_0029e788();
        }
        iVar7 = FUN_0029e0f8();
        if ((((iVar7 != 0) && (*(int *)(iVar12 + 0x18) == 6)) &&
            (iVar7 = FUN_0029dfa8(), iVar7 == 0)) &&
           (FUN_00257a50(&iStack_638,(int)*(char *)(iVar12 + 0xad),(int)*(char *)(iVar12 + 0xac)),
           piVar6 != (int *)0x0)) {
          if (*(char *)(iVar12 + 0xac) != '\0') {
            FUN_0029c4ac();
            FUN_0029c4c8(0);
            FUN_0029d8f4(&iStack_638,0,1);
          }
          else {
            FUN_0029c4c8(1);
            FUN_0029defc((int)sStack_5f2,0);
            FUN_0029c4e4(&iStack_638,1);
            FUN_0029c4ac(0);
          }
          FUN_0029da34(0,1,sStack_5f2,&iStack_638);
          FUN_0029e890((int)*(char *)(iVar12 + 0xac),1);
          statusPanelSetOpen(1);
          return;
        }
        return;
      }
      if (cVar1 == '\x03') {
        return;
      }
      FUN_002a035c();
      uniteRequestScriptEntry(0);
      FUN_002b8838(0x4f);
      uVar9 = FUN_0029e908(iVar12 + 0x34);
      iVar12 = dataTable15GetUnlockedEntryId((int)*(char *)(iVar12 + 0x98),uVar9);
      uVar9 = FUN_00241a64();
      FUN_0029ee6c(uVar9,0x323232ff);
      if (iVar12 == 0x2d) {
        FUN_00253fe8(0xa11923ff,1,0x12,0x15);
      }
      FUN_0029c4c8(0);
      FUN_0029e890(0xffffffff,1);
      iVar12 = DAT_0044e144;
      if (*(int *)(DAT_0044e144 + 0x12dc) == 3) {
        return;
      }
      if (*(char *)(DAT_0044e144 + 0x1e67) == '\x03' || *(char *)(DAT_0044e144 + 0x1e67) == '\t') {
        iVar7 = FUN_002a0b34();
        if (iVar7 != 0) {
          if (*(int *)(iVar12 + 0x1e80) != 0) {
            nodeOwnerSetTranslations(*(int *)(iVar12 + 0x1e80),&uStack_20);
            FUN_0029b97c(1);
            if (*(int *)(iVar12 + 0x1e80) != 0) {
              FUN_002886e0();
            }
          }
        }
        else if (*(int *)(iVar12 + 0x1e80) != 0) {
          FUN_00288728();
          iVar7 = FUN_002b879c();
          if (iVar7 == 0) {
            FUN_002a72c0(0);
          }
          if (DAT_0044e142 != '\0') {
            piVar6 = *(int **)(iVar12 + 0x1e80);
            if (piVar6 != (int *)0x0) {
              (**(code **)(*piVar6 + 4))();
              if (*(int *)(iVar12 + 0x1e80) != 0) {
                FUN_002886e0();
              }
            }
          }
          else if (*(int *)(iVar12 + 0x1e80) != 0) {
            FUN_002886e0();
          }
        }
      }
      FUN_002bd8e8(iVar12 + 0x38c,5,0);
      FUN_002bee58(iVar12 + 0x418,3);
      FUN_002bee58(iVar12 + 0x4a4,3);
      FUN_002bee58(iVar12 + 0x530,3);
      FUN_002bd8e8(iVar12 + 0x5bc,5,0);
      FUN_002bd8e8(iVar12 + 0x648,5,0);
      FUN_002bd8e8(iVar12 + 0x6d4,5,0);
      FUN_002bee58(iVar12 + 0x760,3);
      iVar7 = 0;
      do {
        iVar8 = iVar12 + iVar7 * 0x8c;
        FUN_002bd8e8(iVar8 + 0x7ec,5,0);
        FUN_002bd8e8(iVar8 + 0xd64,5,0);
        iVar8 = DAT_0044e144;
        iVar7 = iVar7 + 1;
      } while (iVar7 < 10);
      *(unsigned int *)(DAT_0044e144 + 0x10) = 0;
      *(unsigned int *)(iVar8 + 0x12dc) = 2;
      return;
    }
    iVar12 = func_0x002419f8();
    if (iVar12 != 0xf) {
      FUN_002a035c();
      uniteRequestScriptEntry(0);
    }
    FUN_0029c4c8(0);
    FUN_0029e890(0xffffffff,1);
  }
  FUN_0029ca58();
  iVar12 = DAT_0044e144;
  *(unsigned char *)(DAT_0044e144 + 0x1e60) = 0;
  if ((*(char *)(iVar12 + 0x1e67) != '\t') &&
     (iVar7 = *(int *)(iVar12 + 0x12dc), (iVar7 == 4 || iVar7 == 5) || iVar7 == 6)) {
    *(unsigned int *)(iVar12 + 0x12e0) = 0;
  }
  return;
}
*/
#include "common.h"
