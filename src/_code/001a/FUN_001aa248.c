/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001aa248` (_code @ 0x1aa248, 0x58 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern unsigned int FUN_002865f8(void);
extern int FUN_0028660c(void);
/* Supplied declaration required: FUN_002866b4. */
extern unsigned int FUN_002893d8(void);
extern unsigned int FUN_00296cc8(unsigned int);


void FUN_001aa248(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  temp_v0 = FUN_0028660c();
  if (temp_v0 == 0x14) {
    temp_v0 = 5;
  }
  temp_v1 = FUN_002865f8();
  temp_v2 = FUN_00296cc8(0);
  temp_v3 = FUN_002893d8();
  FUN_002866b4(temp_v1,temp_v2,temp_v3,temp_v0,0,0);
  return;
}
