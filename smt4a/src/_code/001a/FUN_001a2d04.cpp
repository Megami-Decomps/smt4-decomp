/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a2d04` (_code @ 0x1a2d04, 0x14c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0016e800(int, int);
int nn_gxlow_CTR_SaveVramSysArea(void);
int FUN_00170390(int);
int FUN_001703b0(int);
int FUN_001703e8(...);
int FUN_00170e58(void);
int FUN_00170ebc(int);
int nn_applet_CTR_detail_OpenSession(void);
int nn_applet_CTR_detail_CloseSession(void);
int FUN_001b02a8(unsigned int);
int svcSleepThread(int, int);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
} param_4_stack;

extern unsigned char DAT_005891b0; /* 0x5891b0 */

/* Supplied declaration required: FUN_0016e800. */
/* Supplied declaration required: nn_gxlow_CTR_SaveVramSysArea. */
/* Supplied declaration required: FUN_00170390. */
/* Supplied declaration required: FUN_001703b0. */
/* Supplied declaration required: FUN_001703e8. */
/* Supplied declaration required: FUN_00170e58. */
/* Supplied declaration required: FUN_00170ebc. */
extern int FUN_0018b63c(void);
extern int FUN_0018b65c(void);
/* Supplied declaration required: nn_applet_CTR_detail_OpenSession. */
/* Supplied declaration required: nn_applet_CTR_detail_CloseSession. */
/* Supplied declaration required: FUN_001b02a8. */
extern int FUN_001b0480(unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: svcSleepThread. */


int FUN_001a2d04(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 11 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_001703e8();
  if ((temp_v0 == 0) && (temp_v0 = FUN_0018b65c(), temp_v0 == 0)) {
    temp_v1 = -0x375f33fc;
  }
  else {
    temp_v0 = FUN_001703e8(temp_v0);
    if (temp_v0 != 0) {
      (*(unsigned char *)((unsigned char *)&DAT_005891b0 + 0x1)) = 1;
      nn_gxlow_CTR_SaveVramSysArea();
    }
    FUN_001b02a8(param_1);
    FUN_00170ebc(0);
    temp_v0 = FUN_0018b63c();
    if (temp_v0 != 0) {
      FUN_001703b0(1);
    }
    while( 1 ) {
      nn_applet_CTR_detail_OpenSession();
      temp_v1 = FUN_001b0480(param_1,param_2,param_3,param_4);
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
      FUN_0016e800(temp_v1,0x1a2e34);
    }
    FUN_00170e58();
  }
  return temp_v1;
}

} /* extern "C" */
