/* NON_MATCHING: fragment of a larger function (Fragment contains only null checks and a conditional return; non-null inputs fall through beyond the supplied instructions.). */
/* romwright 0.5.0 decompilation of FUN_00226970 for reference (not compiled; its own view of the boundaries):

unsigned char * FUN_00226970(unsigned char *param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
  unsigned char bVar1;
  unsigned short uVar2;
  code *pcVar3;
  unsigned int *puVar4;
  unsigned char *puVar5;
  unsigned char *puVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int *puVar9;
  int iVar10;
  unsigned int uVar11;
  unsigned int uVar12;
  unsigned int uVar13;
  unsigned char *pbVar14;
  unsigned int uVar15;
  unsigned int uVar16;
  unsigned int *puVar17;
  int unaff_r9;
  unsigned int uVar18;
  unsigned int in_lr;
  unsigned char bVar19;
  unsigned int *puStack_38;
  unsigned char uStack_20;
  
  if (param_1 == (unsigned char *)0x0 || param_2 == 0) {
    return param_1;
  }
  uVar2 = *(unsigned short *)(param_2 + 0x12);
  uVar15 = (unsigned int)uVar2;
  uVar16 = (unsigned int)*(unsigned short *)(param_2 + 0x14);
  if (*(char *)(param_2 + 0x11) == '\0') {
    unaff_r9 = 4;
    *(unsigned int *)(param_1 + 0x28) = uVar15 * uVar16 * 4;
    puStack_38 = (unsigned int *)0x100;
    FUN_00163060(0x100,0x100,0,*(unsigned int *)(param_1 + 0x28),1);
  }
  bVar1 = *(unsigned char *)(param_2 + 0x16);
  param_2 = param_2 + 0x40;
  if (bVar1 != 0x1b) {
    if (bVar1 < 0x1c) {
      if (bVar1 == 0x13) goto LAB_00226aa8;
      if (bVar1 != 0x14) goto code_r0x0019a5a0;
    }
    else if (bVar1 != 0x24 && bVar1 != 0x2c) goto code_r0x0019a5a0;
    uVar18 = 0;
    puVar17 = puStack_38;
    if (uVar16 != 0) {
      do {
        if (uVar15 != 0) {
          uVar7 = 0;
          puVar9 = puVar17;
          uVar13 = uVar15;
          do {
            bVar19 = (uVar7 & 1) != 0;
            iVar10 = ((uVar16 - uVar18) - 1) * uVar15 + uVar7;
            uVar7 = uVar7 + 1;
            bVar1 = *(unsigned char *)(param_2 + unaff_r9 * 0x10 + (iVar10 >> 1));
            if (bVar19) {
              bVar1 = bVar1 >> 4;
            }
            uVar11 = (unsigned int)bVar1;
            if (!bVar19) {
              uVar11 = uVar11 & 0xf;
            }
            uVar12 = *(unsigned int *)(param_2 + uVar11 * 4);
            uVar11 = uVar12 >> 0x18;
            bVar19 = uVar11 < 0x7f;
            if (bVar19) {
              uVar11 = uVar11 << 0x19;
            }
            if (!bVar19) {
              uVar11 = 0xff;
            }
            else {
              uVar11 = uVar11 >> 0x18;
            }
            uVar13 = (uVar13 - 1) & 0xffff;
            *puVar9 = (uVar12 << 0x18) | (((uVar12 >> 8) & 0xff) << 0x10) |
                      (((uVar12 >> 0x10) & 0xff) << 8) | uVar11;
            puVar9 = puVar9 + 1;
          } while (uVar13 != 0);
          puVar17 = puVar17 + uVar15;
        }
        uVar18 = (uVar18 + 1) & 0xffff;
      } while (uVar18 < uVar16);
    }
  }
  else {
LAB_00226aa8:
    iVar10 = 0x100;
    FUN_00163060(0x100,0x100,0,0x400,1);
    uVar18 = 0;
    do {
      uVar7 = *(unsigned int *)(param_2 +
                       ((uVar18 & 0xe7) | ((uVar18 & 0x10) >> 1) | ((uVar18 & 8) << 1)) * 4);
      uVar13 = uVar7 >> 0x18;
      bVar19 = uVar13 < 0x7f;
      if (bVar19) {
        uVar13 = uVar13 << 0x19;
      }
      if (!bVar19) {
        uVar13 = 0xff;
      }
      else {
        uVar13 = uVar13 >> 0x18;
      }
      *(unsigned int *)(iVar10 + uVar18 * 4) =
           uVar13 | (uVar7 << 0x18) | (((uVar7 & 0xff00) >> 8) << 0x10) |
                    (((uVar7 & 0xff0000) >> 0x10) << 8);
      uVar18 = uVar18 + 1;
    } while (uVar18 < 0x100);
    uVar18 = 0;
    if (uVar16 != 0) {
      puVar17 = puStack_38;
      do {
        if (uVar15 != 0) {
          pbVar14 = (unsigned char *)(((uVar16 - uVar18) - 1) * uVar15 + ((param_2 + unaff_r9 * 0x100) - 1));
          uVar13 = (unsigned int)(uVar2 >> 1);
          puVar9 = puVar17 + -1;
          if ((uVar2 & 1) != 0) {
            pbVar14 = pbVar14 + 1;
            *puVar17 = *(unsigned int *)(iVar10 + (unsigned int)*pbVar14 * 4);
            puVar9 = puVar17;
          }
          for (; uVar13 != 0; uVar13 = uVar13 - 1) {
            puVar9[1] = *(unsigned int *)(iVar10 + (unsigned int)pbVar14[1] * 4);
            pbVar14 = pbVar14 + 2;
            puVar9[2] = *(unsigned int *)(iVar10 + (unsigned int)*pbVar14 * 4);
            puVar9 = puVar9 + 2;
          }
          puVar17 = puVar17 + uVar15;
        }
        uVar18 = (uVar18 + 1) & 0xffff;
      } while (uVar18 < uVar16);
    }
    FUN_0019a5a0(iVar10);
  }
code_r0x0019a5a0:
  *(unsigned int *)(param_1 + 8) = param_4;
  *(unsigned int *)(param_1 + 4) = 0xde1;
  *(unsigned int *)(param_1 + 0x1c) = 0x6752;
  *(unsigned int *)(param_1 + 0x20) = 0x1401;
  *(unsigned int *)(param_1 + 0x14) = uVar15;
  *(unsigned int *)(param_1 + 0x18) = uVar16;
  uVar8 = 0x10000;
  FUN_00167ab4(0x10000,0x100,0,*(unsigned int *)(param_1 + 0x28),0x80,1);
  *(unsigned int *)(param_1 + 0x24) = uVar8;
  FUN_00418fe0(*(unsigned int *)(param_1 + 0x14),*(unsigned int *)(param_1 + 0x18),puStack_38,uVar8);
  FUN_0018003c();
  if (((puStack_38 >= DAT_005b4050) && ((unsigned int *)(DAT_005b4060 + (int)DAT_005b4050) >= puStack_38))
     || ((puStack_38 >= DAT_005b4054 && ((unsigned int *)((int)DAT_005b4054 + DAT_005b4064) >= puStack_38)))
     ) {
    FUN_0017fd84(puStack_38);
    puVar6 = (unsigned char *)*DAT_005b402c;
    software_interrupt(0x14);
  }
  else {
    FUN_0017fe8c(puStack_38);
    FUN_0017fd84();
    puVar6 = (unsigned char *)*DAT_005b402c;
    software_interrupt(0x14);
  }
  if (-1 < (int)puVar6) {
    return puVar6;
  }
  uVar15 = (unsigned int)puVar6 >> 0x1b;
  if (((unsigned int)puVar6 & 0x80000000) != 0) {
    uVar15 = uVar15 - 0x20;
  }
  if ((bRam1ff80014 & 1) == 0 && DAT_005894cc == '\0') {
    if (uVar15 == 0xffffffff) {
      FUN_001a1204(puVar6,0,in_lr);
    }
    pcVar3 = DAT_00589280;
    if (DAT_00589280 != (code *)0x0) {
      DAT_00589280 = (code *)0x0;
      (*pcVar3)(0,0,0,0);
    }
    software_interrupt(0x3c);
    return (unsigned char *)0x0;
  }
  if (uVar15 == 0xfffffff9 || uVar15 == 1) {
    return puVar6;
  }
  DAT_0062d201 = 0;
  DAT_0062d200 = 0;
  DAT_0062d202 = 0xedac;
  puVar5 = &uStack_20;
  DAT_0062d204 = puVar6;
  DAT_0062d208 = in_lr;
  do {
    FUN_002f5970(&DAT_0062d280);
    if (DAT_0058936c == 0) {
      puVar4 = &DAT_0058936c;
      FUN_0019a300(&DAT_0058936c,"err:f");
      if (-1 < (int)puVar4) {
        puVar4 = (unsigned int *)0x0;
      }
    }
    else {
      puVar4 = (unsigned int *)0x0;
    }
    if (-1 < (int)puVar4) {
      FUN_001ab838(&DAT_0062d20c,0xffff8001);
      FUN_001af4a4(&uStack_20,&DAT_0062d200);
      if (DAT_0058936c != 0) {
        software_interrupt(0x23);
        DAT_0058936c = 0;
      }
LAB_00189b20:
      FUN_002f59d8(&DAT_0062d280);
      puVar6 = (unsigned char *)(unsigned int)DAT_0062d200;
      if (puVar6 != (unsigned char *)0x2 && puVar6 != (unsigned char *)0x5) {
        FUN_001a089c(&uStack_20,1);
        FUN_001af148(&uStack_20);
        puVar6 = puVar5;
      }
      return puVar6;
    }
    bVar19 = puVar4 == (unsigned int *)0xd0401834;
    if (bVar19) {
      puVar4 = (unsigned int *)(unsigned int)DAT_0062d200;
    }
    if (!bVar19 || puVar4 != (unsigned int *)0x2) goto LAB_00189b20;
    FUN_001bcd48(&LAB_004c4b40,0);
    FUN_002f59d8(&DAT_0062d280);
  } while( 1 );
}
*/
#include "common.h"
