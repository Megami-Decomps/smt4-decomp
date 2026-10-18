/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001f67ec` (_code @ 0x1f67ec, 0x18c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern int DAT_0044ea00; /* 0x44ea00 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_002573c8. */
/* Supplied declaration required: FUN_002573d8. */
/* Supplied declaration required: FUN_0025b750. */
/* Supplied declaration required: FUN_002b7064. */
/* Supplied declaration required: FUN_002b70cc. */
/* Supplied declaration required: FUN_002c1b64. */
extern int FUN_002c5d80(unsigned int, unsigned int);


void FUN_001f67ec(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 7 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int *piVar6;
  int temp_v5;
  unsigned int in_fpscr;
  
  temp_v1 = *(unsigned int *)(param_1 + 0xc);
  temp_v0 = *(unsigned char *)(param_1 + 0xf);
  temp_v1 = (temp_v1 << 0x18) | (((temp_v1 >> 8) & 0xff) << 0x10) | (((temp_v1 >> 0x10) & 0xff) << 8);
  FUN_002c1b64(DAT_0044ea00,0);
  temp_v5 = DAT_0044ea00;
  temp_v2 = FUN_002c5d80(1,0);
  piVar6 = (int *)(temp_v5 + 0x124c);
  temp_v3 = *piVar6;
  temp_v4 = piVar6[temp_v3 + 2];
  *piVar6 = temp_v3 + 1;
  piVar6[temp_v3 + 3] = temp_v2;
  if (*(char *)(temp_v5 + 0x1264) != '\0' || temp_v4 != temp_v2) {
    (**(romwright_code **)(temp_v5 + 0x1268))();
    *(unsigned char *)(temp_v5 + 0x1264) = 0;
  }
  FUN_002573d8();
  FUN_002573c8(temp_v1 | temp_v0);
  temp_v5 = 0;
  do {
    VectorSignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_002b7064();
    VectorSignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_002b70cc();
    FUN_002573c8(temp_v1);
    temp_v5 = temp_v5 + 1;
  } while (temp_v5 < 0x13);
  FUN_0025b750();
  temp_v5 = DAT_0044ea00;
  piVar6 = (int *)(DAT_0044ea00 + 0x124c);
  temp_v2 = *piVar6;
  temp_v3 = piVar6[temp_v2 + 2];
  *piVar6 = temp_v2 - 1;
  if (*(char *)(temp_v5 + 0x1264) != '\0' || temp_v3 != piVar6[temp_v2 + 1]) {
    (**(romwright_code **)(temp_v5 + 0x1268))();
    *(unsigned char *)(temp_v5 + 0x1264) = 0;
  }
  return;
}
