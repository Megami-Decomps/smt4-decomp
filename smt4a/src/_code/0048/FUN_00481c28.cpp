/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00481c28` (_code @ 0x481c28, 0x158 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int distSpatial(void);
int FUN_00481ba8(int);

extern signed char DAT_005f1614; /* 0x5f1614 */
extern signed char DAT_005f161d; /* 0x5f161d */
extern signed char DAT_005f161f; /* 0x5f161f */
extern int DAT_005f189c; /* 0x5f189c */
extern signed char DAT_005f1bc4; /* 0x5f1bc4 */

/* Supplied declaration required: distSpatial. */
/* Supplied declaration required: FUN_00481ba8. */


void FUN_00481c28(int param_1)

{
/* irregular: 2 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int *puVar4;
  
  temp_v1 = *(int *)(param_1 + 0xc);
  puVar4 = (unsigned int *)(temp_v1 + 0x28);
  if (DAT_005f1bc4 != '\0') {
    return;
  }
  temp_v0 = DAT_005f1614;
  if (DAT_005f1614 == '\0') {
    temp_v0 = DAT_005f161d;
  }
  if (DAT_005f1614 != '\0' || temp_v0 != '\0') {
    return;
  }
  if (DAT_005f161f != '\0') {
    return;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    if (*(int *)(param_1 + 0x1c) != 1) {
      return;
    }
    FUN_00481ba8(param_1);
    *(float *)(temp_v1 + 0x2c) = *(float *)(temp_v1 + 0x2c) + *(float *)(param_1 + 0x10);
    *(float *)(temp_v1 + 0x30) = *(float *)(temp_v1 + 0x30) + *(float *)(param_1 + 0x14);
    *(float *)(temp_v1 + 0x34) = *(float *)(temp_v1 + 0x34) + *(float *)(param_1 + 0x18);
    return;
  }
  if (DAT_005f189c != 0) {
    return;
  }
  if (*(char *)(temp_v1 + 0x8b) != '\x01') {
    if (*(char *)(temp_v1 + 0x8b) != '\x02') {
      return;
    }
    temp_v1 = *(int *)(temp_v1 + 0x2c);
    distSpatial();
    if (temp_v1 >= 0x44160000) {
      *puVar4 = *puVar4 & 0xfffffff7;
      temp_v1 = *(int *)(*(int *)(*(int *)(param_1 + 0xc) + 0x78) + 4);
      temp_v2 = *(unsigned int *)(temp_v1 + 4) | 3;
      *(unsigned int *)(temp_v1 + 4) = temp_v2;
      return;
    }
  }
  else {
    temp_v1 = *(int *)(temp_v1 + 0x2c);
    distSpatial();
    if (temp_v1 >= 0x44960000) {
      *puVar4 = *puVar4 & 0xfffffff7;
      temp_v1 = *(int *)(*(int *)(*(int *)(param_1 + 0xc) + 0x78) + 4);
      temp_v2 = *(unsigned int *)(temp_v1 + 4) | 3;
      *(unsigned int *)(temp_v1 + 4) = temp_v2;
      return;
    }
  }
  *puVar4 = *puVar4 | 8;
  temp_v1 = *(int *)(*(int *)(*(int *)(param_1 + 0xc) + 0x78) + 4);
  temp_v2 = *(unsigned int *)(temp_v1 + 4) & 0xfffffffc;
  *(unsigned int *)(temp_v1 + 4) = temp_v2;
  return;
}

} /* extern "C" */
