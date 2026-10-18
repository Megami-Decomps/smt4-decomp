/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001678a8` (_code @ 0x1678a8, 0x200 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_001678a8_arg0 fn_001678a8_arg0;
struct fn_001678a8_arg0 {
    unsigned char pad_0x0[0x4];
    void *field_0x4; /* +0x4 */
    byte field_0x8; /* +0x8 */
    byte field_0x9; /* +0x9 */
};

typedef int romwright_code();
extern int DAT_0059dbb4; /* 0x59dbb4 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_001634b4. */
/* Supplied declaration required: FUN_001677c0. */
extern int FUN_00169294(unsigned int, unsigned int, unsigned int);
extern unsigned int FUN_001692ac(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0016c69c. */
/* Supplied declaration required: FUN_0016c6f0. */
/* Supplied declaration required: FUN_00183bb0. */
/* Supplied declaration required: FUN_00184518. */
/* Supplied declaration required: FUN_001879d0. */


void FUN_001678a8(fn_001678a8_arg0 *param_1)

{
/* irregular: irregular input(s): in_fpscr; 8 native warning(s); review required */
  unsigned char temp_v0;
  unsigned short temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  int *piVar7;
  unsigned int in_fpscr;
  float temp_v6;
  int temp_v7;
  
  if (param_1->field_0x8 != 0) {
    temp_v3 = FUN_001692ac(1,0);
    FUN_0016c6f0(DAT_0059dbb4,3,temp_v3);
    FUN_001677c0();
    FUN_00183bb0();
    temp_v6 = 0.25f;
    FUN_001879d0(DAT_0059dbb4);
    temp_v2 = DAT_0059dbb4;
    temp_v7 = (int)temp_v6;
    temp_v0 = param_1->field_0x9;
    if ((temp_v0 == 7 || temp_v0 == 8) || temp_v0 == 9) {
      temp_v4 = FUN_00169294(6,1,0);
      piVar7 = (int *)(temp_v2 + 0x12b8);
      temp_v5 = piVar7[*piVar7 + 2];
      piVar7[*piVar7 + 2] = temp_v4;
      if (*(char *)(temp_v2 + 0x12d0) != '\0' || temp_v5 != temp_v4) {
        (**(romwright_code **)(temp_v2 + 0x12d4))();
        *(unsigned char *)(temp_v2 + 0x12d0) = 0;
      }
      VectorSignedToFloat(temp_v7,(unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_001634b4(&param_1[0x6a].field_0x4);
      temp_v2 = DAT_0059dbb4;
      temp_v4 = FUN_00169294(6,7,0);
      piVar7 = (int *)(temp_v2 + 0x12b8);
      temp_v5 = piVar7[*piVar7 + 2];
      piVar7[*piVar7 + 2] = temp_v4;
      if (*(char *)(temp_v2 + 0x12d0) != '\0' || temp_v5 != temp_v4) {
        (**(romwright_code **)(temp_v2 + 0x12d4))();
        *(unsigned char *)(temp_v2 + 0x12d0) = 0;
      }
    }
    temp_v1 = *(unsigned short *)((int)param_1->field_0x4 + 0x48);
    if (temp_v1 < 3) {
      FUN_00184518(&param_1[0x3b].field_0x8,0x1f);
    }
    else if (temp_v1 < 5) {
      FUN_00184518(&param_1[0x3b].field_0x8,0x1b);
    }
    else if (temp_v1 < 7) {
      FUN_00184518(&param_1[0x3b].field_0x8,0x1c);
    }
    else if (temp_v1 < 9) {
      FUN_00184518(&param_1[0x3b].field_0x8,0x1e);
    }
    else {
      FUN_00184518(&param_1[0x3b].field_0x8,0x1d);
    }
    VectorSignedToFloat(temp_v7,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_001634b4(&param_1[0x24].field_0x4);
    VectorSignedToFloat(temp_v7,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_001634b4(&param_1[0x3b].field_0x8);
    VectorSignedToFloat(temp_v7,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_001634b4(&param_1[0x47].field_0x4);
    if (param_1->field_0x9 == 0xb) {
      VectorSignedToFloat(temp_v7,(unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_001634b4(&param_1[0x20e].field_0x4);
    }
    VectorSignedToFloat(temp_v7,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_001634b4(&param_1[0x5e].field_0x8);
    FUN_0016c69c(DAT_0059dbb4,3);
  }
  return;
}
