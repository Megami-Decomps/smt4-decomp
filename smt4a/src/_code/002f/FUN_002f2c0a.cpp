/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f2c0a` (_code @ 0x2f2c0a, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_1: 1 slot(s), 1 byte(s) */
typedef struct {
    unsigned char sp8; /* 0x8: local_8 */
} param_1_stack;

extern int FUN_002eac34(unsigned char);


unsigned int FUN_002f2c0a(int param_1)

{
  int temp_v0;
  unsigned short temp_v1;
  
  temp_v1 = *(unsigned short *)(param_1 + 0x3c) & 0xf;
  if ((temp_v1 != 7) && (temp_v1 != 3)) {
    temp_v0 = FUN_002eac34(*(unsigned char *)(param_1 + 0x25) >> 4);
    if (*(char *)(temp_v0 + 0x1c) != '\0') {
      return 1;
    }
  }
  return 0;
}

} /* extern "C" */
