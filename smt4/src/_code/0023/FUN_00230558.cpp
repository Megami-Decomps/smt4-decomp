/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00230558` (_code @ 0x230558, 0x88 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int timerStart(int, int, int);
int FUN_002bd954(int, int, int, int, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern unsigned char DAT_0043e188; /* 0x43e188 */

/* Supplied declaration required: timerStart. */
/* Supplied declaration required: FUN_002bd954. */


unsigned int FUN_00230558(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = (*(int *)((unsigned char *)&DAT_0043e188 + 0x8));
  if (param_1 != 0) {
    *(unsigned char *)((*(int *)((unsigned char *)&DAT_0043e188 + 0x8)) + 0x82) = 1;
    FUN_002bd954(temp_v0 + 0x7e0,0xe,0,temp_v0 + 0xa4,0xb);
    timerStart(temp_v0 + 0x7e0,8,0);
  }
  else {
    *(unsigned char *)((*(int *)((unsigned char *)&DAT_0043e188 + 0x8)) + 0x82) = 2;
    FUN_002bd954(temp_v0 + 0x7e0,0xe,0,temp_v0 + 0xa4,0xb);
    timerStart(temp_v0 + 0x7e0,9,0);
  }
  return 1;
}

} /* extern "C" */
