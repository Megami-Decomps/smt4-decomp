/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001d2560` (_code @ 0x1d2560, 0x60 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

/* Supplied declaration required: FUN_002a3d58. */
extern int FUN_002c32a0(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c4938. */


int FUN_001d2560(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002c32a0(0x10000,0x100,0,0x90,0x10,1);
  FUN_002c4938(temp_v0,0x90);
  *(unsigned int *)(temp_v0 + 0x80) = 0;
  *(unsigned int *)(temp_v0 + 0x84) = 0;
  FUN_002a3d58(temp_v0);
  return temp_v0;
}
