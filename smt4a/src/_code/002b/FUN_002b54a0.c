/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b54a0` (_code @ 0x2b54a0, 0x9c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
} param_2_stack;

extern unsigned int DAT_005702a0; /* 0x5702a0 */
extern unsigned int DAT_005702a4; /* 0x5702a4 */
extern unsigned int DAT_005702a8; /* 0x5702a8 */
extern unsigned int DAT_005702ac; /* 0x5702ac */


unsigned int FUN_002b54a0(unsigned int *param_1,int param_2)

{
  short temp_v0;
  int temp_v1;
  unsigned char temp_v2;
  
  if ((!((param_1[1] & DAT_005702a4) == 0 && (*param_1 & DAT_005702a0) == 0)) ||
     (temp_v1 = 0, !((DAT_005702ac & param_1[1]) == 0 && (DAT_005702a8 & *param_1) == 0))) {
    temp_v0 = *(short *)((int)param_1 + 0x32a);
    temp_v2 = temp_v0 == 2 || temp_v0 == 3;
    if (temp_v0 == 2 || temp_v0 == 3) {
      temp_v2 = (short)param_1[0xcb] == param_2;
    }
    if (temp_v2) {
      return 1;
    }
  }
  else {
    do {
      temp_v0 = *(short *)((int)param_1 + temp_v1 * 8 + 0x33a);
      temp_v2 = temp_v0 == 2 || temp_v0 == 3;
      if (temp_v0 == 2 || temp_v0 == 3) {
        temp_v2 = (short)param_1[temp_v1 * 2 + 0xcf] == param_2;
      }
      if (temp_v2) {
        return 1;
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < 10);
  }
  return 0;
}
