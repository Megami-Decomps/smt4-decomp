/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00106e60` (_code @ 0x106e60, 0x108 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of void: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp28; /* 0x28: local_28 */
} void_stack;

extern unsigned int DAT_0044e368; /* 0x44e368 */
extern signed char DAT_0044e3b0; /* 0x44e3b0 */
extern romwright_code *DAT_0044e3e8; /* 0x44e3e8 */

/* Supplied declaration required: FUN_00110180. */
extern int FUN_0011d2b0(void);
/* Supplied declaration required: FUN_0011d2c0. */
/* Supplied declaration required: FUN_002c0d50. */
/* Supplied declaration required: FUN_002c1148. */
extern int FUN_002c12bc(void);
extern int FUN_002c12d0(void);
/* Supplied declaration required: FUN_002c130c. */
/* Supplied declaration required: nn_applet_CTR_detail_PrepareToJumpToHomeMenu. */
/* Supplied declaration required: nn_applet_CTR_detail_ReplySleepQueryToManager. */
/* Supplied declaration required: nn_applet_CTR_detail_SleepIfShellClosed. */


void FUN_00106e60(void)

{
/* irregular: 8 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  
  temp_v0 = DAT_0044e3b0;
  if (DAT_0044e3b0 != '\0') {
    DAT_0044e3b0 = '\0';
    FUN_002c130c(3);
    nn_applet_CTR_detail_ReplySleepQueryToManager(0);
  }
  temp_v1 = FUN_0011d2b0();
  if ((temp_v1 != 0) || (temp_v1 = FUN_002c12d0(), temp_v1 != 0)) {
    FUN_0011d2c0(0);
    temp_v1 = FUN_002c12bc();
    if ((temp_v1 == 0) || (temp_v1 = FUN_002c12bc(), temp_v1 == 2)) {
      FUN_002c1148(0);
      if (DAT_0044e3e8 != (romwright_code *)0x0) {
        (*DAT_0044e3e8)();
      }
    }
    nn_applet_CTR_detail_PrepareToJumpToHomeMenu();
    FUN_00110180(0,0,DAT_0044e368);
  }
  FUN_002c0d50(0,0,0,0,0);
  if (temp_v0 == '\0') {
    return;
  }
  DAT_0044e3b0 = 1;
  nn_applet_CTR_detail_SleepIfShellClosed();
  return;
}
