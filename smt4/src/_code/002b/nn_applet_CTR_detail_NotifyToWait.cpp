/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_applet_CTR_detail_NotifyToWait` (_code @ 0x2bb2e4, 0x24 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00128584(...);
int FUN_001383a8(...);
int FUN_00144f90(...);
int FUN_002bb100(...);
int threadSleepDuration(...);
int FUN_002bb378(...);
int FUN_002c131c(...);
int nn_os_LightEvent_Wait(...);
int software_interrupt(...);

typedef int romwright_code(...);
/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern romwright_code *DAT_0044e450; /* 0x44e450 */
extern int DAT_0044e608; /* 0x44e608 */
extern signed char DAT_0044e7a8; /* 0x44e7a8 */
extern unsigned int DAT_00465668; /* 0x465668 */
extern int DAT_004656b0; /* 0x4656b0 */
extern unsigned char DAT_004c4b40; /* 0x4c4b40 */
extern unsigned char DAT_004d4200; /* 0x4d4200 */
extern unsigned char DAT_004d4201; /* 0x4d4201 */
extern unsigned short DAT_004d4202; /* 0x4d4202 */
extern unsigned int DAT_004d4204; /* 0x4d4204 */
extern unsigned int DAT_004d4208; /* 0x4d4208 */
extern unsigned int DAT_004d4280; /* 0x4d4280 */
extern unsigned char bRam1ff80014; /* 0x1ff80014 */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_00128584. */
/* Supplied declaration required: FUN_001383a8. */
extern int FUN_0013b8fc(void);
/* Supplied declaration required: FUN_00144f90. */
/* Supplied declaration required: FUN_002bb100. */
/* Supplied declaration required: threadSleepDuration. */
/* Supplied declaration required: FUN_002bb378. */
/* Supplied declaration required: FUN_002c131c. */
/* Supplied declaration required: nn_os_LightEvent_Wait. */
extern unsigned int nn_err_CTR_FatalErr_Throw(unsigned int, unsigned int);
extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);
extern void nn_os_LightEvent_Initialize(unsigned int, unsigned char);


void nn_applet_CTR_detail_NotifyToWait(void)

{
/* irregular: 1 goto(s); irregular input(s): in_lr; 10 native warning(s); review required */
  romwright_code *pcVar1;
  unsigned int *puVar2;
  int temp_v0;
  unsigned int temp_v1;
  unsigned int in_lr;
  unsigned char temp_v2;
  int aiStack_20 [4];
  
  FUN_002bb378();
  FUN_002bb100();
  temp_v0 = FUN_0013b8fc();
  if (temp_v0 < 0) {
    FUN_002c131c(temp_v0,0x2bb2fc);
  }
  temp_v0 = DAT_004656b0;
  if (DAT_004656b0 == 0) {
    temp_v0 = -0x1f5f3008;
  }
  else {
    software_interrupt(0x23);
    DAT_004656b0 = 0;
  }
  if (temp_v0 < 0) {
    FUN_002c131c(temp_v0,0x2bb338);
  }
  if ((DAT_00465668 == 0) || (software_interrupt(0x14), -1 < (int)DAT_00465668)) {
    return;
  }
  temp_v1 = DAT_00465668 >> 0x1b;
  if ((DAT_00465668 & 0x80000000) != 0) {
    temp_v1 = temp_v1 - 0x20;
  }
  if ((bRam1ff80014 & 1) == 0 && DAT_0044e7a8 == '\0') {
    if (temp_v1 == 0xffffffff) {
      FUN_00128584(DAT_00465668,0);
    }
    pcVar1 = DAT_0044e450;
    if (DAT_0044e450 != (romwright_code *)0x0) {
      DAT_0044e450 = (romwright_code *)0x0;
      (*pcVar1)(0,0,0,0);
    }
    software_interrupt(0x3c);
    return;
  }
  if (temp_v1 == 0xfffffff9 || temp_v1 == 1) {
    return;
  }
  DAT_004d4201 = 0;
  DAT_004d4200 = 0;
  DAT_004d4202 = 0xbca3;
  DAT_004d4204 = DAT_00465668;
  DAT_004d4208 = in_lr;
  do {
    nn_os_CriticalSection_Enter((unsigned int)&DAT_004d4280);
    if (DAT_0044e608 == 0) {
      puVar2 = (unsigned int *)&DAT_0044e608;
      FUN_001383a8(&DAT_0044e608,"err:f");
      if (-1 < (int)puVar2) {
        puVar2 = (unsigned int *)0x0;
      }
    }
    else {
      puVar2 = (unsigned int *)0x0;
    }
    if (-1 < (int)puVar2) {
      FUN_00144f90(0x4d420c,0xffff8001);
      aiStack_20[0] = DAT_0044e608;
      nn_err_CTR_FatalErr_Throw((unsigned int)aiStack_20,(unsigned int)&DAT_004d4200);
      if (DAT_0044e608 != 0) {
        software_interrupt(0x23);
        DAT_0044e608 = 0;
      }
LAB_002ad598:
      nn_os_CriticalSection_Leave((unsigned int)&DAT_004d4280);
      if (DAT_004d4200 != 2 && DAT_004d4200 != 5) {
        aiStack_20[0] = 0;
        aiStack_20[1] = 0;
        nn_os_LightEvent_Initialize((unsigned int)aiStack_20,1);
        nn_os_LightEvent_Wait(aiStack_20);
      }
      return;
    }
    temp_v2 = puVar2 == (unsigned int *)0xd0401834;
    if (temp_v2) {
      puVar2 = (unsigned int *)(unsigned int)DAT_004d4200;
    }
    if (!temp_v2 || puVar2 != (unsigned int *)0x2) goto LAB_002ad598;
    threadSleepDuration(&DAT_004c4b40,0);
    nn_os_CriticalSection_Leave((unsigned int)&DAT_004d4280);
  } while( 1 );
}

} /* extern "C" */
