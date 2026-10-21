/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031850c` (_code @ 0x31850c, 0x7c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00244fb0(unsigned int, int, unsigned int, unsigned int, int);
int scrGetArg(int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

/* Supplied declaration required: FUN_00244fb0. */
extern int FUN_0024502c(unsigned int, unsigned int);
extern unsigned int btlGetMainState(void);
/* Supplied declaration required: scrGetArg. */
extern int objSlotStateIsActiveRange(unsigned int, unsigned int);


unsigned char FUN_0031850c(void)

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
  temp_v4 = objSlotStateIsActiveRange(temp_v3,0);
  if (temp_v4 != 0) {
    temp_v4 = FUN_0024502c(temp_v3,0);
    return temp_v4 != 0;
  }
  FUN_00244fb0(temp_v3,0,temp_v2,temp_v1,temp_v0);
  return 0;
}

} /* extern "C" */
