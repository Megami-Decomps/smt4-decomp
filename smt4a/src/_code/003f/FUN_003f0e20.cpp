/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f0e20` (_code @ 0x3f0e20, 0x74 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
} param_2_stack;


int FUN_003f0e20(int param_1,int param_2)

{
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v2 = 0;
  do {
    temp_v0 = 0;
    do {
      temp_v1 = (int)*(short *)(*(int *)(param_1 + 0x1ffc) + temp_v2 * 0x408 + temp_v0 * 2 + 8);
      if (temp_v1 < 0) break;
      if (temp_v1 == param_2) {
        return *(int *)(param_1 + 0x1ffc) + temp_v2 * 0x408;
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 0x32);
    temp_v2 = temp_v2 + 1;
    if (temp_v2 >= 0x6d) {
      return 0;
    }
  } while( 1 );
}

} /* extern "C" */
