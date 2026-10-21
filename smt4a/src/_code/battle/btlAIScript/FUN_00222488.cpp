/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00222488` (_code @ 0x222488, 0xf4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int textFormatBuffer(...);
int btlGetMainState(void);
int asdMemFree(void);
int scrScriptProcessDestroy(void);
int dataTable00FindById(unsigned int);
int libc_strcpy(int *, unsigned char [132]);
int sysMemClear(unsigned char [132], int);

extern int g_aocSystem; /* 0x570280 */
extern int *g_btlAiScript; /* 0x571130 */

/* Supplied declaration required: textFormatBuffer. */
/* Supplied declaration required: btlGetMainState. */
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: scrScriptProcessDestroy. */
/* Supplied declaration required: dataTable00FindById. */
extern int FUN_00240c34(unsigned char *);
/* Supplied declaration required: libc_strcpy. */
/* Supplied declaration required: sysMemClear. */
extern int aocContentLookupSucceeds(int, unsigned short);


void FUN_00222488(int param_1)

{
/* irregular: 7 native warning(s); review required */
  int *piVar1;
  unsigned int temp_v0;
  int temp_v1;
  unsigned char temp_v2 [132];
  
  piVar1 = g_btlAiScript;
  if (g_btlAiScript != (int *)0x0) {
    if (g_btlAiScript[1] != 0) {
      scrScriptProcessDestroy();
      piVar1[1] = 0;
    }
    if (*piVar1 != 0) {
      asdMemFree();
      *piVar1 = 0;
    }
    piVar1[3] = 1;
    *(unsigned int *)(g_aocSystem + 0x460) = 0xffffffff;
    btlGetMainState();
    temp_v0 = (unsigned int)*(unsigned short *)(*(int *)(param_1 + 0x28) + 2);
    dataTable00FindById(temp_v0);
    sysMemClear(temp_v2,0x80);
    textFormatBuffer(temp_v2,"battle/AI/%s.bf",temp_v0 + 0x8e);
    temp_v1 = FUN_00240c34(temp_v2);
    if (temp_v1 == 0) {
      textFormatBuffer(temp_v2,"battle/AI/tmp.bf");
    }
    libc_strcpy(piVar1 + 4,temp_v2);
    temp_v1 = aocContentLookupSucceeds(g_aocSystem,*(unsigned short *)(*(int *)(param_1 + 0x28) + 2));
    if (temp_v1 != 0) {
      *(unsigned int *)(g_aocSystem + 0x460) = (unsigned int)*(unsigned short *)(*(int *)(param_1 + 0x28) + 2);
    }
  }
  return;
}

} /* extern "C" */
