/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0018e6b8` (_code @ 0x18e6b8, 0x1ec bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_2_stack;

extern int g_commandBufferCursor; /* 0x5b40e0 */
extern unsigned int g_commandBufferEnd; /* 0x5b40e4 */


int FUN_0018e6b8(int param_1,int param_2)

{
  int *piVar1;
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int *piVar9;
  
  temp_v0 = 0;
  temp_v4 = 0;
  temp_v2 = 0;
  temp_v5 = *(int *)(param_2 + 0x38);
  temp_v1 = *(int *)(param_1 + 8);
  if (*(int *)(param_1 + 8) == 0) {
    temp_v1 = g_commandBufferCursor;
  }
  temp_v3 = 0;
  if (temp_v3 < temp_v5) {
    do {
      if (*(int *)(param_2 + 0x3c) != 0) {
        temp_v6 = param_2 + 0x3c + *(int *)(param_2 + 0x3c);
      }
      else {
        temp_v6 = 0;
      }
      piVar9 = (int *)(temp_v6 + temp_v3 * 4);
      temp_v6 = *piVar9;
      if (temp_v6 != 0) {
        temp_v6 = (int)piVar9 + temp_v6;
      }
      else {
        temp_v6 = 0;
      }
      if ((*(unsigned int *)(temp_v6 + 8) & 1) != 0) {
        temp_v0 = temp_v0 + 1;
      }
      else {
        if ((*(unsigned int *)(temp_v6 + 8) & 2) != 0) {
          *(unsigned int *)(temp_v1 + temp_v2 * 4) = 0;
          *(unsigned int *)(temp_v1 + temp_v2 * 4 + 4) = ((temp_v4 * 3 + 0x205U) & 0xffff) | 0xf0000;
          temp_v0 = temp_v0 + *(int *)(temp_v6 + 0x28);
        }
        else {
          *(unsigned int *)(temp_v1 + temp_v2 * 4) = 0;
          temp_v0 = temp_v0 + 1;
          *(unsigned int *)(temp_v1 + temp_v2 * 4 + 4) = ((temp_v4 * 3 + 0x205U) & 0xffff) | 0xf0000;
        }
        temp_v2 = temp_v2 + 2;
        temp_v4 = temp_v4 + 1;
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < temp_v5);
  }
  *(unsigned int *)(temp_v1 + temp_v2 * 4) = 0x76543210;
  *(unsigned int *)(temp_v1 + (temp_v2 + 1) * 4) = 0x801f02bb;
  *(unsigned int *)(temp_v1 + (temp_v2 + 2) * 4) = 0xba98;
  *(unsigned int *)(temp_v1 + (temp_v2 + 3) * 4) = 0;
  *(unsigned int *)(temp_v1 + (temp_v2 + 4) * 4) =
       ((1 << (temp_v0 & 0xff)) * 0x10000 - 0x20000U) | (temp_v0 * 0x10000000 + 0xf0000000);
  temp_v4 = temp_v2 + 6;
  *(unsigned int *)(temp_v1 + (temp_v2 + 5) * 4) = 0xf0202;
  temp_v2 = temp_v0 - 1;
  if (0 < temp_v2) {
    temp_v5 = 1;
    piVar9 = (int *)(temp_v1 + temp_v4 * 4);
    do {
      temp_v2 = temp_v2 - 1;
      piVar9[2] = 0;
      piVar9[1] = -0x7fc0fdce;
      piVar9[3] = 0;
      piVar9[4] = 0;
      piVar1 = piVar9 + 5;
      *piVar9 = temp_v5;
      temp_v5 = temp_v5 + 1;
      piVar9 = piVar9 + 6;
      *piVar1 = 0;
    } while (temp_v2 != 0);
    temp_v4 = (temp_v4 + temp_v0 * 6) - 6;
  }
  temp_v1 = *(int *)(param_1 + 8);
  temp_v4 = temp_v4 * 4;
  if (temp_v1 != 0) {
    if (*(unsigned int *)(param_1 + 4) < (unsigned int)(temp_v1 + temp_v4)) {
      return temp_v4;
    }
  }
  else if (g_commandBufferEnd < (unsigned int)(g_commandBufferCursor + temp_v4)) {
    return temp_v4;
  }
  if (temp_v1 != 0) {
    *(int *)(param_1 + 8) = temp_v4 + temp_v1;
  }
  else {
    g_commandBufferCursor = g_commandBufferCursor + temp_v4;
  }
  return temp_v4;
}

} /* extern "C" */
