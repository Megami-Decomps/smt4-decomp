/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003914bc` (_code @ 0x3914bc, 0x24c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 9 slot(s), 36 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
} param_1_stack;

extern int DAT_0044ea00; /* 0x44ea00 */

/* Supplied declaration required: FUN_0023347c. */
extern int FUN_002337a0(unsigned int *);
/* Supplied declaration required: FUN_00240e8c. */
/* Supplied declaration required: FUN_00290c38. */
/* Supplied declaration required: FUN_0029ebc4. */
/* Supplied declaration required: FUN_002bef14. */
/* Supplied declaration required: FUN_002bf558. */
/* Supplied declaration required: FUN_002bf710. */
/* Supplied declaration required: FUN_002c1abc. */
/* Supplied declaration required: FUN_002c1b64. */
/* Supplied declaration required: FUN_002c3ba8. */
extern int FUN_002c5f7c(unsigned int, unsigned int);
/* Supplied declaration required: FUN_00390be8. */


void FUN_003914bc(unsigned int *param_1)

{
/* irregular: 11 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  int *piVar7;
  unsigned int temp_v6;
  
  if ((*param_1 & 0x10000) == 0) {
    FUN_002c3ba8(DAT_0044ea00);
    FUN_002bef14();
    FUN_002bf710();
    temp_v1 = DAT_0044ea00;
    temp_v0 = FUN_002c5f7c(1,0);
    piVar7 = (int *)(temp_v1 + 0x124c);
    temp_v4 = *piVar7;
    temp_v5 = piVar7[temp_v4 + 2];
    *piVar7 = temp_v4 + 1;
    piVar7[temp_v4 + 3] = temp_v0;
    if (*(char *)(temp_v1 + 0x1264) != '\0' || temp_v5 != temp_v0) {
      (**(romwright_code **)(temp_v1 + 0x1268))();
      *(unsigned char *)(temp_v1 + 0x1264) = 0;
    }
    FUN_002bf558(2,0x3a,7,0,0,0x81);
    temp_v1 = FUN_0029ebc4(param_1 + 0x90);
    FUN_00240e8c(param_1 + 0x90);
    temp_v6 = param_1[0x91];
    temp_v0 = 0;
    if (temp_v0 < (int)temp_v6) {
      do {
        temp_v4 = FUN_002337a0(param_1 + 0x90);
        FUN_00390be8(param_1,temp_v0,temp_v1 + temp_v0,temp_v4 == temp_v1 + temp_v0);
        temp_v0 = temp_v0 + 1;
      } while (temp_v0 < (int)temp_v6);
    }
    temp_v2 = FUN_00240e8c(param_1 + 0x90);
    temp_v3 = FUN_0029ebc4(param_1 + 0x90);
    FUN_0023347c(param_1 + 0xba,temp_v3,temp_v2);
    temp_v1 = (int)(short)param_1[0xd0];
    temp_v0 = (int)(short)param_1[0xcf];
    temp_v4 = (int)*(short *)((int)param_1 + 0x33e);
    if ((char)param_1[0xd3] == '\0') {
      temp_v1 = -1;
      temp_v0 = -1;
      temp_v4 = -1;
    }
    FUN_00290c38(param_1[0xce],0,0,0x3a,0x4b,0x4c,0x4d,0x47,0x49,0x48,0x4a,temp_v1,temp_v0,temp_v4,0x81,0)
    ;
    temp_v1 = DAT_0044ea00;
    piVar7 = (int *)(DAT_0044ea00 + 0x124c);
    temp_v0 = *piVar7;
    temp_v4 = piVar7[temp_v0 + 2];
    *piVar7 = temp_v0 - 1;
    if (*(char *)(temp_v1 + 0x1264) != '\0' || temp_v4 != piVar7[temp_v0 + 1]) {
      (**(romwright_code **)(temp_v1 + 0x1268))();
      *(unsigned char *)(temp_v1 + 0x1264) = 0;
    }
    FUN_002bef14();
    FUN_002bf710();
    FUN_002c1b64(DAT_0044ea00);
    FUN_002c1abc(DAT_0044ea00);
    return;
  }
  return;
}
