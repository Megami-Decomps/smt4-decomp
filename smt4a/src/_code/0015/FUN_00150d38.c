/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00150d38` (_code @ 0x150d38, 0x3b0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_1_stack;

extern int DAT_0057f65c; /* 0x57f65c */
extern int DAT_0059dbb4; /* 0x59dbb4 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00155024. */
extern int FUN_00169294(unsigned int, unsigned int, unsigned int);
extern int FUN_001692ac(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0016c4b8. */
/* Supplied declaration required: FUN_0019e3d0. */
/* Supplied declaration required: FUN_001a9698. */


void FUN_00150d38(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 5 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int *piVar7;
  int temp_v6;
  unsigned char temp_v7;
  unsigned int in_fpscr;
  float temp_v8;
  float temp_v9;
  float temp_v10;
  
  temp_v2 = DAT_0057f65c;
  piVar7 = (int *)(DAT_0057f65c + 0x1490);
  if (param_1 != 0) {
    *(unsigned int *)(*(int *)(DAT_0057f65c + 0x1038) + 0x14) = 0x200;
    *(unsigned int *)(*(int *)(temp_v2 + 0x1038) + 0x18) = 0x200;
    *(unsigned int *)(*piVar7 + 0x14) = *(unsigned int *)(*(int *)(temp_v2 + 0x1038) + 0x14);
    *(unsigned int *)(*piVar7 + 0x18) = *(unsigned int *)(*(int *)(temp_v2 + 0x1038) + 0x18);
    FUN_00155024(*(unsigned int *)(temp_v2 + 0x1038),*piVar7);
    *(int *)(*piVar7 + 0x14) = *(int *)(*piVar7 + 0x14) >> 1;
    *(int *)(*piVar7 + 0x18) = *(int *)(*piVar7 + 0x18) >> 1;
  }
  else {
    *(unsigned int *)(*(int *)(DAT_0057f65c + 0x103c) + 0x14) = 0x200;
    *(unsigned int *)(*(int *)(temp_v2 + 0x103c) + 0x18) = 0x200;
    *(unsigned int *)(*piVar7 + 0x14) = *(unsigned int *)(*(int *)(temp_v2 + 0x103c) + 0x14);
    *(unsigned int *)(*piVar7 + 0x18) = *(unsigned int *)(*(int *)(temp_v2 + 0x103c) + 0x18);
    FUN_00155024(*(unsigned int *)(temp_v2 + 0x103c),*piVar7);
    *(int *)(*piVar7 + 0x14) = *(int *)(*piVar7 + 0x14) >> 1;
    *(int *)(*piVar7 + 0x18) = *(int *)(*piVar7 + 0x18) >> 1;
  }
  temp_v10 = 400.0f;
  temp_v6 = *(int *)(temp_v2 + 0x1490);
  temp_v8 = 2.0f;
  FUN_001a9698();
  temp_v7 = *(char *)(temp_v2 + 0x1034) != '\0';
  if (temp_v7) {
    *(unsigned int *)(temp_v6 + 0x3c) = 1;
    *(unsigned int *)(temp_v6 + 0x40) = 1;
  }
  VectorSignedToFloat(*(unsigned int *)(temp_v6 + 0x14),(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v9 = (float)VectorSignedToFloat(*(unsigned int *)(temp_v6 + 0x18),(unsigned char)(in_fpscr >> 0x16) & 3);
  if (!temp_v7) {
    *(unsigned int *)(temp_v6 + 0x3c) = 0;
    *(unsigned int *)(temp_v6 + 0x40) = 0;
  }
  temp_v5 = DAT_0059dbb4;
  temp_v9 = (temp_v10 / temp_v8) / temp_v9;
  temp_v0 = FUN_001692ac(1,0);
  piVar7 = (int *)(temp_v5 + 0x1258);
  temp_v3 = *piVar7;
  temp_v4 = piVar7[temp_v3 + 2];
  *piVar7 = temp_v3 + 1;
  piVar7[temp_v3 + 3] = temp_v0;
  if (*(char *)(temp_v5 + 0x1270) != '\0' || temp_v4 != temp_v0) {
    (**(romwright_code **)(temp_v5 + 0x1274))();
    *(unsigned char *)(temp_v5 + 0x1270) = 0;
  }
  temp_v5 = DAT_0059dbb4;
  temp_v0 = *(int *)(temp_v2 + 0x1030);
  if (temp_v0 != 0) {
    if (temp_v0 != 1) {
      if (temp_v0 == 2) {
        temp_v0 = FUN_00169294(6,1,2);
        piVar7 = (int *)(temp_v5 + 0x12b8);
        temp_v3 = piVar7[*piVar7 + 2];
        piVar7[*piVar7 + 2] = temp_v0;
        if (!(*(char *)(temp_v5 + 0x12d0) == '\0' && temp_v3 == temp_v0)) {
          (**(romwright_code **)(temp_v5 + 0x12d4))();
          *(unsigned char *)(temp_v5 + 0x12d0) = 0;
        }
      }
    }
    else {
      temp_v0 = FUN_00169294(6,1,0);
      piVar7 = (int *)(temp_v5 + 0x12b8);
      temp_v3 = piVar7[*piVar7 + 2];
      piVar7[*piVar7 + 2] = temp_v0;
      if (!(*(char *)(temp_v5 + 0x12d0) == '\0' && temp_v3 == temp_v0)) {
        (**(romwright_code **)(temp_v5 + 0x12d4))();
        *(unsigned char *)(temp_v5 + 0x12d0) = 0;
      }
    }
  }
  else {
    temp_v0 = FUN_00169294(6,7,0);
    piVar7 = (int *)(temp_v5 + 0x12b8);
    temp_v3 = piVar7[*piVar7 + 2];
    piVar7[*piVar7 + 2] = temp_v0;
    if (!(*(char *)(temp_v5 + 0x12d0) == '\0' && temp_v3 == temp_v0)) {
      (**(romwright_code **)(temp_v5 + 0x12d4))();
      *(unsigned char *)(temp_v5 + 0x12d0) = 0;
    }
  }
  FUN_0016c4b8(DAT_0059dbb4,temp_v6);
  temp_v1 = *(unsigned int *)(temp_v2 + 0x1028);
  FUN_0019e3d0(temp_v1,temp_v1,temp_v1,temp_v1,0,0,0,temp_v9);
  temp_v6 = DAT_0059dbb4;
  if (*(int *)(temp_v2 + 0x1030) != 0) {
    temp_v2 = FUN_00169294(6,7,0);
    piVar7 = (int *)(temp_v6 + 0x12b8);
    temp_v5 = piVar7[*piVar7 + 2];
    piVar7[*piVar7 + 2] = temp_v2;
    if (*(char *)(temp_v6 + 0x12d0) != '\0' || temp_v5 != temp_v2) {
      (**(romwright_code **)(temp_v6 + 0x12d4))();
      *(unsigned char *)(temp_v6 + 0x12d0) = 0;
    }
  }
  temp_v2 = DAT_0059dbb4;
  piVar7 = (int *)(DAT_0059dbb4 + 0x1258);
  temp_v6 = *piVar7;
  temp_v5 = piVar7[temp_v6 + 2];
  *piVar7 = temp_v6 - 1;
  if (*(char *)(temp_v2 + 0x1270) != '\0' || temp_v5 != piVar7[temp_v6 + 1]) {
    (**(romwright_code **)(temp_v2 + 0x1274))();
    *(unsigned char *)(temp_v2 + 0x1270) = 0;
  }
  return;
}
