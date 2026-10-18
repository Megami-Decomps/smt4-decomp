/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0033f6d8` (_code @ 0x33f6d8, 0x50 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern int FUN_002adc88(void);
extern unsigned int FUN_002c5300(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c5df8. */


unsigned int FUN_0033f6d8(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_002adc88();
  temp_v1 = FUN_002c5300(0x100,0x100,0,0x44,1);
  FUN_002c5df8(temp_v1,temp_v0 + 0x100,0x44);
  return temp_v1;
}
