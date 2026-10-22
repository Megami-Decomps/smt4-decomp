/* NON_MATCHING: fragment of a larger function (fragment; cmp r0, #0; bxeq lr returns only for null and otherwise falls through beyond the supplied unit.). */
/* romwright 0.5.0 decompilation of FUN_00241b24 for reference (not compiled; its own view of the boundaries):

void FUN_00241b24(int *param_1,int param_2)

{
  char cVar1;
  short sVar2;
  unsigned int *puVar3;
  unsigned int uVar4;
  unsigned int *puVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  unsigned int in_fpscr;
  float fVar11;
  int iVar12;
  float fVar13;
  unsigned char auStack_98 [124];
  
  if (param_1 == (int *)0x0) {
    return;
  }
  if (((param_1[4] & 1U) == 0) && (param_1[6] != 0)) {
    if ((code *)param_1[9] != (code *)0x0 && param_2 != 0) {
      uVar4 = 0;
      if ((unsigned int *)param_1[0xb] != (unsigned int *)0x0) {
        uVar4 = *(unsigned int *)param_1[0xb];
      }
      (*(code *)param_1[9])(uVar4);
    }
    if ((param_1[4] & 0x80U) == 0) {
      iVar9 = param_1[1];
      iVar6 = param_1[2];
      iVar7 = iVar6;
      if (*param_1 != 0) {
        FUN_00100388(auStack_98,0x241e80);
        FUN_002b3fd8(iVar9,iVar6,0x96,0xe);
        DAT_005c10cc = iVar9 + 2;
        DAT_005c10d4 = 5;
        iVar7 = iVar6 + 0x12;
        DAT_005c10d0 = iVar6 + 0xc;
      }
      if ((param_1[4] & 4U) == 0) {
        FUN_002b3fd8(iVar9,iVar7,0x96,param_1[6] * 10 + 4);
      }
      DAT_005c10cc = iVar9 + 2;
      DAT_005c10d0 = iVar7 + 2;
      piVar8 = (int *)param_1[5];
      iVar7 = 0;
      if ((param_1[4] & 0x10U) != 0) {
        iVar6 = param_1[6] + 1;
      }
      else {
        iVar6 = param_1[3];
      }
      if (0 < param_1[6]) {
        do {
          iVar9 = piVar8[4];
          if (iVar7 == iVar6) {
            iVar10 = 4;
          }
          else {
            iVar10 = 0;
          }
          if (iVar9 == -1) {
            iVar10 = iVar10 + 8;
          }
          else if (iVar9 == -2) {
            iVar10 = 2;
          }
          iVar12 = (int)(float)piVar8[5];
          in_fpscr = in_fpscr & 0xfffffff;
          if (iVar12 == 0) {
            iVar12 = 1;
          }
          DAT_005c10d4 = iVar10;
          switch((char)piVar8[1]) {
          case 0:
            break;
          case 1:
            uVar4 = FUN_002e4ea4((int)*(char *)piVar8[2],iVar12);
            FUN_00100388(auStack_98,0x241e8c,*piVar8,uVar4);
            goto LAB_00242460;
          case 2:
            uVar4 = FUN_002e4ea4(*(unsigned char *)piVar8[2],iVar12);
            FUN_00100388(auStack_98,0x241e8c,*piVar8,uVar4);
            goto LAB_00242460;
          case 3:
            uVar4 = FUN_002e4ea4((int)*(short *)piVar8[2],iVar12);
            FUN_00100388(auStack_98,0x241e8c,*piVar8,uVar4);
            goto LAB_00242460;
          case 4:
            uVar4 = FUN_002e4ea4(*(unsigned short *)piVar8[2],iVar12);
            FUN_00100388(auStack_98,0x241e8c,*piVar8,uVar4);
            goto LAB_00242460;
          case 5:
            uVar4 = FUN_002e4ea4(*(unsigned int *)piVar8[2],iVar12);
            FUN_00100388(auStack_98,0x241e8c,*piVar8,uVar4);
            goto LAB_00242460;
          case 6:
            uVar4 = FUN_002e3238(*(unsigned int *)piVar8[2]);
            FUN_00100388(auStack_98,0x241e8c,*piVar8,uVar4);
            goto LAB_00242460;
          case 7:
            uVar4 = FUN_002e3238(*(unsigned int *)piVar8[2]);
            FUN_00100388(auStack_98,0x2421c0,*piVar8,uVar4);
            goto LAB_00242460;
          case 8:
            FUN_00100388(auStack_98,0x2421cc,*piVar8);
            goto LAB_00242460;
          case 9:
            goto LAB_0024226c;
          case 10:
            goto LAB_0024226c;
          case 0xb:
            goto LAB_0024226c;
          case 0xc:
            goto LAB_0024226c;
          case 0xd:
            goto LAB_0024226c;
          case 0xe:
            goto LAB_0024226c;
          case 0xf:
            goto LAB_0024226c;
          case 0x10:
            goto LAB_0024226c;
          case 0x11:
            goto LAB_0024226c;
          case 0x12:
          case 0x13:
            FUN_002cf28c(DAT_005c10cc + 4,DAT_005c10d0,0x20,0x20,0x80000000);
            DAT_005c10d4 = 2;
            FUN_00100388(auStack_98,0x2421d8,*piVar8);
            DAT_005c10d4 = iVar10;
            FUN_00100388(auStack_98,0x2421e0,*(unsigned int *)piVar8[2] & 0xff,auStack_98);
            goto LAB_00242460;
          case 0x14:
            DAT_005c10d4 = 4;
            FUN_00100388(auStack_98,0x2421d8,*piVar8);
            DAT_005c10d4 = iVar10;
            FUN_00100388(auStack_98,0x2421e0,(*(unsigned int *)piVar8[2] & 0xffff) >> 8,auStack_98);
            goto LAB_00242460;
          case 0x15:
            DAT_005c10d4 = 5;
            FUN_00100388(auStack_98,0x2421d8,*piVar8);
            DAT_005c10d4 = iVar10;
            FUN_00100388(auStack_98,0x2421e0,(*(unsigned int *)piVar8[2] & 0xffffff) >> 0x10,auStack_98);
            goto LAB_00242460;
          case 0x16:
            DAT_005c10d4 = 6;
            FUN_00100388(auStack_98,0x2421d8,*piVar8);
            DAT_005c10d4 = iVar10;
            FUN_00100388(auStack_98,0x2421e0,*(unsigned int *)piVar8[2] >> 0x18,auStack_98);
            goto LAB_00242460;
          case 0x17:
            switch(*(unsigned int *)piVar8[2]) {
            case 0:
              FUN_00100388(auStack_98,0x2421ec,*piVar8);
              break;
            case 1:
              FUN_00100388(auStack_98,0x2421f8,*piVar8);
              break;
            case 2:
              FUN_00100388(auStack_98,0x242204,*piVar8);
              break;
            case 3:
              FUN_00100388(auStack_98,0x242210,*piVar8);
              break;
            case 4:
              FUN_00100388(auStack_98,0x24221c,*piVar8);
              break;
            case 5:
              FUN_00100388(auStack_98,0x242228,*piVar8);
              break;
            case 6:
              FUN_00100388(auStack_98,0x242234,*piVar8);
              break;
            default:
              FUN_00100388(auStack_98,0x242240,*piVar8);
            }
            goto LAB_00242460;
          case 0x18:
            fVar11 = (float)VectorSignedToFloat(DAT_005c10cc - 2,(unsigned char)(in_fpscr >> 0x16) & 3);
            fVar13 = (float)VectorSignedToFloat(DAT_005c10d0 + 2,(unsigned char)(in_fpscr >> 0x16) & 3);
            iVar10 = (int)fVar11;
            iVar9 = (int)fVar13;
            iVar12 = (int)(fVar11 + 150.0f);
            puVar5 = (unsigned int *)0x10000;
            FUN_00167ab4(0x10000,0x100,0,0x68,0x10);
            puVar5[2] = iVar10;
            puVar5[3] = iVar9;
            puVar5[4] = iVar12;
            puVar5[5] = iVar9;
            puVar5[1] = 6;
            puVar5[6] = 0xffffc040;
            puVar3 = puVar5;
            if (DAT_006471a0 != (unsigned int *)0x0) {
              *DAT_006471b4 = puVar5;
              puVar3 = DAT_006471a0;
            }
            DAT_006471a0 = puVar3;
            DAT_006471b4 = puVar5;
            *puVar5 = 0;
            DAT_005c10d0 = DAT_005c10d0 + 5;
            goto LAB_002424e4;
          case 0x19:
            if (*piVar8 != 0) {
              DAT_005c10d4 = 5;
              FUN_00100388(auStack_98,0x2425c0);
            }
            goto LAB_00242460;
          case 0x1a:
          case 0x1b:
          case 0x1c:
          case 0x1d:
          case 0x1e:
          case 0x1f:
            if (piVar8[3] != 0xffffff && iVar9 != 0xffffff) {
              if (piVar8[3] != 0xfffffe && iVar9 != 0xfffffe) {
                FUN_00100388(auStack_98,0x2425d0,*piVar8);
                break;
              }
              DAT_005c10d4 = iVar10 + 8;
            }
            FUN_00100388(auStack_98,0x2425c8,*piVar8);
            break;
          case 0x20:
            cVar1 = *(char *)piVar8[2];
            if (cVar1 != '\0') {
              if (cVar1 != '\x01') {
                if (cVar1 != '\x02') {
                  FUN_00100388(auStack_98,0x242948,*piVar8);
                  break;
                }
                FUN_00100388(auStack_98,0x2428d8,*piVar8);
              }
              else {
                FUN_00100388(auStack_98,0x2428cc,*piVar8);
              }
            }
            else {
              FUN_00100388(auStack_98,0x2425d8,*piVar8);
            }
            break;
          case 0x21:
            goto LAB_0024226c;
          case 0x22:
            FUN_00100388(auStack_98,0x242558,*piVar8);
            break;
          case 0x23:
            FUN_00100388(auStack_98,0x2428f4,*piVar8);
            break;
          case 0x24:
LAB_0024226c:
            FUN_00100388(auStack_98,0x242558,*piVar8);
LAB_00242460:
            DAT_005c10d0 = DAT_005c10d0 + 10;
            goto LAB_002424e4;
          case 0x25:
            switch(*(unsigned char *)piVar8[2]) {
            case 0:
              FUN_00100388(auStack_98,0x243778,*piVar8);
              break;
            case 1:
              FUN_00100388(auStack_98,0x243854,*piVar8);
              break;
            case 2:
              FUN_00100388(auStack_98,0x243b90,*piVar8);
              break;
            case 3:
              FUN_00100388(auStack_98,0x243860,*piVar8);
              break;
            case 4:
              FUN_00100388(auStack_98,0x24386c,*piVar8);
              break;
            case 5:
              FUN_00100388(auStack_98,0x243b78,*piVar8);
              break;
            case 6:
              FUN_00100388(auStack_98,0x243b3c,*piVar8);
              break;
            case 7:
              FUN_00100388(auStack_98,0x243b48,*piVar8);
              break;
            case 8:
              FUN_00100388(auStack_98,0x243b54,*piVar8);
            }
            break;
          case 0x26:
            switch(*(unsigned int *)piVar8[2]) {
            case 0:
              FUN_00100388(auStack_98,0x243778,*piVar8);
              break;
            case 1:
              FUN_00100388(auStack_98,0x243854,*piVar8);
              break;
            case 2:
              FUN_00100388(auStack_98,0x243b90,*piVar8);
              break;
            case 3:
              FUN_00100388(auStack_98,0x243860,*piVar8);
              break;
            case 4:
              FUN_00100388(auStack_98,0x24386c,*piVar8);
              break;
            case 5:
              FUN_00100388(auStack_98,0x243b78,*piVar8);
              break;
            case 6:
              FUN_00100388(auStack_98,0x243b3c,*piVar8);
              break;
            case 7:
              FUN_00100388(auStack_98,0x243b48,*piVar8);
              break;
            case 8:
              FUN_00100388(auStack_98,0x243b54,*piVar8);
            }
            break;
          case 0x27:
            switch(*(unsigned char *)piVar8[2]) {
            case 0:
              FUN_00100388(auStack_98,0x243b54,*piVar8);
              break;
            case 1:
              FUN_00100388(auStack_98,0x243778,*piVar8);
              break;
            case 2:
              FUN_00100388(auStack_98,0x243854,*piVar8);
              break;
            case 3:
              FUN_00100388(auStack_98,0x243b90,*piVar8);
              break;
            case 4:
              FUN_00100388(auStack_98,0x243860,*piVar8);
              break;
            case 5:
              FUN_00100388(auStack_98,0x24386c,*piVar8);
              break;
            case 6:
              FUN_00100388(auStack_98,0x243b30,*piVar8);
            }
            break;
          case 0x28:
            switch(*(unsigned char *)piVar8[2]) {
            case 0:
              FUN_00100388(auStack_98,0x243784,*piVar8);
              break;
            case 1:
              FUN_00100388(auStack_98,0x243790,*piVar8);
              break;
            case 2:
              FUN_00100388(auStack_98,0x24379c,*piVar8);
              break;
            case 3:
              FUN_00100388(auStack_98,0x2437a8,*piVar8);
              break;
            case 4:
              FUN_00100388(auStack_98,0x2437b4,*piVar8);
            }
            break;
          case 0x29:
            switch(*(unsigned char *)piVar8[2]) {
            case 0:
              FUN_00100388(auStack_98,0x2437c0,*piVar8);
              break;
            case 1:
              FUN_00100388(auStack_98,0x2437cc,*piVar8);
              break;
            case 2:
              FUN_00100388(auStack_98,0x2437d8,*piVar8);
              break;
            case 3:
              FUN_00100388(auStack_98,0x2437e4,*piVar8);
              break;
            case 4:
              FUN_00100388(auStack_98,0x2437f0,*piVar8);
              break;
            case 5:
              FUN_00100388(auStack_98,0x2437fc,*piVar8);
              break;
            case 6:
              FUN_00100388(auStack_98,0x243808,*piVar8);
              break;
            case 7:
              FUN_00100388(auStack_98,0x243814,*piVar8);
              break;
            case 8:
              FUN_00100388(auStack_98,0x243820,*piVar8);
              break;
            case 9:
              FUN_00100388(auStack_98,0x24382c,*piVar8);
              break;
            case 10:
              FUN_00100388(auStack_98,0x243838,*piVar8);
            }
            break;
          case 0x2a:
            switch(*(unsigned int *)piVar8[2] >> 0x10) {
            case 0:
              FUN_00100388(auStack_98,0x243848,*piVar8);
              break;
            case 1:
              FUN_00100388(auStack_98,0x243854,*piVar8);
              break;
            case 2:
              FUN_00100388(auStack_98,0x243b90,*piVar8);
              break;
            case 3:
              FUN_00100388(auStack_98,0x243860,*piVar8);
              break;
            case 4:
              FUN_00100388(auStack_98,0x24386c,*piVar8);
              break;
            case 5:
              FUN_00100388(auStack_98,0x243b30,*piVar8);
              break;
            case 6:
              FUN_00100388(auStack_98,0x243b3c,*piVar8);
              break;
            case 7:
              FUN_00100388(auStack_98,0x243b48,*piVar8);
              break;
            case 8:
              FUN_00100388(auStack_98,0x243b54,*piVar8);
            }
            break;
          case 0x2b:
            FUN_00100388(auStack_98,0x242900,*piVar8);
            break;
          case 0x2c:
            uVar4 = FUN_002e4ea4((int)*(short *)piVar8[2],iVar12);
            FUN_00100388(auStack_98,0x242c6c,*piVar8,uVar4);
            break;
          case 0x2d:
            if (*(int *)piVar8[2] != 0) {
              if (*(int *)piVar8[2] != 1) {
                FUN_00100388(auStack_98,0x243c00,*piVar8);
              }
              else {
                FUN_00100388(auStack_98,0x243c18,*piVar8);
              }
            }
            else {
              FUN_00100388(auStack_98,0x243c0c,*piVar8);
            }
            break;
          case 0x2e:
            sVar2 = *(short *)piVar8[2];
            if (sVar2 != 0) {
              if (sVar2 != 1) {
                if (sVar2 != 2) {
                  FUN_00100388(auStack_98,0x242948,*piVar8);
                  break;
                }
                FUN_00100388(auStack_98,0x242c60,*piVar8);
              }
              else {
                FUN_00100388(auStack_98,0x242978,*piVar8);
              }
            }
            else {
              FUN_00100388(auStack_98,0x242c78,*piVar8);
            }
            break;
          case 0x2f:
            switch(*(unsigned char *)piVar8[2]) {
            case 0:
              FUN_00100388(auStack_98,0x242c78,*piVar8);
              break;
            case 1:
              FUN_00100388(auStack_98,0x242c84,*piVar8);
              break;
            case 2:
              FUN_00100388(auStack_98,0x242c90,*piVar8);
              break;
            case 3:
              FUN_00100388(auStack_98,0x242c9c,*piVar8);
              break;
            case 4:
              FUN_00100388(auStack_98,0x242ca8,*piVar8);
              break;
            case 5:
              FUN_00100388(auStack_98,0x242cb4,*piVar8);
              break;
            case 6:
              FUN_00100388(auStack_98,0x242cc0,*piVar8);
              break;
            case 7:
              FUN_00100388(auStack_98,0x242ccc,*piVar8);
              break;
            case 8:
              FUN_00100388(auStack_98,0x242cd8,*piVar8);
              break;
            case 9:
              FUN_00100388(auStack_98,0x242ce4,*piVar8);
              break;
            case 10:
              FUN_00100388(auStack_98,0x242cf0,*piVar8);
              break;
            case 0xb:
              FUN_00100388(auStack_98,0x242cfc,*piVar8);
              break;
            case 0xc:
              FUN_00100388(auStack_98,0x242d08,*piVar8);
              break;
            case 0xd:
              FUN_00100388(auStack_98,0x242d14,*piVar8);
              break;
            default:
              FUN_00100388(auStack_98,0x242d20,*piVar8);
            }
            break;
          case 0x30:
            switch(*(unsigned short *)piVar8[2]) {
            case 0:
              FUN_00100388(auStack_98,0x242d2c,*piVar8,*(unsigned short *)piVar8[2]);
              break;
            case 1:
              FUN_00100388(auStack_98,0x242f7c,*piVar8,*(unsigned short *)piVar8[2]);
              break;
            case 2:
              FUN_00100388(auStack_98,0x242f8c,*piVar8,*(unsigned short *)piVar8[2]);
              break;
            case 3:
              FUN_00100388(auStack_98,0x242f9c,*piVar8,*(unsigned short *)piVar8[2]);
              break;
            case 4:
              FUN_00100388(auStack_98,0x242fac,*piVar8,*(unsigned short *)piVar8[2]);
              break;
            case 5:
              FUN_00100388(auStack_98,0x242fbc,*piVar8,*(unsigned short *)piVar8[2]);
              break;
            case 6:
              FUN_00100388(auStack_98,0x242fcc,*piVar8,*(unsigned short *)piVar8[2]);
              break;
            case 7:
              FUN_00100388(auStack_98,0x242fdc,*piVar8,*(unsigned short *)piVar8[2]);
              break;
            case 8:
              FUN_00100388(auStack_98,0x242fec,*piVar8,*(unsigned short *)piVar8[2]);
              break;
            case 9:
              FUN_00100388(auStack_98,0x242ffc,*piVar8,*(unsigned short *)piVar8[2]);
              break;
            case 10:
              FUN_00100388(auStack_98,0x24300c,*piVar8,*(unsigned short *)piVar8[2]);
              break;
            case 0xb:
              FUN_00100388(auStack_98,0x24301c,*piVar8,*(unsigned short *)piVar8[2]);
              break;
            case 0xc:
              FUN_00100388(auStack_98,0x24302c,*piVar8,*(unsigned short *)piVar8[2]);
              break;
            case 0xd:
              FUN_00100388(auStack_98,0x24303c,*piVar8,*(unsigned short *)piVar8[2]);
              break;
            case 0xe:
              FUN_00100388(auStack_98,0x24304c,*piVar8,*(unsigned short *)piVar8[2]);
              break;
            case 0xf:
              FUN_00100388(auStack_98,0x24305c,*piVar8,*(unsigned short *)piVar8[2]);
              break;
            case 0x10:
              FUN_00100388(auStack_98,0x24306c,*piVar8,*(unsigned short *)piVar8[2]);
              break;
            case 0x11:
              FUN_00100388(auStack_98,0x243360,*piVar8,*(unsigned short *)piVar8[2]);
              break;
            case 0x12:
              FUN_00100388(auStack_98,0x243370,*piVar8,*(unsigned short *)piVar8[2]);
              break;
            case 0x13:
              FUN_00100388(auStack_98,0x243380,*piVar8,*(unsigned short *)piVar8[2]);
              break;
            case 0x14:
              FUN_00100388(auStack_98,0x243390,*piVar8,*(unsigned short *)piVar8[2]);
              break;
            case 0x15:
              FUN_00100388(auStack_98,0x2433a0,*piVar8,*(unsigned short *)piVar8[2]);
              break;
            case 0x16:
              FUN_00100388(auStack_98,0x2433b0,*piVar8,*(unsigned short *)piVar8[2]);
              break;
            case 0x17:
              FUN_00100388(auStack_98,0x2433c0,*piVar8,*(unsigned short *)piVar8[2]);
              break;
            case 0x18:
              FUN_00100388(auStack_98,0x2433d0,*piVar8,*(unsigned short *)piVar8[2]);
              break;
            case 0x19:
              FUN_00100388(auStack_98,0x2433e0,*piVar8,*(unsigned short *)piVar8[2]);
              break;
            case 0x1a:
              FUN_00100388(auStack_98,0x2433f0,*piVar8,*(unsigned short *)piVar8[2]);
              break;
            case 0x1b:
              FUN_00100388(auStack_98,0x243400,*piVar8,*(unsigned short *)piVar8[2]);
            }
            break;
          case 0x31:
          case 0x32:
          case 0x34:
            FUN_00100388(auStack_98,0x243410,*piVar8);
            break;
          case 0x33:
            sVar2 = *(short *)piVar8[2];
            if (sVar2 != 0) {
              if (sVar2 != 1) {
                if (sVar2 == 2) {
                  FUN_00100388(auStack_98,0x24341c,*piVar8);
                }
              }
              else {
                FUN_00100388(auStack_98,0x243434,*piVar8);
              }
            }
            else {
              FUN_00100388(auStack_98,0x243428,*piVar8);
            }
            break;
          case 0x35:
            if (*(int *)piVar8[2] != 1) {
              if (*(int *)piVar8[2] != 2) {
                FUN_00100388(auStack_98,0x243848,*piVar8);
                break;
              }
              FUN_00100388(auStack_98,0x24344c,*piVar8);
            }
            else {
              FUN_00100388(auStack_98,0x243440,*piVar8);
            }
            break;
          case 0x36:
            if (*(char *)piVar8[2] == '\0') {
              FUN_00100388(auStack_98,0x2437f0,*piVar8);
              break;
            }
            if (*(char *)piVar8[2] == '\x01') {
              FUN_00100388(auStack_98,0x2437c0,*piVar8);
              break;
            }
            FUN_00100388(auStack_98,0x242948,*piVar8);
            break;
          case 0x37:
            if (*(char *)piVar8[2] != '\0') {
              if (*(char *)piVar8[2] != '\x01') {
                FUN_00100388(auStack_98,0x242948,*piVar8);
                break;
              }
              FUN_00100388(auStack_98,0x242914,*piVar8);
            }
            else {
              FUN_00100388(auStack_98,0x24290c,*piVar8);
            }
            break;
          case 0x38:
            cVar1 = *(char *)piVar8[2];
            if (cVar1 == '\0') {
              FUN_00100388(auStack_98,0x243848,*piVar8);
              break;
            }
            if (cVar1 != '\x01') {
              if (cVar1 != '\x02') {
                FUN_00100388(auStack_98,0x242948,*piVar8);
                break;
              }
              FUN_00100388(auStack_98,0x242924,*piVar8);
            }
            else {
              FUN_00100388(auStack_98,0x24291c,*piVar8);
            }
            break;
          case 0x39:
            FUN_00100388(auStack_98,0x243b60,*piVar8);
            break;
          case 0x3a:
            iVar9 = *(int *)piVar8[2];
            if (iVar9 == 0) {
              FUN_00100388(auStack_98,0x243b78,*piVar8);
              break;
            }
            if (iVar9 != 1) {
              if (iVar9 == 2) {
                FUN_00100388(auStack_98,0x243b90,*piVar8);
                break;
              }
              if (iVar9 == 3) {
                FUN_00100388(auStack_98,0x243b6c,*piVar8);
              }
            }
            else {
              FUN_00100388(auStack_98,0x243b84,*piVar8);
            }
            break;
          case 0x3b:
            cVar1 = *(char *)piVar8[2];
            if (cVar1 == '\0') {
              FUN_00100388(auStack_98,0x243c0c,*piVar8);
              break;
            }
            if (cVar1 != '\x01') {
              if (cVar1 != '\x02') {
                FUN_00100388(auStack_98,0x242948,*piVar8);
                break;
              }
              FUN_00100388(auStack_98,0x24293c,*piVar8);
            }
            else {
              FUN_00100388(auStack_98,0x242930,*piVar8);
            }
            break;
          case 0x3c:
            cVar1 = *(char *)piVar8[2];
            if (cVar1 != '\0') {
              if (cVar1 != '\x01') {
                if (cVar1 != '\x02') {
                  FUN_00100388(auStack_98,0x242948,*piVar8);
                }
                else {
                  FUN_00100388(auStack_98,0x24296c,*piVar8);
                }
              }
              else {
                FUN_00100388(auStack_98,0x242960,*piVar8);
              }
            }
            else {
              FUN_00100388(auStack_98,0x242954,*piVar8);
            }
            if (iVar7 == iVar6) {
              DAT_005c10d4 = 4;
            }
            else {
              DAT_005c10d4 = 5;
            }
            break;
          case 0x3d:
            iVar9 = *(int *)piVar8[2];
            if (iVar9 != 0) {
              if (iVar9 != 1) {
                if (iVar9 == 2) {
                  FUN_00100388(auStack_98,0x243b9c,*piVar8);
                }
              }
              else {
                FUN_00100388(auStack_98,0x243bb4,*piVar8);
              }
            }
            else {
              FUN_00100388(auStack_98,0x243ba8,*piVar8);
            }
            break;
          case 0x3e:
            if (*(int *)piVar8[2] != 0) {
              if (*(int *)piVar8[2] == 1) {
                FUN_00100388(auStack_98,0x243bc0,*piVar8);
              }
            }
            else {
              FUN_00100388(auStack_98,0x243bd0,*piVar8);
            }
            break;
          case 0x3f:
            if (*(int *)piVar8[2] != 0) {
              if (*(int *)piVar8[2] != 1) {
                FUN_00100388(auStack_98,0x243be0,*piVar8);
              }
              else {
                FUN_00100388(auStack_98,0x243bf4,*piVar8);
              }
            }
            else {
              FUN_00100388(auStack_98,0x243be8,*piVar8);
            }
            break;
          default:
            goto LAB_002424e4;
          }
          DAT_005c10d0 = DAT_005c10d0 + 10;
LAB_002424e4:
          iVar7 = iVar7 + 1;
          piVar8 = piVar8 + 6;
        } while (iVar7 < param_1[6]);
      }
    }
  }
  return;
}
*/
#include "common.h"
