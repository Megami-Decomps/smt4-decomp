/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0029defc` (_code @ 0x29defc, 0xa4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0024d7d0(int, unsigned char [1552]);
int FUN_0024d94c(int, unsigned int);
int FUN_0026a858(void);
int FUN_0029dc74(unsigned int, unsigned char [1552]);

extern unsigned char g_gameGlobals; /* 0x44e140 */

/* Supplied declaration required: FUN_0024d7d0. */
/* Supplied declaration required: FUN_0024d94c. */
/* Supplied declaration required: FUN_0026a858. */
/* Supplied declaration required: FUN_0029dc74. */
extern unsigned int gameGetPlayerData(void);


void FUN_0029defc(unsigned int param_1,int param_2)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned char temp_v2;
  unsigned char temp_v3 [1552];
  
  temp_v0 = (*(int *)((unsigned char *)&g_gameGlobals + 0x4));
  if ((int)param_1 < 0) {
    temp_v1 = gameGetPlayerData();
    FUN_0024d94c(temp_v0 + 0x1300,temp_v1);
    temp_v2 = 0;
  }
  else {
    if (param_2 == 0) {
      FUN_0029dc74(param_1 & 0xffff,temp_v3);
      FUN_0024d7d0(temp_v0 + 0x1300,temp_v3);
      *(unsigned char *)(temp_v0 + 0x1e66) = 1;
      *(unsigned char *)(temp_v0 + 0x1eb8) = 1;
      return;
    }
    FUN_0026a858();
    FUN_0024d7d0(temp_v0 + 0x1300,temp_v3);
    temp_v2 = 6;
  }
  *(unsigned char *)(temp_v0 + 0x1e66) = temp_v2;
  *(unsigned char *)(temp_v0 + 0x1eb8) = 1;
  return;
}

} /* extern "C" */
