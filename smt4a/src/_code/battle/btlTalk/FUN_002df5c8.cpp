/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002df5c8` (_code @ 0x2df5c8, 0x98 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int jobStop(unsigned int, int);
int asdMemFree(...);
int scrScriptProcessDestroy(void);
int FUN_004ab734(unsigned int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern int g_btlTalk; /* 0x57a7b8 */
extern unsigned int DAT_0057a9c8; /* 0x57a9c8 */

/* Supplied declaration required: jobStop. */
extern int jobGetWork(void);
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: scrScriptProcessDestroy. */
/* Supplied declaration required: FUN_004ab734. */


void FUN_002df5c8(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = jobGetWork();
  temp_v0 = g_btlTalk;
  if (g_btlTalk != 0) {
    FUN_004ab734(DAT_0057a9c8);
    if (*(int *)(temp_v0 + 8) != 0) {
      asdMemFree();
      *(unsigned int *)(temp_v0 + 8) = 0;
    }
    if (*(int *)(temp_v0 + 0x10) != 0) {
      scrScriptProcessDestroy();
      *(unsigned int *)(temp_v0 + 0x10) = 0;
    }
    if (*(int *)(temp_v0 + 0xc) != 0) {
      asdMemFree();
      *(unsigned int *)(temp_v0 + 0xc) = 0;
    }
    if (*(int *)(temp_v0 + 0x14) != 0) {
      asdMemFree();
      *(unsigned int *)(temp_v0 + 0x14) = 0;
    }
    asdMemFree(g_btlTalk);
    g_btlTalk = 0;
  }
  jobStop(*(unsigned int *)(temp_v1 + 0x40),0);
  return;
}

} /* extern "C" */
