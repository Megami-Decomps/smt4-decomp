/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0020eca8` (_code @ 0x20eca8, 0xfc bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern int DAT_00435d18; /* 0x435d18 */
extern int DAT_0044ea00; /* 0x44ea00 */

extern int FUN_00286834(unsigned int);
/* Supplied declaration required: FUN_002c0ac8. */
/* Supplied declaration required: FUN_002c1abc. */
/* Supplied declaration required: FUN_002c1b64. */


unsigned int FUN_0020eca8(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int *piVar7;
  unsigned char temp_v6;
  
  FUN_002c0ac8();
  temp_v3 = DAT_0044ea00;
  temp_v0 = DAT_00435d18;
  if (DAT_00435d18 != 0) {
    temp_v1 = *(unsigned int *)(DAT_00435d18 + 0x3028);
    temp_v6 = (temp_v1 & 2) != 0;
    if (temp_v6) {
      temp_v1 = *(unsigned int *)(DAT_00435d18 + 0x3034);
    }
    if (temp_v6 && temp_v1 != 0) {
      temp_v2 = FUN_00286834(6);
      piVar7 = (int *)(temp_v3 + 0x126c);
      temp_v4 = *piVar7;
      temp_v5 = piVar7[temp_v4 + 2];
      *piVar7 = temp_v4 + 1;
      piVar7[temp_v4 + 3] = temp_v2;
      if (*(char *)(temp_v3 + 0x1284) != '\0' || temp_v5 != temp_v2) {
        (**(romwright_code **)(temp_v3 + 0x1288))();
        *(unsigned char *)(temp_v3 + 0x1284) = 0;
      }
      (**(romwright_code **)(**(int **)(temp_v0 + 0x3034) + 0xc))();
      temp_v0 = DAT_0044ea00;
      piVar7 = (int *)(DAT_0044ea00 + 0x126c);
      temp_v3 = *piVar7;
      temp_v2 = piVar7[temp_v3 + 2];
      *piVar7 = temp_v3 - 1;
      if (*(char *)(temp_v0 + 0x1284) != '\0' || temp_v2 != piVar7[temp_v3 + 1]) {
        (**(romwright_code **)(temp_v0 + 0x1288))(piVar7[temp_v3 + 1]);
        *(unsigned char *)(temp_v0 + 0x1284) = 0;
      }
      FUN_002c1b64(DAT_0044ea00);
      FUN_002c1abc(DAT_0044ea00);
    }
  }
  return 0;
}
