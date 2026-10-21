/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a7f28` (_code @ 0x2a7f28, 0x14c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int nn_gxlow_CTR_SaveVramSysArea(void);
int FUN_0014fde4(unsigned int);
int threadSleepDuration(int, int);
int FUN_002bb180(void);
int FUN_002bb194(int);
int FUN_002bb2c8(...);
int nn_applet_CTR_detail_CloseSession(void);
int FUN_002bb378(void);
int FUN_002bbb2c(int, int);
int FUN_002c5434(int);
int sleepQueryAnswer(int);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
} param_4_stack;

extern unsigned char DAT_0044e360; /* 0x44e360 */

/* Supplied declaration required: nn_gxlow_CTR_SaveVramSysArea. */
/* Supplied declaration required: FUN_0014fde4. */
extern int FUN_0014ffa8(unsigned int, unsigned int, unsigned int, unsigned int);
extern int FUN_002bb0d0(void);
extern int FUN_002bb0e0(void);
/* Supplied declaration required: threadSleepDuration. */
/* Supplied declaration required: FUN_002bb180. */
/* Supplied declaration required: FUN_002bb194. */
/* Supplied declaration required: FUN_002bb2c8. */
/* Supplied declaration required: nn_applet_CTR_detail_CloseSession. */
/* Supplied declaration required: FUN_002bb378. */
/* Supplied declaration required: FUN_002bbb2c. */
/* Supplied declaration required: FUN_002c5434. */
/* Supplied declaration required: sleepQueryAnswer. */


int FUN_002a7f28(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 11 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_002bb2c8();
  if ((temp_v0 == 0) && (temp_v0 = FUN_002bb0e0(), temp_v0 == 0)) {
    temp_v1 = -0x375f33fc;
  }
  else {
    temp_v0 = FUN_002bb2c8(temp_v0);
    if (temp_v0 != 0) {
      (*(unsigned char *)((unsigned char *)&DAT_0044e360 + 0x1)) = 1;
      nn_gxlow_CTR_SaveVramSysArea();
    }
    FUN_0014fde4(param_1);
    FUN_002bb194(0);
    temp_v0 = FUN_002bb0d0();
    if (temp_v0 != 0) {
      sleepQueryAnswer(1);
    }
    while( 1 ) {
      FUN_002bb378();
      temp_v1 = FUN_0014ffa8(param_1,param_2,param_3,param_4);
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
    if (temp_v1 < 0) {
      FUN_002bbb2c(temp_v1,0x2a8058);
    }
    FUN_002bb180();
  }
  return temp_v1;
}

} /* extern "C" */
