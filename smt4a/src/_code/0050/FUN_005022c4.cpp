/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_005022c4` (_code @ 0x5022c4, 0x64 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_2_stack;


unsigned int FUN_005022c4(int param_1,int param_2)

{
  int temp_v0;
  int temp_v1;
  
  temp_v0 = *(int *)(param_1 + 4);
  temp_v1 = *(int *)(param_2 + 4);
  while( 1 ) {
    while( 1 ) {
      if (temp_v0 == param_1 || temp_v1 == param_2) {
        return 0;
      }
      if (*(unsigned short *)(temp_v1 + 8) < *(unsigned short *)(temp_v0 + 8)) break;
      if (*(unsigned short *)(temp_v1 + 8) <= *(unsigned short *)(temp_v0 + 10)) {
        return 1;
      }
      temp_v0 = *(int *)(temp_v0 + 4);
    }
    if (*(unsigned short *)(temp_v0 + 8) <= *(unsigned short *)(temp_v1 + 10)) break;
    temp_v1 = *(int *)(temp_v1 + 4);
  }
  return 1;
}

} /* extern "C" */
