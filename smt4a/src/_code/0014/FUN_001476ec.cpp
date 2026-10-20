/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001476ec` (_code @ 0x1476ec, 0x1f0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0015a964(int);
int FUN_0016e758(void);
int FUN_0016e800(int, int);
int nn_gxlow_CTR_SaveVramSysArea(void);
int FUN_00170390(int);
int FUN_001703b0(int);
int FUN_00170e58(void);
int FUN_00170ebc(int);
int FUN_001716c0(void);
int FUN_0018b65c(...);
int nn_applet_CTR_detail_OpenSession(void);
int nn_applet_CTR_detail_CloseSession(void);
int svcSleepThread(int, int);
int software_interrupt(int);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp38; /* 0x38: local_38 */
} param_4_stack;

extern unsigned char DAT_005891b1; /* 0x5891b1 */
extern unsigned char DAT_005891b4; /* 0x5891b4 */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
extern int FUN_0015a3d0(void);
/* Supplied declaration required: FUN_0015a964. */
extern int FUN_0015aba0(int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_0016e758. */
/* Supplied declaration required: FUN_0016e800. */
/* Supplied declaration required: nn_gxlow_CTR_SaveVramSysArea. */
/* Supplied declaration required: FUN_00170390. */
/* Supplied declaration required: FUN_001703b0. */
extern int FUN_001703e8(void);
/* Supplied declaration required: FUN_00170e58. */
/* Supplied declaration required: FUN_00170ebc. */
/* Supplied declaration required: FUN_001716c0. */
extern int FUN_0018b63c(void);
/* Supplied declaration required: FUN_0018b65c. */
/* Supplied declaration required: nn_applet_CTR_detail_OpenSession. */
/* Supplied declaration required: nn_applet_CTR_detail_CloseSession. */
/* Supplied declaration required: svcSleepThread. */
extern int nn_snd_CTR_Dspsnd_IsInitialized(void);


int FUN_001476ec(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 14 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_001703e8();
  if ((temp_v0 == 0) && (temp_v0 = FUN_0018b65c(), temp_v0 == 0)) {
    temp_v1 = -0x375f33fc;
  }
  else {
    temp_v0 = FUN_0018b65c(temp_v0);
    if (temp_v0 != 0) {
      temp_v0 = nn_snd_CTR_Dspsnd_IsInitialized();
      if (temp_v0 != 0) {
        FUN_0016e758();
        DAT_005891b4 = 1;
      }
      FUN_00170ebc(0);
    }
    else {
      temp_v0 = FUN_001703e8();
      if (temp_v0 != 0) {
        DAT_005891b1 = 1;
        nn_gxlow_CTR_SaveVramSysArea();
        temp_v0 = nn_snd_CTR_Dspsnd_IsInitialized();
        if (temp_v0 != 0) {
          FUN_0016e758();
          DAT_005891b4 = 1;
        }
        FUN_00170ebc(0);
        FUN_001716c0();
      }
    }
    temp_v0 = FUN_0018b63c();
    if (temp_v0 != 0) {
      FUN_001703b0(1);
    }
    while( 1 ) {
      nn_applet_CTR_detail_OpenSession();
      temp_v1 = FUN_0015aba0(param_1,param_2,param_3,param_4);
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
    if (temp_v1 < 0) {
      FUN_0016e800(temp_v1,0x147878);
    }
    FUN_00170e58();
    temp_v0 = FUN_001703e8();
    if (temp_v0 != 0) {
      FUN_0015a964(param_1);
      temp_v1 = param_1;
    }
    temp_v0 = FUN_0018b65c();
    if ((temp_v0 != 0) && (temp_v0 = FUN_0015a3d0(), temp_v0 == 0)) {
      software_interrupt(3);
    }
  }
  return temp_v1;
}

} /* extern "C" */
