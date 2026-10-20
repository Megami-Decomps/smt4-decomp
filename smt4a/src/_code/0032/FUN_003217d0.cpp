/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003217d0` (_code @ 0x3217d0, 0x2b0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int CONCAT44(double, int);
int FUN_001634b4(int);
int FUN_001677c0(void);
int FUN_001835b4(int, int, int, int, int, int);
int FUN_001879d0(int);
int FUN_003b21a4(int);
int VectorSignedToFloat(int, int);

typedef int romwright_code(...);
/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_1_stack;

extern unsigned int DAT_0057a9b0; /* 0x57a9b0 */
extern unsigned int DAT_0057a9b4; /* 0x57a9b4 */
extern int DAT_0059dbb4; /* 0x59dbb4 */

/* Unsupported intrinsic, declaration required: CONCAT44 (PIECE). */
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: NAN (FLOAT_NAN). */
extern int FUN_0014aa78(void);
/* Supplied declaration required: FUN_001634b4. */
/* Supplied declaration required: FUN_001677c0. */
extern int FUN_00169294(unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: FUN_001879d0. */
/* Supplied declaration required: FUN_003b21a4. */


void FUN_003217d0(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 8 native warning(s); review required */
  unsigned int temp_v0;
  unsigned char temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int *piVar7;
  unsigned int in_fpscr;
  float temp_v6;
  float temp_v7;
  unsigned long long temp_v8;
  
  if (*(char *)(param_1 + 0x403) != '\0') {
    FUN_003b21a4(param_1);
    return;
  }
  temp_v7 = 0.29f;
  temp_v6 = temp_v7;
  FUN_001879d0(DAT_0059dbb4);
  temp_v8 = CONCAT44(temp_v6,(int)temp_v7);
  temp_v3 = FUN_0014aa78();
  if ((*(unsigned int *)(temp_v3 + 0x45a0) & DAT_0057a9b0) == 0 &&
      (DAT_0057a9b4 & *(unsigned int *)(temp_v3 + 0x45a4)) == 0) {
    VectorSignedToFloat((int)temp_v8,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_001634b4(param_1 + 0x2dc);
  }
  temp_v6 = (float)((unsigned long long)temp_v8 >> 0x20);
  FUN_001879d0(DAT_0059dbb4);
  temp_v3 = (int)temp_v6;
  if (*(char *)(param_1 + 0x400) != '\0') {
    temp_v7 = 0.0f;
    temp_v6 = *(float *)(param_1 + 0x40);
    temp_v0 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v6 < 0.0f) << 0x1f) | ((unsigned int)(temp_v6 == 0.0f) << 0x1e);
    in_fpscr = temp_v0 | ((unsigned int)(temp_v6 != temp_v6) << 0x1c);
    temp_v1 = (unsigned char)(temp_v0 >> 0x18);
    if (!(unsigned char)((temp_v1 >> 6) & 1) && temp_v1 >> 7 == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
      FUN_001677c0();
      FUN_001835b4(2,0xc,1000,temp_v3,0,0x1f);
      temp_v6 = *(float *)(param_1 + 0x158);
      temp_v0 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v6 < temp_v7) << 0x1f) |
              ((unsigned int)(temp_v6 == temp_v7) << 0x1e);
      in_fpscr = temp_v0 | ((unsigned int)((temp_v6 != temp_v6) || (temp_v7 != temp_v7)) << 0x1c);
      temp_v1 = (unsigned char)(temp_v0 >> 0x18);
      if (!(unsigned char)((temp_v1 >> 6) & 1) && temp_v1 >> 7 == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
        FUN_001677c0();
        temp_v2 = DAT_0059dbb4;
        temp_v4 = FUN_00169294(6,1,0);
        piVar7 = (int *)(temp_v2 + 0x12b8);
        temp_v5 = piVar7[*piVar7 + 2];
        piVar7[*piVar7 + 2] = temp_v4;
        if (*(char *)(temp_v2 + 0x12d0) != '\0' || temp_v5 != temp_v4) {
          (**(romwright_code **)(temp_v2 + 0x12d4))();
          *(unsigned char *)(temp_v2 + 0x12d0) = 0;
        }
        FUN_001835b4(2,0xc,0x3e9,temp_v3,0,0x24);
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
      FUN_001677c0();
    }
  }
  if (*(char *)(param_1 + 0x401) != '\0') {
    VectorSignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_001634b4(param_1 + 0x20);
    VectorSignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_001634b4(param_1 + 0x1c4);
    temp_v2 = DAT_0059dbb4;
    temp_v4 = FUN_00169294(6,1,0);
    piVar7 = (int *)(temp_v2 + 0x12b8);
    temp_v5 = piVar7[*piVar7 + 2];
    piVar7[*piVar7 + 2] = temp_v4;
    if (*(char *)(temp_v2 + 0x12d0) != '\0' || temp_v5 != temp_v4) {
      (**(romwright_code **)(temp_v2 + 0x12d4))();
      *(unsigned char *)(temp_v2 + 0x12d0) = 0;
    }
    VectorSignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_001634b4(param_1 + 0x138);
    temp_v2 = DAT_0059dbb4;
    temp_v4 = FUN_00169294(6,7,0);
    piVar7 = (int *)(temp_v2 + 0x12b8);
    temp_v5 = piVar7[*piVar7 + 2];
    piVar7[*piVar7 + 2] = temp_v4;
    if (*(char *)(temp_v2 + 0x12d0) != '\0' || temp_v5 != temp_v4) {
      (**(romwright_code **)(temp_v2 + 0x12d4))();
      *(unsigned char *)(temp_v2 + 0x12d0) = 0;
    }
    VectorSignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_001634b4(param_1 + 0xac);
    return;
  }
  return;
}

} /* extern "C" */
