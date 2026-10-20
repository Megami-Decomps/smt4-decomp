/* NON_MATCHING: romwright 0.5.0 decompilation of `jobSetParent` (_code @ 0x2c425c, 0x13c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_2_stack;

extern int g_asdProcess; /* 0x4e3cf4 */


void jobSetParent(unsigned int param_1,unsigned int param_2)

{
/* irregular: 3 goto(s) */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  
  for (temp_v3 = *(int *)(g_asdProcess + (param_1 >> 0x14) * 8); temp_v3 != 0;
      temp_v3 = *(int *)(temp_v3 + 0x4c)) {
    if (*(unsigned int *)(temp_v3 + 0x24) == (param_1 & 0xfffff)) goto LAB_002c42a0;
  }
  temp_v3 = 0;
LAB_002c42a0:
  temp_v0 = *(int *)(g_asdProcess + (param_2 >> 0x14) * 8);
  for (temp_v1 = temp_v0; temp_v1 != 0; temp_v1 = *(int *)(temp_v1 + 0x4c)) {
    if (*(unsigned int *)(temp_v1 + 0x24) == (param_2 & 0xfffff)) goto LAB_002c42d4;
  }
  temp_v1 = 0;
LAB_002c42d4:
  if (*(int *)(temp_v1 + 0x54) != 0) {
    for (; temp_v0 != 0; temp_v0 = *(int *)(temp_v0 + 0x4c)) {
      if (*(unsigned int *)(temp_v0 + 0x24) == (param_2 & 0xfffff)) goto LAB_002c4308;
    }
    temp_v0 = 0;
LAB_002c4308:
    temp_v4 = *(int *)(temp_v0 + 0x54);
    if (temp_v4 != 0) {
      temp_v2 = *(int *)(temp_v4 + 0x58);
      if (temp_v2 == temp_v0) {
        *(unsigned int *)(temp_v4 + 0x58) = *(unsigned int *)(temp_v0 + 0x5c);
      }
      else {
        for (temp_v4 = *(int *)(temp_v2 + 0x5c); temp_v4 != temp_v0; temp_v4 = *(int *)(temp_v4 + 0x5c)) {
          temp_v2 = temp_v4;
        }
        *(unsigned int *)(temp_v2 + 0x5c) = *(unsigned int *)(temp_v0 + 0x5c);
      }
      *(unsigned int *)(temp_v0 + 0x54) = 0;
      *(unsigned int *)(temp_v0 + 0x5c) = 0;
    }
  }
  if (temp_v3 != 0) {
    temp_v0 = *(int *)(temp_v3 + 0x58);
    if (temp_v0 == 0) {
      *(int *)(temp_v3 + 0x58) = temp_v1;
    }
    else {
      for (temp_v4 = *(int *)(temp_v0 + 0x5c); temp_v4 != 0; temp_v4 = *(int *)(temp_v4 + 0x5c)) {
        temp_v0 = temp_v4;
      }
      *(int *)(temp_v0 + 0x5c) = temp_v1;
    }
  }
  *(int *)(temp_v1 + 0x54) = temp_v3;
  return;
}

} /* extern "C" */
