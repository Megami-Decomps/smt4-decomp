/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00229b10` (_code @ 0x229b10, 0x13c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int battleSetActionKind(int *);
int FUN_0027e3f8(int, int, int, int);
int FUN_002ae164(void);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

extern unsigned char g_btlAction; /* 0x434278 */
extern int g_btlEvent; /* 0x435d48 */

/* Supplied declaration required: battleSetActionKind. */
extern int FUN_0027e3b8(int);
/* Supplied declaration required: FUN_0027e3f8. */
/* Supplied declaration required: FUN_002ae164. */


void FUN_00229b10(int *param_1,int param_2)

{
/* irregular: 3 native warning(s); review required */
  char temp_v0;
  short temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v2 = FUN_0027e3b8(g_btlEvent);
  if (temp_v2 == 0) {
    temp_v3 = (int)*(short *)(*(int *)(param_2 + 0x20) + 0x6e);
    temp_v2 = g_btlEvent;
    if (*(short *)(*(int *)(param_2 + 0x28) + 0x14c) != 0xb) {
      FUN_0027e3f8(g_btlEvent,3,temp_v3,0);
    }
    else {
      FUN_0027e3f8(g_btlEvent,7,temp_v3,0);
    }
    if (temp_v2 != 0) {
      *(unsigned char *)((*(int *)((unsigned char *)&g_btlAction + 0x4)) + *(int *)(*param_1 + 0x84) * 0xf1c + 9) = 0x18;
      return;
    }
  }
  temp_v1 = *(short *)(*(int *)(param_2 + 0x28) + 0x14c);
  if (temp_v1 != 3) {
    if (temp_v1 == 0xd) {
      *(unsigned char *)((*(int *)((unsigned char *)&g_btlAction + 0x4)) + *(int *)(*param_1 + 0x84) * 0xf1c + 9) = 8;
      return;
    }
  }
  else {
    temp_v2 = (int)*(short *)(*(int *)(param_2 + 0x28) + 0x14e);
    FUN_002ae164();
    temp_v0 = '\0';
    if (temp_v2 != 0) {
      temp_v0 = *(char *)(temp_v2 + 0x4b);
    }
    if (((*(unsigned int *)(*param_1 + 0x44a8) & 0x800) == 0) && (temp_v2 != 0 && temp_v0 != '\0')) {
      *(unsigned char *)((*(int *)((unsigned char *)&g_btlAction + 0x4)) + *(int *)(*param_1 + 0x84) * 0xf1c + 9) = 0xc;
      return;
    }
  }
  battleSetActionKind(param_1);
  return;
}

} /* extern "C" */
