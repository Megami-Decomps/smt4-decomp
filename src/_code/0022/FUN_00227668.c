/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00227668` (_code @ 0x227668, 0x8c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_00293230(void);
/* Supplied declaration required: FUN_002939f4. */


int FUN_00227668(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned char temp_v4;
  
  if (*(int *)(param_1 + 0x1cfc) != 0) {
    FUN_002939f4();
    temp_v0 = FUN_00293230();
    if (temp_v0 == 0) {
      temp_v3 = *(int *)(param_1 + 0x1cfc);
      temp_v1 = (int)*(short *)(temp_v3 + 0xaa);
      temp_v0 = 0;
      if (0 < *(short *)(temp_v3 + 0x68)) {
        temp_v0 = (int)*(short *)(temp_v3 + 0x68);
      }
      temp_v2 = (int)*(short *)(temp_v3 + 0x7e);
      temp_v4 = temp_v2 == 0;
      if (-1 < temp_v2) {
        temp_v4 = temp_v2 == temp_v0;
      }
      if (!temp_v4 && (-1 < temp_v2 && temp_v0 <= temp_v2)) {
        temp_v0 = temp_v2;
      }
      temp_v2 = (int)*(short *)(temp_v3 + 0x94);
      temp_v4 = temp_v2 == 0;
      if (-1 < temp_v2) {
        temp_v4 = temp_v2 == temp_v0;
      }
      if (!temp_v4 && (-1 < temp_v2 && temp_v0 <= temp_v2)) {
        temp_v0 = temp_v2;
      }
      temp_v4 = temp_v1 == 0;
      if (-1 < temp_v1) {
        temp_v4 = temp_v1 == temp_v0;
      }
      if (!temp_v4 && (-1 < temp_v1 && temp_v0 <= temp_v1)) {
        temp_v0 = temp_v1;
      }
      if (temp_v0 < 1) {
        temp_v0 = (int)*(short *)(temp_v3 + 400);
      }
      return temp_v0;
    }
  }
  return -1;
}
