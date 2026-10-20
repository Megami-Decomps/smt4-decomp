/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00336574` (_code @ 0x336574, 0x530 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int efctSetSpeed(void);
int FUN_001835b4(...);

typedef int romwright_code(...);
/* stack frame of param_2: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp40; /* 0x40: local_40 */
} param_2_stack;

extern int g_renderCtx; /* 0x59dbb4 */

extern int FUN_001654d8(void);
extern int FUN_001654e4(int);
/* Supplied declaration required: efctSetSpeed. */
extern int packNibblesAndByte(unsigned int, unsigned int, unsigned int);
extern int FUN_001834a4(unsigned int, int);
/* Supplied declaration required: FUN_001835b4. */
extern int FUN_002a4878(int);


void FUN_00336574(int param_1,int param_2)

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
  
  if ((*(char *)(param_1 + 0x38b9) == '\0') && (*(int *)(param_1 + 0x3890) < 4)) {
    temp_v0 = FUN_001654d8();
    temp_v1 = FUN_001654e4(param_1 + 0x12b8);
    efctSetSpeed();
    temp_v2 = FUN_001834a4(0xd,*(int *)(param_1 + 0x3890) + 0x5a);
    temp_v6 = g_renderCtx;
    temp_v3 = packNibblesAndByte(6,1,0);
    piVar7 = (int *)(temp_v6 + 0x12b8);
    temp_v4 = piVar7[*piVar7 + 2];
    piVar7[*piVar7 + 2] = temp_v3;
    if (*(char *)(temp_v6 + 0x12d0) != '\0' || temp_v4 != temp_v3) {
      (**(romwright_code **)(temp_v6 + 0x12d4))();
      *(unsigned char *)(temp_v6 + 0x12d0) = 0;
    }
    FUN_001835b4(2,0xd,0x56,*(short *)(temp_v2 + 8) + temp_v0,*(short *)(temp_v2 + 10) + temp_v1,0x29);
    FUN_001835b4(2,0xd,0x57,*(short *)(temp_v2 + 8) + temp_v0,*(short *)(temp_v2 + 10) + temp_v1,0x29);
    FUN_001835b4(2,0xd,0x58,*(short *)(temp_v2 + 8) + temp_v0,*(short *)(temp_v2 + 10) + temp_v1,0x29);
    FUN_001835b4(2,0xd,0x59,*(short *)(temp_v2 + 8) + temp_v0,*(short *)(temp_v2 + 10) + temp_v1,0x29);
    temp_v6 = g_renderCtx;
    temp_v2 = packNibblesAndByte(6,7,0);
    piVar7 = (int *)(temp_v6 + 0x12b8);
    temp_v3 = piVar7[*piVar7 + 2];
    piVar7[*piVar7 + 2] = temp_v2;
    if (*(char *)(temp_v6 + 0x12d0) != '\0' || temp_v3 != temp_v2) {
      (**(romwright_code **)(temp_v6 + 0x12d4))();
      *(unsigned char *)(temp_v6 + 0x12d0) = 0;
    }
    efctSetSpeed();
    efctSetSpeed();
    if (param_2 != 0) {
      temp_v6 = 0;
      do {
        if (*(char *)(param_1 + temp_v6 + 0x3c84) != '\0') {
          temp_v3 = FUN_001834a4(0xd,temp_v6 + 0x52);
          temp_v2 = g_renderCtx;
          temp_v4 = packNibblesAndByte(6,1,0);
          piVar7 = (int *)(temp_v2 + 0x12b8);
          temp_v5 = piVar7[*piVar7 + 2];
          piVar7[*piVar7 + 2] = temp_v4;
          if (*(char *)(temp_v2 + 0x12d0) != '\0' || temp_v5 != temp_v4) {
            (**(romwright_code **)(temp_v2 + 0x12d4))();
            *(unsigned char *)(temp_v2 + 0x12d0) = 0;
          }
          efctSetSpeed();
          FUN_001835b4(2,0xd,0x1cb,*(short *)(temp_v3 + 8) + temp_v0,*(short *)(temp_v3 + 10) + temp_v1,0x2e
                      );
          efctSetSpeed();
          FUN_001835b4(2,0xd,0x4b,*(short *)(temp_v3 + 8) + temp_v0,*(short *)(temp_v3 + 10) + temp_v1,0x2e)
          ;
          FUN_001835b4(2,0xd,0x4a,*(short *)(temp_v3 + 8) + temp_v0,*(short *)(temp_v3 + 10) + temp_v1,0x2e)
          ;
          FUN_001835b4(2,0xd,0x4c,*(short *)(temp_v3 + 8) + temp_v0,*(short *)(temp_v3 + 10) + temp_v1,0x2e)
          ;
          FUN_001835b4(2,0xd,0x4d,*(short *)(temp_v3 + 8) + temp_v0,*(short *)(temp_v3 + 10) + temp_v1,0x2e)
          ;
          temp_v2 = g_renderCtx;
          temp_v3 = packNibblesAndByte(6,7,0);
          piVar7 = (int *)(temp_v2 + 0x12b8);
          temp_v4 = piVar7[*piVar7 + 2];
          piVar7[*piVar7 + 2] = temp_v3;
          if (*(char *)(temp_v2 + 0x12d0) != '\0' || temp_v4 != temp_v3) {
            (**(romwright_code **)(temp_v2 + 0x12d4))();
            *(unsigned char *)(temp_v2 + 0x12d0) = 0;
          }
        }
        temp_v6 = temp_v6 + 1;
      } while (temp_v6 < 4);
    }
    else {
      temp_v6 = FUN_002a4878(param_1 + 0x3bdc);
      temp_v2 = FUN_001834a4(0xd,temp_v6 + 0x52);
      temp_v6 = g_renderCtx;
      temp_v3 = packNibblesAndByte(6,1,0);
      piVar7 = (int *)(temp_v6 + 0x12b8);
      temp_v4 = piVar7[*piVar7 + 2];
      piVar7[*piVar7 + 2] = temp_v3;
      if (*(char *)(temp_v6 + 0x12d0) != '\0' || temp_v4 != temp_v3) {
        (**(romwright_code **)(temp_v6 + 0x12d4))();
        *(unsigned char *)(temp_v6 + 0x12d0) = 0;
      }
      efctSetSpeed();
      FUN_001835b4(2,0xd,0x1cb,*(short *)(temp_v2 + 8) + temp_v0,*(short *)(temp_v2 + 10) + temp_v1,0x2e);
      efctSetSpeed();
      FUN_001835b4(2,0xd,0x4b,*(short *)(temp_v2 + 8) + temp_v0,*(short *)(temp_v2 + 10) + temp_v1,0x2e);
      FUN_001835b4(2,0xd,0x4a,*(short *)(temp_v2 + 8) + temp_v0,*(short *)(temp_v2 + 10) + temp_v1,0x2e);
      FUN_001835b4(2,0xd,0x4c,*(short *)(temp_v2 + 8) + temp_v0,*(short *)(temp_v2 + 10) + temp_v1,0x2e);
      FUN_001835b4(2,0xd,0x4d,*(short *)(temp_v2 + 8) + temp_v0,*(short *)(temp_v2 + 10) + temp_v1,0x2e);
      temp_v6 = g_renderCtx;
      temp_v0 = packNibblesAndByte(6,7,0);
      piVar7 = (int *)(temp_v6 + 0x12b8);
      temp_v1 = piVar7[*piVar7 + 2];
      piVar7[*piVar7 + 2] = temp_v0;
      if (*(char *)(temp_v6 + 0x12d0) != '\0' || temp_v1 != temp_v0) {
        (**(romwright_code **)(temp_v6 + 0x12d4))();
        *(unsigned char *)(temp_v6 + 0x12d0) = 0;
      }
    }
    efctSetSpeed();
    return;
  }
  return;
}

} /* extern "C" */
