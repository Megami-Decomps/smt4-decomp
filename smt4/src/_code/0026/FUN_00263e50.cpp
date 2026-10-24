/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00263e50` (_code @ 0x263e50, 0x250 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int sceneTraverserVisit(unsigned int, unsigned int);
int asdMemFreeNonNull(int);
int _ZSt11remove_copyIPiS0_iET0_T_S2_S1_RKT1_(unsigned int **, unsigned int **, unsigned int **);
int asdMemFree(...);
int nw_gfx_res_ResGraphicsFile_Cleanup(int [2]);

typedef int romwright_code(...);
/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
} param_4_stack;

extern unsigned int DAT_00464b7c; /* 0x464b7c */
extern unsigned int g_asdModelTransformBuilder; /* 0x464b84 */

/* Supplied declaration required: sceneTraverserVisit. */
/* Supplied declaration required: asdMemFreeNonNull. */
/* Supplied declaration required: _ZSt11remove_copyIPiS0_iET0_T_S2_S1_RKT1_. */
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: nw_gfx_res_ResGraphicsFile_Cleanup. */


void FUN_00263e50(int *param_1,unsigned int param_2,unsigned int param_3,unsigned int ****param_4)

{
/* irregular: 5 native warning(s); review required */
  unsigned int ***pppuVar1;
  unsigned int **ppuVar2;
  unsigned int **ppuVar3;
  unsigned int **ppuVar4;
  unsigned int ****ppppuVar5;
  int temp_v0;
  unsigned int *puVar7;
  unsigned int *puVar8;
  int temp_v1 [2];
  unsigned int ***temp_v2 [4];
  
  temp_v0 = 0;
  if (temp_v0 < param_1[1]) {
    do {
      ppppuVar5 = *(unsigned int *****)(*param_1 + temp_v0 * 4);
      pppuVar1 = ppppuVar5[3];
      if (pppuVar1 != (unsigned int ***)0x0) {
        ppuVar2 = pppuVar1[6];
        ppuVar4 = pppuVar1[7];
        while( 1 ) {
          if (ppuVar2 != ppuVar4) {
            param_4 = (unsigned int ****)*ppuVar2;
          }
          if (ppuVar2 == ppuVar4 || param_4 == ppppuVar5) break;
          ppuVar2 = ppuVar2 + 1;
        }
        ppuVar3 = ppuVar2;
        temp_v2[0] = (unsigned int ***)ppppuVar5;
        if (ppuVar2 != ppuVar4) {
          ppuVar3 = ppuVar2 + 1;
          param_4 = temp_v2;
          _ZSt11remove_copyIPiS0_iET0_T_S2_S1_RKT1_(ppuVar3,ppuVar4,ppuVar2);
        }
        ppuVar2 = pppuVar1[7];
        pppuVar1[7] = ppuVar3;
        if (ppuVar2 != ppuVar3) {
          temp_v2[0][3] = (unsigned int **)0x0;
        }
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < param_1[1]);
  }
  if (param_1[2] != 0) {
    asdMemFree();
  }
  if (param_1[4] != 0) {
    temp_v0 = 0;
    if (temp_v0 < param_1[3]) {
      do {
        puVar7 = (unsigned int *)(param_1[4] + temp_v0 * 4);
        puVar8 = (unsigned int *)*puVar7;
        if (puVar8 != (unsigned int *)0x0) {
          (**(romwright_code **)*puVar8)(puVar8);
          (**(romwright_code **)(*(int *)puVar8[1] + 0xc))((int *)puVar8[1],puVar8);
          *puVar7 = 0;
        }
        temp_v0 = temp_v0 + 1;
      } while (temp_v0 < param_1[3]);
    }
    asdMemFree(param_1[4]);
  }
  if (param_1[5] != 0) {
    asdMemFree();
  }
  if (param_1[7] != 0) {
    temp_v0 = 0;
    if (temp_v0 < param_1[6]) {
      do {
        puVar7 = (unsigned int *)(param_1[7] + temp_v0 * 4);
        puVar8 = (unsigned int *)*puVar7;
        if (puVar8 != (unsigned int *)0x0) {
          (**(romwright_code **)*puVar8)(puVar8);
          (**(romwright_code **)(*(int *)puVar8[1] + 0xc))((int *)puVar8[1],puVar8);
          *puVar7 = 0;
        }
        temp_v0 = temp_v0 + 1;
      } while (temp_v0 < param_1[6]);
    }
    asdMemFree(param_1[7]);
  }
  temp_v0 = 0;
  if (temp_v0 < param_1[1]) {
    do {
      puVar7 = (unsigned int *)(*param_1 + temp_v0 * 4);
      puVar8 = (unsigned int *)*puVar7;
      if (puVar8 != (unsigned int *)0x0) {
        (**(romwright_code **)*puVar8)(puVar8);
        (**(romwright_code **)(*(int *)puVar8[1] + 0xc))((int *)puVar8[1],puVar8);
        *puVar7 = 0;
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < param_1[1]);
  }
  asdMemFree(*param_1);
  temp_v1[0] = *(int *)param_1[8];
  if (temp_v1[0] != 0) {
    nw_gfx_res_ResGraphicsFile_Cleanup(temp_v1);
  }
  asdMemFreeNonNull(param_1[8]);
  asdMemFree(param_1[9]);
  asdMemFree(param_1);
  sceneTraverserVisit(DAT_00464b7c,g_asdModelTransformBuilder);
  return;
}

} /* extern "C" */
