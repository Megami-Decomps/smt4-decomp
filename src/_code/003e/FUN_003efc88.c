/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003efc88` (_code @ 0x3efc88, 0x44 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_2_stack;

extern unsigned char DAT_004efb90; /* 0x4efb90 */


void FUN_003efc88(unsigned int *param_1,unsigned int param_2)

{
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  *param_1 = param_2;
  param_1[1] = param_2;
  param_1[2] = param_2;
  param_1[3] = param_2;
  *(char *)(param_1 + 4) = (char)param_2;
  param_1[5] = param_2;
  *(char *)(param_1 + 6) = (char)param_2;
  DAT_004efb90 = 0xa5;
  temp_v1 = 0;
  do {
    temp_v2 = 4;
    temp_v0 = temp_v1;
    do {
      if ((temp_v0 & 0x80) != 0) {
        temp_v0 = (temp_v0 << 1) ^ 7;
      }
      else {
        temp_v0 = temp_v0 << 1;
      }
      if ((temp_v0 & 0x80) != 0) {
        temp_v0 = (temp_v0 << 1) ^ 7;
      }
      else {
        temp_v0 = temp_v0 << 1;
      }
      temp_v2 = temp_v2 - 1;
    } while (temp_v2 != 0);
    *(char *)(temp_v1 + 0x4efb95) = (char)temp_v0;
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 0x100);
  return;
}
