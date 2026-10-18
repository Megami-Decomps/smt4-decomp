/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00309df4` (_code @ 0x309df4, 0x68 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern unsigned int FUN_002bd838(unsigned int);
/* Supplied declaration required: FUN_002c498c. */


unsigned int * FUN_00309df4(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  
  puVar1 = (unsigned int *)0x100;
  FUN_002c498c(0x100,0x100,0,0x10,1);
  temp_v0 = FUN_002bd838(0);
  *puVar1 = temp_v0;
  temp_v0 = FUN_002bd838(0);
  puVar1[1] = temp_v0;
  temp_v0 = FUN_002bd838(0);
  puVar1[2] = temp_v0;
  *(unsigned char *)(puVar1 + 3) = 0;
  return puVar1;
}
