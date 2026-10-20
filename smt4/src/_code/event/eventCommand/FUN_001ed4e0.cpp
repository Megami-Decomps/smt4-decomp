/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001ed4e0` (_code @ 0x1ed4e0, 0x78 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int gameFlagSetValue(int, int);
int FUN_002cd878(void);
int FUN_002d6658(int);
int FUN_002ef6b8(int, unsigned int);

extern unsigned char g_eventCommand; /* 0x43e088 */

/* Supplied declaration required: gameFlagSetValue. */
extern int scrGetArg(unsigned int);
extern int jobIsValid(int);
extern unsigned int gameFlagIsSet(void);
/* Supplied declaration required: FUN_002cd878. */
/* Supplied declaration required: FUN_002d6658. */
/* Supplied declaration required: FUN_002ef6b8. */


unsigned char FUN_001ed4e0(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = scrGetArg(0);
  if ((*(int *)((unsigned char *)&g_eventCommand + 0x8)) == 0) {
    FUN_002d6658(0);
    FUN_002cd878();
    temp_v1 = temp_v0 + 0x800;
    temp_v2 = gameFlagIsSet();
    FUN_002ef6b8(temp_v0,temp_v2);
    (*(int *)((unsigned char *)&g_eventCommand + 0x8)) = temp_v0;
    gameFlagSetValue(temp_v1,1);
  }
  temp_v0 = jobIsValid((*(int *)((unsigned char *)&g_eventCommand + 0x8)));
  if (temp_v0 == 0) {
    (*(int *)((unsigned char *)&g_eventCommand + 0x8)) = 0;
  }
  return temp_v0 == 0;
}

} /* extern "C" */
