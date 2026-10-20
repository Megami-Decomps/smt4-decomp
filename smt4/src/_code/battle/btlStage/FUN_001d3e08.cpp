/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001d3e08` (_code @ 0x1d3e08, 0x30 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003c81c8(int, unsigned int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern unsigned char DAT_004398d0; /* 0x4398d0 */

extern unsigned int jobGetWork(void);
/* Supplied declaration required: FUN_003c81c8. */


void FUN_001d3e08(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = jobGetWork();
  if ((*(int *)((unsigned char *)&DAT_004398d0 + 0x4)) != 0) {
    FUN_003c81c8((*(int *)((unsigned char *)&DAT_004398d0 + 0x4)),temp_v0);
    return;
  }
  return;
}

} /* extern "C" */
