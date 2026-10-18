/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002cde40` (_code @ 0x2cde40, 0x48 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

/* Supplied declaration required: FUN_00254e2c. */
extern unsigned int FUN_002893d8(void);
extern unsigned int FUN_00296cc8(unsigned int);
extern unsigned int FUN_002b47f4(unsigned int);
/* Supplied declaration required: FUN_002bff50. */


void FUN_002cde40(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_00296cc8(0);
  temp_v1 = FUN_002b47f4(0x1e);
  temp_v2 = FUN_002893d8();
  FUN_002bff50();
  FUN_00254e2c(temp_v1,temp_v0,temp_v2,6,0);
  return;
}
