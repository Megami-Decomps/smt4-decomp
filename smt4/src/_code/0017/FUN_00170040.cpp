/* NON_MATCHING: fragment of a larger function (uses r4-r9/fp as live decoder registers and restores a frame it never created). */
/* romwright 0.5.0 decompilation of FUN_00170040 for reference (not compiled; its own view of the boundaries):

void FUN_00170040(void)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  int unaff_r4;
  int unaff_r7;
  int unaff_r8;
  int unaff_r9;
  int unaff_r11;
  int in_r12;
  int in_lr;
  unsigned int uVar4;
  
  iVar1 = (unaff_r8 + 2) >> 2;
  *(int *)(unaff_r11 + 0x400) = (in_r12 >> 1) | (iVar1 << 8) | (in_lr << 0x10) | (unaff_r4 << 0x18);
  uVar4 = (unsigned int)*(unsigned char *)(unaff_r11 + 0x7ff);
  iVar2 = (int)(unaff_r7 + unaff_r9 * 2 + uVar4 + 2) >> 2;
  uVar3 = (int)(unaff_r9 + uVar4 + 1) >> 1;
  *(unsigned int *)(unaff_r11 + 0x800) = uVar3 | (iVar2 << 8) | ((in_r12 >> 1) << 0x10) | (iVar1 << 0x18);
  *(unsigned int *)(unaff_r11 + 0xc00) =
       ((int)(uVar4 + *(unsigned char *)(unaff_r11 + 0xbff) + 1) >> 1) |
       (((int)(unaff_r9 + uVar4 * 2 + (unsigned int)*(unsigned char *)(unaff_r11 + 0xbff) + 2) >> 2) << 8) |
       (uVar3 << 0x10) | (iVar2 << 0x18);
  return;
}
*/
#include "common.h"
