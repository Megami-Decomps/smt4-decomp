/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001ce224` (_code @ 0x1ce224, 0x74 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0029ce60(unsigned int, int, int, int, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern int DAT_0043dd68; /* 0x43dd68 */

/* Supplied declaration required: FUN_0029ce60. */


int FUN_001ce224(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v0 = DAT_0043dd68;
  temp_v3 = 0;
  temp_v2 = 0;
  if (*(short *)(DAT_0043dd68 + 0x933a) != 0) {
    do {
      if (*(char *)(param_1 + temp_v2 + 0x1a) == '\x03') {
        temp_v1 = (unsigned int)*(unsigned short *)(param_1 + temp_v2 * 2 + 2);
        FUN_0029ce60(temp_v1,1,0,0,0);
        temp_v3 = temp_v3 + temp_v1;
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < (int)(unsigned int)*(unsigned short *)(temp_v0 + 0x933a));
  }
  return temp_v3;
}

} /* extern "C" */
