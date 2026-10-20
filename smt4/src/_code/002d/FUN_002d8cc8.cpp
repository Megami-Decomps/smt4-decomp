/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002d8cc8` (_code @ 0x2d8cc8, 0x98 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
} param_1_stack;


int FUN_002d8cc8(int param_1)

{
  unsigned short temp_v0;
  int temp_v1;
  
  temp_v1 = (((short)(*(char *)(param_1 + 4) - 0x30) * 1000 + *(char *)(param_1 + 5) * 100 +
           *(char *)(param_1 + 6) * 10) - 0x14d0) + (int)*(char *)(param_1 + 7);
  if (*(char *)(param_1 + 10) != '\0') {
    if ((*(char *)(param_1 + 10) == '\x01') && (temp_v0 = *(unsigned short *)(param_1 + 8), temp_v1 >= 0x514)) {
      return param_1 + (unsigned int)temp_v0 + 0xc;
    }
  }
  else if (temp_v1 >= 0x514) {
    temp_v0 = *(unsigned short *)(param_1 + 8);
    return param_1 + (unsigned int)temp_v0 + 0xc;
  }
  return 0;
}

} /* extern "C" */
