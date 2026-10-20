/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00288ef0` (_code @ 0x288ef0, 0x68 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002ba12c(unsigned int);

extern unsigned char g_gameGlobals; /* 0x44e140 */
extern unsigned int g_titleScene; /* 0x44ea00 */

/* Supplied declaration required: FUN_002ba12c. */
extern unsigned int FUN_002bed98(int);
extern int FUN_002beda4(int);


void FUN_00288ef0(int *param_1,unsigned int *param_2,int param_3)

{
/* irregular: irregular input(s): in_s0; 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  float in_s0;
  
  temp_v2 = (*(int *)((unsigned char *)&g_gameGlobals + 0x4)) + param_3 * 0x8c;
  temp_v0 = FUN_002beda4(temp_v2 + 0x44);
  FUN_002ba12c(g_titleScene);
  *param_1 = (int)in_s0 + temp_v0;
  temp_v1 = FUN_002bed98(temp_v2 + 0x44);
  *param_2 = temp_v1;
  return;
}

} /* extern "C" */
