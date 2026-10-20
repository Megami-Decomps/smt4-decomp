/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00157fa0` (_code @ 0x157fa0, 0x90 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_1_stack;

extern unsigned char DAT_00557c30; /* 0x557c30 */
extern unsigned int *DAT_0056fcbc; /* 0x56fcbc */


void FUN_00157fa0(unsigned int *param_1)

{
  *param_1 = (unsigned int)&DAT_00557c30;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  *(unsigned char *)(param_1 + 0x2c) = 0;
  *(unsigned char *)((int)param_1 + 0xb1) = 2;
  *(unsigned char *)((int)param_1 + 0xb2) = 0xff;
  *(unsigned char *)((int)param_1 + 0xb3) = 0xff;
  param_1[0x2d] = 0;
  *(unsigned char *)(param_1 + 0x2e) = 0;
  *(unsigned char *)((int)param_1 + 0xb9) = 2;
  *(unsigned char *)((int)param_1 + 0xba) = 0xff;
  *(unsigned char *)((int)param_1 + 0xbb) = 0xff;
  param_1[0x2f] = 0;
  if (DAT_0056fcbc != (unsigned int *)0x0) {
    return;
  }
  *(unsigned char *)((int)param_1 + 0xb2) = 0x56;
  *(unsigned char *)((int)param_1 + 0xb3) = 0x59;
  *(unsigned char *)((int)param_1 + 0xba) = 0x5a;
  *(unsigned char *)((int)param_1 + 0xbb) = 0x5c;
  DAT_0056fcbc = param_1;
  return;
}

} /* extern "C" */
