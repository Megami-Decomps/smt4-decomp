/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b24fc` (_code @ 0x2b24fc, 0x98 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00573920; /* 0x573920 */

extern int FUN_0018719c(unsigned int);
extern int FUN_00213b78(void);
extern int FUN_002e2b38(void);


unsigned int FUN_002b24fc(void)

{
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_0018719c(0x4f8);
  if (temp_v0 == 0) {
    temp_v0 = FUN_00213b78();
    if (temp_v0 != 1) {
      if (temp_v0 != 2) {
        return 0;
      }
      temp_v0 = FUN_0018719c(0x4db);
      if (temp_v0 != 0) {
        return 1;
      }
    }
    else {
      temp_v0 = FUN_002e2b38();
      if (temp_v0 == 0) {
        return 0;
      }
    }
    temp_v0 = DAT_00573920;
    if ((DAT_00573920 != 0) &&
       ((temp_v1 = FUN_0018719c(0x1fd), temp_v1 != 0 || (*(int *)(temp_v0 + 0xac) == 1)))) {
      return 1;
    }
  }
  return 0;
}
