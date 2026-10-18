/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0025f538` (_code @ 0x25f538, 0x1ac bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

extern int DAT_0044ea00; /* 0x44ea00 */

extern int FUN_002bef70(int);
extern int FUN_002bef7c(void);
/* Supplied declaration required: FUN_002bf460. */
extern int FUN_002bf6d0(unsigned int, int);
/* Supplied declaration required: FUN_002bf710. */
extern int FUN_002c5fa4(unsigned int, unsigned int, unsigned int);


void FUN_0025f538(int param_1)

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
    temp_v1 = FUN_002bef7c();
    temp_v2 = FUN_002bef70(param_1 + 0x12b8);
    FUN_002bf710();
    temp_v3 = FUN_002bf6d0(0x15,*(int *)(param_1 + 0x305c) + 0x52);
    temp_v0 = DAT_0044ea00;
    temp_v4 = FUN_002c5fa4(6,1,0);
    piVar7 = (int *)(temp_v0 + 0x12ac);
    temp_v5 = piVar7[*piVar7 + 2];
    piVar7[*piVar7 + 2] = temp_v4;
    if (*(char *)(temp_v0 + 0x12c4) != '\0' || temp_v5 != temp_v4) {
      (**(romwright_code **)(temp_v0 + 0x12c8))();
      *(unsigned char *)(temp_v0 + 0x12c4) = 0;
    }
    FUN_002bf460(2,0x15,0x4b,*(short *)(temp_v3 + 8) + temp_v1,*(short *)(temp_v3 + 10) + temp_v2,0x29);
    FUN_002bf460(2,0x15,0x4a,*(short *)(temp_v3 + 8) + temp_v1,*(short *)(temp_v3 + 10) + temp_v2,0x29);
    FUN_002bf460(2,0x15,0x4c,*(short *)(temp_v3 + 8) + temp_v1,*(short *)(temp_v3 + 10) + temp_v2,0x29);
    FUN_002bf460(2,0x15,0x4d,*(short *)(temp_v3 + 8) + temp_v1,*(short *)(temp_v3 + 10) + temp_v2,0x29);
    temp_v0 = DAT_0044ea00;
    temp_v1 = FUN_002c5fa4(6,7,0);
    piVar7 = (int *)(temp_v0 + 0x12ac);
    temp_v2 = piVar7[*piVar7 + 2];
    piVar7[*piVar7 + 2] = temp_v1;
    if (*(char *)(temp_v0 + 0x12c4) != '\0' || temp_v2 != temp_v1) {
      (**(romwright_code **)(temp_v0 + 0x12c8))();
      *(unsigned char *)(temp_v0 + 0x12c4) = 0;
    }
    FUN_002bf710();
    return;
  }
  return;
}
