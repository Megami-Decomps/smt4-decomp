/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ae7bc` (_code @ 0x3ae7bc, 0x60 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} void_stack;

extern int DAT_00439ca8; /* 0x439ca8 */


void FUN_003ae7bc(void)

{
  int temp_v0;
  
  temp_v0 = DAT_00439ca8;
  *(unsigned short *)(DAT_00439ca8 + 0x5da6) = 0;
  *(unsigned short *)(temp_v0 + 0x63aa) = 0;
  *(unsigned short *)(temp_v0 + 0x69ae) = 0;
  *(unsigned short *)(temp_v0 + 0x6fb2) = 0;
  *(unsigned short *)(temp_v0 + 0x75b6) = 0;
  return;
}
