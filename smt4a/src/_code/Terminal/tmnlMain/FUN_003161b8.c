/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003161b8` (_code @ 0x3161b8, 0xf8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern int DAT_0059dbb4; /* 0x59dbb4 */

/* Supplied declaration required: FUN_00162790. */
extern int FUN_001692ac(unsigned int, unsigned int);


unsigned int FUN_003161b8(int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int *piVar5;
  
  temp_v1 = *(int *)(*param_1 + 0x10);
  if (temp_v1 - 1U < 0x11) {
    if (temp_v1 == 1) {
      FUN_00162790(3,0xffffffff,(unsigned int)*(unsigned char *)(*param_1 + 9) * 0x3c + 0x56fd3f);
    }
    temp_v1 = DAT_0059dbb4;
    temp_v0 = FUN_001692ac(1,0);
    piVar5 = (int *)(temp_v1 + 0x1258);
    temp_v2 = *piVar5;
    temp_v3 = piVar5[temp_v2 + 2];
    *piVar5 = temp_v2 + 1;
    piVar5[temp_v2 + 3] = temp_v0;
    if (*(char *)(temp_v1 + 0x1270) != '\0' || temp_v3 != temp_v0) {
      (**(romwright_code **)(temp_v1 + 0x1274))();
      *(unsigned char *)(temp_v1 + 0x1270) = 0;
    }
    temp_v1 = DAT_0059dbb4;
    piVar5 = (int *)(DAT_0059dbb4 + 0x1258);
    temp_v0 = *piVar5;
    temp_v2 = piVar5[temp_v0 + 2];
    *piVar5 = temp_v0 - 1;
    if (*(char *)(temp_v1 + 0x1270) != '\0' || temp_v2 != piVar5[temp_v0 + 1]) {
      (**(romwright_code **)(temp_v1 + 0x1274))();
      *(unsigned char *)(temp_v1 + 0x1270) = 0;
    }
  }
  return 0;
}
