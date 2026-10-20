/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001104b0` (_code @ 0x1104b0, 0x1c8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0011d58c(int);
int nn_gxlow_CTR_SaveVramSysArea(void);
int FUN_0012a7c8(void);
int FUN_002bb0e0(...);
int FUN_002bb150(int, int);
int FUN_002bb180(void);
int FUN_002bb194(int);
int FUN_002bb20c(void);
int nn_applet_CTR_detail_CloseSession(void);
int FUN_002bb378(void);
int FUN_002bbb2c(int, int);
int FUN_002c5434(int);
int sleepQueryAnswer(int);
int software_interrupt(int);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp38; /* 0x38: local_38 */
} param_4_stack;

extern unsigned char DAT_0044e361; /* 0x44e361 */
extern unsigned char DAT_0044e364; /* 0x44e364 */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_0011d58c. */
extern int FUN_0011d808(int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: nn_gxlow_CTR_SaveVramSysArea. */
/* Supplied declaration required: FUN_0012a7c8. */
extern int FUN_002bb0d0(void);
/* Supplied declaration required: FUN_002bb0e0. */
/* Supplied declaration required: FUN_002bb150. */
/* Supplied declaration required: FUN_002bb180. */
/* Supplied declaration required: FUN_002bb194. */
/* Supplied declaration required: FUN_002bb20c. */
extern int nn_snd_CTR_Dspsnd_IsInitialized(void);
extern int FUN_002bb2c8(void);
/* Supplied declaration required: nn_applet_CTR_detail_CloseSession. */
/* Supplied declaration required: FUN_002bb378. */
/* Supplied declaration required: FUN_002bbb2c. */
/* Supplied declaration required: FUN_002c5434. */
/* Supplied declaration required: sleepQueryAnswer. */


int FUN_001104b0(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 14 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_002bb2c8();
  if ((temp_v0 == 0) && (temp_v0 = FUN_002bb0e0(), temp_v0 == 0)) {
    temp_v1 = -0x375f33fc;
  }
  else {
    temp_v0 = FUN_002bb0e0(temp_v0);
    if (temp_v0 != 0) {
      FUN_002bb194(0);
    }
    else {
      temp_v0 = FUN_002bb2c8();
      if (temp_v0 != 0) {
        DAT_0044e361 = 1;
        nn_gxlow_CTR_SaveVramSysArea();
        temp_v0 = nn_snd_CTR_Dspsnd_IsInitialized();
        if (temp_v0 != 0) {
          FUN_002bb20c();
          DAT_0044e364 = 1;
        }
        FUN_002bb194(0);
        FUN_0012a7c8();
      }
    }
    temp_v0 = FUN_002bb0d0();
    if (temp_v0 != 0) {
      sleepQueryAnswer(1);
    }
    while( 1 ) {
      FUN_002bb378();
      temp_v1 = FUN_0011d808(param_1,param_2,param_3,param_4);
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
    if (temp_v1 < 0) {
      FUN_002bbb2c(temp_v1,0x110624);
    }
    FUN_002bb180();
    temp_v0 = FUN_002bb2c8();
    if (temp_v0 != 0) {
      FUN_0011d58c(param_1);
      temp_v1 = param_1;
    }
    temp_v0 = FUN_002bb0e0();
    if (temp_v0 != 0) {
      software_interrupt(3);
    }
  }
  return temp_v1;
}

} /* extern "C" */
