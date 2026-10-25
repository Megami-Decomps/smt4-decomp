/* NON_MATCHING: processes battle-action effects and actor/status masks across the repaired full body; the reference loses multi-register returns and typed action, actor, and scratch-record layouts. */
/* romwright 0.5.0 decompilation of FUN_004eea40 for reference (not compiled; its own view of the boundaries):

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address * /

void FUN_004eea40(int *param_1,unsigned int *param_2)

{
  char cVar1;
  unsigned short uVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  short *psVar15;
  unsigned int uVar16;
  unsigned int extraout_r1;
  unsigned int uVar17;
  unsigned int *puVar18;
  unsigned int uVar19;
  unsigned int uVar20;
  char cVar21;
  int iVar22;
  int iVar23;
  short *psVar24;
  unsigned int *puVar25;
  unsigned char bVar26;
  float fVar27;
  int iVar28;
  int iVar29;
  short sStack_4d0;
  short sStack_4ce;
  short sStack_4ba;
  short sStack_4b8;
  short sStack_4b6;
  short asStack_49c [266];
  int uStack_288;
  unsigned int uStack_74;
  unsigned int uStack_70;
  int iStack_68;
  unsigned int uStack_64;
  unsigned int *puStack_60;
  int iStack_5c;
  unsigned int uStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  char acStack_44 [20];
  int *piStack_30;
  unsigned int *puStack_2c;
  
  iVar29 = 0;
  piStack_30 = param_1;
  puStack_2c = param_2;
  if (*(short *)(param_2[10] + 0x1be) == 2) {
    iVar4 = (int)*(short *)(param_2[10] + 0x1c0);
    FUN_001aba54();
    uVar17 = extraout_r1;
    if (iVar4 != 0) {
      uVar17 = (unsigned int)*(unsigned char *)(iVar4 + 0x4d);
    }
    if (iVar4 != 0 && uVar17 != 0) {
      uVar17 = *(unsigned int *)(*piStack_30 + 0x45a0);
      uVar20 = *(unsigned int *)(*piStack_30 + 0x45a4);
      if (!((uVar20 & DAT_0057121c) == 0 && (uVar17 & DAT_00571218) == 0)) {
        uVar17 = *param_2 | 0x80;
        *param_2 = uVar17;
      }
      else if (!((uVar17 & DAT_00571228) == 0 && (uVar20 & DAT_0057122c) == 0)) {
        uVar17 = *param_2 | 0x1000;
        *param_2 = uVar17;
      }
    }
    if ((*(unsigned int *)(iVar4 + 0x3c) & 0x4000000) != 0) {
      iVar29 = 1;
    }
  }
  iVar23 = 0;
  iVar4 = 0;
  iStack_4c = 0;
  iStack_50 = 0;
  puStack_60 = param_2 + 0x480;
  puVar25 = param_2;
  if (((((param_2 != (unsigned int *)0x0) && (iVar5 = FUN_003e8430(*piStack_30), iVar5 == 0)) &&
       (uVar17 = param_2[8], uVar17 != 0)) &&
      ((*(char *)(uVar17 + 0x23a) != '\0' &&
       (iVar5 = FUN_003eca48(*piStack_30,*(unsigned short *)(uVar17 + 0x166)), iVar5 != 0)))) &&
     ((iVar5 = FUN_003ec668(*piStack_30,(int)*(char *)(iVar5 + 2),(int)(short)puStack_60[0x11]),
      iVar5 != 0 && (iVar4 = DAT_00571140, DAT_00571140 < 1)))) {
    iVar4 = *(int *)(iVar5 + 100);
  }
  iVar5 = *(int *)(DAT_00573808 + 0x1f58);
  iVar22 = *(int *)(DAT_00573808 + 0x1f54);
  param_2[4] = 0;
  param_2[6] = 0;
  *(unsigned int *)(*piStack_30 + 0x4bc0) = 0;
  iStack_68 = (int)*(short *)(param_2[10] + 0x1be);
  FUN_003e8bb0(&sStack_4d0,*piStack_30,param_2[8]);
  uStack_74 = (unsigned int)sStack_4ba;
  iVar6 = (int)sStack_4b8;
  uStack_64 = (unsigned int)sStack_4b6;
  iVar7 = (int)sStack_4d0;
  iStack_5c = 0;
  iStack_54 = 0;
  uStack_58 = 0;
  if (((*param_2 & 0x1080) != 0) && (iVar8 = FUN_0034919c(), iVar8 != 0)) {
    FUN_00388758(1);
  }
  FUN_004e6b64(piStack_30,param_2,asStack_49c);
  iVar8 = 0;
  iVar9 = FUN_004f59b0(DAT_00573808);
  iVar28 = 0;
  param_2[7] = iVar9 + iVar4;
  iStack_48 = 0;
  do {
    iVar12 = iStack_48;
    iVar9 = iStack_4c;
    psVar15 = asStack_49c + iStack_48 * 2;
    if (*psVar15 < 0) break;
    iVar28 = *piStack_30;
    iVar8 = iStack_4c;
    FUN_003f0e20();
    acStack_44[0] = '\0';
    uVar20 = uStack_74;
    FUN_004c4604(uStack_74,iVar6,(int)*(short *)(param_2[10] + 0x1be),
                 (int)*(short *)(param_2[9] + 0x6a),(int)*psVar15,(*param_2 & 0x8000) >> 0xf,0,
                 acStack_44);
    piVar14 = piStack_30;
    iVar13 = iStack_50;
    uVar17 = uStack_74;
    uStack_70 = uVar20;
    if ((param_2[0xc] != 4) || (!(uVar20 == 1 || uVar20 == 2))) {
      if ((uVar20 == 0) && (acStack_44[0] != '\0')) {
        uStack_58 = 1;
      }
    }
    else {
      uStack_70 = 3;
    }
    switch(uStack_70) {
    case 0:
    case 1:
    case 2:
    case 3:
      FUN_004e20c0(piStack_30,param_2,uStack_70,uStack_74,iVar6,uStack_64,
                   (int)*(short *)(param_2[9] + 0x6a),(int)*psVar15,(int)asStack_49c[iVar12 * 2 + 1]
                   ,iVar9 + iVar4,iVar23,&iStack_5c);
      break;
    case 5:
      iVar12 = (int)*(short *)(param_2[9] + 0x6a);
      iVar13 = (int)*psVar15;
      iVar10 = FUN_004f9ae4(DAT_00573808,1);
      iVar10 = iVar10 + iVar9 + iVar4;
      iVar9 = FUN_004f5d2c(DAT_00573808);
      iVar9 = iVar9 * iVar23;
      if (param_2[0x166] == 1) {
        iVar9 = FUN_004f5d2c(DAT_00573808);
        iVar9 = *(int *)(*(int *)(*piVar14 + 0x1ed4) + iVar13 * 0x1d0 + 100) + iVar9;
      }
      uVar20 = iVar9 + iVar10;
      iVar9 = iVar13;
      FUN_004fda78(uVar20,0,param_2,*(int *)(*piVar14 + 0x1ed4) + iVar13 * 0x1d0,3,0);
      iVar11 = FUN_003e8430(*piVar14);
      if (iVar11 == 0) {
        func_0x004fb5a8(uVar20 + 1,param_2,*(int *)(*piVar14 + 0x1ed4) + iVar13 * 0x1d0);
      }
      iVar13 = *piVar14;
      FUN_001568f8(iVar13,iVar12);
      if ((iVar13 != 0) && ((*(unsigned short *)(iVar13 + 0x110) & 0x10) == 0)) {
        FUN_003f2aac(*piVar14,iVar12,0);
      }
      iVar13 = *piVar14;
      if (0 < *(int *)(iVar13 + 0x4d6c)) {
        uVar17 = *(unsigned int *)(iVar13 + 0x45a4) | DAT_005712ac;
        *(unsigned int *)(iVar13 + 0x45a0) = *(unsigned int *)(iVar13 + 0x45a0) | DAT_005712a8;
        *(unsigned int *)(iVar13 + 0x45a4) = uVar17;
      }
      FUN_004e0114(piVar14,param_2,iVar9,iVar10,10,0x14);
      FUN_004e5a40(piVar14,iVar9,1);
      iVar9 = valueRangeSameSide(iVar12,iVar9);
      uVar17 = param_2[4];
      if (iVar9 != 0) {
        if ((int)uVar17 < 0) {
          uVar17 = 0;
        }
        param_2[4] = uVar17;
        uVar17 = param_2[7];
      }
      else {
        if ((int)uVar17 < 5) {
          uVar17 = 5;
        }
        param_2[4] = uVar17;
        uVar17 = param_2[7];
      }
      if ((int)uVar20 <= (int)uVar17) {
        uVar20 = uVar17;
      }
      param_2[7] = uVar20;
      break;
    case 6:
      FUN_004eaa68(piStack_30,param_2,uStack_74,(int)*(short *)(param_2[9] + 0x6a),(int)*psVar15,
                   iVar9 + iVar4,iStack_50);
      iStack_50 = (int)(char)((char)iStack_50 + '\x01');
      break;
    case 7:
      iVar12 = (int)*psVar15;
      puVar18 = (unsigned int *)*piStack_30;
      FUN_003f0e20(puVar18,iVar12);
      iVar9 = FUN_004f6478(DAT_00573808);
      if ((DAT_00571160 & *puVar18) == 0 && (DAT_00571164 & puVar18[1]) == 0) {
        FUN_004fda78(iVar9 + iVar13,0,param_2,*(int *)(*piVar14 + 0x1ed4) + iVar12 * 0x1d0,3,0);
        FUN_004e5a40(piVar14,iVar12,1);
        uVar17 = param_2[4];
        if ((int)uVar17 < 5) {
          uVar17 = 5;
        }
        param_2[4] = uVar17;
      }
      else if ((*puVar18 & DAT_00571148) != 0 || (puVar18[1] & DAT_0057114c) != 0) {
        FUN_004fcde0(iVar9 + iVar13,param_2,puVar18);
      }
      iStack_50 = (int)(char)((char)iStack_50 + '\x01');
      break;
    case 9:
      *(unsigned int *)(*piStack_30 + 0xa8) = 4;
      *param_2 = *param_2 | 0x2000;
      FUN_004feecc(1,param_2);
      btlQueueDuplicateSuppressedAction(0,param_2);
      *(unsigned int *)(DAT_00571508 + 0x7cc) = 0xffffffff;
      break;
    case 0xb:
      sVar3 = *psVar15;
      iVar12 = *piStack_30;
      FUN_003f0e20(iVar12,(int)sVar3);
      FUN_004fcde0(iVar9 + iVar4 + 0x28,param_2,iVar12);
      FUN_004e0114(piVar14,param_2,(int)sVar3,iVar9 + iVar4,0x1e,0x1e);
      break;
    case 0xc:
      FUN_001aba54();
      if (uVar17 == 0) break;
      switch(*(unsigned char *)(uVar17 + 0x60)) {
      default:
        break;
      case 2:
        uVar17 = 0x11;
        param_2[6] = uVar17;
        break;
      case 3:
        uVar17 = 0x12;
        param_2[6] = uVar17;
        break;
      case 4:
        uVar17 = 0x13;
        param_2[6] = uVar17;
        break;
      case 0xfc:
        param_2[6] = 0x17;
        break;
      case 0xfd:
        uVar17 = 0x16;
        param_2[6] = uVar17;
        break;
      case 0xfe:
        uVar17 = 0x15;
        param_2[6] = uVar17;
        break;
      case 0xff:
        uVar17 = 0x14;
        param_2[6] = uVar17;
      }
      break;
    case 0xd:
      if ((*param_2 & 0x40000) == 0) {
        param_2[6] = 0x18;
        *(char *)(*piStack_30 + 0x4e50) = *(char *)(*piStack_30 + 0x4e50) + '\x01';
        *param_2 = *param_2 | 0x40000;
      }
      break;
    case 0xe:
      iVar9 = (int)*psVar15;
      iVar12 = FUN_004f59b0(DAT_00573808);
      uVar20 = iVar12 + iVar4;
      iVar12 = FUN_004bf67c(uVar17);
      func_0x004fb574(uVar20,param_2,-iVar12);
      FUN_004e0114(piVar14,param_2,iVar9,uVar20,10,0x14);
      if (iVar12 != 0) {
        FUN_004e5a40(piVar14,iVar9,3);
      }
      else {
        FUN_004e5a40(piVar14,iVar9,2);
      }
      uVar17 = param_2[4];
      if ((int)uVar17 < 0) {
        uVar17 = 0;
      }
      param_2[4] = uVar17;
      if ((int)uVar20 <= (int)param_2[7]) {
        uVar20 = param_2[7];
      }
      param_2[7] = uVar20;
      break;
    case 0xf:
      uVar17 = param_2[4];
      if ((int)uVar17 < 0) {
        uVar17 = 0;
      }
      param_2[4] = uVar17;
      uVar17 = param_2[7];
      uVar20 = iVar9 + iVar4;
      if (iVar9 + iVar4 <= (int)uVar17) {
        uVar20 = uVar17;
      }
      param_2[7] = uVar20;
      break;
    case 0x10:
      iVar12 = FUN_004f9ae4(DAT_00573808,1);
      uVar17 = param_2[4];
      if ((int)uVar17 < 0) {
        uVar17 = 0;
      }
      uVar20 = iVar12 + iVar9 + iVar4;
      param_2[4] = uVar17;
      uVar17 = param_2[7];
      if ((int)param_2[7] < (int)uVar20) {
        uVar17 = uVar20;
      }
      param_2[7] = uVar17;
      FUN_004fbeac(uVar20,param_2,0,0x1d,0);
      iStack_54 = 1;
      break;
    case 0x11:
      sVar3 = *(short *)(param_2[9] + 0x6a);
      iVar12 = FUN_004f5a40(DAT_00573808);
      uVar17 = uStack_74;
      iVar13 = *piStack_30;
      FUN_003f0e20(iVar13,(int)sVar3);
      FUN_001aba54();
      cVar21 = '\0';
      if ((uVar17 != 0) && (cVar1 = *(char *)(uVar17 + 0x4d), cVar1 == '\x01' || cVar1 == '\x02')) {
        cVar21 = cVar1;
      }
      btlReflectCreateKind34(iVar12 + iVar9 + iVar4,param_2,iVar13,cVar21);
    }
    if (iVar22 != 0) {
      if (uStack_70 != 1 && uStack_70 != 2) {
        iVar9 = 0;
        do {
          iVar12 = FUN_004f59b0(DAT_00573808);
          if (-1 < iVar12) {
            sVar3 = *(short *)(iVar22 + iVar9 * 0x16 + 0x6a);
            iVar12 = FUN_004f5d2c(DAT_00573808);
            switch(sVar3) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
            case 0xc:
              if ((sVar3 == 0xc) && (-1 < *psVar15)) {
                puVar18 = (unsigned int *)*piStack_30;
                FUN_003f0e20();
                if ((puVar18 != (unsigned int *)0x0) &&
                   ((*puVar18 & DAT_00571150) == 0 && (puVar18[1] & DAT_00571154) == 0)) break;
              }
              iVar13 = iVar22 + iVar9 * 0x16;
              FUN_004fdcd8((int)*(short *)(iVar13 + 0x68) + iVar4 + iVar12 * iVar23,puVar25,
                           (int)*(short *)(param_2[9] + 0x6a),(int)*psVar15,1,iVar9,
                           *(unsigned short *)(iVar13 + 0x6a),iVar13 + 0x58);
            }
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < 4);
        goto LAB_004ef594;
      }
    }
    else {
LAB_004ef594:
      if ((uStack_70 == 3) && ((sStack_4ce == 6 || (sStack_4ce == 7)))) {
        FUN_004c3c84((int)*psVar15,0x16,0);
      }
    }
    piVar14 = piStack_30;
    psVar15 = asStack_49c;
    cVar21 = *(char *)(*piStack_30 + 0xa0) - '\x01';
    *(char *)(*piStack_30 + 0xa0) = cVar21;
    if ('\0' < cVar21) {
      cVar21 = *(char *)(*piStack_30 + 0xa1);
    }
    if (('\0' < cVar21) && (param_2[0x15c] == 0)) {
      iVar12 = 0;
      iVar9 = iStack_48;
      do {
        if ((*(char *)((int)param_2 + iVar12 + 0x38) != '\0') &&
           ((puVar18 = (unsigned int *)(*(int *)(*piVar14 + 0x1ffc) + iVar12 * 0x408),
            (puVar18[1] & DAT_0057117c) != 0 || (DAT_00571178 & *puVar18) != 0 ||
            (iVar13 = FUN_004e83ac(piVar14,param_2,iVar12), iVar13 != 0)))) {
          *(unsigned char *)((int)param_2 + iVar12 + 0x38) = 0;
        }
        iVar12 = iVar12 + 1;
      } while (iVar12 < 0x6d);
      iVar13 = 0;
      sVar3 = 0;
      iVar12 = 0x85;
      puVar18 = param_2 + 0xe;
      do {
        if ((char)*puVar18 != '\0') {
          iVar10 = iVar13 * 4;
          psVar24 = (short *)(&uStack_288 + iVar13);
          iVar13 = iVar13 + 1;
          *psVar24 = sVar3;
          *(unsigned short *)((int)&uStack_288 + iVar10 + 2) = 0;
        }
        iVar12 = iVar12 - 1;
        sVar3 = sVar3 + 1;
        puVar18 = (unsigned int *)((int)puVar18 + 1);
      } while (iVar12 != 0);
      if (iVar13 != 0) {
        if ((!((DAT_00571168 & *(unsigned int *)param_2[8]) == 0 &&
              (((unsigned int *)param_2[8])[1] & DAT_0057116c) == 0)) && (iVar13 >= 2)) {
          FUN_004de7a0(piVar14,param_2,&uStack_288);
          sVar3 = (short)piVar14;
        }
        else {
          iVar12 = FUN_001633a0((iVar13 - 1U) & 0xffff);
          sVar3 = *(short *)(&uStack_288 + iVar12);
          *(short *)((int)&uStack_288 + iVar12 * 4 + 2) =
               *(short *)((int)&uStack_288 + iVar12 * 4 + 2) + 1;
        }
        psVar15[iVar9 * 2 + 2] = sVar3;
        psVar15[iVar9 * 2 + 3] = 1;
      }
    }
    iVar23 = iVar23 + 1;
    iStack_48 = iStack_48 + 1;
  } while (iStack_48 < 0x85);
  uVar17 = uStack_74;
  FUN_001aba54();
  if ((*param_2 & 0x200) == 0) {
    if (*(short *)(param_2[10] + 0x1be) == 1) {
      FUN_004c3c84((int)*(short *)(param_2[9] + 0x6a),0xe,0);
      FUN_004c3c84((int)*(short *)(param_2[9] + 0x6a),0x10,0);
      FUN_004c3c84((int)*(short *)(param_2[9] + 0x6a),0x13,0);
      goto LAB_004ef7e8;
    }
    if (uVar17 != 0) {
      if (*(char *)(uVar17 + 0x23) != '\0') {
        if (*(char *)(uVar17 + 0x23) == '\x01') {
          FUN_004c3c84((int)*(short *)(param_2[9] + 0x6a),0xf,0);
          FUN_004c3c84((int)*(short *)(param_2[9] + 0x6a),0x11,0);
          uVar20 = (*(unsigned int *)(uVar17 + 0x28) & 0xffff) >> 0xb;
          if ((uVar20 == 2 || uVar20 == 3) || uVar20 == 0x14) {
            uVar19 = 0x2a;
            sVar3 = *(short *)(param_2[9] + 0x6a);
            FUN_004c3c84((int)sVar3,uVar19,0);
          }
        }
      }
      else {
        FUN_004c3c84((int)*(short *)(param_2[9] + 0x6a),0xe,0);
        FUN_004c3c84((int)*(short *)(param_2[9] + 0x6a),0x10,0);
        uVar19 = 0x13;
        sVar3 = *(short *)(param_2[9] + 0x6a);
        FUN_004c3c84((int)sVar3,uVar19,0);
      }
      FUN_004c3c84((int)*(short *)(param_2[9] + 0x6a),0x12,0);
      goto LAB_004ef7f0;
    }
  }
  else {
LAB_004ef7e8:
    if (uVar17 != 0) {
LAB_004ef7f0:
      if ('\0' < *(char *)(uVar17 + 0x41)) {
        uVar20 = param_2[10];
        iVar6 = (int)(char)(*(char *)(uVar17 + 0x41) - '\x01');
        if (iVar6 >= 0x15) {
          FUN_004c571c((int)*(short *)(param_2[9] + 0x6a),0x17,1,0);
        }
        else {
          *(unsigned short *)(uVar20 + 0x152) = *(unsigned short *)(uVar20 + 0x128);
          *(unsigned short *)(uVar20 + 0x154) = *(unsigned short *)(uVar20 + 0x12a);
          *(unsigned short *)(uVar20 + 0x156) = *(unsigned short *)(uVar20 + 300);
          *(unsigned short *)(uVar20 + 0x158) = *(unsigned short *)(uVar20 + 0x12e);
          *(unsigned short *)(uVar20 + 0x15a) = *(unsigned short *)(uVar20 + 0x130);
          *(unsigned short *)(uVar20 + 0x15c) = *(unsigned short *)(uVar20 + 0x132);
          *(unsigned short *)(uVar20 + 0x15e) = *(unsigned short *)(uVar20 + 0x134);
          *(unsigned short *)(uVar20 + 0x160) = *(unsigned short *)(uVar20 + 0x136);
          *(unsigned short *)(uVar20 + iVar6 * 2 + 0x152) = 0x87d;
        }
      }
    }
  }
  if (iVar22 != 0) {
    iVar6 = 0;
    do {
      iVar9 = FUN_004f59b0(DAT_00573808);
      if (-1 < iVar9) {
        iVar9 = iVar22 + iVar6 * 0x16;
        if (*(unsigned short *)(iVar9 + 0x6a) - 6 < 6) {
          FUN_004fdcd8(*(short *)(iVar9 + 0x68) + iVar4,puVar25,(int)*(short *)(param_2[9] + 0x6a),
                       0xffffffff,1,iVar6,(unsigned int)*(unsigned short *)(iVar9 + 0x6a),iVar9 + 0x58);
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < 4);
  }
  if ((*param_2 & 0x1080) == 0) {
    if (iStack_68 == 2 || iStack_68 == 3) {
      FUN_0047eccc(uStack_74 & 0xffff);
      FUN_0047f138(uStack_74 & 0xffff,puVar25,iVar4);
      if ((*param_2 & 0x1080) != 0) {
        iVar8 = 1;
      }
    }
  }
  else {
    iVar8 = 1;
  }
  iVar6 = param_2[7] + 5;
  if ((*(short *)(param_2[10] + 0x1be) != 10) && ((*param_2 & 0x2000) == 0)) {
    if (*(short *)(param_2[10] + 0x1be) != 9) {
      if (iVar29 == 0) {
        if (iVar23 >= 1) {
          if (param_2[0xc] == 0) {
            FUN_004fd508(iVar8 + iVar6,puVar25,param_2[4],param_2[9],1);
          }
        }
        else {
          FUN_004fd508(iVar8 + iVar6,puVar25,0,param_2[9],1);
        }
      }
      uVar20 = param_2[6];
      if (uVar20 != 0) {
        if (uVar20 != 0x18) {
          FUN_004fd508(iVar8 + iVar6 + 0x14,puVar25,uVar20,param_2[9],1);
        }
        else {
          func_0x004fe7b0(iVar8 + iVar6 + 0x14,puVar25);
        }
      }
    }
    else if (iVar29 == 0) {
      FUN_004fd508(iVar8 + iVar6,puVar25,0xb,param_2[9],1);
    }
  }
  if ((*param_2 & 0x1080) == 0) {
    if (!(iStack_68 == 2 || iStack_68 == 3)) {
      if (iStack_68 != 1) {
        if ((iStack_68 == 8) && (iStack_54 == 0)) {
          uVar20 = uStack_64;
          dataTable8FindRecord();
          sVar3 = *(short *)(uVar20 + 0x32);
          if (sVar3 != 0) {
            iVar29 = FUN_002c7bf4(sVar3);
            iVar23 = FUN_004f5a40(DAT_00573808);
            if (iVar23 >= 1) {
              if (iVar29 != 0) {
                if ((*(unsigned int *)(iVar29 + 0xc) & 0x10) != 0) {
                  btlReflectCreateKind15(iVar23 + iVar4,puVar25,sVar3,iVar28);
                }
                else {
                  btlReflectCreateKind15(iVar23 + iVar4,puVar25,sVar3,param_2[8]);
                }
              }
            }
            else if (iVar29 != 0) {
              if ((*(unsigned int *)(iVar29 + 0xc) & 0x10) != 0) {
                btlReflectCreateKind15(iVar8 + iVar4 + 0x1e,puVar25,sVar3,iVar28);
              }
              else {
                btlReflectCreateKind15(iVar8 + iVar4 + 0x1e,puVar25,sVar3,param_2[8]);
              }
            }
          }
        }
      }
      else if (*(int *)(*piStack_30 + 0x4bc0) != 0) {
        iVar29 = FUN_004f6478(DAT_00573808);
        if (iVar29 + iStack_5c >= 1) {
          btlReflectCreateKind15(iVar29 + iStack_5c + iVar4,puVar25,0,param_2[8]);
        }
        else {
          btlReflectCreateKind15(iVar8 + iVar4 + 0x1e,puVar25,0,param_2[8]);
        }
      }
    }
    else if (iStack_54 == 0) {
      iVar29 = FUN_002c7bf4(uStack_74);
      iVar23 = FUN_004f5a40(DAT_00573808);
      if (iVar23 >= 1) {
        if (iVar29 != 0) {
          if ((*(unsigned int *)(iVar29 + 0xc) & 0x10) != 0) {
            btlReflectCreateKind15(iVar23 + iVar4,puVar25,uStack_74,iVar28);
          }
          else {
            btlReflectCreateKind15(iVar23 + iVar4,puVar25,uStack_74,param_2[8]);
          }
        }
      }
      else if (iVar29 != 0) {
        if ((*(unsigned int *)(iVar29 + 0xc) & 0x10) != 0) {
          btlReflectCreateKind15(iVar8 + iVar4 + 0x1e,puVar25,uStack_74,iVar28);
        }
        else {
          btlReflectCreateKind15(iVar8 + iVar4 + 0x1e,puVar25,uStack_74,param_2[8]);
        }
      }
      if (*(int *)(*piStack_30 + 0x4bc0) != 0) {
        iVar29 = FUN_004f6478(DAT_00573808);
        if (iVar29 + iStack_5c >= 1) {
          btlReflectCreateKind15(iVar29 + iStack_5c + iVar4,puVar25,uStack_74,param_2[8]);
        }
        else {
          btlReflectCreateKind15(iVar8 + iVar4 + 0x1e,puVar25,uStack_74,param_2[8]);
        }
      }
    }
  }
  if (iVar5 != 0) {
    iVar29 = 0;
    do {
      iVar23 = FUN_004f80e4(DAT_00573808);
      if (-1 < iVar23) {
        iVar23 = iVar5 + iVar29 * 0x16;
        FUN_004fdcd8(*(short *)(iVar23 + 0x10) + iVar4,puVar25,(int)*(short *)(param_2[9] + 0x6a),0,
                     0,iVar29,*(unsigned short *)(iVar23 + 0x12),iVar23);
      }
      iVar29 = iVar29 + 1;
    } while (iVar29 < 4);
  }
  if (((char)param_2[0x167] == '\x01') && (iVar22 != 0)) {
    iVar29 = 0;
    do {
      iVar23 = FUN_004f9d44(DAT_00573808);
      if (-1 < iVar23) {
        iVar6 = iVar22 + iVar29 * 0x16;
        iVar23 = btlEffectNameHasPrefix(DAT_00573808,iVar6 + 0x108);
        if (iVar23 != 0) {
          iVar23 = FUN_004f9d44(DAT_00573808);
          func_0x004fbd30(iVar23 + iVar4,puVar25);
        }
        else if (param_2[0x165] != 0) {
          FUN_004fdcd8(*(short *)(iVar6 + 0x118) + iVar4,puVar25,(int)*(short *)(param_2[9] + 0x6a),
                       0,3,iVar29,*(unsigned short *)(iVar6 + 0x11a),iVar6 + 0x108);
        }
      }
      iVar29 = iVar29 + 1;
    } while (iVar29 < 4);
  }
  uVar20 = 0;
  iVar29 = 0;
  iVar23 = 0x6d;
  iVar6 = *piStack_30;
  psVar15 = (short *)(*(int *)(iVar6 + 0x1ed4) + 0x68);
  do {
    if (((-1 < *psVar15) && (*(char *)((int)param_2 + *psVar15 + 0x38) != '\0')) && (uVar20 == 0)) {
      uVar20 = *(int *)(iVar6 + 0x1ed4) + iVar29 * 0x1d0;
    }
    iVar23 = iVar23 - 1;
    psVar15 = psVar15 + 0xe8;
    iVar29 = iVar29 + 1;
  } while (iVar23 != 0);
  uStack_288 = 0;
  if ((*(unsigned int *)(DAT_00571508 + 0x64c) & 0x100) == 0) {
    iVar29 = 0;
    do {
      if (*(int *)(DAT_00573808 + 0x1f54) != 0) {
        iVar23 = iVar22 + iVar29 * 8;
        cVar21 = *(char *)(iVar23 + 0x160);
        if (cVar21 != '\0') {
          if (cVar21 != '\b') {
            if (cVar21 != '\x13') {
              if (cVar21 != '\x14') {
                if (cVar21 == '\r' || cVar21 == '\x0f') {
                  uVar20 = param_2[9];
                }
                if ((*param_2 & 0x1080) == 0) {
                  uStack_288 = (unsigned int)*(unsigned char *)(iVar23 + 0x161) + iVar4;
                  FUN_004fddf4(uStack_288,puVar25,*(unsigned char *)(iVar23 + 0x162),cVar21,uVar20,
                               (int)*(short *)(iVar23 + 0x164),(int)*(short *)(iVar23 + 0x166),
                               *(unsigned char *)(iVar23 + 0x163),iVar7);
                }
              }
              else if ((*param_2 & 0x1080) == 0) {
                uStack_288 = (unsigned int)*(unsigned char *)(iVar23 + 0x161) + iVar4;
                FUN_004fed00(uStack_288,puVar25,*(unsigned char *)(iVar23 + 0x162),0,1);
              }
            }
            else if ((*param_2 & 0x1080) == 0) {
              uStack_288 = (unsigned int)*(unsigned char *)(iVar23 + 0x161) + iVar4;
              func_0x004fee24(uStack_288,puVar25,*(unsigned char *)(iVar23 + 0x162));
              *(unsigned int *)(DAT_00571508 + 0x64c) = *(unsigned int *)(DAT_00571508 + 0x64c) | 0x1000000;
            }
          }
          else if (((((*(unsigned int *)(*piStack_30 + 0x45a0) & DAT_00571210) == 0 &&
                      (*(unsigned int *)(*piStack_30 + 0x45a4) & DAT_00571214) == 0) || (iStack_68 != 2)) ||
                   (uStack_74 != 0x2a)) && ((*param_2 & 0x1080) == 0)) {
            uStack_288 = (unsigned int)*(unsigned char *)(iVar23 + 0x161) + iVar4;
            FUN_004fed00(uStack_288,puVar25,*(unsigned char *)(iVar23 + 0x162),1,1);
          }
        }
      }
      iVar29 = iVar29 + 1;
    } while (iVar29 < 6);
    if ((((*param_2 & 0x1080) == 0) &&
        ((DAT_00571210 & *(unsigned int *)(*piStack_30 + 0x45a0)) != 0 ||
         (*(unsigned int *)(*piStack_30 + 0x45a4) & DAT_00571214) != 0)) &&
       ((iStack_68 == 2 && ((uStack_74 == 0x2d || uStack_74 == 0x2a || (uStack_74 == 0x24)))))) {
      uStack_288 = iVar4 + 0x1e;
      func_0x004fee24(iVar4 + 0x1e,puVar25,0);
      *(unsigned int *)(DAT_00571508 + 0x64c) = *(unsigned int *)(DAT_00571508 + 0x64c) | 0x1000000;
    }
  }
  else {
    fVar27 = 100.0f;
    if ((*(unsigned int *)(iVar6 + 0x45a0) & DAT_00571210) != 0 ||
        (*(unsigned int *)(iVar6 + 0x45a4) & DAT_00571214) != 0) {
      uVar20 = param_2[9];
    }
    if ((-1 < DAT_0057157c) && (-1 < DAT_00571514)) {
      FUN_004fddf4(DAT_0057157c,puVar25,DAT_00571514,0x15,uVar20,(int)(DAT_00571578 * 100.0f),0,
                   DAT_00571518,iVar7);
    }
    if ((-1 < DAT_00571584) && (-1 < DAT_00571520)) {
      FUN_004fddf4(DAT_00571584,puVar25,DAT_00571520,0x16,uVar20,(int)(DAT_00571580 * fVar27),0,
                   DAT_00571588,iVar7);
    }
    if ((-1 < DAT_00571590) && (-1 < DAT_00571524)) {
      FUN_004fddf4(DAT_00571590,puVar25,DAT_00571524,0x17,uVar20,(int)(DAT_0057158c * fVar27),0,
                   DAT_00571594,iVar7);
    }
    if ((-1 < DAT_00571598) && (-1 < DAT_00571528)) {
      FUN_004fddf4(DAT_00571598,puVar25,DAT_00571528,0x18,uVar20,0,0,DAT_0057159c,iVar7);
    }
    if ((-1 < DAT_005715a0) && (-1 < DAT_0057152c)) {
      FUN_004fddf4(DAT_005715a0,puVar25,DAT_0057152c,0x19,uVar20,0,0,DAT_005715a4,iVar7);
    }
    if ((-1 < DAT_005715a8) && (-1 < DAT_005715ac)) {
      FUN_004fed00(DAT_005715a8,puVar25,DAT_005715ac,1,1);
    }
  }
  uVar20 = param_2[9];
  if ((*(unsigned int *)(uVar20 + 0x50) & 0x400) == 0) {
    iVar6 = 0;
    iVar29 = -1;
    iVar23 = 0;
    iVar7 = 0x6d;
    puVar18 = param_2 + 0xe;
    do {
      if ((char)*puVar18 != '\0') {
        iVar6 = iVar6 + 1;
        iVar29 = iVar23;
      }
      iVar7 = iVar7 - 1;
      iVar23 = iVar23 + 1;
      puVar18 = (unsigned int *)((int)puVar18 + 1);
    } while (iVar7 != 0);
    if ((iVar6 == 1) && (-1 < iVar29)) {
      iVar23 = *(int *)(*piStack_30 + 0x1ffc);
      puVar18 = (unsigned int *)(iVar23 + iVar29 * 0x408);
      if ((*puVar18 & DAT_00571168) != 0 || (puVar18[1] & DAT_0057116c) != 0) {
        uVar20 = *(int *)(*piStack_30 + 0x1ed4) + *(short *)(iVar23 + iVar29 * 0x408 + 8) * 0x1d0;
        goto LAB_004f054c;
      }
    }
  }
  else {
LAB_004f054c:
    if ((uVar20 != 0) && ((*param_2 & 0x1080) == 0)) {
      FUN_004fe618(0,puVar25,5);
    }
  }
  uVar20 = 0;
  if ((iVar5 != 0) && (uVar20 = FUN_004fa030(DAT_00573808), -1 < (int)uVar20)) {
    uVar20 = func_0x004fee98(uVar20 + iVar4,param_2,5);
  }
  uVar16 = 0;
  if (uVar17 != 0) {
    uVar16 = uStack_74;
    uVar20 = uStack_74;
  }
  if ((uVar17 != 0 && uVar20 != 0) && -1 < (int)uVar16) {
    FUN_0023acdc((int)(short)uVar20);
  }
  iVar29 = 0;
  if ((param_2[0x15c] == 0) &&
     (iVar23 = *piStack_30,
     (*(unsigned int *)(iVar23 + 0x45a8) & _DAT_005712d8) == 0 &&
     (*(unsigned int *)(iVar23 + 0x45ac) & _DAT_005712dc) == 0)) {
    if (uStack_288 == 0) {
      uStack_288 = iVar4 + 0x78;
    }
    uVar20 = param_2[10];
    sVar3 = *(short *)(uVar20 + 0x1be);
    if (sVar3 != 2) {
      if (sVar3 != 3) {
        if (sVar3 == 8) {
          sVar3 = *(short *)(uVar20 + 0x1c0);
          iVar29 = (int)sVar3;
          dataTable8FindRecord();
          if ((*(unsigned char *)(iVar29 + 0x42) & 1) == 0) {
            FUN_00480fc0((int)sVar3,1);
          }
        }
      }
      else {
        FUN_003f2594(iVar23);
      }
    }
    else if (uVar17 != 0) {
      if ((*(unsigned int *)(uVar17 + 0x3c) & 0x400) != 0) {
        iVar29 = *(int *)(uVar20 + 0xf4) - 1;
        FUN_003ee0c0(iVar23);
        FUN_004fc094(uStack_288,param_2,0,param_2[9],0,iVar29,0xffffffff,0xffffffff,
                     *(unsigned int *)(param_2[10] + 0xf4),*(unsigned int *)(param_2[10] + 0xf8),0,0,0,0
                     ,0,0,0,0,0,0xffffffff,1,0,1,0,0,1);
        iVar4 = FUN_0018719c(0x591);
        if ((iVar4 != 0) && ((*param_2 & 0x20000) == 0)) {
          FUN_004fbeac(uStack_288,param_2,0,0x45,1);
          *param_2 = *param_2 | 0x20000;
        }
      }
      if ((*(unsigned int *)(uVar17 + 0x3c) & 0x200) != 0) {
        iVar29 = *(int *)(param_2[10] + 0xf8);
        FUN_003ee0c0(*piStack_30);
        FUN_004fc094(uStack_288,param_2,0,param_2[9],0,iVar29,0xffffffff,0xffffffff,
                     *(unsigned int *)(param_2[10] + 0xf4),*(unsigned int *)(param_2[10] + 0xf8),0,0,0,0
                     ,0,0,0,0,0,0xffffffff,1,0,1,0,0,1);
        FUN_004fbc30(uStack_288 + 0x19,param_2,param_2[9],0);
      }
      FUN_004e5f2c(piStack_30,param_2,(int)*(short *)(param_2[9] + 0x6a),-iVar29);
      uVar17 = (unsigned int)*(unsigned char *)(uVar17 + 0x22);
      if (uVar17 != 0) {
        puVar25 = (unsigned int *)param_2[8];
        if ((DAT_00571168 & *puVar25) == 0 && (DAT_0057116c & puVar25[1]) == 0) {
          if (!((puVar25[1] & DAT_00571154) == 0 && (*puVar25 & DAT_00571150) == 0)) {
            uVar17 = FUN_003df57c(uStack_74,1);
            iVar29 = FUN_004c3a98((int)*(short *)(param_2[9] + 0x6a),0x24);
          }
          else {
            uVar17 = FUN_004bcbb4(puVar25[0xff],uStack_74);
            iVar29 = FUN_004c3a98((int)*(short *)(param_2[9] + 0x6a),0x24);
          }
          if (0 < iVar29) {
            uVar17 = 0;
          }
        }
        FUN_004fe9c0(1,0,param_2,param_2[9],uVar17,0,1);
        FUN_004fb528(1,param_2,param_2[9],-uVar17,1);
      }
    }
  }
  if (((*param_2 & 0x1080) == 0) && (iVar29 = FUN_003efb18(*piStack_30), iVar29 == 0)) {
    switch(iStack_68) {
    case 1:
      iVar29 = *(int *)(param_2[8] + 0x150);
      dataTable41FindById();
      if (iVar29 != 0) {
        FUN_004aa3d4(DAT_0057a9c8,2,*(unsigned int *)(param_2[8] + 0x150) & 0xffff,
                     *(unsigned int *)(param_2[8] + 0x3f8),0,0);
      }
      else {
        uVar17 = param_2[10];
        bVar26 = -1 < *(short *)(uVar17 + 4);
        if (!bVar26) {
          uVar2 = *(unsigned short *)(uVar17 + 2);
        }
        else {
          uVar2 = *(unsigned short *)(uVar17 + 4);
        }
        FUN_004aa3d4(DAT_0057a9c8,iStack_68,0,*(unsigned int *)(param_2[8] + 0x3f8),uVar2,bVar26);
      }
      break;
    case 2:
    case 3:
      FUN_004aa3d4(DAT_0057a9c8,iStack_68,uStack_74 & 0xffff,*(unsigned int *)(param_2[8] + 0x3f8),
                   *(unsigned short *)(param_2[10] + 2),0);
      break;
    case 8:
      FUN_004aa3d4(DAT_0057a9c8,iStack_68,uStack_64 & 0xffff,0,0,0);
      break;
    case 9:
    case 0xb:
    case 0xc:
      if ((*param_2 & 0x2000000) == 0) {
        FUN_004aa3d4(DAT_0057a9c8,iStack_68,1,0,0,0);
      }
      else {
        FUN_004aa3d4(DAT_0057a9c8,iStack_68,0,0,0,0);
      }
      break;
    case 10:
      iVar29 = 0;
      do {
        if (*(char *)((int)param_2 + iVar29 + 0x38) != '\0') {
          FUN_004aa3d4(DAT_0057a9c8,iStack_68,0,0,0,0);
          break;
        }
        iVar29 = iVar29 + 1;
      } while (iVar29 < 0x6d);
    }
  }
  if ((uStack_58 & *(unsigned int *)(*piStack_30 + 0x4bc0)) != 0) {
    FUN_004e5a40(piStack_30,(int)*(short *)(param_2[8] + 0x6e),5);
  }
  if ((*param_2 & 0x1080) == 0) {
    iVar29 = FUN_003efb18(*piStack_30);
    if (iVar29 != 0) {
      sVar3 = FUN_003e4a00();
      if (sVar3 < 3) {
        infoWinSetText(*(unsigned int *)(*piStack_30 + 0x2268),0x3b);
      }
      else {
        if (sVar3 < 6) {
          uVar19 = 0x30;
        }
        else {
          uVar19 = 0x3c;
        }
        infoWinSetText(*(unsigned int *)(*piStack_30 + 0x2268),uVar19);
      }
      FUN_001f4e20(1);
      FUN_002c2d5c(0xffffffff);
    }
    if ((*param_2 & 0x1080) == 0) {
      if ((*(unsigned int *)(param_2[9] + 0x50) & 0x200000) != 0) {
        FUN_003f2638(*piStack_30,(int)(short)puStack_60[0x11],param_2[9],0);
      }
      return;
    }
  }
  if ((*(unsigned int *)(*piStack_30 + 0x45a0) & DAT_00571280) == 0 &&
      (DAT_00571284 & *(unsigned int *)(*piStack_30 + 0x45a4)) == 0) {
    return;
  }
  FUN_004fb4fc(3,param_2);
  if ((*param_2 & 0x1080) != 0) {
    return;
  }
  if ((*(unsigned int *)(param_2[9] + 0x50) & 0x200000) != 0) {
    FUN_003f2638(*piStack_30,(int)(short)puStack_60[0x11],param_2[9],0);
  }
  return;
}
*/
#include "common.h"
