/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00365224` (_code @ 0x365224, 0x15c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();

unsigned int * FUN_00365224(unsigned int *param_1,unsigned int param_2)

{
/* irregular: 3 native warning(s); review required */
  unsigned int *puVar1;
  int *piVar2;
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int *temp_v3;
  unsigned int *puVar4;
  
  puVar1 = param_1 + 0x4b;
  *param_1 = param_2;
  puVar4 = (unsigned int *)*puVar1;
  if (puVar4 != (unsigned int *)0x0) {
    puVar1 = (unsigned int)(uint)*(unsigned int)(param_1 + 0x4c);
  }
  if (puVar4 != (unsigned int *)0x0 && puVar1 != (unsigned int *)0x0) {
    (**(romwright_code **)*puVar4)(puVar4);
    (**(romwright_code **)(*(int *)puVar4[1] + 0xc))((int *)puVar4[1],puVar4);
  }
  piVar2 = (int *)param_1[0x33];
  temp_v0 = param_1[0x34];
  param_1[0x35] = temp_v0;
  if (piVar2 != (int *)0x0) {
    temp_v0 = param_1[0x34];
  }
  if (piVar2 != (int *)0x0 && temp_v0 != 0) {
    (**(romwright_code **)(*piVar2 + 0xc))();
    temp_v0 = temp_v1;
  }
  param_1[0x31] = param_1[0x30];
  piVar2 = (int *)param_1[0x2f];
  if (piVar2 != (int *)0x0) {
    temp_v0 = param_1[0x30];
  }
  if (piVar2 != (int *)0x0 && temp_v0 != 0) {
    (**(romwright_code **)(*piVar2 + 0xc))();
    temp_v0 = temp_v2;
  }
  param_1[0x2c] = param_1[0x2b];
  piVar2 = (int *)param_1[0x2a];
  if (piVar2 != (int *)0x0) {
    temp_v0 = param_1[0x2b];
  }
  if (piVar2 != (int *)0x0 && temp_v0 != 0) {
    (**(romwright_code **)(*piVar2 + 0xc))();
  }
  puVar1 = param_1 + 0x18;
  param_1[0x1a] = param_1[0x19];
  piVar2 = (int *)param_1[0x18];
  if (piVar2 != (int *)0x0) {
    puVar1 = (unsigned int *)param_1[0x19];
  }
  if (piVar2 != (int *)0x0 && puVar1 != (unsigned int *)0x0) {
    (**(romwright_code **)(*piVar2 + 0xc))();
    puVar1 = temp_v3;
  }
  param_1[0x14] = param_1[0x13];
  piVar2 = (int *)param_1[0x12];
  if (piVar2 != (int *)0x0) {
    puVar1 = (unsigned int *)param_1[0x13];
  }
  if (piVar2 != (int *)0x0 && puVar1 != (unsigned int *)0x0) {
    (**(romwright_code **)(*piVar2 + 0xc))();
  }
  puVar1 = param_1 + 2;
  puVar4 = (unsigned int *)param_1[2];
  if (puVar4 != (unsigned int *)0x0) {
    puVar1 = (unsigned int)(uint)*(unsigned int)(param_1 + 3);
  }
  if (puVar4 != (unsigned int *)0x0 && puVar1 != (unsigned int *)0x0) {
    (**(romwright_code **)*puVar4)(puVar4);
    (**(romwright_code **)(*(int *)puVar4[1] + 0xc))((int *)puVar4[1],puVar4);
  }
  return param_1;
}
