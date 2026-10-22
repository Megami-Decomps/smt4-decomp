/* NON_MATCHING: found outside every function: its address is in FUN_0016e144's literal pool; not written yet. */
/* romwright 0.5.0 decompilation of FUN_00101570 for reference (not compiled; its own view of the boundaries):

int FUN_00101570(int param_1)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  int *piVar4;
  int iVar5;
  unsigned int uVar6;
  unsigned int *unaff_r4;
  unsigned int unaff_r5;
  int unaff_r6;
  int iVar7;
  char in_OV;
  unsigned char bVar8;
  unsigned int in_stack_0000000c;
  unsigned char uStack00000010;
  int in_stack_00000030;
  int in_stack_00000034;
  int in_stack_00000038;
  unsigned int in_stack_0000003c;
  
LAB_001018b6:
  if (param_1 < 0 != (unsigned char)in_OV) {
    iVar5 = -2;
    FUN_0010144c(0xfffffffe,in_stack_0000003c);
  }
  else {
    iVar5 = -2;
    FUN_00101368(0xfffffffe,in_stack_0000003c);
  }
  do {
    if (iVar5 < 0) {
LAB_00101926:
      if ((iVar5 == -1) && (in_stack_00000038 != 0)) {
        in_stack_00000030 = -1;
      }
      return in_stack_00000030;
    }
    if ((unaff_r5 & 1) == 0) {
      in_stack_00000030 = in_stack_00000030 + 1;
    }
    unaff_r6 = unaff_r6 + iVar5;
    in_stack_00000038 = 0;
LAB_001015de:
    iVar5 = (*(code *)unaff_r4[5])(in_stack_0000000c,1);
    if (iVar5 == 0) {
      return in_stack_00000030;
    }
    if (iVar5 != 0x25) {
      iVar1 = (*(code *)unaff_r4[8])();
      if (iVar1 == 0) {
        iVar1 = (*(code *)unaff_r4[6])(in_stack_0000003c);
        if (iVar1 == iVar5) {
LAB_00101634:
          unaff_r6 = unaff_r6 + 1;
          goto LAB_001015de;
        }
        (*(code *)unaff_r4[7])(in_stack_0000003c);
        if (iVar1 != -1) {
          return in_stack_00000030;
        }
LAB_00101642:
        if (in_stack_00000030 != 0) {
          return in_stack_00000030;
        }
        in_stack_00000030 = -1;
        return in_stack_00000030;
      }
      do {
        (*(code *)unaff_r4[5])(in_stack_0000000c,1);
        iVar5 = (*(code *)unaff_r4[8])();
      } while (iVar5 != 0);
      (*(code *)unaff_r4[5])(in_stack_0000000c,0xffffffff);
      while( 1 ) {
        (*(code *)unaff_r4[6])(in_stack_0000003c);
        iVar5 = (*(code *)unaff_r4[8])();
        if (iVar5 == 0) break;
        unaff_r6 = unaff_r6 + 1;
      }
      (*(code *)unaff_r4[7])(in_stack_0000003c);
      goto LAB_001015de;
    }
    iVar1 = 0;
    unaff_r5 = 0;
    iVar5 = (*(code *)unaff_r4[5])(in_stack_0000000c,0);
    if (iVar5 == 0x2a) {
      (*(code *)unaff_r4[5])(in_stack_0000000c,1);
      unaff_r5 = 1;
    }
    while (iVar5 = (*(code *)unaff_r4[5])(in_stack_0000000c,1), iVar5 - 0x30U < 10) {
      if (0xccccccc < iVar1) {
        return in_stack_00000030;
      }
      iVar1 = (iVar1 * 10 + iVar5) - 0x30;
      if (iVar1 < 0) {
        return in_stack_00000030;
      }
      unaff_r5 = unaff_r5 | 0x10;
    }
    if (-1 < (int)(unaff_r5 << 0x1b)) {
      iVar1 = 0x7fffffff;
    }
    if (iVar5 != 0x6c) {
      if (iVar5 != 0x4c) {
        if (iVar5 != 0x68) {
          if (iVar5 != 0x6a) {
            if ((iVar5 == 0x74) || (iVar5 == 0x7a)) {
              iVar5 = (*(code *)unaff_r4[5])(in_stack_0000000c,1);
            }
          }
          else {
            uVar2 = 2;
LAB_001016be:
            unaff_r5 = unaff_r5 | uVar2;
            iVar5 = (*(code *)unaff_r4[5])(in_stack_0000000c,1);
          }
        }
        else {
          iVar5 = (*(code *)unaff_r4[5])(in_stack_0000000c,1);
          if (iVar5 == 0x68) {
            uVar2 = 0x800;
            goto LAB_001016be;
          }
          uVar2 = 8;
          unaff_r5 = unaff_r5 | uVar2;
        }
      }
      else {
        uVar2 = 0x20;
        unaff_r5 = unaff_r5 | uVar2;
        iVar5 = (*(code *)unaff_r4[5])(in_stack_0000000c,1);
      }
    }
    else {
      iVar5 = (*(code *)unaff_r4[5])(in_stack_0000000c,1);
      if (iVar5 != 0x6c) {
        uVar2 = 4;
        unaff_r5 = unaff_r5 | uVar2;
      }
      else {
        uVar2 = 2;
        unaff_r5 = unaff_r5 | uVar2;
        iVar5 = (*(code *)unaff_r4[5])(in_stack_0000000c,1);
      }
    }
    unaff_r4[2] = iVar1;
    unaff_r4[1] = unaff_r5;
    if (iVar5 == 0x65) {
      iVar5 = FUN_001bc6a4(0xfffffffe,in_stack_0000003c);
      continue;
    }
    if (0x65 >= iVar5) {
      if (iVar5 == 0x58) goto LAB_001017f6;
      if (iVar5 >= 0x59) {
        if (iVar5 == 0x5b) break;
        if (iVar5 == 0x61) {
          iVar5 = FUN_001bc6a4(0xfffffffe,in_stack_0000003c);
          continue;
        }
        if (iVar5 == 99) break;
        if (iVar5 == 100) goto LAB_001017e6;
        return in_stack_00000030;
      }
      if (iVar5 == 0x45) {
        iVar5 = FUN_001bc6a4(0xfffffffe,in_stack_0000003c);
        continue;
      }
      if (0x45 < iVar5) {
        if ((iVar5 == 0x46) || (iVar5 == 0x47)) {
          iVar5 = FUN_001bc6a4(0xfffffffe,in_stack_0000003c);
          continue;
        }
        return in_stack_00000030;
      }
      if (iVar5 != 0x25) {
        bVar8 = iVar5 == 0x41;
        goto LAB_001016e4;
      }
      iVar5 = (*(code *)unaff_r4[6])(in_stack_0000003c);
      if (iVar5 != 0x25) {
        (*(code *)unaff_r4[7])(in_stack_0000003c);
        if (iVar5 == -1) goto LAB_00101642;
        return in_stack_00000030;
      }
      goto LAB_00101634;
    }
    if (iVar5 == 0x6f) {
      unaff_r4[1] = unaff_r5 | 0x40;
      if (-1 >= (int)(unaff_r5 << 0x1e)) {
        uVar6 = 8;
        iVar5 = -2;
        FUN_00100e62(0xfffffffe,in_stack_0000003c,uVar6);
        continue;
      }
      uVar6 = 8;
      iVar5 = -2;
      FUN_00100fa6(0xfffffffe,in_stack_0000003c,uVar6);
      continue;
    }
    if (0x6f >= iVar5) {
      if ((iVar5 != 0x66) && (iVar5 != 0x67)) {
        if (iVar5 != 0x69) {
          if (iVar5 != 0x6e) {
            return in_stack_00000030;
          }
          puVar3 = (unsigned int *)*unaff_r4;
          *unaff_r4 = puVar3 + 1;
          piVar4 = (int *)*puVar3;
          if ((int)(unaff_r5 << 0x14) < 0) {
            *(char *)piVar4 = (char)unaff_r6;
            goto LAB_001015de;
          }
          if ((int)(unaff_r5 << 0x1c) < 0) {
            *(short *)piVar4 = (short)unaff_r6;
            goto LAB_001015de;
          }
          if ((int)(unaff_r5 << 0x1e) >= 0) {
            *piVar4 = unaff_r6;
            goto LAB_001015de;
          }
          *piVar4 = unaff_r6;
          piVar4[1] = unaff_r6 >> 0x1f;
          goto LAB_001015de;
        }
        unaff_r4[1] = unaff_r5 | 0x40;
        if (-1 < (int)(unaff_r5 << 0x1e)) {
          uVar6 = 0;
          iVar5 = -2;
          FUN_00100fa6(0xfffffffe,in_stack_0000003c,uVar6);
          continue;
        }
        uVar6 = 0;
        iVar5 = -2;
        FUN_00100e62(0xfffffffe,in_stack_0000003c,uVar6);
        continue;
      }
      iVar5 = FUN_001bc6a4(0xfffffffe,in_stack_0000003c);
      continue;
    }
    if (iVar5 == 0x70) {
      unaff_r4[1] = unaff_r5 & 0xfffff7f1;
      uVar6 = 0x10;
      iVar5 = -2;
      FUN_00100fa6(0xfffffffe,in_stack_0000003c,uVar6);
      continue;
    }
    if (iVar5 == 0x73) break;
    if (iVar5 == 0x75) {
LAB_001017e6:
      unaff_r4[1] = unaff_r5 | 0x40;
      if (-1 >= (int)(unaff_r5 << 0x1e)) {
        uVar6 = 10;
        iVar5 = -2;
        FUN_00100e62(0xfffffffe,in_stack_0000003c,uVar6);
        continue;
      }
      uVar6 = 10;
      iVar5 = -2;
      FUN_00100fa6(0xfffffffe,in_stack_0000003c,uVar6);
      continue;
    }
    bVar8 = 0;
    if (iVar5 != 0x78) {
LAB_001016e4:
      if (!bVar8) {
        return in_stack_00000030;
      }
      iVar5 = FUN_001bc6a4(0xfffffffe,in_stack_0000003c);
      continue;
    }
LAB_001017f6:
    unaff_r4[1] = unaff_r5 | 0x40;
    if ((int)(unaff_r5 << 0x1e) >= 0) {
      uVar6 = 0x10;
      iVar5 = -2;
      FUN_00100fa6(0xfffffffe,in_stack_0000003c,uVar6);
      continue;
    }
    uVar6 = 0x10;
    iVar5 = -2;
    FUN_00100e62(0xfffffffe,in_stack_0000003c,uVar6);
  } while( 1 );
  in_stack_00000034 = 0;
  if (iVar5 != 99) {
    if (iVar5 == 0x5b) {
      iVar5 = (*(code *)unaff_r4[5])(in_stack_0000000c,1,(code *)unaff_r4[5],0);
      bVar8 = iVar5 == 0x5e;
      if (bVar8) {
        iVar5 = (*(code *)unaff_r4[5])(in_stack_0000000c,1);
      }
      if (unaff_r4[4] != 0) {
        in_stack_00000034 = unaff_r4[3] - 2;
      }
      else {
        iVar1 = 0;
        do {
          iVar7 = iVar1 * 4;
          iVar1 = iVar1 + 1;
          *(unsigned int *)(&uStack00000010 + iVar7) = 0;
        } while (iVar1 < 8);
      }
      do {
        if (iVar5 == 0) {
          return in_stack_00000030;
        }
        if (unaff_r4[4] == 0) {
          *(unsigned int *)(&uStack00000010 + ((int)(((unsigned int)(iVar5 >> 0x1f) >> 0x1b) + iVar5) >> 5) * 4) =
               *(unsigned int *)(&uStack00000010 + ((int)(((unsigned int)(iVar5 >> 0x1f) >> 0x1b) + iVar5) >> 5) * 4
                        ) | (1 << ((iVar5 % 0x20) & 0xffU));
        }
        iVar5 = (*(code *)unaff_r4[5])(in_stack_0000000c,1);
      } while (iVar5 != 0x5d);
      if (bVar8) {
        iVar5 = 0;
        do {
          iVar1 = iVar5 * 4;
          iVar5 = iVar5 + 1;
          *(unsigned int *)(&uStack00000010 + iVar1) = ~*(unsigned int *)(&uStack00000010 + iVar1);
        } while (iVar5 < 8);
      }
    }
  }
  else if (-1 < (int)(unaff_r5 << 0x1b)) {
    unaff_r4[2] = 1;
  }
  if (unaff_r4[4] == 0) {
    if ((int)(unaff_r4[1] << 0x1d) >= 0) {
      iVar5 = -2;
      FUN_001010f0(0xfffffffe,in_stack_0000003c);
      if ((iVar5 == -1) && (in_stack_00000038 != 0)) {
        in_stack_00000030 = -1;
      }
      return in_stack_00000030;
    }
    iVar5 = -2;
    FUN_0010124e(0xfffffffe,in_stack_0000003c);
    if ((iVar5 == -1) && (in_stack_00000038 != 0)) {
      in_stack_00000030 = -1;
    }
    return in_stack_00000030;
  }
  param_1 = unaff_r4[1] * 0x20000000;
  in_OV = '\0';
  goto LAB_001018b6;
}
*/
#include "common.h"
