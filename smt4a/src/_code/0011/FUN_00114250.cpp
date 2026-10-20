/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00114250` (_code @ 0x114250, 0x6c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e75fa(...);
int FUN_002e78d0(...);
int FUN_002e9300(...);
int FUN_002e9318(...);

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp34; /* 0x34: local_34 */
} param_1_stack;

extern unsigned char LAB_00114139; /* 0x114139 */
extern unsigned char DAT_00558af4; /* 0x558af4 */
extern unsigned int DAT_0063030c; /* 0x63030c */

extern unsigned int *FUN_0010531c(int, unsigned int, unsigned char *);
extern unsigned int FUN_002e6e26(void);
/* Supplied declaration required: FUN_002e75fa. */
extern int FUN_002e760a(unsigned int);
/* Supplied declaration required: FUN_002e78d0. */
/* Supplied declaration required: FUN_002e9300. */
/* Supplied declaration required: FUN_002e9318. */


void FUN_00114250(int param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  unsigned int temp_v1;
  unsigned char temp_v2 [8];
  unsigned int temp_v3;
  unsigned char temp_v4 [4];
  
  temp_v0 = FUN_002e760a(0x50);
  if (temp_v0 != 0) {
    FUN_002e9300(temp_v2,"CallContextRegister::CheckExpiredCalls");
    temp_v3 = 0;
    puVar2 = (unsigned int *)FUN_0010531c(temp_v0,0,temp_v4);
    puVar2[0x10] = (unsigned int)&LAB_00114139;
    puVar2[0x12] = param_1;
    *puVar2 = (unsigned int)&DAT_00558af4;
    puVar2[0x11] = temp_v3;
    puVar2[0x13] = 0;
    *(unsigned int **)(param_1 + 0x5c) = puVar2;
    FUN_002e9318(temp_v2);
  }
  else {
    *(unsigned int *)(param_1 + 0x5c) = 0;
  }
  *(unsigned int *)(*(int *)(param_1 + 0x5c) + 0x3c) = DAT_0063030c;
  FUN_002e75fa(*(unsigned int *)(param_1 + 0x5c));
  temp_v1 = FUN_002e6e26();
  FUN_002e78d0(temp_v1,*(unsigned int *)(param_1 + 0x5c),0);
  return;
}

} /* extern "C" */
