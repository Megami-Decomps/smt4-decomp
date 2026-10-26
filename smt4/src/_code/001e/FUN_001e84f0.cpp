/* NON_MATCHING: unimplemented 0x1018-byte Map1f rendering routine; reference draft retained and no byte-identical Apocalypse twin found. */
/* romwright 0.5.0 decompilation of FUN_001e84f0 for reference (not compiled; its own view of the boundaries):

/* WARNING: Removing unreachable block (ram,0x001e92d4) * /
/* WARNING: Removing unreachable block (ram,0x001e92c4) * /
/* WARNING: Removing unreachable block (ram,0x001e9360) * /

unsigned int FUN_001e84f0(void)

{
  unsigned char bVar1;
  unsigned short uVar2;
  float fVar3;
  int iVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  float *pfVar7;
  int iVar8;
  float fVar9;
  float extraout_r1;
  float extraout_r1_00;
  float *pfVar10;
  int iVar11;
  unsigned int uVar12;
  unsigned int uVar13;
  float fVar14;
  unsigned int uVar15;
  int *piVar16;
  char *pcVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  unsigned char bVar22;
  unsigned char bVar23;
  unsigned int in_fpscr;
  float in_s0;
  unsigned int uVar24;
  unsigned int uVar25;
  unsigned int uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  unsigned long long in_d9;
  unsigned long long uVar33;
  float fVar34;
  unsigned long long uVar35;
  float fVar36;
  unsigned long long uVar37;
  float fStack_4e0;
  float fStack_4dc;
  float fStack_4d8;
  unsigned int uStack_4d4;
  float fStack_4d0;
  float fStack_4cc;
  float fStack_4c8;
  unsigned int uStack_4c4;
  float fStack_4c0;
  float fStack_4bc;
  float fStack_4b8;
  unsigned int uStack_4b4;
  int uStack_4a8;
  unsigned int uStack_4a4;
  float fStack_4a0;
  int aiStack_460 [128];
  float afStack_260 [142];
  
  iVar19 = DAT_0044ea00;
  iVar18 = DAT_00447a78;
  if ((((DAT_0049fc9c != 0) && (DAT_0049f93e == '\0')) && (DAT_0049f940 == '\0')) &&
     (*DAT_004474f4 != 3)) {
    iVar21 = 0;
    fVar3 = (float)FUN_002c5d80(5,0);
    piVar16 = (int *)(iVar19 + 0x124c);
    iVar8 = *piVar16;
    fVar9 = (float)piVar16[iVar8 + 2];
    *piVar16 = iVar8 + 1;
    piVar16[iVar8 + 3] = (int)fVar3;
    if (*(char *)(iVar19 + 0x1264) != '\0' || fVar9 != fVar3) {
      (**(code **)(iVar19 + 0x1268))();
      *(unsigned char *)(iVar19 + 0x1264) = 0;
      fVar9 = extraout_r1;
    }
    uVar35 = 0x3e800000;
    iVar19 = 0;
    do {
      iVar8 = iVar18 + iVar19 * 0x194;
      pcVar17 = (char *)(iVar8 + 0x1d0);
      bVar22 = *pcVar17 == '\0';
      uVar2 = 0;
      if (!bVar22) {
        uVar2 = *(unsigned short *)(iVar8 + 0x1dc);
      }
      if (!bVar22 && uVar2 != 0) {
        fVar9 = (float)(unsigned int)*(unsigned char *)(iVar8 + 0x212);
      }
      if (!((bVar22 || uVar2 == 0) || fVar9 == 0.0f)) {
        if (uVar2 != 0xc) {
          if ((short)uVar2 < 0xc) {
            if (uVar2 != 0) {
              if ((uVar2 != 6 && uVar2 != 8) && uVar2 != 10) goto LAB_001e867c;
              goto joined_r0x001e8660;
            }
          }
          else {
            if ((uVar2 == 0xe) || (uVar2 == 0xf)) goto joined_r0x001e8660;
            if (uVar2 != 0x11) {
              bVar22 = uVar2 == 0x12;
              if (bVar22) {
                uVar2 = (unsigned short)DAT_0049fb46;
              }
              bVar23 = bVar22 && uVar2 == 0;
              if (bVar22 && uVar2 == 0) {
                bVar23 = DAT_0049fb45 == 0;
              }
              if (!bVar23) goto LAB_001e867c;
            }
            else {
              bVar1 = DAT_0049fb46;
              if (DAT_0049fb46 == 0) {
                bVar1 = DAT_0049fb45;
              }
              if (!(DAT_0049fb46 == 0 && bVar1 == 0)) goto LAB_001e867c;
            }
          }
        }
        else {
joined_r0x001e8660:
          if (DAT_0049fb46 != 0) {
LAB_001e867c:
            in_s0 = (float)DAT_004474f4[0x13];
            mathDistanceBetweenPoints();
            iVar8 = *(int *)(iVar8 + 0x1e4);
            if (((!(iVar8 == 1 || iVar8 == 3)) && (!(iVar8 == 2 || iVar8 == 4))) &&
               (!(iVar8 == 5 || iVar8 == 7))) {
              fVar9 = in_s0;
              if (0x4324ffff < (int)in_s0) {
                aiStack_460[iVar21] = iVar19;
                afStack_260[iVar21] = in_s0;
                iVar21 = iVar21 + 1;
              }
            }
            else {
              fVar9 = extraout_r1_00;
              if (0x4351ffff < (int)in_s0) {
                aiStack_460[iVar21] = iVar19;
                afStack_260[iVar21] = in_s0;
                iVar21 = iVar21 + 1;
              }
            }
          }
        }
      }
      iVar19 = iVar19 + 1;
    } while (iVar19 < 0x80);
    iVar19 = 0;
    if (0 < iVar21 - 1) {
      do {
        iVar8 = iVar21 - iVar19;
        if (0 < iVar8) {
          pfVar10 = afStack_260 + iVar19;
          piVar16 = aiStack_460 + iVar19;
          pfVar7 = pfVar10;
          do {
            in_s0 = *pfVar7;
            in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)(in_s0 <= *pfVar10) << 0x1d);
            if (!SUB41(in_fpscr >> 0x1d,0)) {
              iVar20 = *piVar16;
              *piVar16 = aiStack_460[iVar19];
              *pfVar7 = *pfVar10;
              aiStack_460[iVar19] = iVar20;
              *pfVar10 = in_s0;
            }
            iVar8 = iVar8 - 1;
            pfVar7 = pfVar7 + 1;
            piVar16 = piVar16 + 1;
          } while (iVar8 != 0);
        }
        iVar19 = iVar19 + 1;
      } while (iVar19 < iVar21 - 1);
    }
    fVar9 = 1.0f;
    fVar3 = 0.0f;
    iVar19 = 0;
    if (0 < iVar21) {
      do {
        iVar20 = DAT_0044ea00;
        iVar4 = iVar18 + aiStack_460[iVar19] * 0x194;
        pcVar17 = (char *)(iVar4 + 0x1d0);
        iVar8 = (int)*(short *)(iVar4 + 0x1dc);
        switch(*(short *)(iVar4 + 0x1dc)) {
        case 1:
          renderCtxSelectTexture(DAT_0044ea00,*(unsigned int *)(DAT_00447a7c + 0x60));
          iVar8 = ((int)*(short *)(iVar4 + 0x1f8) / 2) % 4;
          if (iVar8 == 0) {
            in_d9 = CONCAT44(fVar3,fVar3);
          }
          else if (iVar8 == 1) {
            in_d9 = CONCAT44(fVar3,(float)uVar35);
          }
          else if (iVar8 == 2) {
            in_d9 = CONCAT44(fVar3,0x3f000000);
          }
          else if (iVar8 == 3) {
            in_d9 = CONCAT44(fVar3,0x3f400000);
          }
          uVar6 = 0xffffffff;
          fVar14 = (float)in_d9;
          fStack_4dc = fVar14 + (float)uVar35;
          fStack_4e0 = (float)((unsigned long long)in_d9 >> 0x20) + fVar9;
          in_s0 = *(float *)(iVar4 + 0x260);
          FUN_002ba1e0(uVar6,uVar6,uVar6,uVar6,fStack_4e0,fVar14);
          break;
        case 2:
          renderCtxSelectTexture(DAT_0044ea00,*(unsigned int *)(DAT_00447a7c + 0x68));
          iVar8 = *(int *)(iVar4 + 0x254);
          if (iVar8 != 0) {
            fStack_4e0 = fVar9;
            fStack_4dc = fVar9;
            FUN_002ba1e0(iVar8,iVar8,iVar8,iVar8,fVar9,fVar3);
          }
          iVar8 = *(int *)(iVar4 + 600);
          if (iVar8 != 0) {
            fStack_4e0 = fVar9;
            fStack_4dc = fVar9;
            FUN_002ba1e0(iVar8,iVar8,iVar8,iVar8,fVar9,fVar3);
          }
          renderCtxSelectTexture(DAT_0044ea00,*(unsigned int *)(iVar4 + 0x354));
          uVar6 = *(unsigned int *)(iVar4 + 0x250);
          in_s0 = *(float *)(iVar4 + 0x260);
          fVar14 = fVar3;
          fStack_4e0 = fVar9;
          fStack_4dc = fVar9;
          FUN_002ba1e0(uVar6,uVar6,uVar6,uVar6,fStack_4e0,fVar14);
          break;
        case 3:
          renderCtxSelectTexture(DAT_0044ea00,*(unsigned int *)(DAT_00447a7c + 0x4c));
          uVar6 = *(unsigned int *)(iVar4 + 0x250);
          in_s0 = *(float *)(iVar4 + 0x260);
          fStack_4e0 = fVar9;
          fStack_4dc = fVar9;
          FUN_002ba1e0(uVar6,uVar6,uVar6,uVar6,fVar9,fVar3);
          break;
        case 5:
        case 7:
        case 9:
        case 0xb:
          bVar22 = *(int *)(iVar4 + 0x35c) != 0;
          iVar20 = 0;
          if (bVar22) {
            iVar8 = *(int *)(iVar4 + 0x350);
            iVar20 = iVar8 - 0x3c23d70a;
          }
          if ((bVar22 && iVar8 != 0x3c23d70a) &&
              iVar20 < 0 == (bVar22 && SBORROW4(iVar8,0x3c23d70a))) {
            renderCtxSelectTexture(DAT_0044ea00);
            fStack_4e0 = *(float *)(iVar4 + 0x350);
            fStack_4dc = fVar9;
            FUN_002ba1e0(0xffffffff,0xffffffff,0xffffffff,0xffffffff,fStack_4e0,fVar3);
          }
LAB_001e8b24:
          renderCtxSelectTexture(DAT_0044ea00,*(unsigned int *)(iVar4 + 0x358));
          uVar6 = *(unsigned int *)(iVar4 + 0x250);
          in_s0 = *(float *)(iVar4 + 0x260);
          fStack_4e0 = fVar9;
          fStack_4dc = fVar9;
          FUN_002ba1e0(uVar6,uVar6,uVar6,uVar6,fVar9,fVar3);
          break;
        case 6:
        case 8:
        case 10:
        case 0xc:
          if (DAT_0049fb46 != 0) {
            if (*(int *)(iVar4 + 0x35c) != 0) {
              renderCtxSelectTexture(DAT_0044ea00);
              fStack_4e0 = fVar9;
              fStack_4dc = fVar9;
              FUN_002ba1e0(0xffffffff,0xffffffff,0xffffffff,0xffffffff,fVar9,fVar3);
            }
            renderCtxSelectTexture(DAT_0044ea00,*(unsigned int *)(iVar4 + 0x358));
            uVar6 = *(unsigned int *)(iVar4 + 0x250);
            in_s0 = *(float *)(iVar4 + 0x260);
            fStack_4e0 = fVar9;
            fStack_4dc = fVar9;
            FUN_002ba1e0(uVar6,uVar6,uVar6,uVar6,fVar9,fVar3);
          }
          break;
        case 0xe:
          if (DAT_0049fb46 != 0) goto LAB_001e8a6c;
          break;
        case 0xf:
joined_r0x001e8f60:
          if (DAT_0049fb46 != 0) goto LAB_001e8b24;
          break;
        case 0x10:
          if (*(int *)(iVar4 + 0x1e4) != 0x25 && *(int *)(iVar4 + 0x1e4) != 0x26) {
            iVar8 = FUN_002c5da8(6,1,0);
            piVar16 = (int *)(iVar20 + 0x12ac);
            iVar11 = piVar16[*piVar16 + 2];
            piVar16[*piVar16 + 2] = iVar8;
            if (*(char *)(iVar20 + 0x12c4) != '\0' || iVar11 != iVar8) {
              (**(code **)(iVar20 + 0x12c8))();
              *(unsigned char *)(iVar20 + 0x12c4) = 0;
            }
            renderCtxSelectTexture(DAT_0044ea00,*(unsigned int *)(DAT_00447a7c + 0x88));
            uVar6 = *(unsigned int *)(iVar4 + 0x250);
            fStack_4e0 = fVar9;
            fStack_4dc = fVar9;
            FUN_002ba1e0(uVar6,uVar6,uVar6,uVar6,fVar9,fVar3);
            iVar8 = DAT_0044ea00;
            iVar20 = FUN_002c5da8(6,7,0);
            piVar16 = (int *)(iVar8 + 0x12ac);
            iVar11 = piVar16[*piVar16 + 2];
            piVar16[*piVar16 + 2] = iVar20;
            if (*(char *)(iVar8 + 0x12c4) != '\0' || iVar11 != iVar20) {
              (**(code **)(iVar8 + 0x12c8))();
              *(unsigned char *)(iVar8 + 0x12c4) = 0;
            }
          }
        case 4:
        case 0xd:
LAB_001e8a6c:
          renderCtxSelectTexture(DAT_0044ea00,*(unsigned int *)(iVar4 + 0x354));
          uVar6 = *(unsigned int *)(iVar4 + 0x250);
          in_s0 = *(float *)(iVar4 + 0x260);
          fStack_4e0 = fVar9;
          fStack_4dc = fVar9;
          FUN_002ba1e0(uVar6,uVar6,uVar6,uVar6,fVar9,fVar3);
          break;
        case 0x11:
          bVar1 = DAT_0049fb46;
          if (DAT_0049fb46 == 0) {
            bVar1 = DAT_0049fb45;
          }
          if (DAT_0049fb46 != 0 || bVar1 != 0) {
            if (*(int *)(iVar4 + 0x1e4) != 0x25 && *(int *)(iVar4 + 0x1e4) != 0x26) {
              iVar8 = FUN_002c5da8(6,1,0);
              piVar16 = (int *)(iVar20 + 0x12ac);
              iVar11 = piVar16[*piVar16 + 2];
              piVar16[*piVar16 + 2] = iVar8;
              if (*(char *)(iVar20 + 0x12c4) != '\0' || iVar11 != iVar8) {
                (**(code **)(iVar20 + 0x12c8))();
                *(unsigned char *)(iVar20 + 0x12c4) = 0;
              }
              renderCtxSelectTexture(DAT_0044ea00,*(unsigned int *)(DAT_00447a7c + 0x88));
              uVar6 = *(unsigned int *)(iVar4 + 0x250);
              in_s0 = *(float *)(iVar4 + 800);
              fStack_4e0 = fVar9;
              fStack_4dc = fVar9;
              FUN_002ba1e0(uVar6,uVar6,uVar6,uVar6,fVar9,fVar3);
              iVar8 = DAT_0044ea00;
              iVar20 = FUN_002c5da8(6,7,0);
              piVar16 = (int *)(iVar8 + 0x12ac);
              iVar11 = piVar16[*piVar16 + 2];
              piVar16[*piVar16 + 2] = iVar20;
              if (*(char *)(iVar8 + 0x12c4) != '\0' || iVar11 != iVar20) {
                (**(code **)(iVar8 + 0x12c8))();
                *(unsigned char *)(iVar8 + 0x12c4) = 0;
              }
            }
            uVar5 = (unsigned int)DAT_0049fb46;
            if (uVar5 != 0) {
              bVar22 = *(int *)(iVar4 + 0x35c) != 0;
              iVar8 = 0;
              if (bVar22) {
                uVar5 = *(unsigned int *)(iVar4 + 0x350);
                iVar8 = uVar5 + 0xc3dc28f6;
              }
              if ((bVar22 && uVar5 != 0x3c23d70a) &&
                  iVar8 < 0 == (bVar22 && SBORROW4(uVar5,0x3c23d70a))) {
                renderCtxSelectTexture(DAT_0044ea00);
                fStack_4e0 = *(float *)(iVar4 + 0x350);
                fStack_4dc = fVar9;
                FUN_002ba1e0(0xffffffff,0xffffffff,0xffffffff,0xffffffff,fStack_4e0,fVar3);
              }
              renderCtxSelectTexture(DAT_0044ea00,*(unsigned int *)(iVar4 + 0x358));
              uVar6 = *(unsigned int *)(iVar4 + 0x250);
              in_s0 = *(float *)(iVar4 + 0x260);
              fStack_4e0 = fVar9;
              fStack_4dc = fVar9;
              FUN_002ba1e0(uVar6,uVar6,uVar6,uVar6,fVar9,fVar3);
            }
          }
          break;
        case 0x12:
          bVar1 = DAT_0049fb46;
          if (DAT_0049fb46 == 0) {
            bVar1 = DAT_0049fb45;
          }
          if (DAT_0049fb46 != 0 || bVar1 != 0) {
            if (!(*(int *)(iVar4 + 0x1e4) != 0x25 && *(int *)(iVar4 + 0x1e4) != 0x26))
            goto joined_r0x001e8f60;
            iVar8 = FUN_002c5da8(6,1,0);
            piVar16 = (int *)(iVar20 + 0x12ac);
            iVar11 = piVar16[*piVar16 + 2];
            piVar16[*piVar16 + 2] = iVar8;
            if (*(char *)(iVar20 + 0x12c4) != '\0' || iVar11 != iVar8) {
              (**(code **)(iVar20 + 0x12c8))();
              *(unsigned char *)(iVar20 + 0x12c4) = 0;
            }
            renderCtxSelectTexture(DAT_0044ea00,*(unsigned int *)(DAT_00447a7c + 0x88));
            uVar6 = *(unsigned int *)(iVar4 + 0x250);
            in_s0 = *(float *)(iVar4 + 800);
            fStack_4e0 = fVar9;
            fStack_4dc = fVar9;
            FUN_002ba1e0(uVar6,uVar6,uVar6,uVar6,fVar9,fVar3);
            iVar8 = DAT_0044ea00;
            iVar20 = FUN_002c5da8(6,7,0);
            piVar16 = (int *)(iVar8 + 0x12ac);
            iVar11 = piVar16[*piVar16 + 2];
            piVar16[*piVar16 + 2] = iVar20;
            if (!(*(char *)(iVar8 + 0x12c4) != '\0' || iVar11 != iVar20)) goto joined_r0x001e8f60;
            (**(code **)(iVar8 + 0x12c8))();
            *(unsigned char *)(iVar8 + 0x12c4) = 0;
            goto joined_r0x001e8f60;
          }
        }
        iVar19 = iVar19 + 1;
      } while (iVar21 > iVar19);
    }
    iVar19 = DAT_0044ea00;
    piVar16 = (int *)(DAT_0044ea00 + 0x124c);
    iVar8 = *piVar16;
    iVar21 = piVar16[iVar8 + 2];
    *piVar16 = iVar8 - 1;
    if (*(char *)(iVar19 + 0x1264) != '\0' || iVar21 != piVar16[iVar8 + 1]) {
      (**(code **)(iVar19 + 0x1268))(piVar16[iVar8 + 1]);
      *(unsigned char *)(iVar19 + 0x1264) = 0;
    }
    iVar19 = DAT_0044ea00;
    iVar8 = FUN_002c5d80(5,0);
    piVar16 = (int *)(iVar19 + 0x124c);
    iVar21 = *piVar16;
    iVar20 = piVar16[iVar21 + 2];
    *piVar16 = iVar21 + 1;
    piVar16[iVar21 + 3] = iVar8;
    if (*(char *)(iVar19 + 0x1264) != '\0' || iVar20 != iVar8) {
      (**(code **)(iVar19 + 0x1268))();
      *(unsigned char *)(iVar19 + 0x1264) = 0;
    }
    bVar1 = 0;
    if (DAT_0049fb45 != 0) {
      bVar1 = DAT_0049fb46;
    }
    if (DAT_0049fb45 != 0 && bVar1 != 0) {
      if ((*(char *)(iVar18 + 0x16) != '\0') && (DAT_0049f934 == '\0')) {
        *(unsigned int *)(iVar18 + 0x4c) = 2;
        pcVar17 = (char *)(iVar18 + 0x3c);
        iVar19 = DAT_00447e58 + *(int *)(iVar18 + 0x1cc) * 0x38;
        uVar6 = *(unsigned int *)(iVar19 + 0x24);
        uVar12 = *(unsigned int *)(iVar19 + 0x1c);
        fVar14 = *(float *)(iVar19 + 0x20);
        *(unsigned int *)(iVar18 + 0x98) = uVar12;
        *(float *)(iVar18 + 0x9c) = fVar14;
        *(unsigned int *)(iVar18 + 0xa0) = uVar6;
        *(unsigned int *)(iVar18 + 0xa4) = uVar12;
        *(float *)(iVar18 + 0xa8) = fVar14;
        *(unsigned int *)(iVar18 + 0xac) = uVar6;
        *(float *)(iVar18 + 0xa8) = fVar14 + 500.0f;
        *(unsigned int *)(iVar18 + 200) = 0xc3b40000;
        *(float *)(iVar18 + 0x1bc) = fVar9;
        in_s0 = 1344.0f;
        FUN_0025a1fc(pcVar17);
        if (0x3c23d70a < *(int *)(iVar18 + 0x1bc)) {
          if (DAT_0049f91c < 100) {
            renderCtxSelectTexture(DAT_0044ea00,*(unsigned int *)(DAT_00447a7c + 0x20));
          }
          else {
            renderCtxSelectTexture(DAT_0044ea00,*(unsigned int *)(DAT_00447a7c + 0x74));
          }
          fStack_4e0 = *(float *)(iVar18 + 0x1bc);
          in_s0 = *(float *)(iVar18 + 0xfc);
          fStack_4dc = fVar9;
          FUN_002ba1e0(0xffffffff,0xffffffff,0xffffffff,0xffffffff,fStack_4e0,fVar3);
        }
      }
      if (((*(char *)(iVar18 + 0x20) != '\0') && (DAT_0049f934 == '\0')) &&
         (*(int *)(pcVar17 + 0x14) < 0x22)) {
        renderCtxSelectTexture(DAT_0044ea00,*(unsigned int *)(DAT_00447a7c + 0x18));
        uVar33 = CONCAT44(*(unsigned int *)(iVar18 + 0x2c),fVar3);
        uVar35 = *(unsigned long long *)(iVar18 + 0x24);
        fVar36 = 130.0f;
        cameraGetTargetAngle();
        fVar34 = (float)uVar35;
        fVar36 = (float)((unsigned long long)uVar35 >> 0x20) + fVar36;
        fVar14 = (in_s0 + *(float *)(pcVar17 + 0x74)) * 0.7111111f;
        uVar5 = (in_fpscr & 0xfffffff) | ((unsigned int)(fVar3 <= fVar14) << 0x1d);
        uVar37 = (unsigned long long)(unsigned int)fVar3;
        for (fVar14 = ABS(fVar14); fVar31 = fVar3, 0x477fffff < (int)fVar14;
            fVar14 = fVar14 - 65536.0f) {
        }
        for (; 0x477fffff < (int)fVar31; fVar31 = fVar31 - 65536.0f) {
        }
        uVar24 = VectorFloatToUnsigned(fVar3,3);
        uVar25 = VectorFloatToUnsigned(fVar14,3);
        uVar26 = VectorFloatToUnsigned(fVar31,3);
        uVar13 = uVar25 & 0xff;
        fVar28 = (float)VectorUnsignedToFloat(uVar25 & 0xffff,(unsigned char)(uVar5 >> 0x16) & 3);
        uVar15 = uVar24 & 0xff;
        uVar25 = uVar26 & 0xff;
        fVar27 = (float)VectorUnsignedToFloat(uVar24 & 0xffff,(unsigned char)(uVar5 >> 0x16) & 3);
        fVar29 = (float)VectorUnsignedToFloat(uVar26 & 0xffff,(unsigned char)(uVar5 >> 0x16) & 3);
        fVar30 = (float)(&DAT_00407ed0)[uVar15 * 4] +
                 (fVar3 - fVar27) * (float)(&DAT_00407ed8)[uVar15 * 4];
        fVar27 = (float)(&DAT_00407ed4)[uVar15 * 4] +
                 (fVar3 - fVar27) * (float)(&DAT_00407edc)[uVar15 * 4];
        fVar3 = (float)(&DAT_00407ed0)[uVar13 * 4] +
                (fVar14 - fVar28) * (float)(&DAT_00407ed8)[uVar13 * 4];
        fVar32 = (float)(&DAT_00407ed0)[uVar25 * 4] +
                 (fVar31 - fVar29) * (float)(&DAT_00407ed8)[uVar25 * 4];
        fVar31 = (float)(&DAT_00407ed4)[uVar25 * 4] +
                 (fVar31 - fVar29) * (float)(&DAT_00407edc)[uVar25 * 4];
        fStack_4b8 = (float)(&DAT_00407ed4)[uVar13 * 4] +
                     (fVar14 - fVar28) * (float)(&DAT_00407edc)[uVar13 * 4];
        if (!SUB41(uVar5 >> 0x1d,0)) {
          fVar3 = -fVar3;
        }
        fStack_4e0 = fVar31 * fStack_4b8;
        fStack_4c0 = -fVar3;
        fStack_4d0 = fVar32 * fStack_4b8;
        fStack_4bc = fVar30 * fStack_4b8;
        fStack_4b8 = fVar27 * fStack_4b8;
        fStack_4dc = fVar30 * fVar31 * fVar3 - fVar27 * fVar32;
        fStack_4c8 = fVar27 * fVar32 * fVar3 - fVar30 * fVar31;
        fStack_4d8 = fVar30 * fVar32 + fVar27 * fVar31 * fVar3;
        fStack_4cc = fVar27 * fVar31 + fVar30 * fVar32 * fVar3;
        uStack_4d4 = 0;
        uStack_4c4 = 0;
        uStack_4b4 = 0;
        iVar18 = 0;
        do {
          uStack_4a8 = (&DAT_004b5d30)[iVar18 * 3];
          uStack_4a4 = (&DAT_004b5d34)[iVar18 * 3];
          fStack_4a0 = (float)(&DAT_004b5d38)[iVar18 * 3] + (float)uVar33;
          iVar19 = iVar18 * 0xc;
          pfVar7 = (float *)(&DAT_004b6fc0 + iVar19);
          FUN_002ad44c(pfVar7,&fStack_4e0,&uStack_4a8);
          iVar18 = iVar18 + 1;
          *pfVar7 = *pfVar7 + fVar34;
          *(float *)(&DAT_004b6fc4 + iVar19) = *(float *)(&DAT_004b6fc4 + iVar19) + fVar36;
          *(float *)(&DAT_004b6fc8 + iVar19) =
               *(float *)(&DAT_004b6fc8 + iVar19) + (float)((unsigned long long)uVar33 >> 0x20);
        } while (iVar18 < 4);
        fStack_4e0 = fVar9;
        fStack_4dc = fVar9;
        FUN_002ba1e0(0xffffffff,0xffffffff,0xffffffff,0xffffffff,fVar9,(int)uVar37);
      }
      iVar18 = unitGroupHasFlag(2,5);
      if (iVar18 != 0) {
        FUN_0020f6c8();
      }
    }
    iVar18 = DAT_0044ea00;
    piVar16 = (int *)(DAT_0044ea00 + 0x124c);
    iVar19 = *piVar16;
    iVar8 = piVar16[iVar19 + 2];
    *piVar16 = iVar19 - 1;
    if (*(char *)(iVar18 + 0x1264) != '\0' || iVar8 != piVar16[iVar19 + 1]) {
      (**(code **)(iVar18 + 0x1268))();
      *(unsigned char *)(iVar18 + 0x1264) = 0;
    }
  }
  return 0;
}
*/
#include "common.h"
