/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010da58` (_code @ 0x10da58, 0x9e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp30; /* 0x30: local_30 */
} param_1_stack;

extern unsigned char LAB_0010daf8; /* 0x10daf8 */
extern unsigned char LAB_0010db05; /* 0x10db05 */

/* Supplied declaration required: FUN_0011c7c8. */
extern int FUN_002e760a(unsigned int);
extern unsigned int FUN_002e7908(int *, unsigned int *);
/* Supplied declaration required: FUN_002e9af4. */
/* Supplied declaration required: FUN_002e9c0c. */
/* Supplied declaration required: FUN_002e9ec8. */
extern unsigned int FUN_002ea3c0(int, unsigned char *, unsigned int, unsigned char *);
extern int FUN_002f4e86(unsigned char *);
/* Supplied declaration required: FUN_002f7850. */
/* Supplied declaration required: FUN_002f7c94. */
/* Supplied declaration required: FUN_002f7cb0. */
/* Supplied declaration required: FUN_002f7cba. */


void FUN_0010da58(int param_1)

{
/* irregular: 8 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int iStack_2c;
  int iStack_28;
  int temp_v4;
  unsigned char temp_v5 [16];
  
  temp_v0 = FUN_002e9af4();
  FUN_002e9ec8(temp_v0,*(unsigned int *)(param_1 + 0x6c));
  if (temp_v0 != 0) {
    FUN_002e9c0c();
    iStack_28 = param_1 + 0x14c;
    iStack_2c = param_1 + 0x144;
    temp_v3 = param_1 + 300;
    FUN_0011c7c8(temp_v5,param_1 + 0x140,param_1 + 0xa0,*(unsigned int *)(param_1 + 0x128));
    temp_v0 = FUN_002f4e86(temp_v5);
    if (temp_v0 != 0) {
      temp_v2 = *(unsigned int *)(param_1 + 0xe4);
      temp_v1 = FUN_002e9af4();
      FUN_002f7c94(temp_v1,*(unsigned int *)(param_1 + 0x6c),temp_v2);
      FUN_002f7cb0(param_1);
      temp_v0 = FUN_002e760a(0x10);
      temp_v1 = 0;
      if (temp_v0 != 0) {
        temp_v1 = FUN_002ea3c0(temp_v0,&LAB_0010db05,0,&LAB_0010daf8);
      }
      FUN_002f7cba(param_1,param_1 + 0xa0,temp_v1);
      return;
    }
    temp_v4 = 0x8001000d;
  }
  else {
    temp_v4 = 0x80010004;
  }
  temp_v1 = FUN_002e7908(&temp_v3,(unsigned int *)&temp_v4);
  FUN_002f7850(param_1,temp_v1);
  return;
}
