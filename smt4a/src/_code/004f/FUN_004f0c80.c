/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004f0c80` (_code @ 0x4f0c80, 0x198 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

extern float DAT_005e1518; /* 0x5e1518 */
extern float DAT_005e1524; /* 0x5e1524 */
extern float DAT_005e1530; /* 0x5e1530 */
extern float DAT_005e1534; /* 0x5e1534 */
extern float DAT_005e1538; /* 0x5e1538 */
extern float DAT_005e153c; /* 0x5e153c */
extern float DAT_005e1540; /* 0x5e1540 */
extern float DAT_005e1544; /* 0x5e1544 */

/* Supplied declaration required: FUN_003d4dd4. */
/* Supplied declaration required: FUN_004f2ae4. */


void FUN_004f0c80(int param_1,unsigned int param_2)

{
/* irregular: irregular input(s): in_s0; 2 native warning(s); review required */
  unsigned int *puVar1;
  float in_s0;
  float temp_v0;
  float temp_v1;
  
  if ((*(unsigned int *)(param_1 + 0x64c) & 0x100000) == 0) {
    puVar1 = (unsigned int *)(param_1 + 0x6ec);
    FUN_003d4dd4(0,*(unsigned int *)(param_1 + 0x6ec),param_2);
    *(float *)(param_1 + 0x6c4) = DAT_005e1518 + (DAT_005e1524 - DAT_005e1518) * in_s0;
    *(float *)(param_1 + 0x738) =
         *(float *)(param_1 + 0x608) +
         (*(float *)(param_1 + 0x5c4) - *(float *)(param_1 + 0x608)) * in_s0;
    *(float *)(param_1 + 0x73c) =
         *(float *)(param_1 + 0x60c) +
         (*(float *)(param_1 + 0x5c8) - *(float *)(param_1 + 0x60c)) * in_s0;
    *(float *)(param_1 + 0x740) =
         *(float *)(param_1 + 0x610) +
         (*(float *)(param_1 + 0x5cc) - *(float *)(param_1 + 0x610)) * in_s0;
    temp_v1 = DAT_005e1544 - DAT_005e1538;
    temp_v0 = DAT_005e1540 - DAT_005e1534;
    *(float *)(param_1 + 0x750) = DAT_005e1530 + (DAT_005e153c - DAT_005e1530) * in_s0;
    *(float *)(param_1 + 0x754) = DAT_005e1534 + temp_v0 * in_s0;
    *(float *)(param_1 + 0x758) = DAT_005e1538 + temp_v1 * in_s0;
    temp_v0 = *(float *)(param_1 + 0x600);
    temp_v1 = temp_v0 - *(float *)(param_1 + 0x644);
    FUN_003d4dd4(0,*puVar1,param_2);
    *(float *)(param_1 + 0x5bc) = *(float *)(param_1 + 0x644) + temp_v1 * temp_v0;
    temp_v0 = *(float *)(param_1 + 0x604);
    temp_v1 = temp_v0 - *(float *)(param_1 + 0x648);
    FUN_003d4dd4(0,*puVar1,param_2);
    *(float *)(param_1 + 0x714) = *(float *)(param_1 + 0x648) + temp_v1 * temp_v0;
    temp_v0 = *(float *)(param_1 + 0x5f4);
    temp_v1 = temp_v0 - *(float *)(param_1 + 0x638);
    FUN_003d4dd4(0,*puVar1,param_2);
    *(float *)(param_1 + 0x704) = *(float *)(param_1 + 0x638) + temp_v1 * temp_v0;
    FUN_003d4dd4(0,*puVar1,param_2);
    FUN_004f2ae4(param_1,param_2);
    return;
  }
  return;
}
