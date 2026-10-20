/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0034e784` (_code @ 0x34e784, 0x2e4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int efctSetSpeed(void);
int FUN_001835b4(int, int, int, int, int, int);
int FUN_0035ae58(int, int, int, int, int);

typedef int romwright_code(...);
/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp38; /* 0x38: local_38 */
} param_2_stack;

extern int g_renderCtx; /* 0x59dbb4 */

extern int FUN_001654d8(void);
extern int FUN_001654e4(int);
/* Supplied declaration required: efctSetSpeed. */
extern int FUN_00169294(unsigned int, unsigned int, unsigned int);
extern int FUN_001834a4(unsigned int, int);
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: FUN_0035ae58. */


void FUN_0034e784(int param_1,int param_2)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int *piVar7;
  
  if (*(char *)(param_1 + 0x38b9) == '\0') {
    param_2 = param_2 * 8;
    if (param_2 >= 0x29) {
      param_2 = 0x28;
    }
    if (*(int *)(param_1 + 0x3890) < 4) {
      temp_v1 = FUN_001654d8();
      temp_v2 = FUN_001654e4(param_1 + 0x12b8);
      temp_v1 = temp_v1 + *(int *)(param_1 + 0x41a0);
      temp_v2 = temp_v2 + *(int *)(param_1 + 0x41a4);
      efctSetSpeed();
      temp_v3 = FUN_001834a4(0xd,*(int *)(param_1 + 0x3890) + 0x52);
      temp_v0 = g_renderCtx;
      temp_v4 = FUN_00169294(6,1,0);
      piVar7 = (int *)(temp_v0 + 0x12b8);
      temp_v5 = piVar7[*piVar7 + 2];
      piVar7[*piVar7 + 2] = temp_v4;
      if (*(char *)(temp_v0 + 0x12d0) != '\0' || temp_v5 != temp_v4) {
        (**(romwright_code **)(temp_v0 + 0x12d4))();
        *(unsigned char *)(temp_v0 + 0x12d0) = 0;
      }
      FUN_001835b4(2,0xd,0x4f,*(short *)(temp_v3 + 8) + temp_v1,*(short *)(temp_v3 + 10) + temp_v2,0x2e);
      FUN_001835b4(2,0xd,0x4e,*(short *)(temp_v3 + 8) + temp_v1,
                   (*(short *)(temp_v3 + 10) + temp_v2) - param_2,0x2e);
      temp_v0 = g_renderCtx;
      piVar7 = (int *)(g_renderCtx + 0x1318);
      temp_v4 = piVar7[*piVar7 + 2];
      piVar7[*piVar7 + 2] = 3;
      if (*(char *)(temp_v0 + 0x1330) != '\0' || temp_v4 != 3) {
        (**(romwright_code **)(temp_v0 + 0x1334))();
        *(unsigned char *)(temp_v0 + 0x1330) = 0;
      }
      FUN_0035ae58(*(short *)(temp_v3 + 8) + temp_v1,*(short *)(temp_v3 + 10) + temp_v2,
                   (int)**(short **)(temp_v3 + 0xc),(*(short **)(temp_v3 + 0xc))[1] - param_2,1);
      temp_v0 = g_renderCtx;
      temp_v4 = FUN_00169294(6,1,0);
      piVar7 = (int *)(temp_v0 + 0x12b8);
      temp_v5 = piVar7[*piVar7 + 2];
      piVar7[*piVar7 + 2] = temp_v4;
      if (*(char *)(temp_v0 + 0x12d0) != '\0' || temp_v5 != temp_v4) {
        (**(romwright_code **)(temp_v0 + 0x12d4))();
        *(unsigned char *)(temp_v0 + 0x12d0) = 0;
      }
      FUN_001835b4(2,0xd,0x50,*(short *)(temp_v3 + 8) + temp_v1,*(short *)(temp_v3 + 10) + temp_v2,0x2e);
      FUN_001835b4(2,0xd,0x51,*(short *)(temp_v3 + 8) + temp_v1,*(short *)(temp_v3 + 10) + temp_v2,0x2e);
      temp_v0 = g_renderCtx;
      piVar7 = (int *)(g_renderCtx + 0x1318);
      temp_v1 = piVar7[*piVar7 + 2];
      piVar7[*piVar7 + 2] = 0;
      if (*(char *)(temp_v0 + 0x1330) != '\0' || temp_v1 != 0) {
        (**(romwright_code **)(temp_v0 + 0x1334))();
        *(unsigned char *)(temp_v0 + 0x1330) = 0;
      }
      temp_v0 = g_renderCtx;
      temp_v1 = FUN_00169294(6,7,0);
      piVar7 = (int *)(temp_v0 + 0x12b8);
      temp_v2 = piVar7[*piVar7 + 2];
      piVar7[*piVar7 + 2] = temp_v1;
      if (*(char *)(temp_v0 + 0x12d0) != '\0' || temp_v2 != temp_v1) {
        (**(romwright_code **)(temp_v0 + 0x12d4))();
        *(unsigned char *)(temp_v0 + 0x12d0) = 0;
      }
      efctSetSpeed();
      return;
    }
  }
  return;
}

} /* extern "C" */
