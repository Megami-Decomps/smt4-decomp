/* NON_MATCHING: marker vertex dispatch at 0x29eca0 consumes scratch r0 (initially sp+0x18), leaving its source vector uninitialized; the intended selector is unrecovered. */
/* romwright 0.5.0 decompilation of mapIfDrawWorldIndicators for reference (not compiled; its own view of the boundaries):

/* WARNING: Removing unreachable block (ram,0x0029ec24) * /
/* WARNING: Removing unreachable block (ram,0x0029ec14) * /
/* WARNING: Removing unreachable block (ram,0x0029ecac) * /

unsigned int mapIfDrawWorldIndicators(void)

{
  short sVar1;
  unsigned char bVar2;
  unsigned int uVar3;
  int iVar4;
  float *pfVar5;
  unsigned int uVar6;
  unsigned int extraout_r1;
  float *pfVar7;
  int iVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  int iVar11;
  unsigned int uVar12;
  unsigned int uVar13;
  int *piVar14;
  int iVar15;
  char *pcVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  unsigned char bVar20;
  unsigned int in_fpscr;
  float in_s0;
  float in_s1;
  int in_s2;
  unsigned int uVar21;
  unsigned int uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  unsigned long long in_d9;
  unsigned int uVar26;
  float fVar27;
  float fVar29;
  unsigned long long uVar28;
  float fVar30;
  float fVar32;
  unsigned long long uVar31;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fStack_508;
  float fStack_504;
  float fStack_500;
  float fStack_4fc;
  float fStack_4f8;
  unsigned int uStack_4f4;
  float fStack_4f0;
  float fStack_4ec;
  float fStack_4e8;
  unsigned int uStack_4e4;
  float fStack_4e0;
  float fStack_4dc;
  float fStack_4d8;
  unsigned int uStack_4d4;
  float fStack_4c8;
  float fStack_4c4;
  float fStack_4c0;
  int iStack_4a4;
  int aiStack_480 [128];
  float afStack_280 [150];
  
  iVar19 = DAT_0059dbb4;
  iVar17 = DAT_0058103c;
  iStack_4a4 = 0;
  if ((((DAT_005f1bfc != 0) && (DAT_005f161f == '\0')) && (DAT_005f1621 == '\0')) &&
     (*DAT_005806a4 != 3)) {
    iVar18 = 0;
    uVar3 = FUN_001692ac(5,0);
    piVar14 = (int *)(iVar19 + 0x1258);
    iVar11 = *piVar14;
    uVar6 = piVar14[iVar11 + 2];
    *piVar14 = iVar11 + 1;
    piVar14[iVar11 + 3] = uVar3;
    if (*(char *)(iVar19 + 0x1270) != '\0' || uVar6 != uVar3) {
      (**(code **)(iVar19 + 0x1274))();
      *(unsigned char *)(iVar19 + 0x1270) = 0;
      uVar6 = extraout_r1;
    }
    iVar19 = 0;
    do {
      iVar15 = iVar17 + iVar19 * 0x194;
      pcVar16 = (char *)(iVar15 + 0x1dc);
      bVar20 = *pcVar16 == '\0';
      iVar11 = 0;
      if (!bVar20) {
        iVar11 = (int)*(short *)(iVar15 + 0x1e8);
      }
      if (!bVar20 && iVar11 != 0) {
        uVar6 = (unsigned int)*(unsigned char *)(iVar15 + 0x21e);
      }
      if (!((bVar20 || iVar11 == 0) || uVar6 == 0)) {
        switch(iVar11) {
        case 0:
          break;
        default:
          goto LAB_0029d9d0;
        case 5:
          iStack_4a4 = 1;
LAB_0029d9d0:
          in_s0 = (float)DAT_005806a4[0x14];
          in_s1 = (float)DAT_005806a4[0x15];
          in_s2 = DAT_005806a4[0x16];
          FUN_002b5cb4();
          iVar11 = *(int *)(iVar15 + 0x1f0);
          if (((!(iVar11 == 1 || iVar11 == 3)) && (!(iVar11 == 2 || iVar11 == 4))) &&
             (!((iVar11 == 5 || iVar11 == 7) || iVar11 == 0x2b))) {
            uVar6 = 0x43250000;
            if (0x4324ffff < (int)in_s0) {
              aiStack_480[iVar18] = iVar19;
              afStack_280[iVar18] = in_s0;
              iVar18 = iVar18 + 1;
            }
          }
          else {
            uVar6 = 0x43520000;
            if (0x4351ffff < (int)in_s0) {
              aiStack_480[iVar18] = iVar19;
              afStack_280[iVar18] = in_s0;
              iVar18 = iVar18 + 1;
            }
          }
          break;
        case 6:
        case 8:
        case 10:
        case 0xc:
joined_r0x0029d98c:
          uVar6 = 0;
          iStack_4a4 = 1;
          if (DAT_005f185a != 0) goto LAB_0029d9d0;
          break;
        case 0xe:
          goto joined_r0x0029d98c;
        case 0xf:
          goto joined_r0x0029d98c;
        case 0x11:
          uVar6 = (unsigned int)DAT_005f185a;
          iStack_4a4 = 1;
          bVar2 = 1;
          if (uVar6 == 0) {
            bVar2 = DAT_005f1859;
          }
          if (uVar6 != 0 || bVar2 != 0) goto LAB_0029d9d0;
          break;
        case 0x12:
          uVar6 = (unsigned int)DAT_005f185a;
          iStack_4a4 = 1;
          bVar2 = 1;
          if (uVar6 == 0) {
            bVar2 = DAT_005f1859;
          }
          if (uVar6 != 0 || bVar2 != 0) goto LAB_0029d9d0;
        }
      }
      iVar19 = iVar19 + 1;
    } while (iVar19 < 0x80);
    iVar19 = 0;
    if (0 < iVar18 - 1) {
      do {
        iVar11 = iVar18 - iVar19;
        if (0 < iVar11) {
          pfVar7 = afStack_280 + iVar19;
          piVar14 = aiStack_480 + iVar19;
          pfVar5 = pfVar7;
          do {
            in_s1 = *pfVar7;
            in_s0 = *pfVar5;
            in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)(in_s0 <= in_s1) << 0x1d);
            if (!SUB41(in_fpscr >> 0x1d,0)) {
              iVar15 = *piVar14;
              *piVar14 = aiStack_480[iVar19];
              in_s1 = *pfVar7;
              *pfVar5 = in_s1;
              aiStack_480[iVar19] = iVar15;
              *pfVar7 = in_s0;
            }
            iVar11 = iVar11 - 1;
            pfVar5 = pfVar5 + 1;
            piVar14 = piVar14 + 1;
          } while (iVar11 != 0);
        }
        iVar19 = iVar19 + 1;
      } while (iVar19 < iVar18 - 1);
    }
    fVar23 = 1.0f;
    fVar24 = 0.0f;
    iVar19 = 0;
    if (0 < iVar18) {
      do {
        iVar15 = DAT_0059dbb4;
        iVar4 = iVar17 + aiStack_480[iVar19] * 0x194;
        pcVar16 = (char *)(iVar4 + 0x1dc);
        iVar11 = (int)*(short *)(iVar4 + 0x1e8);
        switch(*(short *)(iVar4 + 0x1e8)) {
        case 1:
          FUN_0016c4b8(DAT_0059dbb4,*(unsigned int *)(DAT_00581040 + 0x74));
          iVar11 = ((int)*(short *)(iVar4 + 0x204) / 2) % 4;
          if (iVar11 == 0) {
            in_d9 = CONCAT44(fVar24,fVar24);
          }
          else if (iVar11 == 1) {
            in_d9 = CONCAT44(fVar24,0x3e800000);
          }
          else if (iVar11 == 2) {
            in_d9 = CONCAT44(fVar24,0x3f000000);
          }
          else if (iVar11 == 3) {
            in_d9 = CONCAT44(fVar24,0x3f400000);
          }
          uVar26 = 0xffffffff;
          fStack_504 = (float)in_d9;
          fStack_4fc = fStack_504 + 0.25f;
          fStack_500 = (float)((unsigned long long)in_d9 >> 0x20) + fVar23;
          in_s0 = *(float *)(iVar4 + 0x26c);
          in_s1 = *(float *)(iVar4 + 0x270);
          in_s2 = *(int *)(iVar4 + 0x274);
          fStack_508 = fStack_500;
          FUN_0019e3d0(uVar26,uVar26,uVar26,uVar26);
          break;
        case 2:
          FUN_0016c4b8(DAT_0059dbb4,*(unsigned int *)(DAT_00581040 + 0x80));
          iVar11 = *(int *)(iVar4 + 0x260);
          if (iVar11 != 0) {
            fStack_508 = fVar23;
            fStack_504 = fVar24;
            fStack_500 = fVar23;
            fStack_4fc = fVar23;
            FUN_0019e3d0(iVar11,iVar11);
          }
          iVar11 = *(int *)(iVar4 + 0x264);
          if (iVar11 != 0) {
            fStack_508 = fVar23;
            fStack_504 = fVar24;
            fStack_500 = fVar23;
            fStack_4fc = fVar23;
            FUN_0019e3d0(iVar11,iVar11);
          }
          FUN_0016c4b8(DAT_0059dbb4,*(unsigned int *)(iVar4 + 0x360));
          uVar26 = *(unsigned int *)(iVar4 + 0x25c);
          in_s0 = *(float *)(iVar4 + 0x26c);
          in_s1 = *(float *)(iVar4 + 0x270);
          in_s2 = *(int *)(iVar4 + 0x274);
          fStack_504 = fVar24;
          fStack_500 = fVar23;
          fStack_4fc = fVar23;
          fStack_508 = fStack_500;
          FUN_0019e3d0(uVar26,uVar26,uVar26,uVar26);
          break;
        case 3:
          FUN_0016c4b8(DAT_0059dbb4,*(unsigned int *)(DAT_00581040 + 0x50));
          uVar26 = *(unsigned int *)(iVar4 + 0x25c);
          in_s0 = *(float *)(iVar4 + 0x26c);
          in_s1 = *(float *)(iVar4 + 0x270);
          in_s2 = *(int *)(iVar4 + 0x274);
          fStack_508 = fVar23;
          fStack_504 = fVar24;
          fStack_500 = fVar23;
          fStack_4fc = fVar23;
          FUN_0019e3d0(uVar26,uVar26,uVar26,uVar26);
          break;
        case 4:
        case 0xd:
LAB_0029ddd8:
          FUN_0016c4b8(DAT_0059dbb4,*(unsigned int *)(iVar4 + 0x360));
          uVar26 = *(unsigned int *)(iVar4 + 0x25c);
          in_s0 = *(float *)(iVar4 + 0x26c);
          in_s1 = *(float *)(iVar4 + 0x270);
          in_s2 = *(int *)(iVar4 + 0x274);
          fStack_508 = fVar23;
          fStack_504 = fVar24;
          fStack_500 = fVar23;
          fStack_4fc = fVar23;
          FUN_0019e3d0(uVar26,uVar26,uVar26,uVar26);
          break;
        case 5:
        case 7:
        case 9:
        case 0xb:
          bVar20 = *(int *)(iVar4 + 0x368) != 0;
          iVar15 = 0;
          if (bVar20) {
            iVar11 = *(int *)(iVar4 + 0x35c);
            iVar15 = iVar11 - 0x3c23d70a;
          }
          if ((bVar20 && iVar11 != 0x3c23d70a) &&
              iVar15 < 0 == (bVar20 && SBORROW4(iVar11,0x3c23d70a))) {
LAB_0029de44:
            FUN_0016c4b8(DAT_0059dbb4);
            fStack_508 = *(float *)(iVar4 + 0x35c);
            fStack_504 = fVar24;
            fStack_500 = fStack_508;
            fStack_4fc = fVar23;
            FUN_0019e3d0(0xffffffff,0xffffffff,0xffffffff);
          }
LAB_0029de90:
          FUN_0016c4b8(DAT_0059dbb4,*(unsigned int *)(iVar4 + 0x364));
          uVar26 = *(unsigned int *)(iVar4 + 0x25c);
          in_s0 = *(float *)(iVar4 + 0x26c);
          in_s1 = *(float *)(iVar4 + 0x270);
          in_s2 = *(int *)(iVar4 + 0x274);
          fStack_508 = fVar23;
          fStack_504 = fVar24;
          fStack_500 = fVar23;
          fStack_4fc = fVar23;
          FUN_0019e3d0(uVar26,uVar26,uVar26,uVar26);
          break;
        case 6:
        case 8:
        case 10:
        case 0xc:
          if (DAT_005f185a != 0) {
            if (*(int *)(iVar4 + 0x368) != 0) {
              FUN_0016c4b8(DAT_0059dbb4);
              fStack_508 = fVar23;
              fStack_504 = fVar24;
              fStack_500 = fVar23;
              fStack_4fc = fVar23;
              FUN_0019e3d0(0xffffffff,0xffffffff,0xffffffff);
            }
            goto LAB_0029de90;
          }
          break;
        case 0xe:
          if (DAT_005f185a != 0) goto LAB_0029ddd8;
          break;
        case 0xf:
joined_r0x0029e2d8:
          if (DAT_005f185a != 0) goto LAB_0029de90;
          break;
        case 0x10:
          iVar11 = *(int *)(iVar4 + 0x1f0);
          if (!((iVar11 != 0x30 && iVar11 != 0x31) && iVar11 != 0x34)) goto LAB_0029ddd8;
          iVar11 = FUN_00169294(6,1,0);
          piVar14 = (int *)(iVar15 + 0x12b8);
          iVar8 = piVar14[*piVar14 + 2];
          piVar14[*piVar14 + 2] = iVar11;
          if (*(char *)(iVar15 + 0x12d0) != '\0' || iVar8 != iVar11) {
            (**(code **)(iVar15 + 0x12d4))();
            *(unsigned char *)(iVar15 + 0x12d0) = 0;
          }
          FUN_0016c4b8(DAT_0059dbb4,*(unsigned int *)(DAT_00581040 + 0xa4));
          uVar26 = *(unsigned int *)(iVar4 + 0x25c);
          fStack_508 = fVar23;
          fStack_504 = fVar24;
          fStack_500 = fVar23;
          fStack_4fc = fVar23;
          FUN_0019e3d0(uVar26,uVar26,uVar26,uVar26);
          iVar11 = DAT_0059dbb4;
          iVar15 = FUN_00169294(6,7,0);
          piVar14 = (int *)(iVar11 + 0x12b8);
          iVar8 = piVar14[*piVar14 + 2];
          piVar14[*piVar14 + 2] = iVar15;
          if (!(*(char *)(iVar11 + 0x12d0) != '\0' || iVar8 != iVar15)) goto LAB_0029ddd8;
          (**(code **)(iVar11 + 0x12d4))();
          *(unsigned char *)(iVar11 + 0x12d0) = 0;
          goto LAB_0029ddd8;
        case 0x11:
          bVar2 = DAT_005f185a;
          if (DAT_005f185a == 0) {
            bVar2 = DAT_005f1859;
          }
          if (DAT_005f185a != 0 || bVar2 != 0) {
            iVar11 = *(int *)(iVar4 + 0x1f0);
            if ((iVar11 != 0x30 && iVar11 != 0x31) && iVar11 != 0x34) {
              iVar11 = FUN_00169294(6,1,0);
              piVar14 = (int *)(iVar15 + 0x12b8);
              iVar8 = piVar14[*piVar14 + 2];
              piVar14[*piVar14 + 2] = iVar11;
              if (*(char *)(iVar15 + 0x12d0) != '\0' || iVar8 != iVar11) {
                (**(code **)(iVar15 + 0x12d4))();
                *(unsigned char *)(iVar15 + 0x12d0) = 0;
              }
              FUN_0016c4b8(DAT_0059dbb4,*(unsigned int *)(DAT_00581040 + 0xa4));
              uVar26 = *(unsigned int *)(iVar4 + 0x25c);
              in_s0 = *(float *)(iVar4 + 0x32c);
              in_s1 = *(float *)(iVar4 + 0x330);
              in_s2 = *(int *)(iVar4 + 0x334);
              fStack_508 = fVar23;
              fStack_504 = fVar24;
              fStack_500 = fVar23;
              fStack_4fc = fVar23;
              FUN_0019e3d0(uVar26,uVar26,uVar26,uVar26);
              iVar11 = DAT_0059dbb4;
              iVar15 = FUN_00169294(6,7,0);
              piVar14 = (int *)(iVar11 + 0x12b8);
              iVar8 = piVar14[*piVar14 + 2];
              piVar14[*piVar14 + 2] = iVar15;
              if (*(char *)(iVar11 + 0x12d0) != '\0' || iVar8 != iVar15) {
                (**(code **)(iVar11 + 0x12d4))();
                *(unsigned char *)(iVar11 + 0x12d0) = 0;
              }
            }
            uVar6 = (unsigned int)DAT_005f185a;
            if (uVar6 != 0) {
              bVar20 = *(int *)(iVar4 + 0x368) != 0;
              iVar11 = 0;
              if (bVar20) {
                uVar6 = *(unsigned int *)(iVar4 + 0x35c);
                iVar11 = uVar6 + 0xc3dc28f6;
              }
              if ((bVar20 && uVar6 != 0x3c23d70a) &&
                  iVar11 < 0 == (bVar20 && SBORROW4(uVar6,0x3c23d70a))) goto LAB_0029de44;
              goto LAB_0029de90;
            }
          }
          break;
        case 0x12:
          bVar2 = DAT_005f185a;
          if (DAT_005f185a == 0) {
            bVar2 = DAT_005f1859;
          }
          if (DAT_005f185a != 0 || bVar2 != 0) {
            iVar11 = *(int *)(iVar4 + 0x1f0);
            if ((iVar11 != 0x30 && iVar11 != 0x31) && iVar11 != 0x34) {
              iVar11 = FUN_00169294(6,1,0);
              piVar14 = (int *)(iVar15 + 0x12b8);
              iVar8 = piVar14[*piVar14 + 2];
              piVar14[*piVar14 + 2] = iVar11;
              if (*(char *)(iVar15 + 0x12d0) != '\0' || iVar8 != iVar11) {
                (**(code **)(iVar15 + 0x12d4))();
                *(unsigned char *)(iVar15 + 0x12d0) = 0;
              }
              FUN_0016c4b8(DAT_0059dbb4,*(unsigned int *)(DAT_00581040 + 0xa4));
              uVar26 = *(unsigned int *)(iVar4 + 0x25c);
              in_s0 = *(float *)(iVar4 + 0x32c);
              in_s1 = *(float *)(iVar4 + 0x330);
              in_s2 = *(int *)(iVar4 + 0x334);
              fStack_508 = fVar23;
              fStack_504 = fVar24;
              fStack_500 = fVar23;
              fStack_4fc = fVar23;
              FUN_0019e3d0(uVar26,uVar26,uVar26,uVar26);
              iVar11 = DAT_0059dbb4;
              iVar15 = FUN_00169294(6,7,0);
              piVar14 = (int *)(iVar11 + 0x12b8);
              iVar8 = piVar14[*piVar14 + 2];
              piVar14[*piVar14 + 2] = iVar15;
              if (*(char *)(iVar11 + 0x12d0) != '\0' || iVar8 != iVar15) {
                (**(code **)(iVar11 + 0x12d4))();
                *(unsigned char *)(iVar11 + 0x12d0) = 0;
              }
            }
            goto joined_r0x0029e2d8;
          }
        }
        iVar19 = iVar19 + 1;
      } while (iVar18 > iVar19);
    }
    iVar19 = DAT_0059dbb4;
    piVar14 = (int *)(DAT_0059dbb4 + 0x1258);
    iVar11 = *piVar14;
    iVar18 = piVar14[iVar11 + 2];
    *piVar14 = iVar11 - 1;
    if (*(char *)(iVar19 + 0x1270) != '\0' || iVar18 != piVar14[iVar11 + 1]) {
      (**(code **)(iVar19 + 0x1274))(piVar14[iVar11 + 1]);
      *(unsigned char *)(iVar19 + 0x1270) = 0;
    }
    iVar19 = DAT_0059dbb4;
    iVar11 = FUN_001692ac(5,0);
    piVar14 = (int *)(iVar19 + 0x1258);
    iVar18 = *piVar14;
    iVar15 = piVar14[iVar18 + 2];
    *piVar14 = iVar18 + 1;
    piVar14[iVar18 + 3] = iVar11;
    if (*(char *)(iVar19 + 0x1270) != '\0' || iVar15 != iVar11) {
      (**(code **)(iVar19 + 0x1274))();
      *(unsigned char *)(iVar19 + 0x1270) = 0;
    }
    bVar2 = 0;
    if (DAT_005f1859 != 0) {
      bVar2 = DAT_005f185a;
    }
    if (DAT_005f1859 != 0 && bVar2 != 0) {
      fVar33 = 250.0f;
      fVar36 = 0.16666667f;
      fVar37 = 32.0f;
      fVar34 = 0.2f;
      fVar35 = 5.0f;
      uVar26 = 0xc2200000;
      fVar27 = 180.0f;
      fVar32 = 0.7111111f;
      fVar25 = 35.0f;
      if (*(char *)(iVar17 + 0x34) != '\0') {
        if (iStack_4a4 != 0) {
          *(unsigned int *)(iVar17 + 0x38) = 0;
          pcVar16 = (char *)(iVar17 + 0x48);
          *(unsigned short *)(iVar17 + 0x74) = 0;
          func_0x00324b40();
        }
        if (iStack_4a4 == 0 && DAT_005f1614 == '\0') {
          pcVar16 = (char *)(iVar17 + 0x48);
          *(unsigned int *)(iVar17 + 0x58) = 0;
          FUN_00292200();
          *(float *)(iVar17 + 0xa4) = in_s0;
          *(float *)(iVar17 + 0xa8) = in_s1;
          *(int *)(iVar17 + 0xac) = in_s2;
          *(float *)(iVar17 + 0xb0) = in_s0;
          *(float *)(iVar17 + 0xb4) = in_s1;
          *(int *)(iVar17 + 0xb8) = in_s2;
          in_s0 = in_s1 + fVar33;
          *(float *)(iVar17 + 0xb4) = in_s0;
          *(unsigned int *)(iVar17 + 0xd4) = uVar26;
          *(float *)(iVar17 + 0x1c8) = fVar23;
          func_0x002921d8();
          *(float *)(iVar17 + 0xbc) = in_s0;
          fStack_4c8 = fVar24;
          fStack_4c4 = fVar24;
          if (*(int *)(iVar17 + 0x38) != 0) {
            if (*(int *)(iVar17 + 0x38) == 1) {
              fVar29 = *(float *)(iVar17 + 0x78) + fVar34;
              *(float *)(iVar17 + 0x78) = fVar29;
              FUN_001bc124();
              *(float *)(iVar17 + 0xb4) = *(float *)(iVar17 + 0xb4) + fVar29 * fVar35;
              in_s0 = 192.0f;
              FUN_0032a904(pcVar16);
            }
          }
          else {
            if (*(short *)(iVar17 + 0x74) < 7) {
              fVar29 = (float)VectorSignedToFloat((int)*(short *)(iVar17 + 0x74),
                                                  (unsigned char)(in_fpscr >> 0x16) & 3);
              *(float *)(iVar17 + 0x1c8) = fVar29 * fVar36;
              FUN_0018a924(&fStack_4c8,&fStack_4c4);
              *(unsigned int *)(iVar17 + 0xd4) = uVar26;
              in_s0 = (float)VectorSignedToFloat((int)*(short *)(iVar17 + 0x74),
                                                 (unsigned char)(in_fpscr >> 0x16) & 3);
              in_s0 = in_s0 * fVar37;
              FUN_0032a904(pcVar16);
            }
            else {
              *(unsigned short *)(iVar17 + 0x74) = 0;
              *(unsigned int *)(iVar17 + 0x38) = 1;
              *(float *)(iVar17 + 0x78) = fVar24;
              in_s0 = 192.0f;
              FUN_0032a904(pcVar16);
            }
            *(short *)(iVar17 + 0x74) = *(short *)(iVar17 + 0x74) + 1;
          }
          if (0x3c23d70a < *(int *)(iVar17 + 0x1c8)) {
            FUN_0016c4b8(DAT_0059dbb4,*(unsigned int *)(DAT_00581040 + 0x30));
            fStack_508 = *(float *)(iVar17 + 0x1c8);
            in_s0 = *(float *)(iVar17 + 0x108);
            fStack_504 = fVar24;
            fStack_500 = fStack_508;
            fStack_4fc = fVar23;
            FUN_0019e3d0(0xffffffff,0xffffffff,0xffffffff);
          }
        }
      }
      iVar19 = DAT_00581280;
      if ((*(char *)(iVar17 + 0x16) != '\0') && (iStack_4a4 == 0 && DAT_005f1614 == '\0')) {
        pcVar16 = (char *)(iVar17 + 0x48);
        fVar29 = 0.017453292f;
        fVar30 = 50.0f;
        uVar28 = CONCAT44(fVar34,0xc3960000);
        sVar1 = *(short *)(DAT_00581280 + *(int *)(iVar17 + 0x1d8) * 0x3c + 0x10);
        if (sVar1 == 1 || sVar1 == 3) {
          *(unsigned int *)(iVar17 + 0x58) = 0;
        }
        else {
          *(unsigned int *)(iVar17 + 0x58) = 1;
        }
        if (DAT_005f15fc < 100) {
          iVar11 = iVar19 + *(int *)(iVar17 + 0x1d8) * 0x3c;
          uVar12 = *(unsigned int *)(iVar11 + 0x1c);
          in_s0 = *(float *)(iVar11 + 0x20);
          uVar9 = *(unsigned int *)(iVar11 + 0x24);
          *(unsigned int *)(iVar17 + 0xa4) = uVar12;
          *(float *)(iVar17 + 0xa8) = in_s0;
          *(unsigned int *)(iVar17 + 0xac) = uVar9;
          *(unsigned int *)(iVar17 + 0xb0) = uVar12;
          *(float *)(iVar17 + 0xb4) = in_s0;
          *(unsigned int *)(iVar17 + 0xb8) = uVar9;
          if (*(short *)(iVar19 + *(int *)(iVar17 + 0x1d8) * 0x3c + 0x12) == 0x1a) {
            in_s0 = in_s0 + 275.0f;
          }
          else {
            in_s0 = in_s0 + fVar33;
          }
          *(float *)(iVar17 + 0xb4) = in_s0;
          iVar19 = iVar19 + *(int *)(iVar17 + 0x1d8) * 0x3c;
          if ((*(short *)(iVar19 + 0x10) != 2) &&
             (sVar1 = *(short *)(iVar19 + 0x12), (sVar1 == 0x1f || sVar1 == 0x21) || sVar1 == 0x1a))
          {
            fVar33 = *(float *)(iVar19 + 0x28);
            *(float *)(iVar17 + 0xbc) = fVar33;
            fVar33 = fVar33 * 0.017453292f;
            in_s0 = fVar33;
            FUN_001bc124();
            *(float *)(iVar17 + 0xb0) = *(float *)(iVar17 + 0xb0) + fVar33 * fVar30;
            FUN_001bbf0c();
            *(float *)(iVar17 + 0xb8) = *(float *)(iVar17 + 0xb8) + in_s0 * fVar30;
          }
          *(unsigned int *)(iVar17 + 0xd4) = uVar26;
        }
        else {
          *(unsigned int *)(iVar17 + 0x58) = 2;
          iVar19 = iVar19 + *(int *)(iVar17 + 0x1d8) * 0x3c;
          uVar9 = *(unsigned int *)(iVar19 + 0x24);
          uVar12 = *(unsigned int *)(iVar19 + 0x1c);
          in_s0 = *(float *)(iVar19 + 0x20);
          *(unsigned int *)(iVar17 + 0xa4) = uVar12;
          *(float *)(iVar17 + 0xa8) = in_s0;
          *(unsigned int *)(iVar17 + 0xac) = uVar9;
          *(unsigned int *)(iVar17 + 0xb0) = uVar12;
          *(float *)(iVar17 + 0xb4) = in_s0;
          in_s0 = in_s0 + 500.0f;
          *(unsigned int *)(iVar17 + 0xb8) = uVar9;
          *(float *)(iVar17 + 0xb4) = in_s0;
          *(unsigned int *)(iVar17 + 0xd4) = 0xc3960000;
        }
        *(float *)(iVar17 + 0x1c8) = fVar23;
        iVar19 = DAT_00581280;
        iVar11 = DAT_00581280 + *(int *)(iVar17 + 0x1d8) * 0x3c;
        if (*(short *)(iVar11 + 0x10) != 2) {
          *(unsigned int *)(iVar17 + 0xbc) = *(unsigned int *)(iVar11 + 0x28);
        }
        else {
          in_s0 = *(float *)(iVar11 + 0x28);
          if (DAT_005f1724 != '\0') {
            *(float *)(iVar17 + 0xbc) = in_s0;
            sVar1 = *(short *)(iVar19 + *(int *)(iVar17 + 0x1d8) * 0x3c + 0x12);
            if ((sVar1 == 0x1f || sVar1 == 0x21) || sVar1 == 0x1a) {
              in_s0 = in_s0 * fVar29;
              FUN_001bc124();
              *(float *)(iVar17 + 0xb0) = *(float *)(iVar17 + 0xb0) + in_s0 * fVar30;
              in_s0 = *(float *)(iVar17 + 0xbc) * fVar29;
              FUN_001bbf0c();
              *(float *)(iVar17 + 0xb8) = *(float *)(iVar17 + 0xb8) + in_s0 * fVar30;
            }
          }
          else {
            *(float *)(iVar17 + 0xbc) = in_s0 + fVar27;
            fVar29 = (in_s0 + fVar27) * fVar29;
            in_s0 = fVar29;
            FUN_001bc124();
            fVar27 = 100.0f;
            *(float *)(iVar17 + 0xb0) = *(float *)(iVar17 + 0xb0) + fVar29 * 100.0f;
            FUN_001bbf0c();
            *(float *)(iVar17 + 0xb8) = *(float *)(iVar17 + 0xb8) + in_s0 * fVar27;
          }
        }
        fVar27 = 1344.0f;
        fStack_508 = fVar24;
        fStack_504 = fVar24;
        if (*(int *)(iVar17 + 0x18) != 0) {
          if (*(int *)(iVar17 + 0x18) == 1) {
            fVar33 = *(float *)(iVar17 + 0x78) + (float)((unsigned long long)uVar28 >> 0x20);
            *(float *)(iVar17 + 0x78) = fVar33;
            if (DAT_005f15fc >= 0x65) {
              FUN_001bc124();
              fVar33 = fVar33 * fVar25;
              in_s0 = fVar27;
            }
            else {
              in_s0 = fVar27;
              FUN_001bc124();
              fVar33 = fVar33 * fVar35;
            }
            *(float *)(iVar17 + 0xb4) = *(float *)(iVar17 + 0xb4) + fVar33;
            if (DAT_005f15fc >= 0x65) {
              FUN_0032a904(pcVar16);
            }
            else {
              in_s0 = 192.0f;
              FUN_0032a904(pcVar16);
            }
          }
        }
        else {
          if (*(short *)(iVar17 + 0x74) < 7) {
            fVar25 = (float)VectorSignedToFloat((int)*(short *)(iVar17 + 0x74),
                                                (unsigned char)(in_fpscr >> 0x16) & 3);
            *(float *)(iVar17 + 0x1c8) = fVar25 * fVar36;
            FUN_0018a924(&fStack_508,&fStack_504);
            if (DAT_005f15fc >= 0x65) {
              *(int *)(iVar17 + 0xd4) = (int)uVar28;
              in_s0 = (float)VectorSignedToFloat((int)*(short *)(iVar17 + 0x74),
                                                 (unsigned char)(in_fpscr >> 0x16) & 3);
              in_s0 = in_s0 * 224.0f;
              FUN_0032a904(pcVar16);
            }
            else {
              *(unsigned int *)(iVar17 + 0xd4) = uVar26;
              in_s0 = (float)VectorSignedToFloat((int)*(short *)(iVar17 + 0x74),
                                                 (unsigned char)(in_fpscr >> 0x16) & 3);
              in_s0 = in_s0 * fVar37;
              FUN_0032a904(pcVar16);
            }
          }
          else {
            *(unsigned short *)(iVar17 + 0x74) = 0;
            *(unsigned int *)(iVar17 + 0x18) = 1;
            *(float *)(iVar17 + 0x78) = fVar24;
            if (DAT_005f15fc >= 0x65) {
              FUN_0032a904(pcVar16);
              in_s0 = fVar27;
            }
            else {
              in_s0 = 192.0f;
              FUN_0032a904(pcVar16);
            }
          }
          *(short *)(iVar17 + 0x74) = *(short *)(iVar17 + 0x74) + 1;
        }
        if (0x3c23d70a < *(int *)(iVar17 + 0x1c8)) {
          FUN_0016c4b8(DAT_0059dbb4,*(unsigned int *)(DAT_00581040 + 0x30));
          fStack_508 = *(float *)(iVar17 + 0x1c8);
          in_s0 = *(float *)(iVar17 + 0x108);
          fStack_504 = fVar24;
          fStack_500 = fStack_508;
          fStack_4fc = fVar23;
          FUN_0019e3d0(0xffffffff,0xffffffff,0xffffffff);
        }
      }
      if (((*(char *)(iVar17 + 0x24) != '\0') && (DAT_005f1614 == '\0')) &&
         (*(int *)(pcVar16 + 0x14) < 0x2d)) {
        FUN_0016c4b8(DAT_0059dbb4,*(unsigned int *)(DAT_00581040 + 0x18));
        fVar27 = *(float *)(iVar17 + 0x2c);
        uVar28 = CONCAT44(*(unsigned int *)(iVar17 + 0x28),*(unsigned int *)(iVar17 + 0x30));
        fVar33 = 130.0f;
        fVar25 = fVar24;
        FUN_00376f48();
        fVar27 = fVar27 + fVar33;
        fVar32 = (in_s0 + *(float *)(pcVar16 + 0x74)) * fVar32;
        uVar6 = (in_fpscr & 0xfffffff) | ((unsigned int)(fVar24 <= fVar32) << 0x1d);
        uVar31 = (unsigned long long)(unsigned int)fVar24;
        for (fVar32 = ABS(fVar32); fVar33 = fVar24, 0x477fffff < (int)fVar32;
            fVar32 = fVar32 - 65536.0f) {
        }
        for (; 0x477fffff < (int)fVar33; fVar33 = fVar33 - 65536.0f) {
        }
        uVar21 = VectorFloatToUnsigned(fVar24,3);
        uVar3 = VectorFloatToUnsigned(fVar32,3);
        uVar22 = VectorFloatToUnsigned(fVar33,3);
        uVar10 = uVar3 & 0xff;
        iVar17 = 0;
        fVar35 = (float)VectorUnsignedToFloat(uVar3 & 0xffff,(unsigned char)(uVar6 >> 0x16) & 3);
        uVar13 = uVar21 & 0xff;
        uVar3 = uVar22 & 0xff;
        fVar34 = (float)VectorUnsignedToFloat(uVar21 & 0xffff,(unsigned char)(uVar6 >> 0x16) & 3);
        fVar36 = (float)VectorUnsignedToFloat(uVar22 & 0xffff,(unsigned char)(uVar6 >> 0x16) & 3);
        fVar37 = (float)(&DAT_00536d14)[uVar13 * 4] +
                 (fVar24 - fVar34) * (float)(&DAT_00536d1c)[uVar13 * 4];
        fVar34 = (float)(&DAT_00536d18)[uVar13 * 4] +
                 (fVar24 - fVar34) * (float)(&DAT_00536d20)[uVar13 * 4];
        fVar24 = (float)(&DAT_00536d14)[uVar10 * 4] +
                 (fVar32 - fVar35) * (float)(&DAT_00536d1c)[uVar10 * 4];
        fVar29 = (float)(&DAT_00536d14)[uVar3 * 4] +
                 (fVar33 - fVar36) * (float)(&DAT_00536d1c)[uVar3 * 4];
        fVar33 = (float)(&DAT_00536d18)[uVar3 * 4] +
                 (fVar33 - fVar36) * (float)(&DAT_00536d20)[uVar3 * 4];
        fStack_4d8 = (float)(&DAT_00536d18)[uVar10 * 4] +
                     (fVar32 - fVar35) * (float)(&DAT_00536d20)[uVar10 * 4];
        if (!SUB41(uVar6 >> 0x1d,0)) {
          fVar24 = -fVar24;
        }
        fStack_500 = fVar33 * fStack_4d8;
        fStack_4e0 = -fVar24;
        fStack_4f0 = fVar29 * fStack_4d8;
        fStack_4dc = fVar37 * fStack_4d8;
        fStack_4d8 = fVar34 * fStack_4d8;
        fStack_4f8 = fVar37 * fVar29 + fVar34 * fVar33 * fVar24;
        fStack_4ec = fVar34 * fVar33 + fVar37 * fVar29 * fVar24;
        fStack_4fc = fVar37 * fVar33 * fVar24 - fVar34 * fVar29;
        fStack_4e8 = fVar34 * fVar29 * fVar24 - fVar37 * fVar33;
        uStack_4f4 = 0;
        uStack_4e4 = 0;
        uStack_4d4 = 0;
        do {
          fStack_4c8 = (float)(&DAT_006087e4)[iVar17 * 3];
          fStack_4c4 = (float)(&DAT_006087e8)[iVar17 * 3];
          fStack_4c0 = (float)(&DAT_006087ec)[iVar17 * 3] + fVar25;
          iVar19 = iVar17 * 0xc;
          pfVar5 = (float *)(&DAT_00609a74 + iVar19);
          FUN_0019a0a0(pfVar5,&fStack_500,&fStack_4c8);
          iVar17 = iVar17 + 1;
          *pfVar5 = *pfVar5 + (float)((unsigned long long)uVar28 >> 0x20);
          *(float *)(&DAT_00609a78 + iVar19) = *(float *)(&DAT_00609a78 + iVar19) + fVar27;
          *(float *)(&DAT_00609a7c + iVar19) = *(float *)(&DAT_00609a7c + iVar19) + (float)uVar28;
        } while (iVar17 < 4);
        fStack_504 = (float)uVar31;
        fStack_508 = fVar23;
        fStack_500 = fVar23;
        fStack_4fc = fVar23;
        FUN_0019e3d0(0xffffffff,0xffffffff,0xffffffff);
      }
      iVar17 = FUN_004a0e38(2,5);
      if (iVar17 != 0) {
        FUN_002dfba0();
      }
    }
    iVar17 = DAT_0059dbb4;
    piVar14 = (int *)(DAT_0059dbb4 + 0x1258);
    iVar19 = *piVar14;
    iVar11 = piVar14[iVar19 + 2];
    *piVar14 = iVar19 - 1;
    if (*(char *)(iVar17 + 0x1270) != '\0' || iVar11 != piVar14[iVar19 + 1]) {
      (**(code **)(iVar17 + 0x1274))();
      *(unsigned char *)(iVar17 + 0x1270) = 0;
    }
  }
  return 0;
}
*/
#include "common.h"
