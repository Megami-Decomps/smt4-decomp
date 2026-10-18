/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001ecbc4` (_code @ 0x1ecbc4, 0x5c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

extern unsigned int FUN_002865f8(void);
/* Supplied declaration required: FUN_002866b4. */
extern unsigned int FUN_002893d8(void);
/* Supplied declaration required: FUN_0028dc98. */
extern unsigned int FUN_00296cc8(unsigned int);


void FUN_001ecbc4(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  FUN_0028dc98(0);
  temp_v0 = FUN_002865f8();
  temp_v1 = FUN_00296cc8(0);
  temp_v2 = FUN_00296cc8(1);
  temp_v3 = FUN_002893d8();
  FUN_002866b4(temp_v0,temp_v1,temp_v3,0xe,0,temp_v2);
  return;
}
