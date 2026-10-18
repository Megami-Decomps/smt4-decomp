/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a80e0` (_code @ 0x2a80e0, 0xa8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 5 slot(s), 14 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned char sp24; /* 0x24: local_24 */
    unsigned char sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_1_stack;

extern signed char DAT_0044e3b0; /* 0x44e3b0 */

/* Supplied declaration required: FUN_0014fe08. */
/* Supplied declaration required: FUN_002bb490. */
/* Supplied declaration required: FUN_002c0efc. */
/* Supplied declaration required: FUN_002c14b8. */
/* Supplied declaration required: FUN_002c14e4. */


void FUN_002a80e0(unsigned int param_1)

{
/* irregular: 5 native warning(s); review required */
  char temp_v0;
  unsigned int temp_v1;
  char temp_v2 [4];
  char temp_v3 [12];
  
  temp_v0 = DAT_0044e3b0;
  if (DAT_0044e3b0 != '\0') {
    DAT_0044e3b0 = '\0';
    FUN_002c14e4(3);
    FUN_002c14b8(0);
  }
  while (temp_v1 = param_1, FUN_0014fe08(param_1,0,0,temp_v3,temp_v2,0),
        (temp_v1 & (int)temp_v3[0] & (int)temp_v2[0]) == 0) {
    FUN_002bb490(10000000,0);
  }
  if (temp_v0 == '\0') {
    return;
  }
  DAT_0044e3b0 = 1;
  FUN_002c0efc();
  return;
}
