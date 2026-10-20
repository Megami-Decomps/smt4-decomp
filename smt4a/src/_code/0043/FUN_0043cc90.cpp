/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0043cc90` (_code @ 0x43cc90, 0x8c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int nn_applet_CTR_detail_OpenSession(void);
int nn_applet_CTR_detail_CloseSession(void);
int svcSleepThread(int, int);
int FUN_0043cd90(int, unsigned int, unsigned int, unsigned int, unsigned int);

/* stack frame of param_5: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_5_stack;

/* Supplied declaration required: nn_applet_CTR_detail_OpenSession. */
/* Supplied declaration required: nn_applet_CTR_detail_CloseSession. */
/* Supplied declaration required: svcSleepThread. */
/* Supplied declaration required: FUN_0043cd90. */


void FUN_0043cc90(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                 unsigned int param_5)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  while( 1 ) {
    nn_applet_CTR_detail_OpenSession();
    temp_v0 = param_1;
    FUN_0043cd90(param_1,temp_v1,param_3,param_4,param_5);
    nn_applet_CTR_detail_CloseSession();
    if ((temp_v0 != -0x375f3010 && temp_v0 != -0x1f5f33f8) && temp_v0 != -0x375f33fe) break;
    svcSleepThread(10000000,0);
  }
  return;
}

} /* extern "C" */
