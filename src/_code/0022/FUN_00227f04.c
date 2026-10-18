/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00227f04` (_code @ 0x227f04, 0x4c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

extern int FUN_002277fc(unsigned int);
extern int FUN_00228060(unsigned int, unsigned int);
extern int FUN_002934d4(void);
/* Supplied declaration required: FUN_00293c98. */


int FUN_00227f04(unsigned int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  FUN_00293c98();
  temp_v0 = FUN_002934d4();
  if (temp_v0 != 0) {
    temp_v0 = 5;
  }
  else {
    temp_v1 = FUN_00228060(param_1,param_2);
    temp_v0 = 0;
    if (temp_v1 != 0) {
      temp_v0 = (int)*(short *)(temp_v1 + 0x10);
    }
    if (temp_v1 == 0 || temp_v0 == 0) {
      temp_v0 = FUN_002277fc(param_1);
      return temp_v0;
    }
  }
  return temp_v0;
}
