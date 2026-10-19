/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013b8f8` (_code @ 0x13b8f8, 0x108 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of void: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} void_stack;

extern unsigned int DAT_005891bc; /* 0x5891bc */
extern int DAT_005891c8; /* 0x5891c8 */
extern unsigned int DAT_005891cc; /* 0x5891cc */
extern signed char DAT_005891f4; /* 0x5891f4 */
extern romwright_code *DAT_0058922c; /* 0x58922c */

/* Supplied declaration required: FUN_00147384. */
/* Supplied declaration required: FUN_001476ec. */
/* Supplied declaration required: FUN_00147990. */
/* Supplied declaration required: FUN_00170484. */
/* Supplied declaration required: FUN_00170f68. */
/* Supplied declaration required: FUN_0017145c. */
/* Supplied declaration required: nn_applet_CTR_detail_GetAppletManInfo. */
extern unsigned int nn_applet_CTR_detail_PrepareToJumpToHomeMenu(void);
/* Supplied declaration required: nn_applet_CTR_detail_ReplySleepQueryToManager. */
extern void nn_applet_CTR_detail_SleepIfShellClosed(void);


void FUN_0013b8f8(void)

{
/* irregular: 9 native warning(s); review required */
  int temp_v0;
  char temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int uStack_1c;
  
  temp_v1 = DAT_005891f4;
  if (DAT_005891f4 != '\0') {
    DAT_005891f4 = '\0';
    FUN_00170484(3);
    nn_applet_CTR_detail_ReplySleepQueryToManager(0);
  }
  FUN_0017145c(0);
  if (DAT_0058922c != (romwright_code *)0x0) {
    (*DAT_0058922c)();
  }
  nn_applet_CTR_detail_GetAppletManInfo(2,0,&temp_v4,&temp_v3,0);
  temp_v0 = temp_v2;
  if (temp_v4 != 0) {
    temp_v0 = temp_v3;
  }
  if (!(temp_v4 != 0 && temp_v4 != temp_v0)) {
    nn_applet_CTR_detail_PrepareToJumpToHomeMenu();
    FUN_00147384(0,0,DAT_005891bc);
  }
  else {
    FUN_00147990();
    FUN_001476ec(temp_v4,0,0,DAT_005891bc);
  }
  temp_v4 = DAT_005891c8;
  uStack_1c = DAT_005891cc;
  FUN_00170f68(0,0,0,0,0);
  if (temp_v1 == '\0') {
    return;
  }
  DAT_005891f4 = 1;
  nn_applet_CTR_detail_SleepIfShellClosed();
  return;
}
