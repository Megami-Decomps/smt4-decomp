/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004eb838` (_code @ 0x4eb838, 0xe4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_004d7a70(int, int, int, int);

extern int g_btlScriptUnit; /* 0x57113c */
extern int g_btlEvent; /* 0x573898 */

/* Supplied declaration required: FUN_004d7a70. */
extern int isEntryUsable(int);


void FUN_004eb838(int *param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = isEntryUsable(g_btlEvent);
  if (temp_v0 == 0) {
    temp_v1 = (int)*(short *)(*(int *)(param_2 + 0x20) + 0x6e);
    temp_v0 = g_btlEvent;
    if (*(short *)(*(int *)(param_2 + 0x28) + 0x1be) != 0xb) {
      FUN_004d7a70(g_btlEvent,3,temp_v1,0);
    }
    else {
      FUN_004d7a70(g_btlEvent,7,temp_v1,0);
    }
    if (temp_v0 != 0) {
      *(unsigned char *)(g_btlScriptUnit + *(int *)(*param_1 + 0xa4) * 0x1254 + 9) = 0x1a;
      return;
    }
  }
  if (*(short *)(*(int *)(param_2 + 0x28) + 0x1be) == 0xd) {
    *(unsigned char *)(g_btlScriptUnit + *(int *)(*param_1 + 0xa4) * 0x1254 + 9) = 9;
    return;
  }
  *(unsigned char *)(g_btlScriptUnit + *(int *)(*param_1 + 0xa4) * 0x1254 + 9) = 0xb;
  return;
}

} /* extern "C" */
