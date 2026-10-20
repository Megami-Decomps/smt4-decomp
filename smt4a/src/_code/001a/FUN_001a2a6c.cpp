/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a2a6c` (_code @ 0x1a2a6c, 0xa8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00170484(int);
int FUN_001b03dc(unsigned int, int, int, char [12], char [4], int);
int FUN_001bcd48(int, int);
int nn_applet_CTR_detail_ReplySleepQueryToManager(int);

/* stack frame of param_1: 5 slot(s), 14 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned char sp24; /* 0x24: local_24 */
    unsigned char sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_1_stack;

extern signed char DAT_005891f4; /* 0x5891f4 */

/* Supplied declaration required: FUN_00170484. */
/* Supplied declaration required: FUN_001b03dc. */
/* Supplied declaration required: FUN_001bcd48. */
/* Supplied declaration required: nn_applet_CTR_detail_ReplySleepQueryToManager. */
extern void nn_applet_CTR_detail_SleepIfShellClosed(void);


void FUN_001a2a6c(unsigned int param_1)

{
/* irregular: 4 native warning(s); review required */
  char temp_v0;
  unsigned int temp_v1;
  char temp_v2 [4];
  char temp_v3 [12];
  
  temp_v0 = DAT_005891f4;
  if (DAT_005891f4 != '\0') {
    DAT_005891f4 = '\0';
    FUN_00170484(3);
    nn_applet_CTR_detail_ReplySleepQueryToManager(0);
  }
  while (temp_v1 = param_1, FUN_001b03dc(param_1,0,0,temp_v3,temp_v2,0),
        (temp_v1 & (int)temp_v3[0] & (int)temp_v2[0]) == 0) {
    FUN_001bcd48(10000000,0);
  }
  if (temp_v0 == '\0') {
    return;
  }
  DAT_005891f4 = 1;
  nn_applet_CTR_detail_SleepIfShellClosed();
  return;
}

} /* extern "C" */
