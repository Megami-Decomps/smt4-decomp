/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004fa7d0` (_code @ 0x4fa7d0, 0x58 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_3_stack;


int FUN_004fa7d0(int param_1,int param_2,int param_3)

{
  int temp_v0;
  int temp_v1;
  
  temp_v0 = 0;
  while( 1 ) {
    temp_v1 = param_1 + temp_v0 * 0x28;
    if (((*(int *)(temp_v1 + 400) != 0) && (*(int *)(temp_v1 + 0x194) == param_2)) &&
       (*(int *)(temp_v1 + 0x198) == param_3)) break;
    temp_v0 = temp_v0 + 1;
    if (temp_v0 >= 0x32) {
      return 0;
    }
  }
  return *(int *)(temp_v1 + 400);
}
