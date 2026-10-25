/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00106f70` (_code @ 0x106f70, 0x104 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00110180(int, int, unsigned int);
int FUN_001104b0(int, int, int, unsigned int);
int FUN_0011072c(void);
int FUN_002c0d50(int, int, int, int, int);
int FUN_002c1148(int);
int FUN_002c130c(int);
int nn_applet_CTR_detail_GetAppletManInfo(int, int, int *, int *, int);
int nn_applet_CTR_detail_ReplySleepQueryToManager(int);

typedef int romwright_code(...);
/* stack frame of void: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} void_stack;

extern unsigned int DAT_0044e368; /* 0x44e368 */
extern signed char g_appletSleepModuleState; /* 0x44e3b0 */
extern romwright_code *DAT_0044e3e8; /* 0x44e3e8 */
extern int DAT_0044e440; /* 0x44e440 */
extern unsigned int DAT_0044e444; /* 0x44e444 */

/* Supplied declaration required: FUN_00110180. */
/* Supplied declaration required: FUN_001104b0. */
/* Supplied declaration required: FUN_0011072c. */
/* Supplied declaration required: FUN_002c0d50. */
/* Supplied declaration required: FUN_002c1148. */
/* Supplied declaration required: FUN_002c130c. */
/* Supplied declaration required: nn_applet_CTR_detail_GetAppletManInfo. */
extern unsigned int nn_applet_CTR_detail_PrepareToJumpToHomeMenu(void);
/* Supplied declaration required: nn_applet_CTR_detail_ReplySleepQueryToManager. */
extern void nn_applet_CTR_detail_SleepIfShellClosed(void);


void FUN_00106f70(void)

{
/* irregular: 9 native warning(s); review required */
  int temp_v0;
  char temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int uStack_1c;
  
  temp_v1 = g_appletSleepModuleState;
  if (g_appletSleepModuleState != '\0') {
    g_appletSleepModuleState = '\0';
    FUN_002c130c(3);
    nn_applet_CTR_detail_ReplySleepQueryToManager(0);
  }
  FUN_002c1148(0);
  if (DAT_0044e3e8 != (romwright_code *)0x0) {
    (*DAT_0044e3e8)();
  }
  nn_applet_CTR_detail_GetAppletManInfo(2,0,&temp_v4,&temp_v3,0);
  temp_v0 = temp_v2;
  if (temp_v4 != 0) {
    temp_v0 = temp_v3;
  }
  if (!(temp_v4 != 0 && temp_v4 != temp_v0)) {
    nn_applet_CTR_detail_PrepareToJumpToHomeMenu();
    FUN_00110180(0,0,DAT_0044e368);
  }
  else {
    FUN_0011072c();
    FUN_001104b0(temp_v4,0,0,DAT_0044e368);
  }
  temp_v4 = DAT_0044e440;
  uStack_1c = DAT_0044e444;
  FUN_002c0d50(0,0,0,0,0);
  if (temp_v1 == '\0') {
    return;
  }
  g_appletSleepModuleState = 1;
  nn_applet_CTR_detail_SleepIfShellClosed();
  return;
}

} /* extern "C" */
