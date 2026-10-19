/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0017fd84` (_code @ 0x17fd84, 0xfc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern int DAT_005b4070; /* 0x5b4070 */
extern unsigned char DAT_00640518; /* 0x640518 */
extern unsigned char DAT_00640534; /* 0x640534 */

/* Supplied declaration required: FUN_0019aac8. */
/* Supplied declaration required: FUN_001a1244. */
extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);


void FUN_0017fd84(unsigned int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  if ((*(unsigned int *)(DAT_005b4070 + 0x14) <= param_1) &&
     (param_1 < *(int *)(DAT_005b4070 + 0x18) + *(unsigned int *)(DAT_005b4070 + 0x14))) {
    temp_v0 = DAT_005b4070 + 0x74;
    temp_v1 = DAT_005b4070 + 0x1c;
    nn_os_CriticalSection_Enter(temp_v0);
    FUN_001a1244(temp_v1,param_1);
    nn_os_CriticalSection_Leave(temp_v0);
    return;
  }
  if ((*(unsigned int *)(DAT_005b4070 + 0x80) <= param_1) &&
     (param_1 < *(int *)(DAT_005b4070 + 0x84) + *(unsigned int *)(DAT_005b4070 + 0x80))) {
    temp_v0 = DAT_005b4070 + 0xe0;
    temp_v1 = DAT_005b4070 + 0x88;
    nn_os_CriticalSection_Enter(temp_v0);
    FUN_001a1244(temp_v1,param_1);
    nn_os_CriticalSection_Leave(temp_v0);
    return;
  }
  if ((*(unsigned int *)(DAT_005b4070 + 0xec) <= param_1) &&
     (param_1 < *(int *)(DAT_005b4070 + 0xf0) + *(unsigned int *)(DAT_005b4070 + 0xec))) {
    FUN_0019aac8(&DAT_00640518,param_1);
    return;
  }
  if ((*(unsigned int *)(DAT_005b4070 + 0xf8) <= param_1) &&
     (param_1 < *(int *)(DAT_005b4070 + 0xfc) + *(unsigned int *)(DAT_005b4070 + 0xf8))) {
    FUN_0019aac8(&DAT_00640534,param_1);
    return;
  }
  return;
}
