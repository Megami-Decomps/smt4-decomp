/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0020aba0` (_code @ 0x20aba0, 0x134 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0057f268; /* 0x57f268 */

/* Supplied declaration required: FUN_001517b4. */
/* Supplied declaration required: FUN_0026e848. */
/* Supplied declaration required: FUN_0026fa30. */
/* Supplied declaration required: FUN_002884c8. */
extern int FUN_002a4878(int);
extern int FUN_002a4894(int);
extern unsigned int FUN_002c2c4c(int);
extern int FUN_002c2c68(int);
/* Supplied declaration required: aeabi_idivmod. */


unsigned int FUN_0020aba0(int param_1,int param_2)

{
/* irregular: 1 goto(s); 7 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  
  temp_v3 = DAT_0057f268;
  if (param_1 == 0) {
    return 0;
  }
  temp_v6 = 3;
  temp_v0 = FUN_002c2c4c(param_1);
  aeabi_idivmod(*(unsigned int *)(param_1 + 0x50),temp_v0);
  if (temp_v4 != 0) {
    temp_v1 = FUN_002a4894(param_1);
    temp_v2 = FUN_002c2c68(param_1);
    if (temp_v1 == temp_v2 - 1) {
      temp_v0 = FUN_002c2c4c(param_1);
      aeabi_idivmod(*(unsigned int *)(param_1 + 0x50),temp_v0);
      temp_v6 = temp_v5 - 1;
    }
  }
  if (*(char *)(temp_v3 + 0x42) != '\0') {
    return 0;
  }
  if (*(int *)(temp_v3 + 0x30) < 2) {
    return 0;
  }
  if ((param_2 != 0) || (temp_v3 = FUN_002a4878(param_1), temp_v3 == 0)) {
    temp_v3 = 4;
    FUN_001517b4(4,1);
    if (temp_v3 != 0) {
      FUN_0026e848(param_1);
      FUN_0026fa30();
      return 1;
    }
    if (param_2 == 0) goto LAB_0020ac8c;
  }
  else {
LAB_0020ac8c:
    temp_v3 = FUN_002a4878(param_1);
    if (temp_v3 != temp_v6) {
      return 0;
    }
  }
  temp_v3 = 3;
  FUN_001517b4(3,1);
  if (temp_v3 == 0) {
    return 0;
  }
  FUN_002884c8(param_1);
  FUN_0026fa30();
  return 1;
}
