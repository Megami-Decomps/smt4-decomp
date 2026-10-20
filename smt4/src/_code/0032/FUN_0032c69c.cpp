/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0032c69c` (_code @ 0x32c69c, 0x2c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int bgmStop(unsigned int, int, int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

/* Supplied declaration required: bgmStop. */
extern int jyoucyuGetTableEntry(unsigned int);


void FUN_0032c69c(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = jyoucyuGetTableEntry(1);
  if (temp_v0 == 0) {
    bgmStop(0xffffffff,0xf,0);
    return;
  }
  return;
}

} /* extern "C" */
