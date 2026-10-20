/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0047314c` (_code @ 0x47314c, 0x58 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int jobStop(unsigned int, int);
int asdMemFreeSlot(void);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: jobStop. */
extern int jobIsValid(unsigned int);
/* Supplied declaration required: asdMemFreeSlot. */


void FUN_0047314c(unsigned int *param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = jobIsValid(param_1[1]);
  if (temp_v0 != 0) {
    if (param_1[0x107] != 0) {
      asdMemFreeSlot();
      param_1[0x107] = 0;
    }
    *param_1 = *param_1 & 0xffffffcf;
    jobStop(param_1[1],0);
    return;
  }
  return;
}

} /* extern "C" */
