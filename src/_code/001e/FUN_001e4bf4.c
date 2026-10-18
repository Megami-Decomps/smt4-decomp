/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001e4bf4` (_code @ 0x1e4bf4, 0x144 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern int DAT_0044ea00; /* 0x44ea00 */

/* Supplied declaration required: FUN_001e071c. */
extern int FUN_0028a318(void);
extern int FUN_002a60b4(unsigned int, int);
/* Supplied declaration required: FUN_002c18e4. */
/* Supplied declaration required: FUN_002c198c. */
/* Supplied declaration required: FUN_002c39a4. */
extern int FUN_002c5d80(unsigned int, unsigned int);


unsigned int FUN_001e4bf4(int param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int *piVar3;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  
  temp_v4 = *(int *)(param_1 + 0x20);
  if (temp_v4 != 0) {
    temp_v2 = 0;
    temp_v3 = temp_v2;
    do {
      temp_v0 = FUN_002a60b4(0x14,temp_v2);
      if (temp_v0 != 0) {
        temp_v3 = temp_v3 + 1;
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 5);
    temp_v2 = 0;
    do {
      temp_v0 = FUN_002a60b4(0x15,temp_v2);
      if (temp_v0 != 0) {
        temp_v3 = temp_v3 + 1;
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 4);
    if (temp_v3 >= 9) {
      FUN_002c39a4(DAT_0044ea00);
      temp_v3 = DAT_0044ea00;
      temp_v2 = FUN_002c5d80(1,0);
      piVar3 = (int *)(temp_v3 + 0x124c);
      temp_v0 = *piVar3;
      temp_v1 = piVar3[temp_v0 + 2];
      *piVar3 = temp_v0 + 1;
      piVar3[temp_v0 + 3] = temp_v2;
      if (*(char *)(temp_v3 + 0x1264) != '\0' || temp_v1 != temp_v2) {
        (**(romwright_code **)(temp_v3 + 0x1268))();
        *(unsigned char *)(temp_v3 + 0x1264) = 0;
      }
      temp_v3 = FUN_0028a318();
      if (temp_v3 != 0) {
        FUN_001e071c(temp_v4 + 0x2460);
      }
      temp_v4 = DAT_0044ea00;
      piVar3 = (int *)(DAT_0044ea00 + 0x124c);
      temp_v3 = *piVar3;
      temp_v2 = piVar3[temp_v3 + 2];
      *piVar3 = temp_v3 - 1;
      if (*(char *)(temp_v4 + 0x1264) != '\0' || temp_v2 != piVar3[temp_v3 + 1]) {
        (**(romwright_code **)(temp_v4 + 0x1268))();
        *(unsigned char *)(temp_v4 + 0x1264) = 0;
      }
      FUN_002c198c(DAT_0044ea00);
      FUN_002c18e4(DAT_0044ea00);
      return 0;
    }
  }
  return 0;
}
