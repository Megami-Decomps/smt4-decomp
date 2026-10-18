/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003d5698` (_code @ 0x3d5698, 0x190 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

extern float DAT_00493518; /* 0x493518 */
extern float DAT_00493524; /* 0x493524 */
extern float DAT_00493530; /* 0x493530 */
extern float DAT_00493534; /* 0x493534 */
extern float DAT_00493538; /* 0x493538 */
extern float DAT_0049353c; /* 0x49353c */
extern float DAT_00493540; /* 0x493540 */
extern float DAT_00493544; /* 0x493544 */

/* Supplied declaration required: FUN_00227280. */
/* Supplied declaration required: FUN_003d7298. */


void FUN_003d5698(int param_1,unsigned int param_2)

{
/* irregular: irregular input(s): in_s0; 2 native warning(s); review required */
  unsigned int *puVar1;
  float in_s0;
  float temp_v0;
  float temp_v1;
  
  if ((*(unsigned int *)(param_1 + 0x634) & 0x100000) == 0) {
    puVar1 = (unsigned int *)(param_1 + 0x680);
    FUN_00227280(0,*(unsigned int *)(param_1 + 0x680),param_2);
    *(float *)(param_1 + 0x658) = DAT_00493518 + (DAT_00493524 - DAT_00493518) * in_s0;
    *(float *)(param_1 + 0x6cc) =
         *(float *)(param_1 + 0x5f0) +
         (*(float *)(param_1 + 0x5ac) - *(float *)(param_1 + 0x5f0)) * in_s0;
    *(float *)(param_1 + 0x6d0) =
         *(float *)(param_1 + 0x5f4) +
         (*(float *)(param_1 + 0x5b0) - *(float *)(param_1 + 0x5f4)) * in_s0;
    *(float *)(param_1 + 0x6d4) =
         *(float *)(param_1 + 0x5f8) +
         (*(float *)(param_1 + 0x5b4) - *(float *)(param_1 + 0x5f8)) * in_s0;
    temp_v1 = DAT_00493544 - DAT_00493538;
    temp_v0 = DAT_00493540 - DAT_00493534;
    *(float *)(param_1 + 0x6e4) = DAT_00493530 + (DAT_0049353c - DAT_00493530) * in_s0;
    *(float *)(param_1 + 0x6e8) = DAT_00493534 + temp_v0 * in_s0;
    *(float *)(param_1 + 0x6ec) = DAT_00493538 + temp_v1 * in_s0;
    temp_v0 = *(float *)(param_1 + 0x5e8);
    temp_v1 = temp_v0 - *(float *)(param_1 + 0x62c);
    FUN_00227280(0,*puVar1,param_2);
    *(float *)(param_1 + 0x5a4) = *(float *)(param_1 + 0x62c) + temp_v1 * temp_v0;
    temp_v0 = *(float *)(param_1 + 0x5ec);
    temp_v1 = temp_v0 - *(float *)(param_1 + 0x630);
    FUN_00227280(0,*puVar1,param_2);
    *(float *)(param_1 + 0x6a8) = *(float *)(param_1 + 0x630) + temp_v1 * temp_v0;
    temp_v0 = *(float *)(param_1 + 0x5dc);
    temp_v1 = temp_v0 - *(float *)(param_1 + 0x620);
    FUN_00227280(0,*puVar1,param_2);
    *(float *)(param_1 + 0x698) = *(float *)(param_1 + 0x620) + temp_v1 * temp_v0;
    FUN_00227280(0,*puVar1,param_2);
    FUN_003d7298(param_1,param_2);
    return;
  }
  return;
}
