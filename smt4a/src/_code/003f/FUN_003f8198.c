/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f8198` (_code @ 0x3f8198, 0x118 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern int DAT_0059dbb4; /* 0x59dbb4 */

/* Supplied declaration required: FUN_00157558. */
/* Supplied declaration required: FUN_001677c0. */
extern int FUN_00169294(unsigned int, unsigned int, unsigned int);
extern int FUN_001692ac(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0016c410. */
/* Supplied declaration required: FUN_003f82b8. */


unsigned int FUN_003f8198(unsigned int param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int *piVar5;
  
  FUN_00157558(DAT_0059dbb4);
  temp_v0 = DAT_0059dbb4;
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
  FUN_003f82b8(param_1);
  FUN_001677c0();
  temp_v0 = DAT_0059dbb4;
  piVar5 = (int *)(DAT_0059dbb4 + 0x1258);
  temp_v1 = *piVar5;
  temp_v2 = piVar5[temp_v1 + 2];
  *piVar5 = temp_v1 - 1;
  if (*(char *)(temp_v0 + 0x1270) != '\0' || temp_v2 != piVar5[temp_v1 + 1]) {
    (**(romwright_code **)(temp_v0 + 0x1274))();
    *(unsigned char *)(temp_v0 + 0x1270) = 0;
  }
  temp_v0 = DAT_0059dbb4;
  temp_v1 = FUN_00169294(6,7,0);
  piVar5 = (int *)(temp_v0 + 0x12b8);
  temp_v2 = piVar5[*piVar5 + 2];
  piVar5[*piVar5 + 2] = temp_v1;
  if (*(char *)(temp_v0 + 0x12d0) != '\0' || temp_v2 != temp_v1) {
    (**(romwright_code **)(temp_v0 + 0x12d4))();
    *(unsigned char *)(temp_v0 + 0x12d0) = 0;
  }
  FUN_0016c410(DAT_0059dbb4);
  return 0;
}
