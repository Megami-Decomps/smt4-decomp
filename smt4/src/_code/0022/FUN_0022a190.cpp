/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0022a190` (_code @ 0x22a190, 0x128 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0022a07c(unsigned int *, int);
int aocQueueType1f(unsigned int, unsigned int, unsigned int *, unsigned char [128]);
int FUN_00297468(unsigned char [128], unsigned int *, int);
int textFormatBuffer(...);
int memClear(unsigned char [128], int);
int aocQueueType20(unsigned int, unsigned int, unsigned int *, unsigned char [128]);

extern unsigned int g_aocSystem; /* 0x433158 */

/* Supplied declaration required: FUN_0022a07c. */
/* Supplied declaration required: aocQueueType1f. */
extern int FUN_0022a2c4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_00297468. */
/* Supplied declaration required: textFormatBuffer. */
/* Supplied declaration required: memClear. */
/* Supplied declaration required: aocQueueType20. */


void FUN_0022a190(unsigned int *param_1,int param_2)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1 [128];
  unsigned char temp_v2 [128];
  
  memClear(temp_v1,0x80);
  textFormatBuffer(temp_v1,"battle/event/%s/%s.mbm",param_2 + 0x100);
  temp_v0 = FUN_0022a2c4(g_aocSystem,*(unsigned int *)(param_2 + 0xc4));
  if (temp_v0 != 0) {
    aocQueueType20(g_aocSystem,*(unsigned int *)(param_2 + 0xc4),param_1 + 3,temp_v1);
  }
  else {
    FUN_00297468(temp_v1,param_1 + 3,0);
  }
  *param_1 = 4;
  if (param_1[3] != 0) {
    *param_1 = 5;
    memClear(temp_v2,0x80);
    textFormatBuffer(temp_v2,"battle/event/%s/%s.bf",param_2 + 0x100);
    temp_v0 = FUN_0022a2c4(g_aocSystem,*(unsigned int *)(param_2 + 0xc4));
    if (temp_v0 != 0) {
      aocQueueType1f(g_aocSystem,*(unsigned int *)(param_2 + 0xc4),param_1 + 4,temp_v2);
    }
    else {
      FUN_00297468(temp_v2,param_1 + 4,0);
    }
    *param_1 = 6;
    if (param_1[4] != 0) {
      *param_1 = 7;
      FUN_0022a07c(param_1,param_2);
    }
  }
  return;
}

} /* extern "C" */
