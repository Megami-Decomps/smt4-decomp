/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00441db8` (_code @ 0x441db8, 0x5c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern signed char DAT_005c0b00; /* 0x5c0b00 */
extern int DAT_005c0b04; /* 0x5c0b04 */
extern int DAT_005c0b08; /* 0x5c0b08 */

extern int FUN_0043d534(int *, unsigned int);
extern int FUN_004409ac(int *, unsigned int);


int FUN_00441db8(unsigned int param_1)

{
  int temp_v0;
  int temp_v1 [2];
  
  temp_v1[0] = DAT_005c0b08;
  if (DAT_005c0b08 != 0) {
    temp_v0 = FUN_0043d534(temp_v1,param_1);
  }
  else {
    if (DAT_005c0b00 != '\0') {
      temp_v1[0] = DAT_005c0b04;
      temp_v0 = FUN_004409ac(temp_v1,param_1);
      if (-1 < temp_v0) {
        temp_v0 = 0;
      }
      return temp_v0;
    }
    temp_v0 = -0x375f8c08;
  }
  return temp_v0;
}

} /* extern "C" */
