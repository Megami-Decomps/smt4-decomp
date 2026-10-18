/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004dcb40` (_code @ 0x4dcb40, 0x10c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_004dcb40_arg1 fn_004dcb40_arg1;
struct fn_004dcb40_arg1 {
    unsigned char pad_0x0[0xa4];
    int field_0xa4; /* +0xa4 */
    unsigned char pad_0xa8[0x1e2c];
    int field_0x1ed4; /* +0x1ed4 */
    unsigned char pad_0x1ed8[0x124];
    unsigned char field_0x1ffc; /* +0x1ffc */
    unsigned char pad_0x1ffd[0x25a3];
    undefined4 field_0x45a0; /* +0x45a0 */
    undefined4 field_0x45a4; /* +0x45a4 */
};

/* stack frame of param_6: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_6_stack;

extern unsigned int DAT_00571180; /* 0x571180 */
extern unsigned int DAT_00571184; /* 0x571184 */
extern unsigned int DAT_00571218; /* 0x571218 */
extern unsigned int DAT_0057121c; /* 0x57121c */
extern unsigned int DAT_00571228; /* 0x571228 */
extern unsigned int DAT_0057122c; /* 0x57122c */

/* Supplied declaration required: FUN_004e626c. */


void FUN_004dcb40(int *param_1,fn_004dcb40_arg1 *param_2,int param_3,int param_4,int param_5,
                 int param_6)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int *puVar4;
  int temp_v3;
  
  *param_1 = (int)param_2;
  temp_v3 = param_2->field_0xa4;
  *(unsigned char *)(param_1 + temp_v3 * 0x495 + 2) = 0;
  puVar4 = (unsigned int *)(*(int *)&param_2->field_0x1ffc + param_4 * 0x408);
  param_1[temp_v3 * 0x495 + 9] = (int)puVar4;
  param_1[temp_v3 * 0x495 + 10] = 0;
  if ((DAT_00571180 & *puVar4) == 0 && (puVar4[1] & DAT_00571184) == 0) {
    param_1[temp_v3 * 0x495 + 10] = param_2->field_0x1ed4 + (short)puVar4[2] * 0x1d0;
  }
  param_1[temp_v3 * 0x495 + 0xb] = (int)(puVar4 + 0x59);
  *(short *)(param_1 + temp_v3 * 0x495 + 0xc) = (short)param_4;
  param_1[temp_v3 * 0x495 + 0xd] = param_3;
  param_1[temp_v3 * 0x495 + 0xe] = param_5;
  param_1[temp_v3 * 0x495 + 0x161] = param_6;
  param_1[temp_v3 * 0x495 + 5] = 0;
  param_1[temp_v3 * 0x495 + 7] = 0;
  param_1[temp_v3 * 0x495 + 1] = 0;
  param_1[temp_v3 * 0x495 + 0x495] = 0;
  temp_v0 = *(unsigned int *)(*param_1 + 0x45a0);
  temp_v2 = *(unsigned int *)(*param_1 + 0x45a4);
  if (!((DAT_0057121c & temp_v2) == 0 && (DAT_00571218 & temp_v0) == 0)) {
    temp_v1 = 0x80;
  }
  else {
    if ((temp_v0 & DAT_00571228) == 0 && (temp_v2 & DAT_0057122c) == 0) {
      FUN_004e626c(param_1,*(unsigned int *)(*param_1 + 0xa4));
      return;
    }
    temp_v1 = 0x1000;
  }
  param_1[temp_v3 * 0x495 + 1] = temp_v1;
  FUN_004e626c(param_1,*(unsigned int *)(*param_1 + 0xa4));
  return;
}
