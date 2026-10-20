/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a7e4c` (_code @ 0x2a7e4c, 0xcc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002bb140(int);
int FUN_002bb150(int, int);
int nn_applet_CTR_detail_CloseSession(void);
int FUN_002bb378(void);
int FUN_002c5434(int);
int sleepQueryAnswer(int);

extern int FUN_0014fff8(unsigned int);
extern int FUN_002bb0d0(void);
/* Supplied declaration required: FUN_002bb140. */
/* Supplied declaration required: FUN_002bb150. */
/* Supplied declaration required: nn_applet_CTR_detail_CloseSession. */
/* Supplied declaration required: FUN_002bb378. */
/* Supplied declaration required: FUN_002c5434. */
/* Supplied declaration required: sleepQueryAnswer. */


int FUN_002a7e4c(unsigned int param_1)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  FUN_002bb140(2);
  temp_v0 = FUN_002bb0d0();
  if (temp_v0 != 0) {
    sleepQueryAnswer(1);
  }
  while( 1 ) {
    FUN_002bb378();
    temp_v1 = FUN_0014fff8(param_1);
    nn_applet_CTR_detail_CloseSession();
    if ((temp_v1 != -0x375f3010 && temp_v1 != -0x1f5f33f8) && temp_v1 != -0x375f33fe) break;
    FUN_002bb150(10000000,0);
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
  return temp_v1;
}

} /* extern "C" */
