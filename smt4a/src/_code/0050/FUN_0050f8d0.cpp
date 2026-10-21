/* NON_MATCHING: constructor/static-initializer wrapper has a removed registration call at +0x2c and an unreferenced 0x00647610 pool word; its missing call symbol needs recovery. */
#include "romwright_types.h"

extern "C" {

int emptyStub_002f4370(...);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern int FUN_00431fe0(...); /* 0x431fe0 */
extern unsigned int DAT_005c14b4; /* 0x5c14b4 */

/* Supplied declaration required: emptyStub_002f4370. */


void FUN_0050f8d0(unsigned int *param_1)

{
/* irregular: 2 native warning(s); review required */
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(unsigned char *)(param_1 + 4) = 0;
  param_1[5] = 0;
  *(unsigned char *)(param_1 + 6) = 0;
  DAT_005c14b4 = 0;
  emptyStub_002f4370(&DAT_005c14b4,FUN_00431fe0,0x100000);
  return;
}

} /* extern "C" */
