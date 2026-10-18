/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010baa0` (_code @ 0x10baa0, 0x4c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_3_stack;

extern unsigned char DAT_004def28; /* 0x4def28 */


void FUN_0010baa0(unsigned short param_1,unsigned int param_2,unsigned int param_3)

{
  int temp_v0;
  
  temp_v0 = 0;
  do {
    if (*(int *)(temp_v0 * 4 + 0x4daee8) == 0) {
      *(unsigned int *)(temp_v0 * 4 + 0x4daee8) = param_3;
      *(unsigned short *)(temp_v0 * 2 + 0x4def18) = param_1;
      *(unsigned int *)(&DAT_004def28 + temp_v0 * 4) = param_2;
      return;
    }
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 8);
  return;
}
