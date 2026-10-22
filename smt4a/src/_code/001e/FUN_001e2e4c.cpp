/* NON_MATCHING: found outside every function: its address is in textFormatBuffer's literal pool; not written yet. */
/* romwright 0.5.0 decompilation of FUN_001e2e4c for reference (not compiled; its own view of the boundaries):

unsigned long long FUN_001e2e4c(void)

{
  int iVar1;
  unsigned int in_r3;
  int unaff_r4;
  int iVar2;
  int unaff_r5;
  int unaff_r6;
  int unaff_r7;
  int unaff_r8;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  unsigned int uVar7;
  int unaff_r10;
  int iVar8;
  unsigned int *unaff_r11;
  unsigned int *puVar9;
  int *in_lr;
  int in_stack_00000000;
  int in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  int in_stack_00000018;
  int in_stack_0000001c;
  int in_stack_00000020;
  int in_stack_00000024;
  int in_stack_00000028;
  int in_stack_0000002c;
  int in_stack_00000030;
  int in_stack_00000034;
  int in_stack_00000038;
  int in_stack_0000003c;
  int in_stack_00000040;
  int in_stack_00000044;
  int in_stack_00000048;
  int in_stack_0000004c;
  int in_stack_00000050;
  int in_stack_00000054;
  int in_stack_00000058;
  int in_stack_0000005c;
  int in_stack_00000060;
  int in_stack_00000064;
  int in_stack_00000068;
  int in_stack_0000006c;
  int in_stack_00000070;
  int in_stack_00000074;
  int in_stack_00000078;
  int in_stack_0000007c;
  unsigned long long in_stack_00000080;
  
  iVar8 = unaff_r6 >> 1;
  uVar7 = (in_r3 >> 8) & 0xff;
  *in_lr = unaff_r7 << 6;
  in_lr[1] = unaff_r8;
  in_lr[2] = uVar7 << 6;
  in_lr[3] = unaff_r4 + iVar8 + uVar7 * -8 + 1;
  iVar2 = unaff_r4 + iVar8 + iVar8;
  uVar7 = (in_r3 >> 0x10) & 0xff;
  in_lr[4] = uVar7 << 6;
  in_lr[5] = iVar2 + uVar7 * -8 + 1;
  in_lr[6] = (in_r3 >> 0x18) << 6;
  in_lr[7] = iVar2 + iVar8 + (in_r3 >> 0x18) * -8 + 1;
  iVar8 = unaff_r10 << 3;
  iVar2 = 0x10;
  do {
    iVar8 = iVar8 + (((unaff_r5 - unaff_r10) + 1) >> 1);
    in_stack_00000000 = in_stack_00000000 + (in_stack_00000004 >> 1);
    in_stack_00000008 = in_stack_00000008 + (in_stack_0000000c >> 1);
    in_stack_00000010 = in_stack_00000010 + (in_stack_00000014 >> 1);
    in_stack_00000018 = in_stack_00000018 + (in_stack_0000001c >> 1);
    iVar1 = (int)(iVar8 + (unsigned int)*(unsigned char *)((int)unaff_r11 - 1) * -8 + 1) >> 1;
    iVar3 = (unsigned int)*(unsigned char *)((int)unaff_r11 - 1) * 0x40 + iVar1;
    iVar4 = iVar3 + iVar1;
    iVar5 = iVar4 + iVar1;
    iVar6 = iVar5 + iVar1;
    *unaff_r11 = ((in_stack_00000000 + iVar3 + 0x40) >> 7) |
                 (((in_stack_00000008 + iVar4 + 0x40) >> 7) << 8) |
                 (((in_stack_00000010 + iVar5 + 0x40) >> 7) << 0x10) |
                 (((in_stack_00000018 + iVar6 + 0x40) >> 7) << 0x18);
    in_stack_00000020 = in_stack_00000020 + (in_stack_00000024 >> 1);
    in_stack_00000028 = in_stack_00000028 + (in_stack_0000002c >> 1);
    in_stack_00000030 = in_stack_00000030 + (in_stack_00000034 >> 1);
    in_stack_00000038 = in_stack_00000038 + (in_stack_0000003c >> 1);
    iVar6 = iVar6 + iVar1;
    iVar3 = iVar6 + iVar1;
    iVar4 = iVar3 + iVar1;
    iVar5 = iVar4 + iVar1;
    unaff_r11[1] = ((in_stack_00000020 + iVar6 + 0x40) >> 7) |
                   (((in_stack_00000028 + iVar3 + 0x40) >> 7) << 8) |
                   (((in_stack_00000030 + iVar4 + 0x40) >> 7) << 0x10) |
                   (((in_stack_00000038 + iVar5 + 0x40) >> 7) << 0x18);
    in_stack_00000040 = in_stack_00000040 + (in_stack_00000044 >> 1);
    in_stack_00000048 = in_stack_00000048 + (in_stack_0000004c >> 1);
    in_stack_00000050 = in_stack_00000050 + (in_stack_00000054 >> 1);
    in_stack_00000058 = in_stack_00000058 + (in_stack_0000005c >> 1);
    iVar5 = iVar5 + iVar1;
    iVar3 = iVar5 + iVar1;
    iVar4 = iVar3 + iVar1;
    iVar6 = iVar4 + iVar1;
    puVar9 = unaff_r11 + 3;
    unaff_r11[2] = ((in_stack_00000040 + iVar5 + 0x40) >> 7) |
                   (((in_stack_00000048 + iVar3 + 0x40) >> 7) << 8) |
                   (((in_stack_00000050 + iVar4 + 0x40) >> 7) << 0x10) |
                   (((in_stack_00000058 + iVar6 + 0x40) >> 7) << 0x18);
    in_stack_00000060 = in_stack_00000060 + (in_stack_00000064 >> 1);
    in_stack_00000068 = in_stack_00000068 + (in_stack_0000006c >> 1);
    in_stack_00000070 = in_stack_00000070 + (in_stack_00000074 >> 1);
    in_stack_00000078 = in_stack_00000078 + (in_stack_0000007c >> 1);
    iVar6 = iVar6 + iVar1;
    iVar3 = iVar6 + iVar1;
    iVar4 = iVar3 + iVar1;
    unaff_r11 = unaff_r11 + 0x100;
    *puVar9 = ((in_stack_00000060 + iVar6 + 0x40) >> 7) |
              (((in_stack_00000068 + iVar3 + 0x40) >> 7) << 8) |
              (((in_stack_00000070 + iVar4 + 0x40) >> 7) << 0x10) |
              (((in_stack_00000078 + iVar4 + iVar1 + 0x40) >> 7) << 0x18);
    iVar2 = iVar2 - 1;
  } while (iVar2 != 0);
  return in_stack_00000080;
}
*/
#include "common.h"
