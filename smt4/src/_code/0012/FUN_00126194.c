/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00126194` (_code @ 0x126194, 0x15c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern int DAT_0044ea00; /* 0x44ea00 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_002b93c8. */
/* Supplied declaration required: FUN_002ba12c. */
/* Supplied declaration required: FUN_002bed3c. */
/* Supplied declaration required: FUN_002bedb0. */
/* Supplied declaration required: FUN_002bee04. */
/* Supplied declaration required: FUN_002bf538. */
extern unsigned int FUN_002c5d80(unsigned int, unsigned int);
extern int FUN_002c5da8(unsigned int, unsigned int, unsigned int);


void FUN_00126194(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 7 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  int *piVar6;
  unsigned int in_fpscr;
  float temp_v5;
  int temp_v6;
  
  if (*(char *)(param_1 + 8) != '\0') {
    temp_v2 = FUN_002c5d80(1,0);
    FUN_002bee04(DAT_0044ea00,3,temp_v2);
    FUN_002bf538();
    FUN_002bed3c();
    temp_v5 = 0.27f;
    FUN_002ba12c(DAT_0044ea00);
    temp_v1 = DAT_0044ea00;
    temp_v6 = (int)temp_v5;
    temp_v0 = *(char *)(param_1 + 9);
    if ((temp_v0 == '\a' || temp_v0 == '\b') || temp_v0 == '\t') {
      temp_v3 = FUN_002c5da8(6,1,0);
      piVar6 = (int *)(temp_v1 + 0x12ac);
      temp_v4 = piVar6[*piVar6 + 2];
      piVar6[*piVar6 + 2] = temp_v3;
      if (*(char *)(temp_v1 + 0x12c4) != '\0' || temp_v4 != temp_v3) {
        (**(romwright_code **)(temp_v1 + 0x12c8))();
        *(unsigned char *)(temp_v1 + 0x12c4) = 0;
      }
      VectorSignedToFloat(temp_v6,(unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_002b93c8(param_1 + 0x40c);
      temp_v1 = DAT_0044ea00;
      temp_v3 = FUN_002c5da8(6,7,0);
      piVar6 = (int *)(temp_v1 + 0x12ac);
      temp_v4 = piVar6[*piVar6 + 2];
      piVar6[*piVar6 + 2] = temp_v3;
      if (*(char *)(temp_v1 + 0x12c4) != '\0' || temp_v4 != temp_v3) {
        (**(romwright_code **)(temp_v1 + 0x12c8))();
        *(unsigned char *)(temp_v1 + 0x12c4) = 0;
      }
    }
    VectorSignedToFloat(temp_v6,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_002b93c8(param_1 + 0xc4);
    VectorSignedToFloat(temp_v6,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_002b93c8(param_1 + 0x150);
    VectorSignedToFloat(temp_v6,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_002b93c8(param_1 + 0x1dc);
    VectorSignedToFloat(temp_v6,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_002b93c8(param_1 + 0x268);
    VectorSignedToFloat(temp_v6,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_002b93c8(param_1 + 0x380);
    FUN_002bedb0(DAT_0044ea00,3);
  }
  return;
}
