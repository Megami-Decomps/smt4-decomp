/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002427f8` (_code @ 0x2427f8, 0x11c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0025c650. */


void FUN_002427f8(int param_1,int param_2)

{
/* irregular: 3 goto(s); 1 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned char temp_v3;
  
  temp_v0 = *(unsigned int *)(param_2 + 0x98);
  *(unsigned int *)(param_2 + 0x98) = temp_v0 & 0xfffffffd;
  if ((temp_v0 & 1) == 0) {
    for (temp_v2 = *(int *)(param_1 + 0x8c); temp_v2 != 0; temp_v2 = *(int *)(temp_v2 + 0xac)) {
      temp_v0 = *(unsigned int *)(temp_v2 + 0x98) & 3;
      temp_v3 = temp_v0 == 2;
      if (temp_v3) {
        temp_v0 = *(unsigned int *)(temp_v2 + 0x94);
      }
      if (temp_v3 && temp_v0 == *(unsigned int *)(param_2 + 0x90)) {
        if (temp_v2 != 0) {
          *(unsigned int *)(temp_v2 + 0x98) = *(unsigned int *)(temp_v2 + 0x98) & 0xfffffffd;
          *(unsigned int *)(temp_v2 + 0x94) = 0;
          FUN_0025c650(param_1,temp_v2);
          temp_v1 = *(int *)(param_1 + 0x8c);
          goto joined_r0x00242878;
        }
        break;
      }
    }
  }
  *(unsigned int *)(param_2 + 0x94) = 0;
  return;
joined_r0x00242878:
  if (temp_v1 == 0) {
    *(unsigned int *)(param_2 + 0x94) = 0;
    return;
  }
  temp_v0 = *(unsigned int *)(temp_v1 + 0x98) & 3;
  temp_v3 = temp_v0 == 2;
  if (temp_v3) {
    temp_v0 = *(unsigned int *)(temp_v1 + 0x94);
  }
  if (temp_v3 && temp_v0 == *(unsigned int *)(param_2 + 0x90)) goto joined_r0x00242898;
  temp_v1 = *(int *)(temp_v1 + 0xac);
  goto joined_r0x00242878;
joined_r0x00242898:
  while (temp_v1 != 0) {
    FUN_0025c650(param_1,temp_v1,temp_v2);
    temp_v1 = *(int *)(param_1 + 0x8c);
    while( 1 ) {
      if (temp_v1 == 0) {
        *(unsigned int *)(param_2 + 0x94) = 0;
        return;
      }
      temp_v0 = *(unsigned int *)(temp_v1 + 0x98) & 3;
      temp_v3 = temp_v0 == 2;
      if (temp_v3) {
        temp_v0 = *(unsigned int *)(temp_v1 + 0x94);
      }
      if (temp_v3 && temp_v0 == *(unsigned int *)(param_2 + 0x90)) break;
      temp_v1 = *(int *)(temp_v1 + 0xac);
    }
  }
  *(unsigned int *)(param_2 + 0x94) = 0;
  return;
}
