/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013b7e0` (_code @ 0x13b7e0, 0x10c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of void: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp28; /* 0x28: local_28 */
} void_stack;

extern unsigned int DAT_005891bc; /* 0x5891bc */
extern signed char DAT_005891f4; /* 0x5891f4 */
extern romwright_code *DAT_0058922c; /* 0x58922c */

/* Supplied declaration required: FUN_00147384. */
extern int FUN_0015a318(void);
extern int FUN_0015a3c0(void);
extern int FUN_0015a430(void);
/* Supplied declaration required: FUN_0015a440. */
/* Supplied declaration required: FUN_00170484. */
/* Supplied declaration required: FUN_00170f68. */
/* Supplied declaration required: FUN_0017145c. */
/* Supplied declaration required: nn_applet_CTR_detail_PrepareToJumpToHomeMenu. */
/* Supplied declaration required: nn_applet_CTR_detail_ReplySleepQueryToManager. */
/* Supplied declaration required: nn_applet_CTR_detail_SleepIfShellClosed. */


void FUN_0013b7e0(void)

{
/* irregular: 8 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  
  temp_v0 = DAT_005891f4;
  if (DAT_005891f4 != '\0') {
    DAT_005891f4 = '\0';
    FUN_00170484(3);
    nn_applet_CTR_detail_ReplySleepQueryToManager(0);
  }
  temp_v1 = FUN_0015a430();
  if ((temp_v1 != 0) || (temp_v1 = FUN_0015a3c0(), temp_v1 != 0)) {
    FUN_0015a440(0);
    temp_v1 = FUN_0015a318();
    if ((temp_v1 == 0) || (temp_v1 = FUN_0015a318(), temp_v1 == 2)) {
      FUN_0017145c(0);
      if (DAT_0058922c != (romwright_code *)0x0) {
        (*DAT_0058922c)();
      }
    }
    nn_applet_CTR_detail_PrepareToJumpToHomeMenu();
    FUN_00147384(0,0,DAT_005891bc);
  }
  FUN_00170f68(0,0,0,0,0);
  if (temp_v0 == '\0') {
    return;
  }
  DAT_005891f4 = 1;
  nn_applet_CTR_detail_SleepIfShellClosed();
  return;
}
