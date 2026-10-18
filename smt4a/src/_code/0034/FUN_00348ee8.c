/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00348ee8` (_code @ 0x348ee8, 0x8c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
} param_1_stack;


int FUN_00348ee8(int param_1)

{
  int temp_v0;
  
  temp_v0 = (((short)(*(char *)(param_1 + 4) - 0x30) * 1000 + *(char *)(param_1 + 5) * 100 +
           *(char *)(param_1 + 6) * 10) - 0x14d0) + (int)*(char *)(param_1 + 7);
  if (*(char *)(param_1 + 10) != '\0') {
    if ((*(char *)(param_1 + 10) == '\x01') && (temp_v0 >= 0x514)) {
      return param_1 + (unsigned int)*(unsigned short *)(param_1 + 8);
    }
  }
  else if (temp_v0 >= 0x514) {
    return param_1 + (unsigned int)*(unsigned short *)(param_1 + 8);
  }
  return 0;
}
