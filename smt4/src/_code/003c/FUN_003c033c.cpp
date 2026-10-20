/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c033c` (_code @ 0x3c033c, 0x54 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0022a4ac(void);
int FUN_002939f4(void);

/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

/* Supplied declaration required: FUN_0022a4ac. */
/* Supplied declaration required: FUN_002939f4. */


void FUN_003c033c(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  FUN_002939f4();
  temp_v0 = 0;
  FUN_0022a4ac();
  *(unsigned short *)(temp_v0 + 6) = *(unsigned short *)(temp_v0 + 6) | 1;
  return;
}

} /* extern "C" */
