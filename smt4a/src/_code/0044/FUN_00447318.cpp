/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00447318` (_code @ 0x447318, 0x2a0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001d3d38(int *, int *, int *);
int nn_math_ARMv6_MTX34CopyAsm(unsigned char *, unsigned int);
int nw_gfx_WorldMatrixUpdater_CalculateWorldBasic(unsigned int, int *, float *, int *, unsigned char *, unsigned char *);

typedef int romwright_code(...);
/* stack frame of param_3: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_3_stack;

extern unsigned int DAT_005c4c38; /* 0x5c4c38 */
extern unsigned char DAT_0064c0dc; /* 0x64c0dc */
extern unsigned int DAT_0064c10c; /* 0x64c10c */
extern unsigned int DAT_0064c110; /* 0x64c110 */
extern unsigned int DAT_0064c114; /* 0x64c114 */
extern unsigned int DAT_0064c118; /* 0x64c118 */

extern unsigned int FUN_001a1e28(void);
/* Supplied declaration required: FUN_001d3d38. */
extern int FUN_002eba64(unsigned int *);
/* Supplied declaration required: nn_math_ARMv6_MTX34CopyAsm. */
/* Supplied declaration required: nw_gfx_WorldMatrixUpdater_CalculateWorldBasic. */


void FUN_00447318(int *param_1,unsigned int param_2,unsigned int param_3)

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
      if (((DAT_005c4c38 & 1) == 0) && (temp_v4 = FUN_002eba64(&DAT_005c4c38), temp_v4 != 0)) {
        temp_v5 = FUN_001a1e28();
        nn_math_ARMv6_MTX34CopyAsm(&DAT_0064c0dc,temp_v5);
        DAT_0064c118 = 0x7e1;
        DAT_0064c10c = temp_v8;
        DAT_0064c110 = temp_v8;
        DAT_0064c114 = temp_v8;
      }
      puVar3 = &DAT_0064c0dc;
      if (((DAT_005c4c38 & 1) == 0) && (temp_v4 = FUN_002eba64(&DAT_005c4c38), temp_v4 != 0)) {
        temp_v5 = FUN_001a1e28();
        nn_math_ARMv6_MTX34CopyAsm(&DAT_0064c0dc,temp_v5);
        DAT_0064c118 = 0x7e1;
        DAT_0064c10c = temp_v8;
        DAT_0064c110 = temp_v8;
        DAT_0064c114 = temp_v8;
      }
      puVar4 = &DAT_0064c0dc;
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
    FUN_001d3d38(param_1 + 0x23,param_1 + 0x2f,param_1 + 0x1f);
    temp_v2 = param_1[0x3e];
    temp_v3 = temp_v2 & 0xfffff81f;
    param_1[0x3e] = temp_v3;
    if ((~temp_v3 & 8) != 0) {
      temp_v2 = temp_v2 & 0xfffff81f;
      param_1[0x3e] = temp_v2;
      temp_v6 = (float)param_1[0x3b];
      if (((temp_v6 == (float)param_1[0x3c]) && (temp_v6 == (float)param_1[0x3d])) &&
         (param_1[0x3e] = temp_v2 | 0x400, (float)param_1[0x3b] == 1.0f)) {
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

} /* extern "C" */
