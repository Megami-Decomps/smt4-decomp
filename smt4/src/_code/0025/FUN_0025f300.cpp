/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0025f300` (_code @ 0x25f300, 0x1ac bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002bf288(int, int, int, int, int, int);
int FUN_002bf538(void);

typedef int romwright_code(...);
/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

extern int g_titleScene; /* 0x44ea00 */

extern int FUN_002bed98(int);
extern int FUN_002beda4(void);
/* Supplied declaration required: FUN_002bf288. */
extern int FUN_002bf4f8(unsigned int, int);
/* Supplied declaration required: FUN_002bf538. */
extern int packNibblesAndByte(unsigned int, unsigned int, unsigned int);


void FUN_0025f300(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int *piVar7;
  
  if ((*(char *)(param_1 + 0x3084) == '\0') && (*(int *)(param_1 + 0x305c) < 4)) {
    temp_v1 = FUN_002beda4();
    temp_v2 = FUN_002bed98(param_1 + 0x12b8);
    FUN_002bf538();
    temp_v3 = FUN_002bf4f8(0x15,*(int *)(param_1 + 0x305c) + 0x52);
    temp_v0 = g_titleScene;
    temp_v4 = packNibblesAndByte(6,1,0);
    piVar7 = (int *)(temp_v0 + 0x12ac);
    temp_v5 = piVar7[*piVar7 + 2];
    piVar7[*piVar7 + 2] = temp_v4;
    if (*(char *)(temp_v0 + 0x12c4) != '\0' || temp_v5 != temp_v4) {
      (**(romwright_code **)(temp_v0 + 0x12c8))();
      *(unsigned char *)(temp_v0 + 0x12c4) = 0;
    }
    FUN_002bf288(2,0x15,0x4b,*(short *)(temp_v3 + 8) + temp_v1,*(short *)(temp_v3 + 10) + temp_v2,0x29);
    FUN_002bf288(2,0x15,0x4a,*(short *)(temp_v3 + 8) + temp_v1,*(short *)(temp_v3 + 10) + temp_v2,0x29);
    FUN_002bf288(2,0x15,0x4c,*(short *)(temp_v3 + 8) + temp_v1,*(short *)(temp_v3 + 10) + temp_v2,0x29);
    FUN_002bf288(2,0x15,0x4d,*(short *)(temp_v3 + 8) + temp_v1,*(short *)(temp_v3 + 10) + temp_v2,0x29);
    temp_v0 = g_titleScene;
    temp_v1 = packNibblesAndByte(6,7,0);
    piVar7 = (int *)(temp_v0 + 0x12ac);
    temp_v2 = piVar7[*piVar7 + 2];
    piVar7[*piVar7 + 2] = temp_v1;
    if (*(char *)(temp_v0 + 0x12c4) != '\0' || temp_v2 != temp_v1) {
      (**(romwright_code **)(temp_v0 + 0x12c8))();
      *(unsigned char *)(temp_v0 + 0x12c4) = 0;
    }
    FUN_002bf538();
    return;
  }
  return;
}

} /* extern "C" */
