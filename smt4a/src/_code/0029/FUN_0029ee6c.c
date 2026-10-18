/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0029ee6c` (_code @ 0x29ee6c, 0x104 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern int DAT_0059dbb4; /* 0x59dbb4 */

extern int FUN_001692ac(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002443e4. */
/* Supplied declaration required: FUN_00244a14. */
/* Supplied declaration required: FUN_002b6f30. */
/* Supplied declaration required: FUN_002cfb18. */


unsigned int FUN_0029ee6c(int *param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int *piVar5;
  
  temp_v0 = DAT_0059dbb4;
  temp_v1 = *(int *)(*param_1 + 0x28);
  if ((((temp_v1 >= 0x15) && (temp_v1 < 0xb1)) && (temp_v1 - 0x8aU >= 0xc)) && (temp_v1 != 0x18)) {
    temp_v1 = FUN_001692ac(5,0);
    piVar5 = (int *)(temp_v0 + 0x1258);
    temp_v2 = *piVar5;
    temp_v3 = piVar5[temp_v2 + 2];
    *piVar5 = temp_v2 + 1;
    piVar5[temp_v2 + 3] = temp_v1;
    if (*(char *)(temp_v0 + 0x1270) != '\0' || temp_v3 != temp_v1) {
      (**(romwright_code **)(temp_v0 + 0x1274))();
      *(unsigned char *)(temp_v0 + 0x1270) = 0;
    }
    FUN_002b6f30();
    FUN_002cfb18();
    FUN_002443e4();
    temp_v0 = DAT_0059dbb4;
    piVar5 = (int *)(DAT_0059dbb4 + 0x1258);
    temp_v1 = *piVar5;
    temp_v2 = piVar5[temp_v1 + 2];
    *piVar5 = temp_v1 - 1;
    if (*(char *)(temp_v0 + 0x1270) != '\0' || temp_v2 != piVar5[temp_v1 + 1]) {
      (**(romwright_code **)(temp_v0 + 0x1274))();
      *(unsigned char *)(temp_v0 + 0x1270) = 0;
    }
    FUN_00244a14();
    return 0;
  }
  return 0;
}
