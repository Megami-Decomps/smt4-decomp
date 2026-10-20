/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002db900` (_code @ 0x2db900, 0x2c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001ab998(unsigned int);
int FUN_002c415c(unsigned int *);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

/* Supplied declaration required: FUN_001ab998. */
extern unsigned int *FUN_002c08f0(void);
/* Supplied declaration required: FUN_002c415c. */


void FUN_002db900(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)FUN_002c08f0();
  FUN_001ab998(*puVar1);
  if (puVar1 != (unsigned int *)0x0) {
    FUN_002c415c(puVar1);
    return;
  }
  return;
}

} /* extern "C" */
