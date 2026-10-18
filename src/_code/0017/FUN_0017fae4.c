/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0017fae4` (_code @ 0x17fae4, 0x74 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

/* Supplied declaration required: FUN_00241d88. */
extern int FUN_002c0ac8(void);
/* Supplied declaration required: FUN_002c1ffc. */
/* Supplied declaration required: FUN_002c20a8. */
/* Supplied declaration required: FUN_002ee514. */


unsigned int FUN_0017fae4(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int uStack_14;
  unsigned int temp_v2;
  
  temp_v0 = FUN_002c0ac8();
  FUN_002ee514();
  temp_v1 = 0;
  uStack_14 = 0x3f800000;
  temp_v2 = 0;
  FUN_002c20a8(temp_v0,temp_v0 + 0x508,temp_v0 + 0x514,&temp_v1);
  FUN_002c1ffc(temp_v0,1);
  FUN_00241d88(0);
  return 0;
}
