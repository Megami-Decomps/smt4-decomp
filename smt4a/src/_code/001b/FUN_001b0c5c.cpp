/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001b0c5c` (_code @ 0x1b0c5c, 0x1a0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001b66cc(int, int *);
int FUN_001b69f0(unsigned int, int);
int FUN_001b6ae0(int, int *);
int FUN_001b6bcc(int, int *);
int FUN_001bc768(unsigned int *, int *, int);
int nw_gfx_internal_NWCopyVec3Reverse(unsigned int *, int);

typedef int romwright_code(...);
extern unsigned int *g_commandBufferCursor; /* 0x5b40e0 */

/* Supplied declaration required: FUN_001b66cc. */
/* Supplied declaration required: FUN_001b69f0. */
/* Supplied declaration required: FUN_001b6ae0. */
/* Supplied declaration required: FUN_001b6bcc. */
/* Supplied declaration required: FUN_001bc768. */
/* Supplied declaration required: nw_gfx_internal_NWCopyVec3Reverse. */


void FUN_001b0c5c(int param_1,int *param_2,int param_3,int param_4)

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
  unsigned char temp_v2;
  
  puVar1 = g_commandBufferCursor;
  if (param_3 != 0) {
    puVar2 = g_commandBufferCursor + 2;
    *g_commandBufferCursor = 0x80000006;
    puVar1[1] = 0x804f02c0;
    nw_gfx_internal_NWCopyVec3Reverse(puVar2,param_3 + 0x20);
    piVar7 = (int *)0x5c0f34;
    g_commandBufferCursor = g_commandBufferCursor + 6;
    if (param_2 != (int *)0x0) {
      piVar3 = (int *)(**(romwright_code **)(*param_2 + 8))(param_2);
      do {
        piVar8 = param_2;
        if (piVar3 == (int *)0x5c0f34) goto LAB_001b0cd4;
        piVar3 = (int *)*piVar3;
      } while (piVar3 != (int *)0x0);
    }
    piVar8 = (int *)0x0;
LAB_001b0cd4:
    temp_v0 = *(int *)(param_1 + 8);
    if (*(int **)(temp_v0 + 0x1c) != param_2) {
      if (piVar8 != (int *)0x0) {
        FUN_001b6bcc(temp_v0,piVar8);
      }
      else {
        FUN_001b6ae0(temp_v0,param_2);
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
        FUN_001b66cc(param_1,piVar8);
      }
      else {
        temp_v0 = *(int *)(*(int *)(param_1 + 8) + 8);
        *(unsigned int *)(temp_v0 + 0x14) = *(unsigned int *)(temp_v0 + 0x14) & 0xfffffff9;
        puVar1 = g_commandBufferCursor;
        *g_commandBufferCursor = 0x80000019;
        puVar1[1] = 0xf02c0;
        FUN_001bc768(puVar1 + 2,param_2 + 0x23,0xbf02c1);
        g_commandBufferCursor = g_commandBufferCursor + 0x10;
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
      temp_v2 = temp_v0 != 0;
      if (temp_v2) {
        temp_v0 = temp_v0 + (int)piVar5;
      }
      if (!temp_v2) {
        temp_v0 = 0;
      }
      FUN_001b69f0(*(unsigned int *)(param_1 + 8),temp_v0);
    }
  }
  return;
}

} /* extern "C" */
