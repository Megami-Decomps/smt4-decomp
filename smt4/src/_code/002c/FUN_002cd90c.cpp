/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002cd90c` (_code @ 0x2cd90c, 0x24 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdSequenceRequest(int, unsigned int [2], int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

/* Supplied declaration required: asdSequenceRequest. */


unsigned int FUN_002cd90c(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0 [2];
  
  temp_v0[0] = 0;
  asdSequenceRequest(0x13,temp_v0,4);
  return 1;
}

} /* extern "C" */
