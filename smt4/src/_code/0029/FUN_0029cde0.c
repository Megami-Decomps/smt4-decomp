/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0029cde0` (_code @ 0x29cde0, 0x80 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_3_stack;


unsigned int FUN_0029cde0(int param_1,unsigned int param_2,unsigned short *param_3)

{
  unsigned short temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned short *puVar4;
  
  if ((int)param_2 < 1) {
    temp_v1 = 0;
  }
  else {
    temp_v1 = param_2 & 1;
    temp_v2 = 0;
    if (temp_v1 != 0) {
      do {
        if ((unsigned short *)(unsigned int)*(unsigned short *)(param_1 + temp_v2 * 2) == param_3) {
          return 1;
        }
        temp_v2 = temp_v2 + 1;
      } while (temp_v2 < (int)temp_v1);
    }
  }
  while( 1 ) {
    if ((int)param_2 <= (int)temp_v1) {
      return 0;
    }
    puVar4 = (unsigned short *)(param_1 + temp_v1 * 2);
    temp_v0 = *puVar4;
    if ((unsigned short *)(unsigned int)temp_v0 != param_3) {
      puVar4 = (unsigned short *)(unsigned int)puVar4[1];
    }
    if ((unsigned short *)(unsigned int)temp_v0 == param_3 || puVar4 == param_3) break;
    temp_v1 = temp_v1 + 2;
  }
  return 1;
}
