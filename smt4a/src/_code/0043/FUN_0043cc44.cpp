/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0043cc44` (_code @ 0x43cc44, 0x4c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0016e758(void);
int FUN_00170414(int);
int FUN_00170474(int);
int FUN_00170e58(void);
int FUN_00170ebc(int);
int FUN_001716c0(void);
int FUN_00189a38(int, int);
int nn_applet_CTR_detail_OpenSession(void);
int nn_applet_CTR_detail_CloseSession(void);
int svcSleepThread(int, int);
int FUN_0043c434(void);
int FUN_0043cc90(void);
int software_interrupt(int);

/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

extern unsigned char DAT_005891b4; /* 0x5891b4 */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_0016e758. */
/* Supplied declaration required: FUN_00170414. */
/* Supplied declaration required: FUN_00170474. */
/* Supplied declaration required: FUN_00170e58. */
/* Supplied declaration required: FUN_00170ebc. */
/* Supplied declaration required: FUN_001716c0. */
/* Supplied declaration required: FUN_00189a38. */
/* Supplied declaration required: nn_applet_CTR_detail_OpenSession. */
/* Supplied declaration required: nn_applet_CTR_detail_CloseSession. */
/* Supplied declaration required: svcSleepThread. */
extern int nn_snd_CTR_Dspsnd_IsInitialized(void);
/* Supplied declaration required: FUN_0043c434. */
/* Supplied declaration required: FUN_0043cc90. */
extern int FUN_0043cd2c(int, unsigned int, unsigned int, unsigned int);


/* WARNING: Removing unreachable block (ram,0x0043cb7c) */
/* WARNING: Removing unreachable block (ram,0x0043cb80) */

int FUN_0043cc44(int param_1,unsigned int param_2)

{
/* irregular: 15 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = 2;
  FUN_0043cc90();
  if (temp_v0 < 0) {
    return temp_v0;
  }
  FUN_00170474(0x12);
  FUN_0043c434();
  temp_v0 = nn_snd_CTR_Dspsnd_IsInitialized();
  if (temp_v0 != 0) {
    FUN_0016e758();
    DAT_005891b4 = 1;
  }
  FUN_00170ebc(0);
  FUN_001716c0();
  if (param_1 == 0) {
    param_2 = 0;
  }
  else if (param_2 >= 0x301) {
    param_2 = 0x300;
  }
  while( 1 ) {
    nn_applet_CTR_detail_OpenSession();
    temp_v0 = FUN_0043cd2c(param_1,param_2,0,0);
    nn_applet_CTR_detail_CloseSession();
    if ((temp_v0 != -0x375f3010 && temp_v0 != -0x1f5f33f8) && temp_v0 != -0x375f33fe) break;
    svcSleepThread(10000000,0);
  }
  if (temp_v0 < 0) {
    FUN_00189a38(temp_v0,0x43cbd4);
  }
  FUN_00170e58();
  FUN_00170414(1);
  software_interrupt(3);
  return temp_v0;
}

} /* extern "C" */
