/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001cdbb4` (_code @ 0x1cdbb4, 0xe8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_4_stack;

extern unsigned char DAT_0055b480; /* 0x55b480 */
extern unsigned char DAT_0055bce4; /* 0x55bce4 */


void FUN_001cdbb4(unsigned int *param_1,unsigned int param_2,int param_3,unsigned int *param_4)

{
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  param_1[1] = param_2;
  param_1[2] = param_3;
  *param_1 = (unsigned int)&DAT_0055bce4;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[10] = 0;
  *(unsigned char *)(param_1 + 0xb) = 1;
  *(unsigned char *)(param_1 + 0xc) = 1;
  param_1[0xd] = 0;
  param_1[0xe] = 3;
  temp_v0 = param_4[1];
  temp_v1 = param_4[2];
  temp_v2 = param_4[3];
  param_1[0xf] = *param_4;
  param_1[0x10] = temp_v0;
  param_1[0x11] = temp_v1;
  param_1[0x12] = temp_v2;
  param_1[3] = 0;
  if (param_3 != 0) {
    *(unsigned char *)(param_1 + 0xc) = (unsigned char)*(unsigned int *)(param_3 + 0x18) & 1;
  }
  param_1[0x13] = 0;
  *param_1 = (unsigned int)&DAT_0055b480;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0x3f800000;
  param_1[0x1e] = 0x3f800000;
  param_1[0x1f] = 0x3f800000;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *(unsigned char *)(param_1 + 0x23) = 0;
  return;
}
