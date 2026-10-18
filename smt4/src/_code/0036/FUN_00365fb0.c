/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00365fb0` (_code @ 0x365fb0, 0x2a4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_3: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_3_stack;

extern unsigned int DAT_00476640; /* 0x476640 */
extern unsigned char DAT_004efdf4; /* 0x4efdf4 */
extern unsigned int DAT_004efe24; /* 0x4efe24 */
extern unsigned int DAT_004efe28; /* 0x4efe28 */
extern unsigned int DAT_004efe2c; /* 0x4efe2c */
extern unsigned int DAT_004efe30; /* 0x4efe30 */

/* Supplied declaration required: FUN_0023d20c. */
extern unsigned int FUN_002ac94c(void);
extern int FUN_002bfefc(unsigned int *);
/* Supplied declaration required: nn_math_ARMv6_MTX34CopyAsm. */
/* Supplied declaration required: nw_gfx_WorldMatrixUpdater_CalculateWorldBasic. */


void FUN_00365fb0(int *param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 3 native warning(s); review required */
  unsigned char temp_v0;
  unsigned char temp_v1;
  unsigned char *puVar3;
  unsigned char *puVar4;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int *puVar9;
  unsigned int *puVar10;
  float temp_v6;
  float temp_v7;
  unsigned int temp_v8;
  float temp_v9;
  float temp_v10;
  float temp_v11;
  
  if ((~param_1[0x22] & 1U) != 0) {
    param_1[0xe] = param_1[0xe] & 0xfffffffd;
  }
  else if ((~param_1[0xe] & 2U) == 0) {
    if ((int *)param_1[3] != (int *)0x0) {
      puVar3 = (unsigned char *)(**(romwright_code **)(*(int *)param_1[3] + 0x18))();
      puVar4 = (unsigned char *)(**(romwright_code **)(*(int *)param_1[3] + 0x1c))();
    }
    else {
      temp_v8 = 0x3f800000;
      if (((DAT_00476640 & 1) == 0) && (temp_v4 = FUN_002bfefc(&DAT_00476640), temp_v4 != 0)) {
        temp_v5 = FUN_002ac94c();
        nn_math_ARMv6_MTX34CopyAsm(&DAT_004efdf4,temp_v5);
        DAT_004efe30 = 0x7e1;
        DAT_004efe24 = temp_v8;
        DAT_004efe28 = temp_v8;
        DAT_004efe2c = temp_v8;
      }
      puVar3 = &DAT_004efdf4;
      if (((DAT_00476640 & 1) == 0) && (temp_v4 = FUN_002bfefc(&DAT_00476640), temp_v4 != 0)) {
        temp_v5 = FUN_002ac94c();
        nn_math_ARMv6_MTX34CopyAsm(&DAT_004efdf4,temp_v5);
        DAT_004efe30 = 0x7e1;
        DAT_004efe24 = temp_v8;
        DAT_004efe28 = temp_v8;
        DAT_004efe2c = temp_v8;
      }
      puVar4 = &DAT_004efdf4;
    }
    nw_gfx_WorldMatrixUpdater_CalculateWorldBasic
              (param_2,param_1 + 0x2f,&temp_v9,param_1 + 0x13,puVar3,puVar4);
    temp_v6 = 1.0000001e-06f;
    if ((int)(temp_v9 * temp_v9 + temp_v10 * temp_v10 + temp_v11 * temp_v11) < 0x358637be) {
      temp_v7 = -1.0000001e-06f;
      temp_v0 = 0.0f <= temp_v9;
      temp_v1 = 0.0f <= temp_v10;
      temp_v9 = temp_v7;
      if (temp_v0) {
        temp_v9 = temp_v6;
      }
      temp_v0 = temp_v11 < 0.0f;
      temp_v10 = temp_v7;
      if (temp_v1) {
        temp_v10 = temp_v6;
      }
      temp_v11 = temp_v6;
      if (temp_v0) {
        temp_v11 = temp_v7;
      }
    }
    param_1[0x3b] = (int)temp_v9;
    param_1[0x3c] = (int)temp_v10;
    param_1[0x3d] = (int)temp_v11;
    FUN_0023d20c(param_1 + 0x23,param_1 + 0x2f,param_1 + 0x1f);
    temp_v2 = param_1[0x3e];
    temp_v3 = temp_v2 & 0xfffff81f;
    param_1[0x3e] = temp_v3;
    if ((~temp_v3 & 8) != 0) {
      temp_v2 = temp_v2 & 0xfffff81f;
      param_1[0x3e] = temp_v2;
      if ((((float)param_1[0x3b] == (float)param_1[0x3c]) &&
          ((float)param_1[0x3b] == (float)param_1[0x3d])) &&
         (param_1[0x3e] = temp_v2 | 0x400, param_1[0x3b] == 0x3f800000)) {
        param_1[0x3e] = temp_v2 | 0x600;
      }
    }
    *(unsigned char *)(param_1 + 0x4b) = 0;
  }
  (**(romwright_code **)(*param_1 + 0x28))(param_1);
  param_1[0x22] = param_1[0x22] & 0xfffff7ff;
  puVar10 = *(unsigned int **)(param_1[0x4c] + 0xc);
  for (puVar9 = *(unsigned int **)(param_1[0x4c] + 8); puVar9 != puVar10; puVar9 = puVar9 + 1) {
    (*(romwright_code *)**(unsigned int **)*puVar9)((unsigned int *)*puVar9,param_1,param_3);
  }
  return;
}
