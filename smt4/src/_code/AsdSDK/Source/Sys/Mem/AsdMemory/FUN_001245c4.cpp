/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001245c4` (_code @ 0x1245c4, 0xfc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00138430(unsigned int *, unsigned int);
int FUN_002b3194(int, unsigned int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern int DAT_00465174; /* 0x465174 */
extern unsigned int DAT_004e4100; /* 0x4e4100 */
extern unsigned int DAT_004e411c; /* 0x4e411c */

/* Supplied declaration required: FUN_00138430. */
/* Supplied declaration required: FUN_002b3194. */
extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);


void FUN_001245c4(unsigned int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  if ((*(unsigned int *)(DAT_00465174 + 0x14) <= param_1) &&
     (param_1 < *(int *)(DAT_00465174 + 0x18) + *(unsigned int *)(DAT_00465174 + 0x14))) {
    temp_v0 = DAT_00465174 + 0x74;
    temp_v1 = DAT_00465174 + 0x1c;
    nn_os_CriticalSection_Enter(temp_v0);
    FUN_002b3194(temp_v1,param_1);
    nn_os_CriticalSection_Leave(temp_v0);
    return;
  }
  if ((*(unsigned int *)(DAT_00465174 + 0x80) <= param_1) &&
     (param_1 < *(int *)(DAT_00465174 + 0x84) + *(unsigned int *)(DAT_00465174 + 0x80))) {
    temp_v0 = DAT_00465174 + 0xe0;
    temp_v1 = DAT_00465174 + 0x88;
    nn_os_CriticalSection_Enter(temp_v0);
    FUN_002b3194(temp_v1,param_1);
    nn_os_CriticalSection_Leave(temp_v0);
    return;
  }
  if ((*(unsigned int *)(DAT_00465174 + 0xec) <= param_1) &&
     (param_1 < *(int *)(DAT_00465174 + 0xf0) + *(unsigned int *)(DAT_00465174 + 0xec))) {
    FUN_00138430(&DAT_004e4100,param_1);
    return;
  }
  if ((*(unsigned int *)(DAT_00465174 + 0xf8) <= param_1) &&
     (param_1 < *(int *)(DAT_00465174 + 0xfc) + *(unsigned int *)(DAT_00465174 + 0xf8))) {
    FUN_00138430(&DAT_004e411c,param_1);
    return;
  }
  return;
}

} /* extern "C" */
