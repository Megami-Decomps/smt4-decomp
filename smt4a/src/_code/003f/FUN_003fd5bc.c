/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003fd5bc` (_code @ 0x3fd5bc, 0x80 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_2_stack;


void FUN_003fd5bc(int param_1,int param_2)

{
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v2 = 0;
  do {
    temp_v0 = (temp_v2 + 0x800U) >> 3;
    temp_v1 = 1 << ((temp_v2 + 0x800U) & 7);
    if ((*(unsigned char *)(param_2 + temp_v0) & temp_v1) != 0) {
      *(unsigned char *)(param_1 + temp_v0) = (unsigned char)temp_v1 | *(unsigned char *)(param_1 + temp_v0);
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 0x20);
  temp_v2 = 0;
  do {
    temp_v0 = (temp_v2 + 0x820U) >> 3;
    temp_v1 = 1 << ((temp_v2 + 0x820U) & 7);
    if ((*(unsigned char *)(param_2 + temp_v0) & temp_v1) != 0) {
      *(unsigned char *)(param_1 + temp_v0) = (unsigned char)temp_v1 | *(unsigned char *)(param_1 + temp_v0);
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 0x200);
  return;
}
