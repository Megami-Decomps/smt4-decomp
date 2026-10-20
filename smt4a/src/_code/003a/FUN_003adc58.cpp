/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003adc58` (_code @ 0x3adc58, 0xfc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001681cc(int);
int FUN_00183f58(...);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern int DAT_005f15fc; /* 0x5f15fc */
extern int DAT_005f1600; /* 0x5f1600 */

/* Supplied declaration required: FUN_001681cc. */
/* Supplied declaration required: FUN_00183f58. */
extern int FUN_0018719c(unsigned int);
extern int FUN_004a0404(void);


void FUN_003adc58(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = DAT_005f15fc;
  if (DAT_005f15fc == 5) {
    temp_v0 = DAT_005f1600;
  }
  if (((DAT_005f15fc == 5 && temp_v0 == 0xc) || (temp_v0 = FUN_0018719c(0x49a), temp_v0 == 0)) ||
     ((temp_v0 = FUN_0018719c(0xc), temp_v0 != 0 && (temp_v0 = FUN_0018719c(0x10), temp_v0 == 0)))) {
    FUN_001681cc(0xd3);
    return;
  }
  temp_v0 = FUN_004a0404();
  if (temp_v0 == 0) {
    if (DAT_005f15fc < 100) {
      FUN_001681cc(0x41);
      return;
    }
    FUN_001681cc(0xd2);
    return;
  }
  if (DAT_005f15fc == 0x65) {
    FUN_001681cc(0x105);
    FUN_00183f58(0,0x13,0x59,1);
    FUN_00183f58(1,0);
    return;
  }
  FUN_001681cc(0x104);
  FUN_00183f58(0,0x13,0x59,1);
  FUN_00183f58(1,0);
  return;
}

} /* extern "C" */
