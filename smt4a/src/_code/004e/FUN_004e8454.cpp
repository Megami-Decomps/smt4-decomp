/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004e8454` (_code @ 0x4e8454, 0xa4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern unsigned int DAT_00571190; /* 0x571190 */
extern unsigned int DAT_00571194; /* 0x571194 */


void FUN_004e8454(int *param_1)

{
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int *puVar5;
  int temp_v4;
  
  temp_v2 = DAT_00571194;
  temp_v1 = DAT_00571190;
  puVar5 = *(unsigned int **)(*param_1 + 0x1ffc);
  temp_v3 = 1;
  temp_v0 = ~DAT_00571194;
  *puVar5 = *puVar5 & ~DAT_00571190;
  puVar5[1] = puVar5[1] & temp_v0;
  temp_v4 = 1;
  do {
    temp_v3 = temp_v3 + 2;
    puVar5 = (unsigned int *)(*(int *)(*param_1 + 0x1ffc) + temp_v4 * 0x408);
    *puVar5 = *puVar5 & ~temp_v1;
    puVar5[1] = puVar5[1] & ~temp_v2;
    puVar5 = (unsigned int *)(*(int *)(*param_1 + 0x1ffc) + (temp_v4 + 1) * 0x408);
    *puVar5 = *puVar5 & ~temp_v1;
    puVar5[1] = puVar5[1] & ~temp_v2;
    temp_v4 = temp_v4 + 2;
  } while (temp_v3 < 0x6d);
  return;
}

} /* extern "C" */
