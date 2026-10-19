/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0025c870` (_code @ 0x25c870, 0x78 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

/* Supplied declaration required: FUN_002a3d58. */
/* Supplied declaration required: FUN_002c32a0. */
/* Supplied declaration required: FUN_002c4938. */


int FUN_0025c870(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = 0x10000;
  FUN_002c32a0(0x10000,0x100,0,0xc0,0x10,1);
  FUN_002c4938();
  FUN_002c4938(temp_v0,0x90);
  *(unsigned int *)(temp_v0 + 0x84) = 1;
  *(unsigned char *)(temp_v0 + 0x88) = 8;
  *(unsigned char *)(temp_v0 + 0x89) = 0;
  *(unsigned char *)(temp_v0 + 0x8a) = 0;
  FUN_002a3d58(temp_v0);
  return temp_v0;
}
