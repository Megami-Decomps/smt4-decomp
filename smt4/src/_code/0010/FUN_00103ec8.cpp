/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00103ec8` (_code @ 0x103ec8, 0x94 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00110110(unsigned char *, int);
int FUN_00110124(unsigned char *, int);
int FUN_00110838(int);
int nn_os_CriticalSection_Initialize(unsigned int *);
int nn_os_LightEvent_Signal(unsigned int *);
int FUN_002c5434(void);

extern unsigned char LAB_0010d6b4; /* 0x10d6b4 */
extern unsigned char LAB_0010e924; /* 0x10e924 */
extern unsigned char DAT_00465198; /* 0x465198 */
extern unsigned char DAT_00465199; /* 0x465199 */
extern unsigned int g_appletSleepQueryEvent; /* 0x46519c */
extern unsigned int g_appletHomeButtonEvent; /* 0x4651a4 */
extern unsigned int g_nnAppletCriticalSection; /* 0x4e4138 */

/* Supplied declaration required: FUN_00110110. */
/* Supplied declaration required: FUN_00110124. */
/* Supplied declaration required: FUN_00110838. */
/* Supplied declaration required: nn_os_CriticalSection_Initialize. */
/* Supplied declaration required: nn_os_LightEvent_Signal. */
/* Supplied declaration required: FUN_002c5434. */
extern int FUN_002c55b4(void);
extern int appletIsExitRequested(void);
extern void nn_os_LightEvent_Initialize(unsigned int, unsigned char);


unsigned int FUN_00103ec8(void)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v1 = 1;
  nn_os_LightEvent_Initialize((unsigned int)&g_appletSleepQueryEvent,0);
  nn_os_LightEvent_Initialize((unsigned int)&g_appletHomeButtonEvent,0);
  nn_os_CriticalSection_Initialize(&g_nnAppletCriticalSection);
  DAT_00465198 = 1;
  FUN_002c5434();
  DAT_00465199 = 1;
  nn_os_LightEvent_Signal(&g_appletSleepQueryEvent);
  nn_os_LightEvent_Signal(&g_appletHomeButtonEvent);
  FUN_00110124(&LAB_0010e924,0);
  FUN_00110110(&LAB_0010d6b4,0);
  FUN_00110838(1);
  temp_v0 = appletIsExitRequested();
  if ((temp_v0 != 0) || (temp_v0 = FUN_002c55b4(), temp_v0 != 0)) {
    temp_v1 = 0;
  }
  return temp_v1;
}

} /* extern "C" */
