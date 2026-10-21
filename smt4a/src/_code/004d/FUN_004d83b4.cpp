/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004d83b4` (_code @ 0x4d83b4, 0x128 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int textFormatBuffer(...);
int asdLoadFileAsyncSimple(unsigned char [128], unsigned int *, int);
int sysMemClear(unsigned char [128], int);
int aocQueueType20(unsigned int, unsigned int, unsigned int *, unsigned char [128]);
int aocQueueType1f(unsigned int, unsigned int, unsigned int *, unsigned char [128]);
int FUN_004d7e20(unsigned int *, int);

extern unsigned int g_aocSystem; /* 0x570280 */

/* Supplied declaration required: textFormatBuffer. */
/* Supplied declaration required: asdLoadFileAsyncSimple. */
/* Supplied declaration required: sysMemClear. */
/* Supplied declaration required: aocQueueType20. */
/* Supplied declaration required: aocQueueType1f. */
extern int FUN_0046c4b4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_004d7e20. */


void FUN_004d83b4(unsigned int *param_1,int param_2)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1 [128];
  unsigned char temp_v2 [128];
  
  sysMemClear(temp_v1,0x80);
  textFormatBuffer(temp_v1,"battle/event/%s/%s.mbm",param_2 + 0x130);
  temp_v0 = FUN_0046c4b4(g_aocSystem,*(unsigned int *)(param_2 + 0xf0));
  if (temp_v0 != 0) {
    aocQueueType20(g_aocSystem,*(unsigned int *)(param_2 + 0xf0),param_1 + 3,temp_v1);
  }
  else {
    asdLoadFileAsyncSimple(temp_v1,param_1 + 3,0);
  }
  *param_1 = 4;
  if (param_1[3] != 0) {
    *param_1 = 5;
    sysMemClear(temp_v2,0x80);
    textFormatBuffer(temp_v2,"battle/event/%s/%s.bf",param_2 + 0x130);
    temp_v0 = FUN_0046c4b4(g_aocSystem,*(unsigned int *)(param_2 + 0xf0));
    if (temp_v0 != 0) {
      aocQueueType1f(g_aocSystem,*(unsigned int *)(param_2 + 0xf0),param_1 + 4,temp_v2);
    }
    else {
      asdLoadFileAsyncSimple(temp_v2,param_1 + 4,0);
    }
    *param_1 = 6;
    if (param_1[4] != 0) {
      *param_1 = 7;
      FUN_004d7e20(param_1,param_2);
    }
  }
  return;
}

} /* extern "C" */
