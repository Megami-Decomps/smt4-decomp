/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bed20` (_code @ 0x2bed20, 0x70 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001630d4(int, int, int, int, int);
int FUN_002bd97c(void);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

/* Supplied declaration required: FUN_001630d4. */
/* Supplied declaration required: FUN_002bd97c. */


unsigned int * FUN_002bed20(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int *puVar2;
  
  puVar1 = (unsigned int *)0x100;
  FUN_001630d4(0x100,0x100,0,0x1c,1);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar2 = puVar1;
  FUN_002bd97c();
  puVar1[2] = (unsigned int)puVar2;
  *puVar1 = *puVar1 | 0x200000;
  return puVar1;
}

} /* extern "C" */
