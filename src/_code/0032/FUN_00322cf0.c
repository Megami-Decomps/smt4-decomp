/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00322cf0` (_code @ 0x322cf0, 0x4c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

/* Supplied declaration required: FUN_001a969c. */
extern unsigned int FUN_00296f60(unsigned int);
/* Supplied declaration required: FUN_002c583c. */


unsigned int FUN_00322cf0(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int uStack_14;
  unsigned int temp_v3;
  
  temp_v0 = FUN_00296f60(0);
  temp_v1 = FUN_00296f60(1);
  FUN_002c583c(0);
  temp_v3 = 2;
  temp_v2 = temp_v0;
  uStack_14 = temp_v1;
  FUN_001a969c(&temp_v2,0xc);
  return 1;
}
