/* NON_MATCHING: found outside every function: branched to by FUN_001330a0; not written yet. */
/* romwright 0.5.0 decompilation of FUN_00142c78 for reference (not compiled; its own view of the boundaries):

void FUN_00142c78(unsigned int param_1,int param_2,unsigned int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  int iVar4;
  unsigned char bVar5;
  unsigned int in_fpscr;
  float fVar6;
  unsigned int auStack_40 [7];
  
  iVar1 = DAT_004655c0;
  fVar6 = (float)VectorSignedToFloat(param_3,(unsigned char)(in_fpscr >> 0x16) & 3);
  fVar6 = fVar6 * 0.5f;
  uVar3 = 0;
  if (ABS(fVar6) != 0.0f) {
    uVar3 = ((unsigned int)ABS(fVar6) >> 0x17) - 0x40;
  }
  bVar5 = -1 < (int)uVar3;
  if (bVar5) {
    uVar3 = (((unsigned int)fVar6 & 0x7fffff) >> 7) | (uVar3 << 0x10);
  }
  if (bVar5) {
    uVar3 = uVar3 | (((unsigned int)fVar6 >> 0x1f) << 0x17);
  }
  else {
    uVar3 = ((unsigned int)fVar6 >> 0x1f) << 0x17;
  }
  if (DAT_004652a0 < DAT_004652a4) {
    *DAT_004652a0 = uVar3;
    DAT_004652a0[1] = 0xf0041;
    DAT_004652a0 = DAT_004652a0 + 2;
  }
  fVar6 = (float)VectorSignedToFloat(param_4,(unsigned char)(in_fpscr >> 0x16) & 3);
  fVar6 = fVar6 * 0.5f;
  uVar3 = 0;
  if (ABS(fVar6) != 0.0f) {
    uVar3 = ((unsigned int)ABS(fVar6) >> 0x17) - 0x40;
  }
  bVar5 = -1 < (int)uVar3;
  if (bVar5) {
    uVar3 = (((unsigned int)fVar6 & 0x7fffff) >> 7) | (uVar3 << 0x10);
  }
  if (bVar5) {
    uVar3 = uVar3 | (((unsigned int)fVar6 >> 0x1f) << 0x17);
  }
  else {
    uVar3 = ((unsigned int)fVar6 >> 0x1f) << 0x17;
  }
  if (DAT_004652a0 < DAT_004652a4) {
    *DAT_004652a0 = uVar3;
    DAT_004652a0[1] = 0xf0043;
    DAT_004652a0 = DAT_004652a0 + 2;
  }
  if (param_3 != 0 && param_4 != 0) {
    iVar2 = 0;
    auStack_40[0] = param_3;
    auStack_40[1] = param_4;
    do {
      uVar3 = auStack_40[iVar2];
      if (uVar3 == 0x280) {
        auStack_40[iVar2] = 0x36999999;
      }
      else {
        if ((int)uVar3 < 0x281) {
          if (uVar3 == 400) {
            uVar3 = 0x3747ae14;
          }
          else if ((int)uVar3 < 0x191) {
            if (uVar3 == 0xf0) {
              uVar3 = 0x38111111;
            }
            else if (uVar3 == 0x140) {
              uVar3 = 0x37999999;
            }
            else {
LAB_00142e04:
              fVar6 = (float)VectorUnsignedToFloat(uVar3,(unsigned char)(in_fpscr >> 0x16) & 3);
              fVar6 = 2.0f / fVar6;
              if (ABS(fVar6) != 0.0f) {
                iVar4 = ((unsigned int)ABS(fVar6) >> 0x17) - 0x40;
                if (-1 >= iVar4) {
                  uVar3 = ((unsigned int)fVar6 >> 0x1f) << 0x1e;
                }
                else {
                  uVar3 = ((unsigned int)fVar6 & 0x7fffff) | (iVar4 << 0x17) |
                          (((unsigned int)fVar6 >> 0x1f) << 0x1e);
                }
              }
              else {
                iVar4 = 0;
                uVar3 = ((unsigned int)fVar6 & 0x7fffff) | (iVar4 << 0x17) | (((unsigned int)fVar6 >> 0x1f) << 0x1e)
                ;
              }
              auStack_40[iVar2] = uVar3;
              uVar3 = uVar3 << 1;
            }
          }
          else if (uVar3 == 0x1e0) {
            uVar3 = 0x37111111;
          }
          else {
            if (uVar3 != 600) goto LAB_00142e04;
            uVar3 = 0x36b4e81b;
          }
        }
        else if (uVar3 == 800) {
          uVar3 = 0x3647ae14;
        }
        else if (uVar3 == 0x400) {
          uVar3 = 0x36000000;
        }
        else if (uVar3 == 0x4b0) {
          uVar3 = 0x35b4e81b;
        }
        else {
          if (uVar3 != 0x500) goto LAB_00142e04;
          uVar3 = 0x35999999;
        }
        auStack_40[iVar2] = uVar3;
      }
      if (DAT_004652a0 < DAT_004652a4) {
        *DAT_004652a0 = auStack_40[iVar2];
        DAT_004652a0[1] = (iVar2 * 2 + 0x42U) | 0xf0000;
        DAT_004652a0 = DAT_004652a0 + 2;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 2);
  }
  if (DAT_004652a0 < DAT_004652a4) {
    *DAT_004652a0 = param_1 | (param_2 << 0x10);
    DAT_004652a0[1] = 0xf0068;
    DAT_004652a0 = DAT_004652a0 + 2;
  }
  *(unsigned int *)(iVar1 + 0x20) = param_1;
  *(int *)(iVar1 + 0x24) = param_2;
  *(unsigned int *)(iVar1 + 0x28) = param_3;
  *(int *)(iVar1 + 0x2c) = param_4;
  if (*(char *)(iVar1 + 0x30) == '\0') {
    *(unsigned char *)(iVar1 + 0x30) = 1;
  }
  return;
}
*/
#include "common.h"
