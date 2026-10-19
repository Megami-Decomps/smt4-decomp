/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a10bc` (_code @ 0x2a10bc, 0x70 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

/* Supplied declaration required: FUN_001fe514. */
/* Supplied declaration required: FUN_002c5300. */


unsigned int * FUN_002a10bc(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int *puVar2;
  
  puVar1 = (unsigned int *)0x100;
  FUN_002c5300(0x100,0x100,0,0x1c,1);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar2 = puVar1;
  FUN_001fe514();
  puVar1[2] = (unsigned int)puVar2;
  *puVar1 = *puVar1 | 0x200000;
  return puVar1;
}
