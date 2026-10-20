/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b16bc` (_code @ 0x3b16bc, 0x7c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int scrGetArg(int);
int FUN_003f2280(unsigned int, int, unsigned int, unsigned int, int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern unsigned int btlGetMainState(void);
/* Supplied declaration required: scrGetArg. */
extern int btlSlotStateIsNot456(unsigned int, unsigned int);
/* Supplied declaration required: FUN_003f2280. */
extern int btlSlotStateIs4To7(unsigned int, unsigned int);


unsigned char FUN_003b16bc(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  
  temp_v1 = scrGetArg(0);
  temp_v2 = scrGetArg(1);
  temp_v0 = scrGetArg(2);
  temp_v3 = btlGetMainState();
  temp_v4 = btlSlotStateIs4To7(temp_v3,0);
  if (temp_v4 != 0) {
    temp_v4 = btlSlotStateIsNot456(temp_v3,0);
    return temp_v4 != 0;
  }
  FUN_003f2280(temp_v3,0,temp_v2,temp_v1,temp_v0);
  return 0;
}

} /* extern "C" */
