/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00103f90` (_code @ 0x103f90, 0x58 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} void_stack;

extern int DAT_004e3cf4; /* 0x4e3cf4 */


void FUN_00103f90(void)

{
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v1 = (*(int *)((unsigned char *)&DAT_004e3cf4 + 0x4));
  temp_v0 = DAT_004e3cf4;
  temp_v3 = 0;
  if (0 < (*(int *)((unsigned char *)&DAT_004e3cf4 + 0x4))) {
    do {
      for (temp_v2 = *(int *)(temp_v0 + temp_v3 * 8); temp_v2 != 0; temp_v2 = *(int *)(temp_v2 + 0x4c)) {
        if ((*(unsigned int *)(temp_v2 + 0x1c) & 0x80000) != 0) {
          *(unsigned int *)(temp_v2 + 0x1c) = *(unsigned int *)(temp_v2 + 0x1c) | 0x200000;
        }
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < temp_v1);
    return;
  }
  return;
}

} /* extern "C" */
