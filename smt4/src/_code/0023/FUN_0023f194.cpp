/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023f194` (_code @ 0x23f194, 0xe4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001e1874(unsigned int);
int jobStopIfValidA(unsigned int);
int jobStopIfValidB(unsigned int);
int FUN_00227218(void);
int btlTalkBustUpDestroy(void);
int gameFlagSetValue(int, int);
int FUN_002ef6b8(int, unsigned int);
int FUN_0033a780(void);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern int g_btlMain; /* 0x4342c8 */

/* Supplied declaration required: FUN_001e1874. */
/* Supplied declaration required: jobStopIfValidA. */
/* Supplied declaration required: jobStopIfValidB. */
/* Supplied declaration required: FUN_00227218. */
extern int FUN_0023f074(unsigned int *);
/* Supplied declaration required: btlTalkBustUpDestroy. */
/* Supplied declaration required: gameFlagSetValue. */
extern unsigned int btlGetMainState(void);
extern int jobIsValid(unsigned int);
extern unsigned int gameFlagIsSet(void);
extern int FUN_002c2a04(unsigned int);
/* Supplied declaration required: FUN_002ef6b8. */
/* Supplied declaration required: FUN_0033a780. */


int FUN_0023f194(unsigned int *param_1)

{
/* irregular: 8 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = 0;
  if (param_1[3] != 0) {
    temp_v0 = param_1[5];
  }
  if (param_1[3] != 0 && temp_v0 != 0) {
    temp_v0 = FUN_002c2a04(0);
    if ((temp_v0 == 3) && (temp_v0 = FUN_002c2a04(1), temp_v0 == 3)) {
      temp_v1 = btlGetMainState();
      FUN_0033a780();
      btlTalkBustUpDestroy();
      jobStopIfValidB(temp_v1);
      jobStopIfValidA(temp_v1);
      FUN_001e1874(temp_v1);
      if (g_btlMain != 0) {
        FUN_00227218();
      }
      if ((param_1[1] & 1) != 0) {
        *param_1 = 6;
        temp_v0 = FUN_0023f074(param_1);
        return temp_v0;
      }
      temp_v1 = gameFlagIsSet();
      temp_v2 = 0x17;
      FUN_002ef6b8(0x17,temp_v1);
      param_1[6] = temp_v2;
      gameFlagSetValue(0x817,1);
      *param_1 = 5;
      temp_v0 = jobIsValid(param_1[6]);
      if (temp_v0 == 0) {
        *param_1 = 6;
        temp_v0 = FUN_0023f074(param_1);
        return temp_v0;
      }
    }
    temp_v0 = 0;
  }
  return temp_v0;
}

} /* extern "C" */
