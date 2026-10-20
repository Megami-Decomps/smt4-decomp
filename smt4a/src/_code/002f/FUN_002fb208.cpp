/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fb208` (_code @ 0x2fb208, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e3140(void);
int FUN_002e726c(unsigned int *, unsigned int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

/* Supplied declaration required: FUN_002e3140. */
/* Supplied declaration required: FUN_002e726c. */


unsigned int FUN_002fb208(void)

{
/* irregular: irregular input(s): in_r3; 3 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int in_r3;
  unsigned int temp_v0 [2];
  
  puVar1 = temp_v0;
  temp_v0[0] = in_r3;
  FUN_002e726c(puVar1,0xffff8000);
  if ((int)puVar1 < 0) {
    FUN_002e3140();
  }
  return temp_v0[0];
}

} /* extern "C" */
