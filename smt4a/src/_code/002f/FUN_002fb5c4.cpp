/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fb5c4` (_code @ 0x2fb5c4, 0x494 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001634b4(int);
int FUN_001879d0(int);
int VectorSignedToFloat(int, int);

typedef int romwright_code(...);
extern unsigned int DAT_00573c70; /* 0x573c70 */
extern unsigned int DAT_00573c74; /* 0x573c74 */
extern int DAT_0059dbb4; /* 0x59dbb4 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern int FUN_0014aa78(void);
/* Supplied declaration required: FUN_001634b4. */
extern int FUN_001654d8(int);
extern int FUN_00169294(unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_001879d0. */


void FUN_002fb5c4(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int *piVar5;
  int temp_v4;
  int temp_v5;
  unsigned int in_fpscr;
  float temp_v6;
  
  if ((*(int *)(param_1 + 0x243c) != 0) &&
     (temp_v0 = FUN_0014aa78(),
     (*(unsigned int *)(temp_v0 + 0x45a0) & DAT_00573c70) == 0 &&
     (*(unsigned int *)(temp_v0 + 0x45a4) & DAT_00573c74) == 0)) {
    temp_v6 = 0.29f;
    FUN_001879d0(DAT_0059dbb4);
    temp_v0 = FUN_001654d8(param_1 + 0x20f0);
    temp_v5 = 0;
    temp_v0 = temp_v0 + (int)temp_v6;
    do {
      temp_v4 = DAT_0059dbb4;
      temp_v1 = FUN_00169294(6,1,0);
      piVar5 = (int *)(temp_v4 + 0x12b8);
      temp_v2 = piVar5[*piVar5 + 2];
      piVar5[*piVar5 + 2] = temp_v1;
      if (*(char *)(temp_v4 + 0x12d0) != '\0' || temp_v2 != temp_v1) {
        (**(romwright_code **)(temp_v4 + 0x12d4))();
        *(unsigned char *)(temp_v4 + 0x12d0) = 0;
      }
      temp_v4 = param_1 + temp_v5 * 0x8c;
      if (*(char *)(temp_v4 + 0x1685) != '\0') {
        VectorSignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
        FUN_001634b4(temp_v4 + 0x1600);
      }
      temp_v1 = DAT_0059dbb4;
      temp_v2 = FUN_00169294(6,7,0);
      piVar5 = (int *)(temp_v1 + 0x12b8);
      temp_v3 = piVar5[*piVar5 + 2];
      piVar5[*piVar5 + 2] = temp_v2;
      if (*(char *)(temp_v1 + 0x12d0) != '\0' || temp_v3 != temp_v2) {
        (**(romwright_code **)(temp_v1 + 0x12d4))();
        *(unsigned char *)(temp_v1 + 0x12d0) = 0;
      }
      if (*(char *)(temp_v4 + 0xa5) != '\0') {
        VectorSignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
        FUN_001634b4(temp_v4 + 0x20);
      }
      temp_v1 = DAT_0059dbb4;
      temp_v2 = FUN_00169294(6,1,0);
      piVar5 = (int *)(temp_v1 + 0x12b8);
      temp_v3 = piVar5[*piVar5 + 2];
      piVar5[*piVar5 + 2] = temp_v2;
      if (*(char *)(temp_v1 + 0x12d0) != '\0' || temp_v3 != temp_v2) {
        (**(romwright_code **)(temp_v1 + 0x12d4))();
        *(unsigned char *)(temp_v1 + 0x12d0) = 0;
      }
      if (*(char *)(temp_v4 + 0x110d) != '\0') {
        VectorSignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
        FUN_001634b4(temp_v4 + 0x1088);
      }
      temp_v1 = DAT_0059dbb4;
      temp_v2 = FUN_00169294(6,7,0);
      piVar5 = (int *)(temp_v1 + 0x12b8);
      temp_v3 = piVar5[*piVar5 + 2];
      piVar5[*piVar5 + 2] = temp_v2;
      if (*(char *)(temp_v1 + 0x12d0) != '\0' || temp_v3 != temp_v2) {
        (**(romwright_code **)(temp_v1 + 0x12d4))();
        *(unsigned char *)(temp_v1 + 0x12d0) = 0;
      }
      if (*(char *)(temp_v4 + 0x61d) != '\0') {
        VectorSignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
        FUN_001634b4(temp_v4 + 0x598);
      }
      temp_v4 = DAT_0059dbb4;
      temp_v5 = temp_v5 + 1;
    } while (temp_v5 < 10);
    temp_v5 = FUN_00169294(6,1,0);
    piVar5 = (int *)(temp_v4 + 0x12b8);
    temp_v1 = piVar5[*piVar5 + 2];
    piVar5[*piVar5 + 2] = temp_v5;
    if (*(char *)(temp_v4 + 0x12d0) != '\0' || temp_v1 != temp_v5) {
      (**(romwright_code **)(temp_v4 + 0x12d4))();
      *(unsigned char *)(temp_v4 + 0x12d0) = 0;
    }
    if (*(int *)(param_1 + 0x243c) == 2) {
      temp_v5 = 0x14;
      do {
        temp_v4 = param_1 + temp_v5 * 0x8c;
        if (*(char *)(temp_v4 + 0xa5) != '\0') {
          *(unsigned int *)(temp_v4 + 0x50) = *(unsigned int *)(param_1 + 0x2444);
          VectorSignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
          FUN_001634b4(temp_v4 + 0x20);
        }
        temp_v5 = temp_v5 + 1;
      } while (temp_v5 < 0x1e);
    }
    else {
      temp_v5 = (int)*(short *)(param_1 + 0x244a);
      temp_v4 = (int)*(short *)(param_1 + 0x2448);
      if (0 < *(short *)(param_1 + 0x244e)) {
        temp_v5 = temp_v5 + *(short *)(param_1 + 0x244e);
      }
      temp_v1 = 0;
      if (0 < *(short *)(param_1 + 0x244c)) {
        temp_v4 = temp_v4 + *(short *)(param_1 + 0x244c);
      }
      if (0 < temp_v5) {
        do {
          temp_v2 = param_1 + ((temp_v4 - temp_v1) + 0x13) * 0x8c;
          *(unsigned int *)(temp_v2 + 0x50) = *(unsigned int *)(param_1 + 0x2444);
          VectorSignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
          FUN_001634b4(temp_v2 + 0x20);
          temp_v1 = temp_v1 + 1;
        } while (temp_v1 < temp_v5);
      }
    }
    temp_v5 = DAT_0059dbb4;
    temp_v4 = FUN_00169294(6,7,0);
    piVar5 = (int *)(temp_v5 + 0x12b8);
    temp_v1 = piVar5[*piVar5 + 2];
    piVar5[*piVar5 + 2] = temp_v4;
    if (*(char *)(temp_v5 + 0x12d0) != '\0' || temp_v1 != temp_v4) {
      (**(romwright_code **)(temp_v5 + 0x12d4))();
      *(unsigned char *)(temp_v5 + 0x12d0) = 0;
    }
    temp_v5 = DAT_0059dbb4;
    temp_v4 = FUN_00169294(6,1,0);
    piVar5 = (int *)(temp_v5 + 0x12b8);
    temp_v1 = piVar5[*piVar5 + 2];
    piVar5[*piVar5 + 2] = temp_v4;
    if (*(char *)(temp_v5 + 0x12d0) != '\0' || temp_v1 != temp_v4) {
      (**(romwright_code **)(temp_v5 + 0x12d4))();
      *(unsigned char *)(temp_v5 + 0x12d0) = 0;
    }
    temp_v5 = 0x32;
    do {
      temp_v4 = param_1 + temp_v5 * 0x8c;
      if (*(char *)(temp_v4 + 0xa5) != '\0') {
        *(unsigned int *)(temp_v4 + 0x50) = *(unsigned int *)(param_1 + (temp_v5 - 0x32) * 4 + 0x2478);
        VectorSignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
        FUN_001634b4(temp_v4 + 0x20);
        VectorSignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
        FUN_001634b4(temp_v4 + 0x20);
      }
      temp_v4 = DAT_0059dbb4;
      temp_v5 = temp_v5 + 1;
    } while (temp_v5 < 0x3c);
    temp_v0 = FUN_00169294(6,7,0);
    piVar5 = (int *)(temp_v4 + 0x12b8);
    temp_v5 = piVar5[*piVar5 + 2];
    piVar5[*piVar5 + 2] = temp_v0;
    if (*(char *)(temp_v4 + 0x12d0) != '\0' || temp_v5 != temp_v0) {
      (**(romwright_code **)(temp_v4 + 0x12d4))();
      *(unsigned char *)(temp_v4 + 0x12d0) = 0;
    }
  }
  return;
}

} /* extern "C" */
