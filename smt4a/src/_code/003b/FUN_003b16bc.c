/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b16bc` (_code @ 0x3b16bc, 0x7c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern unsigned int FUN_0014aa78(void);
/* Supplied declaration required: FUN_00236038. */
extern int FUN_003e84cc(unsigned int, unsigned int);
/* Supplied declaration required: FUN_003f2280. */
extern int FUN_003f298c(unsigned int, unsigned int);


unsigned char FUN_003b16bc(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  
  temp_v1 = FUN_00236038(0);
  temp_v2 = FUN_00236038(1);
  temp_v0 = FUN_00236038(2);
  temp_v3 = FUN_0014aa78();
  temp_v4 = FUN_003f298c(temp_v3,0);
  if (temp_v4 != 0) {
    temp_v4 = FUN_003e84cc(temp_v3,0);
    return temp_v4 != 0;
  }
  FUN_003f2280(temp_v3,0,temp_v2,temp_v1,temp_v0);
  return 0;
}
