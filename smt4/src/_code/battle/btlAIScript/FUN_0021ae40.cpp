/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0021ae40` (_code @ 0x21ae40, 0xac bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int scrScriptProcessDestroy(...);
int asdMemFree(...);
int asdMemAlloc(...);
int taskCreateDraw(...);

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern int btlAiScriptUpdate(...); /* 0x20ed70 */
extern unsigned char LAB_0021af30; /* 0x21af30 */
extern int btlAiScriptDestroy(...); /* 0x2e064c */
extern int *g_btlAiScript; /* 0x434260 */

/* Supplied declaration required: scrScriptProcessDestroy. */
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: asdMemAlloc. */
/* Supplied declaration required: taskCreateDraw. */


void FUN_0021ae40(unsigned int *param_1)

{
/* irregular: 6 native warning(s); review required */
  int *piVar1;
  unsigned char *puVar2;
  
  piVar1 = (int *)0x100;
  asdMemAlloc(0x100,0x100,0,0x90,1);
  puVar2 = &LAB_0021af30;
  g_btlAiScript = piVar1;
  taskCreateDraw(&LAB_0021af30,2,0,0,btlAiScriptUpdate,btlAiScriptDestroy,param_1,*param_1);
  param_1[0x12] = (unsigned int)puVar2;
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
