/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00147990` (_code @ 0x147990, 0xf8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00170390(int);
int FUN_001703b0(int);
int FUN_00170474(int);
int FUN_0017145c(int);
int nn_applet_CTR_detail_OpenSession(void);
int nn_applet_CTR_detail_CloseSession(void);
int svcSleepThread(int, int);

extern int FUN_0015ac20(unsigned int);
/* Supplied declaration required: FUN_00170390. */
/* Supplied declaration required: FUN_001703b0. */
extern int FUN_001703e8(void);
/* Supplied declaration required: FUN_00170474. */
/* Supplied declaration required: FUN_0017145c. */
extern int FUN_0018b63c(void);
/* Supplied declaration required: nn_applet_CTR_detail_OpenSession. */
/* Supplied declaration required: nn_applet_CTR_detail_CloseSession. */
/* Supplied declaration required: svcSleepThread. */


int FUN_00147990(unsigned int param_1)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  FUN_0017145c(0);
  FUN_00170474(5);
  temp_v0 = FUN_0018b63c();
  if (temp_v0 != 0) {
    FUN_001703b0(1);
  }
  while( 1 ) {
    nn_applet_CTR_detail_OpenSession();
    temp_v1 = FUN_0015ac20(param_1);
    nn_applet_CTR_detail_CloseSession();
    if ((temp_v1 != -0x375f3010 && temp_v1 != -0x1f5f33f8) && temp_v1 != -0x375f33fe) break;
    svcSleepThread(10000000,0);
  }
  if (temp_v0 != 0) {
    temp_v0 = FUN_0018b63c();
    if (temp_v0 == 0) {
      FUN_00170390(1);
    }
  }
  else {
    temp_v0 = FUN_0018b63c();
    if (temp_v0 != 0) {
      FUN_001703b0(1);
    }
  }
  temp_v0 = FUN_001703e8();
  if ((temp_v0 != 0) && (temp_v1 == -0x375f3004)) {
    temp_v1 = 0;
  }
  return temp_v1;
}

} /* extern "C" */
