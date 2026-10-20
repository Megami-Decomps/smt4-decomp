/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00331380` (_code @ 0x331380, 0x88 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00183f58(int, int, int, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern int DAT_0057f268; /* 0x57f268 */

/* Supplied declaration required: FUN_00183f58. */
extern int FUN_003aeaf0(unsigned int);


void FUN_00331380(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = DAT_0057f268;
  if (DAT_0057f268 == 0) {
    return;
  }
  *(unsigned char *)(DAT_0057f268 + 0x1210) = param_1 == 0;
  if (*(char *)(temp_v0 + 0x1210) == '\0') {
    temp_v0 = FUN_003aeaf0(3);
    if (temp_v0 != 0) {
      return;
    }
    FUN_00183f58(3,3,0xb,1);
    return;
  }
  FUN_00183f58(3,0x12,0,1);
  return;
}

} /* extern "C" */
