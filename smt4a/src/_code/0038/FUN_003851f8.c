/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003851f8` (_code @ 0x3851f8, 0x68 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_2_stack;

extern int DAT_00580ca0; /* 0x580ca0 */


void FUN_003851f8(int param_1,int param_2)

{
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v1 = 0;
  while ((temp_v2 = DAT_00580ca0 + temp_v1 * 0x18, *(char *)(temp_v2 + 0x8c4) == '\0' ||
         (*(short *)(temp_v2 + 0x8c8) != param_1))) {
    temp_v1 = temp_v1 + 1;
    if (temp_v1 >= 10) {
      return;
    }
  }
  temp_v1 = *(int *)(*(int *)(temp_v2 + 0x8cc) + 4);
  temp_v0 = *(unsigned int *)(temp_v1 + 4);
  if (param_2 != 0) {
    temp_v0 = temp_v0 & 0xfffffffc;
  }
  else {
    temp_v0 = temp_v0 | 3;
  }
  *(unsigned int *)(temp_v1 + 4) = temp_v0;
  return;
}
