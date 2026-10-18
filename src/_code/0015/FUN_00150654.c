/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00150654` (_code @ 0x150654, 0x1a4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern unsigned int *DAT_004652a0; /* 0x4652a0 */

/* Supplied declaration required: FUN_00153a58. */
/* Supplied declaration required: FUN_00153c74. */
/* Supplied declaration required: FUN_00153d64. */
/* Supplied declaration required: FUN_00153e50. */
/* Supplied declaration required: FUN_002a1ac8. */
/* Supplied declaration required: FUN_002a1b98. */


void FUN_00150654(int param_1,int *param_2,int param_3,int param_4)

{
/* irregular: 1 goto(s); 6 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int *puVar2;
  int *piVar3;
  int temp_v0;
  int *piVar5;
  int temp_v1;
  int *piVar7;
  int *piVar8;
  
  puVar1 = DAT_004652a0;
  if (param_3 != 0) {
    puVar2 = DAT_004652a0 + 2;
    *DAT_004652a0 = 0x80000006;
    puVar1[1] = 0x804f02c0;
    FUN_002a1b98(puVar2,param_3 + 0x20);
    piVar7 = (int *)0x472288;
    DAT_004652a0 = DAT_004652a0 + 6;
    if (param_2 != (int *)0x0) {
      piVar3 = (int *)(**(romwright_code **)(*param_2 + 8))(param_2);
      do {
        piVar8 = param_2;
        if (piVar3 == (int *)0x472288) goto LAB_001506cc;
        piVar3 = (int *)*piVar3;
      } while (piVar3 != (int *)0x0);
    }
    piVar8 = (int *)0x0;
LAB_001506cc:
    temp_v0 = *(int *)(param_1 + 8);
    if (*(int **)(temp_v0 + 0x1c) != param_2) {
      if (piVar8 != (int *)0x0) {
        FUN_00153e50(temp_v0,piVar8);
      }
      else {
        FUN_00153d64(temp_v0,param_2);
      }
    }
    temp_v0 = *(int *)(param_3 + 0x30);
    if (temp_v0 != 0) {
      piVar7 = (int *)(temp_v0 + param_3 + 0x30);
    }
    if (temp_v0 == 0) {
      piVar7 = (int *)0x0;
    }
    piVar3 = piVar7 + *(int *)(param_3 + 0x2c);
    for (; piVar7 != piVar3; piVar7 = piVar7 + 1) {
      if (*piVar7 != 0) {
        piVar5 = (int *)(*piVar7 + (int)piVar7);
      }
      else {
        piVar5 = (int *)0x0;
      }
      if (!(piVar8 == (int *)0x0 || *piVar5 == 0)) {
        FUN_00153a58(param_1,piVar8);
      }
      else {
        temp_v0 = *(int *)(*(int *)(param_1 + 8) + 8);
        *(unsigned int *)(temp_v0 + 0x14) = *(unsigned int *)(temp_v0 + 0x14) & 0xfffffff9;
        puVar1 = DAT_004652a0;
        *DAT_004652a0 = 0x80000019;
        puVar1[1] = 0xf02c0;
        FUN_002a1ac8(puVar1 + 2,param_2 + 0x23,0xbf02c1);
        DAT_004652a0 = DAT_004652a0 + 0x10;
      }
      if (*piVar7 != 0) {
        temp_v0 = *piVar7 + (int)piVar7;
      }
      else {
        temp_v0 = 0;
      }
      temp_v1 = *(int *)(temp_v0 + 0x10);
      if (temp_v1 != 0) {
        temp_v1 = temp_v0 + 0x10 + temp_v1;
      }
      else {
        temp_v1 = 0;
      }
      piVar5 = (int *)(temp_v1 + param_4 * 4);
      temp_v0 = *piVar5;
      if (temp_v0 != 0) {
        piVar5 = (int *)((int)piVar5 + temp_v0);
      }
      if (temp_v0 == 0) {
        piVar5 = (int *)0x0;
      }
      FUN_00153c74(*(unsigned int *)(param_1 + 8),piVar5);
    }
  }
  return;
}
