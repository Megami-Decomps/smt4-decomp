/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0025ccac` (_code @ 0x25ccac, 0x518 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002bf288(...);
int FUN_002bf538(void);

typedef int romwright_code(...);
/* stack frame of param_2: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp40; /* 0x40: local_40 */
} param_2_stack;

extern int g_titleScene; /* 0x44ea00 */

extern int FUN_0029e908(int);
extern int FUN_002bed98(int);
extern int FUN_002beda4(void);
/* Supplied declaration required: FUN_002bf288. */
extern int FUN_002bf4f8(unsigned int, int);
/* Supplied declaration required: FUN_002bf538. */
extern int packNibblesAndByte(unsigned int, unsigned int, unsigned int);


void FUN_0025ccac(int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int *piVar7;
  int temp_v6;
  
  if ((*(char *)(param_1 + 0x3084) == '\0') && (*(int *)(param_1 + 0x305c) < 4)) {
    temp_v0 = FUN_002beda4();
    temp_v1 = FUN_002bed98(param_1 + 0x12b8);
    temp_v2 = FUN_002bf4f8(0x15,*(int *)(param_1 + 0x305c) + 0x5a);
    temp_v6 = g_titleScene;
    temp_v3 = packNibblesAndByte(6,1,0);
    piVar7 = (int *)(temp_v6 + 0x12ac);
    temp_v4 = piVar7[*piVar7 + 2];
    piVar7[*piVar7 + 2] = temp_v3;
    if (*(char *)(temp_v6 + 0x12c4) != '\0' || temp_v4 != temp_v3) {
      (**(romwright_code **)(temp_v6 + 0x12c8))();
      *(unsigned char *)(temp_v6 + 0x12c4) = 0;
    }
    FUN_002bf288(2,0x15,0x56,*(short *)(temp_v2 + 8) + temp_v0,*(short *)(temp_v2 + 10) + temp_v1,0x29);
    FUN_002bf288(2,0x15,0x57,*(short *)(temp_v2 + 8) + temp_v0,*(short *)(temp_v2 + 10) + temp_v1,0x29);
    FUN_002bf288(2,0x15,0x58,*(short *)(temp_v2 + 8) + temp_v0,*(short *)(temp_v2 + 10) + temp_v1,0x29);
    FUN_002bf288(2,0x15,0x59,*(short *)(temp_v2 + 8) + temp_v0,*(short *)(temp_v2 + 10) + temp_v1,0x29);
    temp_v6 = g_titleScene;
    temp_v2 = packNibblesAndByte(6,7,0);
    piVar7 = (int *)(temp_v6 + 0x12ac);
    temp_v3 = piVar7[*piVar7 + 2];
    piVar7[*piVar7 + 2] = temp_v2;
    if (*(char *)(temp_v6 + 0x12c4) != '\0' || temp_v3 != temp_v2) {
      (**(romwright_code **)(temp_v6 + 0x12c8))();
      *(unsigned char *)(temp_v6 + 0x12c4) = 0;
    }
    FUN_002bf538();
    FUN_002bf538();
    if (param_2 != 0) {
      temp_v6 = 0;
      do {
        if (*(char *)(param_1 + temp_v6 + 0x345c) != '\0') {
          temp_v3 = FUN_002bf4f8(0x15,temp_v6 + 0x52);
          temp_v2 = g_titleScene;
          temp_v4 = packNibblesAndByte(6,1,0);
          piVar7 = (int *)(temp_v2 + 0x12ac);
          temp_v5 = piVar7[*piVar7 + 2];
          piVar7[*piVar7 + 2] = temp_v4;
          if (*(char *)(temp_v2 + 0x12c4) != '\0' || temp_v5 != temp_v4) {
            (**(romwright_code **)(temp_v2 + 0x12c8))();
            *(unsigned char *)(temp_v2 + 0x12c4) = 0;
          }
          FUN_002bf538();
          FUN_002bf288(2,0x15,0x1cb,*(short *)(temp_v3 + 8) + temp_v0,*(short *)(temp_v3 + 10) + temp_v1,
                       0x2e);
          FUN_002bf538();
          FUN_002bf288(2,0x15,0x4b,*(short *)(temp_v3 + 8) + temp_v0,*(short *)(temp_v3 + 10) + temp_v1,0x2e
                      );
          FUN_002bf288(2,0x15,0x4a,*(short *)(temp_v3 + 8) + temp_v0,*(short *)(temp_v3 + 10) + temp_v1,0x2e
                      );
          FUN_002bf288(2,0x15,0x4c,*(short *)(temp_v3 + 8) + temp_v0,*(short *)(temp_v3 + 10) + temp_v1,0x2e
                      );
          FUN_002bf288(2,0x15,0x4d,*(short *)(temp_v3 + 8) + temp_v0,*(short *)(temp_v3 + 10) + temp_v1,0x2e
                      );
          temp_v2 = g_titleScene;
          temp_v3 = packNibblesAndByte(6,7,0);
          piVar7 = (int *)(temp_v2 + 0x12ac);
          temp_v4 = piVar7[*piVar7 + 2];
          piVar7[*piVar7 + 2] = temp_v3;
          if (*(char *)(temp_v2 + 0x12c4) != '\0' || temp_v4 != temp_v3) {
            (**(romwright_code **)(temp_v2 + 0x12c8))();
            *(unsigned char *)(temp_v2 + 0x12c4) = 0;
          }
        }
        temp_v6 = temp_v6 + 1;
      } while (temp_v6 < 4);
    }
    else {
      temp_v6 = FUN_0029e908(param_1 + 0x33a8);
      temp_v2 = FUN_002bf4f8(0x15,temp_v6 + 0x52);
      temp_v6 = g_titleScene;
      temp_v3 = packNibblesAndByte(6,1,0);
      piVar7 = (int *)(temp_v6 + 0x12ac);
      temp_v4 = piVar7[*piVar7 + 2];
      piVar7[*piVar7 + 2] = temp_v3;
      if (*(char *)(temp_v6 + 0x12c4) != '\0' || temp_v4 != temp_v3) {
        (**(romwright_code **)(temp_v6 + 0x12c8))();
        *(unsigned char *)(temp_v6 + 0x12c4) = 0;
      }
      FUN_002bf538();
      FUN_002bf288(2,0x15,0x1cb,*(short *)(temp_v2 + 8) + temp_v0,*(short *)(temp_v2 + 10) + temp_v1,0x2e);
      FUN_002bf538();
      FUN_002bf288(2,0x15,0x4b,*(short *)(temp_v2 + 8) + temp_v0,*(short *)(temp_v2 + 10) + temp_v1,0x2e);
      FUN_002bf288(2,0x15,0x4a,*(short *)(temp_v2 + 8) + temp_v0,*(short *)(temp_v2 + 10) + temp_v1,0x2e);
      FUN_002bf288(2,0x15,0x4c,*(short *)(temp_v2 + 8) + temp_v0,*(short *)(temp_v2 + 10) + temp_v1,0x2e);
      FUN_002bf288(2,0x15,0x4d,*(short *)(temp_v2 + 8) + temp_v0,*(short *)(temp_v2 + 10) + temp_v1,0x2e);
      temp_v6 = g_titleScene;
      temp_v0 = packNibblesAndByte(6,7,0);
      piVar7 = (int *)(temp_v6 + 0x12ac);
      temp_v1 = piVar7[*piVar7 + 2];
      piVar7[*piVar7 + 2] = temp_v0;
      if (*(char *)(temp_v6 + 0x12c4) != '\0' || temp_v1 != temp_v0) {
        (**(romwright_code **)(temp_v6 + 0x12c8))();
        *(unsigned char *)(temp_v6 + 0x12c4) = 0;
      }
    }
    FUN_002bf538();
    return;
  }
  return;
}

} /* extern "C" */
