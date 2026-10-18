/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00167234` (_code @ 0x167234, 0x178 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern unsigned char LAB_001673c4; /* 0x1673c4 */
extern unsigned char LAB_001673d0; /* 0x1673d0 */
extern unsigned char LAB_001673e0; /* 0x1673e0 */
extern int DAT_00589168; /* 0x589168 */
extern int DAT_0059dbb4; /* 0x59dbb4 */

/* Supplied declaration required: FUN_00162790. */
/* Supplied declaration required: FUN_001677c0. */
extern int FUN_001692ac(unsigned int, unsigned int);
extern int FUN_00180008(unsigned int);
/* Supplied declaration required: FUN_00182884. */
/* Supplied declaration required: FUN_00183bb0. */


unsigned int FUN_00167234(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int *piVar6;
  
  temp_v2 = DAT_0059dbb4;
  temp_v0 = DAT_00589168;
  if (*(int *)(DAT_00589168 + 8) == 1) {
    temp_v1 = FUN_001692ac(1,0);
    piVar6 = (int *)(temp_v2 + 0x1258);
    temp_v3 = *piVar6;
    temp_v4 = piVar6[temp_v3 + 2];
    *piVar6 = temp_v3 + 1;
    piVar6[temp_v3 + 3] = temp_v1;
    if (*(char *)(temp_v2 + 0x1270) != '\0' || temp_v4 != temp_v1) {
      (**(romwright_code **)(temp_v2 + 0x1274))();
      *(unsigned char *)(temp_v2 + 0x1270) = 0;
    }
    FUN_001677c0();
    FUN_00183bb0();
    temp_v2 = DAT_0059dbb4;
    piVar6 = (int *)(DAT_0059dbb4 + 0x1258);
    temp_v1 = *piVar6;
    temp_v3 = piVar6[temp_v1 + 2];
    *piVar6 = temp_v1 - 1;
    if (*(char *)(temp_v2 + 0x1270) != '\0' || temp_v3 != piVar6[temp_v1 + 1]) {
      (**(romwright_code **)(temp_v2 + 0x1274))();
      *(unsigned char *)(temp_v2 + 0x1270) = 0;
    }
    temp_v2 = FUN_00180008(0);
    if (temp_v2 != 0) {
      FUN_00162790(3,0xffffffff,&LAB_001673c4);
    }
    else {
      FUN_00162790(3,0xffffffff,&LAB_001673d0);
    }
    FUN_00162790(3,0xffffffff,&LAB_001673e0);
    FUN_00182884(1,temp_v0 + 0x10);
  }
  return 0;
}
