/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00156e34` (_code @ 0x156e34, 0x13c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

/* Supplied declaration required: FUN_0015b58c. */
/* Supplied declaration required: FUN_0015bc94. */
/* Supplied declaration required: FUN_0015bd00. */


void FUN_00156e34(int *param_1)

{
/* irregular: 3 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v1 = 0;
  temp_v2 = *(int *)(*param_1 + 0xc4);
  if (0 < temp_v2) {
    do {
      temp_v0 = *(int *)(*param_1 + 200);
      if (temp_v0 != 0) {
        temp_v0 = *param_1 + 200 + temp_v0;
      }
      else {
        temp_v0 = 0;
      }
      piVar1 = (int *)(temp_v0 + temp_v1 * 4);
      temp_v0 = *piVar1;
      if (temp_v0 != 0) {
        temp_v0 = (int)piVar1 + temp_v0;
      }
      else {
        temp_v0 = 0;
      }
      if ((*(unsigned int *)(temp_v0 + 0x18) & 1) != 0) {
        temp_v0 = *(int *)(*param_1 + 200);
        if (temp_v0 != 0) {
          temp_v0 = *param_1 + 200 + temp_v0;
        }
        else {
          temp_v0 = 0;
        }
        piVar1 = (int *)(temp_v0 + temp_v1 * 4);
        temp_v3 = *piVar1;
        if (temp_v3 != 0) {
          temp_v3 = (int)piVar1 + temp_v3;
        }
        else {
          temp_v3 = 0;
        }
        FUN_0015bd00(&temp_v3);
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < temp_v2);
  }
  temp_v1 = 0;
  temp_v2 = *(int *)(*param_1 + 0xbc);
  if (0 < temp_v2) {
    do {
      temp_v0 = *(int *)(*param_1 + 0xc0);
      if (temp_v0 != 0) {
        temp_v0 = *param_1 + 0xc0 + temp_v0;
      }
      else {
        temp_v0 = 0;
      }
      temp_v3 = 0;
      if (temp_v0 != 0) {
        piVar1 = (int *)(temp_v0 + temp_v1 * 0x10 + 0x28);
        temp_v3 = *piVar1;
        if (temp_v3 == 0) {
          temp_v3 = 0;
        }
        else {
          temp_v3 = (int)piVar1 + temp_v3;
        }
      }
      FUN_0015b58c(&temp_v3);
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < temp_v2);
  }
  temp_v1 = 0;
  temp_v2 = *(int *)(*param_1 + 0xb4);
  if (0 < temp_v2) {
    do {
      temp_v0 = *(int *)(*param_1 + 0xb8);
      if (temp_v0 != 0) {
        temp_v0 = *param_1 + 0xb8 + temp_v0;
      }
      else {
        temp_v0 = 0;
      }
      piVar1 = (int *)(temp_v0 + temp_v1 * 4);
      temp_v3 = *piVar1;
      if (temp_v3 != 0) {
        temp_v3 = (int)piVar1 + temp_v3;
      }
      else {
        temp_v3 = 0;
      }
      FUN_0015bc94(&temp_v3);
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < temp_v2);
  }
  return;
}
