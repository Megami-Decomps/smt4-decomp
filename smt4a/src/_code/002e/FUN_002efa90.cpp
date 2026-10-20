/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002efa90` (_code @ 0x2efa90, 0xd0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001677c0(void);

typedef int romwright_code(...);
extern int DAT_0059dbb4; /* 0x59dbb4 */

/* Supplied declaration required: FUN_001677c0. */
extern int FUN_001692ac(unsigned int, unsigned int);


unsigned int FUN_002efa90(int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int *piVar5;
  int temp_v4;
  
  temp_v0 = DAT_0059dbb4;
  temp_v4 = *param_1;
  if (temp_v4 != 0) {
    temp_v1 = FUN_001692ac(1,0);
    piVar5 = (int *)(temp_v0 + 0x1258);
    temp_v2 = *piVar5;
    temp_v3 = piVar5[temp_v2 + 2];
    *piVar5 = temp_v2 + 1;
    piVar5[temp_v2 + 3] = temp_v1;
    if (*(char *)(temp_v0 + 0x1270) != '\0' || temp_v3 != temp_v1) {
      (**(romwright_code **)(temp_v0 + 0x1274))();
      *(unsigned char *)(temp_v0 + 0x1270) = 0;
    }
    (**(romwright_code **)(**(int **)(temp_v4 + 8) + 0x18))();
    temp_v0 = DAT_0059dbb4;
    piVar5 = (int *)(DAT_0059dbb4 + 0x1258);
    temp_v4 = *piVar5;
    temp_v1 = piVar5[temp_v4 + 2];
    *piVar5 = temp_v4 - 1;
    if (*(char *)(temp_v0 + 0x1270) != '\0' || temp_v1 != piVar5[temp_v4 + 1]) {
      (**(romwright_code **)(temp_v0 + 0x1274))();
      *(unsigned char *)(temp_v0 + 0x1270) = 0;
    }
    FUN_001677c0();
  }
  return 0;
}

} /* extern "C" */
