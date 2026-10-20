/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00282e70` (_code @ 0x282e70, 0x10c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0043dcf0; /* 0x43dcf0 */

extern int FUN_0029e908(int);
extern int FUN_0029efa8(void);


/* WARNING: Type propagation algorithm not settling */

unsigned int FUN_00282e70(unsigned int param_1,unsigned int param_2,int param_3)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = *(int *)(DAT_0043dcf0 + 0x20);
  if (temp_v1 != 6) {
    param_3 = *(int *)(DAT_0043dcf0 + 0x1c);
  }
  if (temp_v1 == 6 || param_3 == 6) {
    return 0;
  }
  if (!(temp_v1 == 4 || param_3 == 4)) {
    if (temp_v1 != 8 && param_3 != 8) {
      if (temp_v1 != 10 && param_3 != 10) {
        return 0;
      }
      if (*(short *)(DAT_0043dcf0 + 0x38) < 0) {
        return 1;
      }
      return 0;
    }
    if (*(char *)(DAT_0043dcf0 + 0x42) != '\0') {
      temp_v1 = DAT_0043dcf0 + 0xa6c;
      temp_v0 = FUN_0029efa8();
      if (temp_v0 != 0) {
        return 0;
      }
      temp_v1 = FUN_0029e908(temp_v1);
    }
    else {
      temp_v1 = DAT_0043dcf0 + 0xa08;
      temp_v0 = FUN_0029efa8();
      if (temp_v0 != 0) {
        return 0;
      }
      temp_v1 = FUN_0029e908(temp_v1);
    }
  }
  else {
    temp_v1 = DAT_0043dcf0 + 0x8dc;
    temp_v0 = FUN_0029efa8();
    if (temp_v0 != 0) {
      return 0;
    }
    temp_v1 = FUN_0029e908(temp_v1);
  }
  if (temp_v1 == 0) {
    return 1;
  }
  return 0;
}

} /* extern "C" */
