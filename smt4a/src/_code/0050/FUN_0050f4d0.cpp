/* NON_MATCHING: initializer has unrecovered VFP arguments/array-constructor ABI and unused pool words at +0x50..0x5c (0, 0x006309a0, 100.0f, 1280.0f). */
#include "romwright_types.h"

extern "C" {

int emptyStub_002f4370(...);
int FUN_002f5020(...);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern unsigned char LAB_003f2be4; /* 0x3f2be4 */
extern int objFillFromTemplate(...); /* 0x416d04 */

/* Supplied declaration required: emptyStub_002f4370. */
/* Supplied declaration required: FUN_002f5020. */


void FUN_0050f4d0(unsigned int *param_1)

{
/* irregular: irregular input(s): in_s0, in_s1, in_s2; 6 native warning(s); review required */
  unsigned int in_s0;
  unsigned int in_s1;
  unsigned int in_s2;
  
  *param_1 = in_s0;
  param_1[1] = in_s1;
  param_1[2] = in_s2;
  param_1[3] = in_s0;
  param_1[4] = in_s0;
  param_1[5] = in_s0;
  param_1[6] = in_s0;
  param_1[7] = 0x3f800000;
  param_1[8] = in_s0;
  param_1 = param_1 + 10;
  FUN_002f5020(param_1,&LAB_003f2be4,0x548,2);
  emptyStub_002f4370(param_1 + -1,objFillFromTemplate,0x100000);
  return;
}

} /* extern "C" */
