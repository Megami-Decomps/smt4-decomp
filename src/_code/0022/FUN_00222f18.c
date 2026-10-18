/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00222f18` (_code @ 0x222f18, 0x30 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

/* Supplied declaration required: FUN_00259454. */
extern int FUN_002892a0(void);
/* Supplied declaration required: FUN_0029f10c. */


void FUN_00222f18(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_002892a0();
  FUN_0029f10c(0,0x323232ff);
  temp_v1 = FUN_002892a0();
  FUN_00259454(temp_v0 + 0xdac,*(unsigned int *)(temp_v1 + 0xfc0));
  return;
}
