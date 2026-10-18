/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00394d28` (_code @ 0x394d28, 0x74 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern int FUN_00293c98(void);
/* Supplied declaration required: FUN_002bfdfc. */
extern unsigned int FUN_002bff9c(void);


void FUN_00394d28(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_00293c98();
  if (*(short *)(temp_v0 + 0x1fc4) < 2) {
    temp_v1 = FUN_002bff9c();
    FUN_002bfdfc(1,0x7a576,temp_v1,4);
    return;
  }
  temp_v1 = FUN_002bff9c();
  FUN_002bfdfc(1,0x7a5d0,temp_v1,4);
  return;
}
