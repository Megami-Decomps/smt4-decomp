/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00320f78` (_code @ 0x320f78, 0x50 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_004fcf64(int, int, unsigned int, int, int, int);
int FUN_004fee5c(int, int, unsigned int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern unsigned int scrGetArg(unsigned int);
/* Supplied declaration required: FUN_004fcf64. */
/* Supplied declaration required: FUN_004fee5c. */


unsigned int FUN_00320f78(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = scrGetArg(0);
  FUN_004fcf64(0,1,temp_v0,0xc,0,1);
  FUN_004fee5c(0,1,temp_v0);
  return 1;
}

} /* extern "C" */
