/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00138940` (_code @ 0x138940, 0x94 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00147314(unsigned char *, int);
int FUN_00147328(unsigned char *, int);
int FUN_00147ad8(int);
int FUN_00170390(void);
int nn_os_CriticalSection_Initialize(unsigned int *);
int nn_os_LightEvent_Initialize(...);
int nn_os_LightEvent_Signal(...);

extern unsigned char LAB_00142d80; /* 0x142d80 */
extern unsigned char LAB_00144a90; /* 0x144a90 */
extern unsigned char DAT_005b408c; /* 0x5b408c */
extern unsigned char DAT_005b408d; /* 0x5b408d */
extern unsigned char g_appletSleepQueryEvent; /* 0x5b4090 */
extern unsigned int g_appletHomeButtonEvent; /* 0x5b4098 */
extern unsigned int g_nnAppletCriticalSection; /* 0x640550 */

/* Supplied declaration required: FUN_00147314. */
/* Supplied declaration required: FUN_00147328. */
/* Supplied declaration required: FUN_00147ad8. */
extern int FUN_0015a410(void);
extern int appletIsExitRequested(void);
/* Supplied declaration required: FUN_00170390. */
/* Supplied declaration required: nn_os_CriticalSection_Initialize. */
/* Supplied declaration required: nn_os_LightEvent_Initialize. */
/* Supplied declaration required: nn_os_LightEvent_Signal. */


unsigned int FUN_00138940(void)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v1 = 1;
  nn_os_LightEvent_Initialize(&g_appletSleepQueryEvent,0);
  nn_os_LightEvent_Initialize(&g_appletHomeButtonEvent,0);
  nn_os_CriticalSection_Initialize(&g_nnAppletCriticalSection);
  DAT_005b408c = 1;
  FUN_00170390();
  DAT_005b408d = 1;
  nn_os_LightEvent_Signal(&g_appletSleepQueryEvent);
  nn_os_LightEvent_Signal(&g_appletHomeButtonEvent);
  FUN_00147328(&LAB_00144a90,0);
  FUN_00147314(&LAB_00142d80,0);
  FUN_00147ad8(1);
  temp_v0 = appletIsExitRequested();
  if ((temp_v0 != 0) || (temp_v0 = FUN_0015a410(), temp_v0 != 0)) {
    temp_v1 = 0;
  }
  return temp_v1;
}

} /* extern "C" */
