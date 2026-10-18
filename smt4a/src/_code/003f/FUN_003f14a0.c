/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f14a0` (_code @ 0x3f14a0, 0x90 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
} param_1_stack;

extern unsigned int DAT_00573990; /* 0x573990 */
extern unsigned int DAT_00573994; /* 0x573994 */


void FUN_003f14a0(int param_1)

{
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int *puVar6;
  int temp_v5;
  
  temp_v1 = DAT_00573994;
  temp_v0 = DAT_00573990;
  temp_v3 = 0;
  temp_v5 = 0x6d;
  do {
    temp_v2 = *(int *)(param_1 + 0x1ed4);
    temp_v4 = (int)*(short *)(temp_v2 + temp_v3 * 0x1d0 + 0x68);
    if ((-1 < temp_v4) &&
       (puVar6 = (unsigned int *)(*(int *)(param_1 + 0x1ffc) + temp_v4 * 0x408),
       (puVar6[1] & temp_v1) != 0 || (*puVar6 & temp_v0) != 0)) {
      temp_v4 = temp_v3 * 0x1d0 + 0x50;
      *(unsigned int *)(temp_v2 + temp_v4) = *(unsigned int *)(temp_v2 + temp_v4) | 0x4000;
    }
    temp_v5 = temp_v5 - 1;
    temp_v3 = temp_v3 + 1;
  } while (temp_v5 != 0);
  return;
}
