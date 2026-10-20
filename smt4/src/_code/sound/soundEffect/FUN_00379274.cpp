/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00379274` (_code @ 0x379274, 0x150 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern unsigned char DAT_00421a80; /* 0x421a80 */
extern unsigned int DAT_004d4668; /* 0x4d4668 */
extern unsigned int DAT_004d466c; /* 0x4d466c */
extern unsigned int DAT_004d4670; /* 0x4d4670 */


void FUN_00379274(unsigned int *param_1)

{
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = (unsigned int)&DAT_00421a80;
  param_1[3] = 0x3c;
  param_1[4] = 4000;
  param_1[5] = 100;
  param_1[6] = 0x3f000000;
  param_1[7] = 0x3ecccccd;
  param_1[8] = (unsigned int)&DAT_004d4668;
  param_1[9] = 0x3f19999a;
  param_1[10] = 0x3ecccccd;
  *(unsigned char *)(param_1 + 0xb) = 0;
  *(unsigned char *)((int)param_1 + 0x2d) = 0;
  param_1[0xc] = 0;
  temp_v2 = DAT_004d4670;
  temp_v1 = DAT_004d466c;
  temp_v0 = DAT_004d4668;
  param_1[0x3a] = 0;
  param_1[0xe] = temp_v0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0xf] = temp_v1;
  param_1[0x10] = temp_v2;
  param_1[0x40] = 0xbe0;
  param_1[0x41] = 0xe60;
  param_1[0x42] = 0x820;
  *(unsigned char *)((int)param_1 + 0x10d) = 4;
  *(unsigned char *)((int)param_1 + 0x10e) = 0;
  param_1[0x29] = 0xa0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0xa0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0xa0;
  param_1[0x2f] = 0;
  param_1[0x31] = 0;
  param_1[0x2e] = 0xa0;
  param_1[0x30] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0xa0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x11] = 0;
  param_1[0x15] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x21] = 0;
  param_1[0x25] = 0;
  param_1[0x36] = 0;
  param_1[0x12] = 0;
  param_1[0x16] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x22] = 0;
  param_1[0x26] = 0;
  param_1[0x37] = 0;
  param_1[0x13] = 0;
  param_1[0x17] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x23] = 0;
  param_1[0x27] = 0;
  param_1[0x38] = 0;
  param_1[0x14] = 0;
  param_1[0x18] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x24] = 0;
  param_1[0x28] = 0;
  param_1[0x39] = 0;
  return;
}

} /* extern "C" */
