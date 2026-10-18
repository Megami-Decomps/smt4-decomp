/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001f4c80` (_code @ 0x1f4c80, 0x74 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

/* Supplied declaration required: FUN_0014f0dc. */
/* Supplied declaration required: FUN_001523b8. */
extern int FUN_00164a9c(void);
/* Supplied declaration required: FUN_0036f0a0. */
/* Supplied declaration required: FUN_003d4b7c. */


unsigned int FUN_001f4c80(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int uStack_14;
  unsigned int temp_v2;
  
  temp_v0 = FUN_00164a9c();
  FUN_0036f0a0();
  temp_v1 = 0;
  uStack_14 = 0x3f800000;
  temp_v2 = 0;
  FUN_0014f0dc(temp_v0,temp_v0 + 0x50c,temp_v0 + 0x518,&temp_v1);
  FUN_001523b8(temp_v0,1);
  FUN_003d4b7c(0);
  return 0;
}
