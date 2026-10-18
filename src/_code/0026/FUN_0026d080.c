/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0026d080` (_code @ 0x26d080, 0x134 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043dcf0; /* 0x43dcf0 */

/* Supplied declaration required: FUN_0029350c. */
/* Supplied declaration required: FUN_0029357c. */
/* Supplied declaration required: FUN_00293a84. */
extern int FUN_0029eba8(int);
extern unsigned int FUN_0029ebf8(int);
extern int FUN_0029f0f4(int);
extern int FUN_0029f248(int);
extern int FUN_002c1830(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c615c. */


unsigned int FUN_0026d080(int param_1,int param_2)

{
/* irregular: 1 goto(s); 6 native warning(s); review required */
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
  temp_v0 = FUN_0029ebf8(param_1);
  FUN_002c615c(*(unsigned int *)(param_1 + 0x50),temp_v0);
  if (temp_v4 != 0) {
    temp_v1 = FUN_0029f248(param_1);
    temp_v2 = FUN_0029f0f4(param_1);
    if (temp_v1 == temp_v2 - 1) {
      temp_v0 = FUN_0029ebf8(param_1);
      FUN_002c615c(*(unsigned int *)(param_1 + 0x50),temp_v0);
      temp_v6 = temp_v5 - 1;
    }
  }
  if (*(char *)(temp_v3 + 0x42) != '\0') {
    return 0;
  }
  if (*(int *)(temp_v3 + 0x30) < 2) {
    return 0;
  }
  if ((param_2 != 0) || (temp_v3 = FUN_0029eba8(param_1), temp_v3 == 0)) {
    temp_v3 = FUN_002c1830(4,1);
    if (temp_v3 != 0) {
      FUN_0029357c(param_1);
      FUN_00293a84();
      return 1;
    }
    if (param_2 == 0) goto LAB_0026d16c;
  }
  else {
LAB_0026d16c:
    temp_v3 = FUN_0029eba8(param_1);
    if (temp_v3 != temp_v6) {
      return 0;
    }
  }
  temp_v3 = FUN_002c1830(3,1);
  if (temp_v3 == 0) {
    return 0;
  }
  FUN_0029350c(param_1);
  FUN_00293a84();
  return 1;
}
