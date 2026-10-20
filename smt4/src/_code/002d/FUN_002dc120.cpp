/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002dc120` (_code @ 0x2dc120, 0x2c0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0029a17c(int, int, int, int, int);
int FUN_002bf288(int, int, int, int, int, int);
int FUN_002bf538(void);

typedef int romwright_code(...);
/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp30; /* 0x30: local_30 */
} param_2_stack;

extern int DAT_0044ea00; /* 0x44ea00 */

/* Supplied declaration required: FUN_0029a17c. */
extern int FUN_002bed98(int);
extern int FUN_002beda4(void);
/* Supplied declaration required: FUN_002bf288. */
extern int FUN_002bf4f8(unsigned int, int);
/* Supplied declaration required: FUN_002bf538. */
extern int FUN_002c5da8(unsigned int, unsigned int, unsigned int);


void FUN_002dc120(int param_1,int param_2)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int *piVar7;
  
  if (*(char *)(param_1 + 0x3084) == '\0') {
    param_2 = param_2 * 8;
    if (param_2 >= 0x29) {
      param_2 = 0x28;
    }
    if (*(int *)(param_1 + 0x305c) < 4) {
      temp_v1 = FUN_002beda4();
      temp_v2 = FUN_002bed98(param_1 + 0x12b8);
      temp_v1 = temp_v1 + *(int *)(param_1 + 0x3884);
      temp_v2 = temp_v2 + *(int *)(param_1 + 0x3888);
      FUN_002bf538();
      temp_v3 = FUN_002bf4f8(0x15,*(int *)(param_1 + 0x305c) + 0x52);
      temp_v0 = DAT_0044ea00;
      temp_v4 = FUN_002c5da8(6,1,0);
      piVar7 = (int *)(temp_v0 + 0x12ac);
      temp_v5 = piVar7[*piVar7 + 2];
      piVar7[*piVar7 + 2] = temp_v4;
      if (*(char *)(temp_v0 + 0x12c4) != '\0' || temp_v5 != temp_v4) {
        (**(romwright_code **)(temp_v0 + 0x12c8))();
        *(unsigned char *)(temp_v0 + 0x12c4) = 0;
      }
      FUN_002bf288(2,0x15,0x4f,*(short *)(temp_v3 + 8) + temp_v1,*(short *)(temp_v3 + 10) + temp_v2,0x2e);
      FUN_002bf288(2,0x15,0x4e,*(short *)(temp_v3 + 8) + temp_v1,
                   (*(short *)(temp_v3 + 10) + temp_v2) - param_2,0x2e);
      temp_v0 = DAT_0044ea00;
      piVar7 = (int *)(DAT_0044ea00 + 0x130c);
      temp_v4 = piVar7[*piVar7 + 2];
      piVar7[*piVar7 + 2] = 3;
      if (*(char *)(temp_v0 + 0x1324) != '\0' || temp_v4 != 3) {
        (**(romwright_code **)(temp_v0 + 0x1328))();
        *(unsigned char *)(temp_v0 + 0x1324) = 0;
      }
      FUN_0029a17c(*(short *)(temp_v3 + 8) + temp_v1,*(short *)(temp_v3 + 10) + temp_v2,
                   (int)**(short **)(temp_v3 + 0xc),(*(short **)(temp_v3 + 0xc))[1] - param_2,1);
      temp_v0 = DAT_0044ea00;
      temp_v4 = FUN_002c5da8(6,1,0);
      piVar7 = (int *)(temp_v0 + 0x12ac);
      temp_v5 = piVar7[*piVar7 + 2];
      piVar7[*piVar7 + 2] = temp_v4;
      if (*(char *)(temp_v0 + 0x12c4) != '\0' || temp_v5 != temp_v4) {
        (**(romwright_code **)(temp_v0 + 0x12c8))();
        *(unsigned char *)(temp_v0 + 0x12c4) = 0;
      }
      FUN_002bf288(2,0x15,0x50,*(short *)(temp_v3 + 8) + temp_v1,*(short *)(temp_v3 + 10) + temp_v2,0x2e);
      FUN_002bf288(2,0x15,0x51,*(short *)(temp_v3 + 8) + temp_v1,*(short *)(temp_v3 + 10) + temp_v2,0x2e);
      temp_v0 = DAT_0044ea00;
      piVar7 = (int *)(DAT_0044ea00 + 0x130c);
      temp_v1 = piVar7[*piVar7 + 2];
      piVar7[*piVar7 + 2] = 0;
      if (*(char *)(temp_v0 + 0x1324) != '\0' || temp_v1 != 0) {
        (**(romwright_code **)(temp_v0 + 0x1328))();
        *(unsigned char *)(temp_v0 + 0x1324) = 0;
      }
      temp_v0 = DAT_0044ea00;
      temp_v1 = FUN_002c5da8(6,7,0);
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
  }
  return;
}

} /* extern "C" */
