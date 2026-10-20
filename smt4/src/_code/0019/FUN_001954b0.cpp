/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001954b0` (_code @ 0x1954b0, 0x5c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
} void_stack;

extern unsigned char DAT_004bce8c; /* 0x4bce8c */


void FUN_001954b0(void)

{
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v3 = 0;
  do {
    temp_v1 = 0;
    temp_v0 = 0;
    *(unsigned int *)(temp_v3 * 4 + 0x4bd0f8) = 0;
    do {
      temp_v2 = temp_v1 + 1;
      temp_v0 = temp_v0 + 2;
      *(unsigned int *)(&DAT_004bce8c + temp_v1 * 4 + temp_v3 * 0x100 + 0x284) = 0;
      temp_v1 = temp_v1 + 2;
      *(unsigned int *)(&DAT_004bce8c + temp_v2 * 4 + temp_v3 * 0x100 + 0x284) = 0;
    } while (temp_v0 < 0x40);
    temp_v3 = temp_v3 + 1;
  } while (temp_v3 < 6);
  return;
}

} /* extern "C" */
