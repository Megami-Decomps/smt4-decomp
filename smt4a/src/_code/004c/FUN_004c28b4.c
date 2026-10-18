/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004c28b4` (_code @ 0x4c28b4, 0x220 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 7 slot(s), 23 byte(s) */
typedef struct {
    unsigned char sp38; /* 0x38: local_38 */
    unsigned short sp4E; /* 0x4e: local_4e */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
} param_1_stack;

extern unsigned int DAT_00571408; /* 0x571408 */
extern unsigned int DAT_0057140c; /* 0x57140c */

/* Supplied declaration required: FUN_0014aa78. */
/* Supplied declaration required: FUN_0034a290. */
/* Supplied declaration required: FUN_003e8bb0. */
/* Supplied declaration required: FUN_003f0e20. */
/* Supplied declaration required: FUN_004bd098. */
/* Supplied declaration required: FUN_004c39b0. */


void FUN_004c28b4(unsigned int param_1)

{
/* irregular: 6 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  int temp_v1;
  unsigned short temp_v2 [10];
  unsigned char temp_v3 [22];
  short temp_v4;
  char temp_v5;
  
  puVar1 = (unsigned int *)FUN_0014aa78();
  FUN_003f0e20(puVar1,param_1);
  temp_v2[0] = 0;
  temp_v2[1] = 0;
  temp_v2[2] = 0;
  temp_v2[3] = 0;
  temp_v2[4] = 0;
  temp_v2[5] = 0;
  temp_v2[6] = 0;
  temp_v2[7] = 0;
  temp_v2[8] = 0;
  temp_v2[9] = 0;
  FUN_004c39b0();
  temp_v1 = 0;
  do {
    if (temp_v2[temp_v1] != 0) {
      FUN_0034a290();
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 9);
  temp_v1 = 0;
  do {
    if (temp_v2[temp_v1] != 0) {
      FUN_0034a290();
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 9);
  temp_v0 = FUN_0014aa78();
  FUN_003e8bb0(temp_v3,temp_v0,puVar1);
  if (((temp_v5 != '\0') && ((puVar1[0x9d] & 0x10) != 0)) &&
     ((puVar1[1] & DAT_0057140c) != 0 || (DAT_00571408 & *puVar1) != 0)) {
    FUN_004bd098(puVar1[0xff],(int)temp_v4);
  }
  return;
}
