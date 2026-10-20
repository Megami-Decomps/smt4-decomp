/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035c2ec` (_code @ 0x35c2ec, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00318544(unsigned int, unsigned int, int, int, int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern unsigned int FUN_00236038(unsigned int);
/* Supplied declaration required: FUN_00318544. */


unsigned int FUN_0035c2ec(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_00236038(0);
  temp_v1 = FUN_00236038(1);
  FUN_00318544(temp_v0,temp_v1,0,0,0);
  return 1;
}

} /* extern "C" */
