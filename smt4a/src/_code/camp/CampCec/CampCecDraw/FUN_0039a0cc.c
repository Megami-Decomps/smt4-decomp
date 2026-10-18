/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039a0cc` (_code @ 0x39a0cc, 0x74 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern unsigned int FUN_0014bce0(unsigned int);
/* Supplied declaration required: FUN_00163060. */


unsigned int * FUN_0039a0cc(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  
  puVar1 = (unsigned int *)0x100;
  FUN_00163060(0x100,0x100,0,0x18,1);
  temp_v0 = FUN_0014bce0(0);
  *puVar1 = temp_v0;
  temp_v0 = FUN_0014bce0(0);
  puVar1[1] = temp_v0;
  temp_v0 = FUN_0014bce0(0);
  puVar1[2] = temp_v0;
  temp_v0 = FUN_0014bce0(0);
  puVar1[4] = temp_v0;
  *(unsigned char *)(puVar1 + 3) = 0;
  return puVar1;
}
