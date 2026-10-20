/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004aa380` (_code @ 0x4aa380, 0x50 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} void_stack;

extern int DAT_0057a9c8; /* 0x57a9c8 */


void FUN_004aa380(void)

{
  int temp_v0;
  
  temp_v0 = DAT_0057a9c8;
  *(unsigned short *)(DAT_0057a9c8 + 0x6b56) = 0;
  *(unsigned short *)(temp_v0 + 0x6c82) = 0;
  *(unsigned short *)(temp_v0 + 0x6dae) = 0;
  *(unsigned short *)(temp_v0 + 0x6eda) = 0;
  *(unsigned short *)(temp_v0 + 0x7006) = 0;
  return;
}

} /* extern "C" */
