/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00301ad0` (_code @ 0x301ad0, 0xac bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int taskCreateDraw(...);
int asdMemoryAllocTracked(...);
int asdMemFree(...);
int scrScriptProcessDestroy(...);

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern int btlAiScriptUpdate(...); /* 0x2dec4c */
extern unsigned char LAB_00301bc0; /* 0x301bc0 */
extern int btlAiScriptDestroy(...); /* 0x357dbc */
extern int *g_btlAiScript; /* 0x571130 */

/* Supplied declaration required: taskCreateDraw. */
/* Supplied declaration required: asdMemoryAllocTracked. */
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: scrScriptProcessDestroy. */


void FUN_00301ad0(unsigned int *param_1)

{
/* irregular: 6 native warning(s); review required */
  int *piVar1;
  unsigned char *puVar2;
  
  piVar1 = (int *)0x100;
  asdMemoryAllocTracked(0x100,0x100,0,0x90,1);
  puVar2 = &LAB_00301bc0;
  g_btlAiScript = piVar1;
  taskCreateDraw(&LAB_00301bc0,4,0,0,btlAiScriptUpdate,btlAiScriptDestroy,param_1,*param_1);
  param_1[0x1b] = (unsigned int)puVar2;
  piVar1 = g_btlAiScript;
  if (g_btlAiScript[1] != 0) {
    scrScriptProcessDestroy();
    piVar1[1] = 0;
  }
  if (*piVar1 != 0) {
    asdMemFree();
    *piVar1 = 0;
  }
  piVar1[3] = 0;
  return;
}

} /* extern "C" */
