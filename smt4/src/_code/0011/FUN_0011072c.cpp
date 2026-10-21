/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011072c` (_code @ 0x11072c, 0xf8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002bb140(int);
int threadSleepDuration(int, int);
int nn_applet_CTR_detail_CloseSession(void);
int FUN_002bb378(void);
int FUN_002c1148(int);
int FUN_002c5434(int);
int sleepQueryAnswer(int);

extern int FUN_0011d8c4(unsigned int);
extern int FUN_002bb0d0(void);
/* Supplied declaration required: FUN_002bb140. */
/* Supplied declaration required: threadSleepDuration. */
extern int FUN_002bb2c8(void);
/* Supplied declaration required: nn_applet_CTR_detail_CloseSession. */
/* Supplied declaration required: FUN_002bb378. */
/* Supplied declaration required: FUN_002c1148. */
/* Supplied declaration required: FUN_002c5434. */
/* Supplied declaration required: sleepQueryAnswer. */


int FUN_0011072c(unsigned int param_1)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  FUN_002c1148(0);
  FUN_002bb140(5);
  temp_v0 = FUN_002bb0d0();
  if (temp_v0 != 0) {
    sleepQueryAnswer(1);
  }
  while( 1 ) {
    FUN_002bb378();
    temp_v1 = FUN_0011d8c4(param_1);
    nn_applet_CTR_detail_CloseSession();
    if ((temp_v1 != -0x375f3010 && temp_v1 != -0x1f5f33f8) && temp_v1 != -0x375f33fe) break;
    threadSleepDuration(10000000,0);
  }
  if (temp_v0 != 0) {
    temp_v0 = FUN_002bb0d0();
    if (temp_v0 == 0) {
      FUN_002c5434(1);
    }
  }
  else {
    temp_v0 = FUN_002bb0d0();
    if (temp_v0 != 0) {
      sleepQueryAnswer(1);
    }
  }
  temp_v0 = FUN_002bb2c8();
  if ((temp_v0 != 0) && (temp_v1 == -0x375f3004)) {
    temp_v1 = 0;
  }
  return temp_v1;
}

} /* extern "C" */
