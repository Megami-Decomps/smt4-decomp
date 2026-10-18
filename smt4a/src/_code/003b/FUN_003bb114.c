/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003bb114` (_code @ 0x3bb114, 0x80 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

/* Supplied declaration required: FUN_00153630. */
extern unsigned int *FUN_00164a9c(unsigned int);
extern unsigned int FUN_00236038(unsigned int);
/* Supplied declaration required: FUN_0038791c. */


unsigned int FUN_003bb114(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int *puVar4;
  unsigned int temp_v3;
  
  temp_v0 = FUN_00236038(0);
  temp_v1 = FUN_00236038(1);
  temp_v2 = FUN_00236038(2);
  puVar4 = (unsigned int *)FUN_00164a9c(temp_v0);
  temp_v3 = *puVar4;
  FUN_0038791c(temp_v0,temp_v1,2,temp_v2,1,1);
  FUN_00153630(temp_v3,temp_v2,1,1,0xffffffff);
  return 1;
}
