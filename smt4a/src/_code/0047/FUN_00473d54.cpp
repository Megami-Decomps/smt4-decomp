/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00473d54` (_code @ 0x473d54, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00170484(int);
int FUN_00170d8c(int, int, int, int);
int FUN_001b03dc(int, int, int, char [16], char [4], int);
int FUN_001bcd48(int, int);
int FUN_0043bff8(void);
int nn_applet_CTR_detail_ReplySleepQueryToManager(int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern signed char DAT_005891f4; /* 0x5891f4 */

/* Supplied declaration required: FUN_00170484. */
/* Supplied declaration required: FUN_00170d8c. */
/* Supplied declaration required: FUN_001b03dc. */
/* Supplied declaration required: FUN_001bcd48. */
/* Supplied declaration required: FUN_0043bff8. */
extern int FUN_0043c2b4(void);
/* Supplied declaration required: nn_applet_CTR_detail_ReplySleepQueryToManager. */


void FUN_00473d54(void)

{
/* irregular: 7 native warning(s); review required */
  char temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  char acStack_28 [4];
  char acStack_24 [16];
  
  FUN_0043bff8();
  temp_v2 = FUN_0043c2b4();
  temp_v0 = DAT_005891f4;
  if (temp_v2 != 0) {
    return;
  }
  if (DAT_005891f4 != '\0') {
    DAT_005891f4 = '\0';
    FUN_00170484(3);
    nn_applet_CTR_detail_ReplySleepQueryToManager(0);
  }
  while (temp_v1 = 0x407, FUN_001b03dc(0x407,0,0,acStack_24,acStack_28,0),
        (temp_v1 & (int)acStack_24[0] & (int)acStack_28[0]) == 0) {
    FUN_001bcd48(10000000,0);
  }
  if (temp_v0 == '\0') {
    return;
  }
  DAT_005891f4 = 1;
  FUN_00170d8c(4,0,0,0);
                    /* WARNING: Treating indirect jump as return */
  return;
}

} /* extern "C" */
