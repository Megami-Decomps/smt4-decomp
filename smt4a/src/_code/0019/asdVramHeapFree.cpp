/* NON_MATCHING: romwright 0.5.0 decompilation of `asdVramHeapFree` (_code @ 0x19aac8, 0x1a4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0019c920(int *, int *);

extern unsigned char g_asdMemory; /* 0x5b406c */

/* Supplied declaration required: FUN_0019c920. */


void asdVramHeapFree(int *param_1,int param_2)

{
/* irregular: 1 goto(s); 1 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  int temp_v1;
  int *piVar4;
  
  for (piVar4 = (int *)*param_1; piVar4 != (int *)0x0; piVar4 = (int *)piVar4[4]) {
    if (*piVar4 == param_2) goto LAB_0019aafc;
  }
  piVar4 = (int *)0x0;
LAB_0019aafc:
  temp_v0 = piVar4[3];
  temp_v1 = piVar4[4];
  if (temp_v0 != 0) {
    *(int *)(temp_v0 + 0x10) = temp_v1;
  }
  else {
    *param_1 = temp_v1;
  }
  if (temp_v1 != 0) {
    *(int *)(temp_v1 + 0xc) = temp_v0;
  }
  else {
    param_1[1] = temp_v0;
  }
  piVar4[3] = 0;
  piVar4[4] = 0;
  param_1[2] = param_1[2] - 1;
  param_1[6] = param_1[6] + piVar4[1];
  piVar2 = param_1 + 3;
  FUN_0019c920(piVar2,piVar4);
  if (piVar4 != (int *)0x0) {
    piVar2 = (int *)piVar4[4];
  }
  if ((piVar4 != (int *)0x0 && piVar2 != (int *)0x0) && (*piVar4 + piVar4[1] == *piVar2)) {
    piVar4[1] = piVar2[1] + piVar4[1];
    temp_v0 = piVar2[3];
    temp_v1 = piVar2[4];
    if (temp_v0 != 0) {
      *(int *)(temp_v0 + 0x10) = temp_v1;
    }
    else {
      param_1[3] = temp_v1;
    }
    if (temp_v1 != 0) {
      *(int *)(temp_v1 + 0xc) = temp_v0;
    }
    else {
      param_1[4] = temp_v0;
    }
    piVar2[3] = 0;
    piVar2[4] = 0;
    param_1[5] = param_1[5] - 1;
    piVar2[2] = 0;
    *piVar2 = 0;
    piVar2[1] = 0;
    piVar2[3] = 0;
    piVar2[4] = 0;
    piVar2 = (*(int * *)((unsigned char *)&g_asdMemory + 0x18));
    (*(int * *)((unsigned char *)&g_asdMemory + 0x18))[1] = (*(int * *)((unsigned char *)&g_asdMemory + 0x18))[1] + 1;
  }
  piVar4 = (int *)piVar4[3];
  if (piVar4 != (int *)0x0) {
    piVar2 = (int *)piVar4[4];
  }
  if ((piVar4 != (int *)0x0 && piVar2 != (int *)0x0) && (*piVar4 + piVar4[1] == *piVar2)) {
    piVar4[1] = piVar4[1] + piVar2[1];
    temp_v1 = piVar2[3];
    temp_v0 = piVar2[4];
    if (temp_v1 != 0) {
      *(int *)(temp_v1 + 0x10) = temp_v0;
    }
    else {
      param_1[3] = temp_v0;
    }
    if (temp_v0 != 0) {
      *(int *)(temp_v0 + 0xc) = temp_v1;
    }
    else {
      param_1[4] = temp_v1;
    }
    piVar2[3] = 0;
    piVar2[4] = 0;
    param_1[5] = param_1[5] - 1;
    piVar2[2] = 0;
    *piVar2 = 0;
    piVar2[1] = 0;
    piVar2[3] = 0;
    piVar2[4] = 0;
    (*(int * *)((unsigned char *)&g_asdMemory + 0x18))[1] = (*(int * *)((unsigned char *)&g_asdMemory + 0x18))[1] + 1;
  }
  return;
}

} /* extern "C" */
