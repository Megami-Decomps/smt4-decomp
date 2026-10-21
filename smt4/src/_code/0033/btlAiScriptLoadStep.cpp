/* NON_MATCHING: romwright 0.5.0 decompilation of `btlAiScriptLoadStep` (_code @ 0x3356c0, 0xfc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int scrScriptProcessStartEntry(int, int);
int FUN_00297060(int, int);
int asdLoadFileAsyncSimple(int *, int *, int);
int scrScriptProcessDestroy(void);
int asdMemFree(void);
int aocQueueType1d(int, int, int *, int *);

extern int g_aocSystem; /* 0x433158 */

extern int scrRunOpcodesStub(int);
/* Supplied declaration required: scrScriptProcessStartEntry. */
/* Supplied declaration required: FUN_00297060. */
/* Supplied declaration required: asdLoadFileAsyncSimple. */
/* Supplied declaration required: scrScriptProcessDestroy. */
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: aocQueueType1d. */


unsigned int btlAiScriptLoadStep(int *param_1)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  
  switch(param_1[3]) {
  case 1:
    if (*(int *)(g_aocSystem + 0x444) != -1) {
      aocQueueType1d(g_aocSystem,*(int *)(g_aocSystem + 0x444),param_1,param_1 + 4);
      *(unsigned int *)(g_aocSystem + 0x444) = 0xffffffff;
    }
    else {
      asdLoadFileAsyncSimple(param_1 + 4,param_1,0);
    }
    param_1[3] = 2;
    break;
  case 2:
    temp_v0 = *param_1;
    if (temp_v0 == 0) {
      return 0;
    }
    FUN_00297060(temp_v0,0);
    param_1[1] = temp_v0;
    *(unsigned int *)(temp_v0 + 0x108) = 1;
    scrScriptProcessStartEntry(param_1[1],0);
    temp_v0 = 3;
    param_1[3] = temp_v0;
    break;
  case 3:
    temp_v0 = scrRunOpcodesStub(param_1[1]);
    if (temp_v0 != 2) {
      return 0;
    }
    temp_v0 = 4;
    param_1[3] = temp_v0;
    break;
  case 4:
    if (param_1[1] != 0) {
      scrScriptProcessDestroy();
      param_1[1] = 0;
    }
    if (*param_1 != 0) {
      asdMemFree();
      *param_1 = 0;
    }
  }
  return 0;
}

} /* extern "C" */
