/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00343c58` (_code @ 0x343c58, 0x78 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0023f2e4(unsigned int, int, char [4], unsigned int);
int FUN_002b64a0(...);

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp50; /* 0x50: local_50 */
} param_4_stack;

extern unsigned char LAB_00343cdc; /* 0x343cdc */
extern char s__B_B_B_B_B_B_B_B_B_B_0044d1f0[367]; /* 0x44d1f0 */
extern char s__B_B_B_______________0044d6f8[1171]; /* 0x44d6f8 */

/* Supplied declaration required: FUN_0023f2e4. */
/* Supplied declaration required: FUN_002b64a0. */


void FUN_00343c58(unsigned int param_1,int param_2,int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  char temp_v0 [4];
  char acStack_4c [4];
  unsigned int uStack_48;
  unsigned int uStack_44;
  unsigned int uStack_40;
  unsigned int uStack_3c;
  unsigned int uStack_38;
  unsigned int uStack_34;
  unsigned int temp_v1;
  unsigned int uStack_2c;
  unsigned int uStack_28;
  unsigned int uStack_24;
  unsigned int uStack_20;
  unsigned int uStack_1c;
  unsigned int uStack_18;
  unsigned int uStack_14;
  
  temp_v0[0] = 'p';
  temp_v0[1] = 'l';
  temp_v0[2] = 'a';
  temp_v0[3] = 'y';
  acStack_4c[0] = 'e';
  acStack_4c[1] = 'r';
  acStack_4c[2] = '/';
  acStack_4c[3] = 'p';
  uStack_48 = 0x6c;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  temp_v1 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_18 = 0;
  uStack_14 = 0;
  FUN_002b64a0(temp_v0,*(unsigned int *)(s__B_B_B_B_B_B_B_B_B_B_0044d1f0 + param_3 * 4));
  FUN_002b64a0(temp_v0,*(unsigned int *)(s__B_B_B_______________0044d6f8 + param_2 * 4));
  FUN_002b64a0(temp_v0,&LAB_00343cdc);
  FUN_0023f2e4(param_1,param_2,temp_v0,param_4);
  return;
}

} /* extern "C" */
