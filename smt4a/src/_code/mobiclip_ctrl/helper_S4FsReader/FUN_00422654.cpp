/* NON_MATCHING: retail embeds SVC 0x18, 0x24, and 0x23 for synchronization/handle shutdown; SVC is forbidden by this assignment. */
#include "romwright_types.h"
#include "classes/Obj420a1c.h"

extern "C" {

int FUN_001469a8(...);
int nn_os_Thread_FinalizeImpl(unsigned int *);
int FUN_002e3140(void);
int asdOperatorDelete(int);
int software_interrupt(int);

typedef int romwright_code(...);
extern unsigned int DAT_005880f8; /* 0x5880f8 */
extern int DAT_005880fc; /* 0x5880fc */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_001469a8. */
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: nn_os_Thread_FinalizeImpl. */
/* Supplied declaration required: FUN_002e3140. */
/* Supplied declaration required: asdOperatorDelete. */


void FUN_00422654(unsigned int *param_1)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  
  if (param_1[0xe] != 0) {
    software_interrupt(0x18);
    if ((int)param_1[0x14] < 0) {
      FUN_002e3140();
    }
    software_interrupt(0x24);
    if ((int)param_1[0xc] < 0) {
      FUN_002e3140();
    }
    *(unsigned char *)(param_1 + 0xd) = 1;
    nn_os_Thread_FinalizeImpl(param_1 + 0xc);
    if (param_1[0xc] != 0) {
      software_interrupt(0x23);
      param_1[0xc] = 0;
    }
    FUN_001469a8(DAT_005880fc);
    temp_v0 = DAT_005880fc;
    if (DAT_005880fc != 0) {
      FUN_001469a8();
      asdOperatorDelete(temp_v0);
    }
    DAT_005880fc = 0;
    asdMemFree(DAT_005880f8);
    DAT_005880f8 = 0;
    param_1[0x12] = 0xffffffff;
    if (param_1[0x13] != 0) {
      software_interrupt(0x23);
      param_1[0x13] = 0;
    }
    if (param_1[0x14] != 0) {
      software_interrupt(0x23);
      param_1[0x14] = 0;
    }
    if (param_1[8] != 0) {
      (**(romwright_code **)(*(int *)param_1[0xf] + 4))();
      param_1[8] = 0;
    }
    if (param_1[9] != 0) {
      (**(romwright_code **)(*(int *)param_1[0xf] + 4))();
      param_1[9] = 0;
    }
    param_1[10] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
  }
  return;
}

} /* extern "C" */
