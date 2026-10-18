/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00228140` (_code @ 0x228140, 0x104 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_1_stack;

/* Supplied declaration required: FUN_0022ad74. */
/* Supplied declaration required: FUN_00282b94. */
/* Supplied declaration required: FUN_002840b8. */
/* Supplied declaration required: FUN_00293c98. */
/* Supplied declaration required: FUN_0033832c. */


unsigned int FUN_00228140(unsigned int param_1)

{
/* irregular: 5 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned short temp_v4 [12];
  
  puVar1 = (unsigned int *)FUN_00293c98();
  FUN_00282b94(puVar1,param_1);
  temp_v4[0] = 0;
  temp_v4[1] = 0;
  temp_v4[2] = 0;
  temp_v4[3] = 0;
  temp_v4[4] = 0;
  temp_v4[5] = 0;
  temp_v4[6] = 0;
  temp_v4[7] = 0;
  temp_v4[8] = 0;
  temp_v4[9] = 0;
  FUN_0022ad74();
  temp_v3 = 0;
  temp_v2 = 0;
  do {
    temp_v0 = (unsigned int)temp_v4[temp_v2];
    if (((temp_v0 != 0) && (FUN_002840b8(), temp_v0 != 0)) && (temp_v3 < (*(unsigned int *)(temp_v0 + 0x38) & 3))) {
      temp_v1 = FUN_00293c98();
      FUN_0033832c(temp_v1,puVar1,*(unsigned int *)(temp_v0 + 0x38) & 3);
      if (temp_v1 == 0) {
        temp_v3 = *(unsigned int *)(temp_v0 + 0x38) & 3;
      }
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 9);
  if (temp_v3 != 0) {
    temp_v2 = FUN_00293c98();
    FUN_0033832c(temp_v2,puVar1,temp_v3);
    if (temp_v2 != 0) {
      return 0;
    }
    if (temp_v3 == 1) {
      temp_v0 = *puVar1 | 0x2000;
    }
    else {
      if (temp_v3 != 2) {
        return temp_v3;
      }
      temp_v0 = *puVar1 | 0x4000;
    }
    *puVar1 = temp_v0;
    return temp_v3;
  }
  return 0;
}
