/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001e950c` (_code @ 0x1e950c, 0xf8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern int DAT_0044ea00; /* 0x44ea00 */

/* Supplied declaration required: FUN_001b3eac. */
/* Supplied declaration required: FUN_001b433c. */
/* Supplied declaration required: FUN_001f9f64. */
extern int FUN_002c5d80(unsigned int, unsigned int);


unsigned int FUN_001e950c(int *param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int *piVar5;
  
  temp_v0 = DAT_0044ea00;
  temp_v1 = *(int *)(*param_1 + 0x24);
  if ((((temp_v1 >= 0x15) && (temp_v1 < 0x6e)) && (temp_v1 - 0x54U >= 0xc)) && (temp_v1 != 0x18)) {
    temp_v1 = FUN_002c5d80(5,0);
    piVar5 = (int *)(temp_v0 + 0x124c);
    temp_v2 = *piVar5;
    temp_v3 = piVar5[temp_v2 + 2];
    *piVar5 = temp_v2 + 1;
    piVar5[temp_v2 + 3] = temp_v1;
    if (*(char *)(temp_v0 + 0x1264) != '\0' || temp_v3 != temp_v1) {
      (**(romwright_code **)(temp_v0 + 0x1268))();
      *(unsigned char *)(temp_v0 + 0x1264) = 0;
    }
    FUN_001f9f64();
    FUN_001b3eac();
    temp_v0 = DAT_0044ea00;
    piVar5 = (int *)(DAT_0044ea00 + 0x124c);
    temp_v1 = *piVar5;
    temp_v2 = piVar5[temp_v1 + 2];
    *piVar5 = temp_v1 - 1;
    if (*(char *)(temp_v0 + 0x1264) != '\0' || temp_v2 != piVar5[temp_v1 + 1]) {
      (**(romwright_code **)(temp_v0 + 0x1268))();
      *(unsigned char *)(temp_v0 + 0x1264) = 0;
    }
    FUN_001b433c();
    return 0;
  }
  return 0;
}
