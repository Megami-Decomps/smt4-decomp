/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013c684` (_code @ 0x13c684, 0x28 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdFatalError(void);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern int FUN_002a7e4c(unsigned int);
/* Supplied declaration required: asdFatalError. */


void FUN_0013c684(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_002a7e4c(0x406);
  temp_v1 = 0;
  if (temp_v0 < 0) {
    temp_v1 = -0x375f3004;
  }
  if (temp_v0 >= 0 || temp_v0 == temp_v1) {
    return;
  }
  asdFatalError();
  return;
}

} /* extern "C" */
