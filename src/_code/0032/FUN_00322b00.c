/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00322b00` (_code @ 0x322b00, 0x4c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

/* Supplied declaration required: FUN_001a97a4. */
extern unsigned int FUN_00296cc8(unsigned int);
/* Supplied declaration required: FUN_002c564c. */


unsigned int FUN_00322b00(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int uStack_14;
  unsigned int temp_v3;
  
  temp_v0 = FUN_00296cc8(0);
  temp_v1 = FUN_00296cc8(1);
  FUN_002c564c(0);
  temp_v3 = 2;
  temp_v2 = temp_v0;
  uStack_14 = temp_v1;
  FUN_001a97a4(&temp_v2,0xc);
  return 1;
}
