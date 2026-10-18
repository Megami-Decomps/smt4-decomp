/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0026ce14` (_code @ 0x26ce14, 0x134 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043dcf0; /* 0x43dcf0 */

/* Supplied declaration required: FUN_00293268. */
/* Supplied declaration required: FUN_002932d8. */
/* Supplied declaration required: FUN_002937e0. */
extern int FUN_0029e908(int);
extern unsigned int FUN_0029e958(int);
extern int FUN_0029ee54(int);
extern int FUN_0029efa8(int);
/* Supplied declaration required: FUN_002c1658. */
/* Supplied declaration required: FUN_002c5f60. */


unsigned int FUN_0026ce14(int param_1,int param_2)

{
/* irregular: 1 goto(s); 7 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  
  temp_v3 = DAT_0043dcf0;
  if (param_1 == 0) {
    return 0;
  }
  temp_v6 = 3;
  temp_v0 = FUN_0029e958(param_1);
  FUN_002c5f60(*(unsigned int *)(param_1 + 0x50),temp_v0);
  if (temp_v4 != 0) {
    temp_v1 = FUN_0029efa8(param_1);
    temp_v2 = FUN_0029ee54(param_1);
    if (temp_v1 == temp_v2 - 1) {
      temp_v0 = FUN_0029e958(param_1);
      FUN_002c5f60(*(unsigned int *)(param_1 + 0x50),temp_v0);
      temp_v6 = temp_v5 - 1;
    }
  }
  if (*(char *)(temp_v3 + 0x42) != '\0') {
    return 0;
  }
  if (*(int *)(temp_v3 + 0x30) < 2) {
    return 0;
  }
  if ((param_2 != 0) || (temp_v3 = FUN_0029e908(param_1), temp_v3 == 0)) {
    temp_v3 = 4;
    FUN_002c1658(4,1);
    if (temp_v3 != 0) {
      FUN_002932d8(param_1);
      FUN_002937e0();
      return 1;
    }
    if (param_2 == 0) goto LAB_0026cf00;
  }
  else {
LAB_0026cf00:
    temp_v3 = FUN_0029e908(param_1);
    if (temp_v3 != temp_v6) {
      return 0;
    }
  }
  temp_v3 = 3;
  FUN_002c1658(3,1);
  if (temp_v3 == 0) {
    return 0;
  }
  FUN_00293268(param_1);
  FUN_002937e0();
  return 1;
}
