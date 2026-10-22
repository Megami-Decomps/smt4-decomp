/* NON_MATCHING: found outside every function: branched to by nn_cec_CTR_MessageBox_ReadMessage_3579D4; not written yet. */
/* romwright 0.5.0 decompilation of FUN_00359b7c for reference (not compiled; its own view of the boundaries):

unsigned int FUN_00359b7c(int param_1,short *param_2,unsigned int param_3)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  int iVar4;
  short *psVar5;
  unsigned int uVar6;
  int iVar7;
  int iVar8;
  
  FUN_00359e0c();
  uVar3 = 0xc8e10be9;
  *(unsigned char *)(param_1 + 0x131) = 1;
  if (((param_2 != (short *)0x0) && (0x6f < param_3)) && (param_3 < 0x19001)) {
    if (*param_2 != 0x6060) {
      return 0xe0e10bfd;
    }
    if (*(unsigned int *)(param_2 + 2) <= param_3) {
      iVar7 = *(int *)(param_2 + 6);
      iVar8 = *(int *)(param_2 + 4);
      if (iVar7 + iVar8 + 0x20U <= *(unsigned int *)(param_2 + 2)) {
        FUN_002bcd68(param_1,param_2,0x70);
        uVar6 = iVar8 - 0x70;
        if (uVar6 != 0) {
          psVar5 = param_2 + 0x38;
          while( 1 ) {
            if (uVar6 < 0xc) {
              return 0xe0e10bfd;
            }
            iVar4 = *(int *)(psVar5 + 2);
            FUN_00359e8c(param_1,*(unsigned int *)psVar5,iVar4,psVar5 + 4);
            uVar2 = ((iVar4 + 3U) & 0xfffffffc) + 8;
            if (uVar6 <= uVar2) break;
            uVar6 = uVar6 - uVar2;
            psVar5 = (short *)((int)psVar5 + uVar2);
          }
        }
        *(int *)(param_1 + 0x13c) = (int)param_2 + iVar8 + iVar7;
        *(unsigned int *)(param_1 + 0x140) = 0x20;
        if (iVar7 != 0) {
          *(int *)(param_1 + 0x138) = (int)param_2 + iVar8;
          *(int *)(param_1 + 0x134) = iVar7;
        }
        else {
          *(unsigned int *)(param_1 + 0x134) = 0;
          *(unsigned int *)(param_1 + 0x138) = 0;
        }
        iVar8 = 0x70;
        iVar7 = (int)*(char *)(param_1 + 0x130);
        if (iVar7 != 0) {
          iVar4 = 0;
          do {
            iVar1 = iVar4 * 0xc;
            iVar7 = iVar7 - 1;
            iVar4 = iVar4 + 1;
            iVar8 = ((*(int *)(param_1 + iVar1 + 0x74) + 3U) & 0xfffffffc) + iVar8 + 8;
          } while (iVar7 != 0);
        }
        *(int *)(param_1 + 4) = *(int *)(param_1 + 0x134) + iVar8 + 0x20;
        *(int *)(param_1 + 8) = iVar8;
        return 0;
      }
      uVar3 = 0xc8810bef;
    }
  }
  return uVar3;
}
*/
#include "common.h"
