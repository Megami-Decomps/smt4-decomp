/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a6efc` (_code @ 0x3a6efc, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

/* Supplied declaration required: FUN_00153630. */
extern unsigned int *FUN_00164a9c(void);
/* Supplied declaration required: FUN_00236038. */


unsigned int FUN_003a6efc(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  FUN_00236038(0);
  puVar1 = (unsigned int *)FUN_00164a9c();
  temp_v1 = *puVar1;
  temp_v0 = FUN_00236038(1);
  FUN_00153630(temp_v1,temp_v0,1,1,1);
  return 1;
}
