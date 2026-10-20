/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001ff458` (_code @ 0x1ff458, 0x1c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00155b74(void);
int FUN_002c415c(unsigned int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

/* Supplied declaration required: FUN_00155b74. */
extern unsigned int FUN_002c08f0(void);
/* Supplied declaration required: FUN_002c415c. */


void FUN_001ff458(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = FUN_002c08f0();
  FUN_00155b74();
  FUN_002c415c(temp_v0);
  return;
}

} /* extern "C" */
