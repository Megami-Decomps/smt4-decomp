/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010fcfc` (_code @ 0x10fcfc, 0x92 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern unsigned char LAB_0010fa5d; /* 0x10fa5d */
extern unsigned char LAB_0010fd90; /* 0x10fd90 */
extern unsigned char LAB_001100a9; /* 0x1100a9 */

extern int FUN_0011356c(int, unsigned int, int);
extern int FUN_002e760a(unsigned int);
extern unsigned int FUN_002e7908(unsigned char *, unsigned int *);
extern int FUN_002e9af4(void);
/* Supplied declaration required: FUN_002e9ec8. */
/* Supplied declaration required: FUN_002ea3c0. */
/* Supplied declaration required: FUN_002ea3d0. */
/* Supplied declaration required: FUN_002f7cb0. */
/* Supplied declaration required: FUN_002f7cba. */
/* Supplied declaration required: FUN_002fa6e8. */
/* Supplied declaration required: FUN_002fa6f8. */


void FUN_0010fcfc(int param_1)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned char temp_v2 [12];
  int temp_v3;
  unsigned char temp_v4 [16];
  
  temp_v0 = FUN_002e9af4();
  FUN_002e9ec8(temp_v0,*(unsigned int *)(param_1 + 0x68));
  if (temp_v0 != 0) {
    temp_v0 = FUN_002e760a(0x10);
    temp_v1 = 0;
    if (temp_v0 != 0) {
      temp_v1 = FUN_002ea3c0(temp_v0,&LAB_001100a9,0,&LAB_0010fd90);
    }
    FUN_002f7cba(param_1,param_1 + 0xd0,temp_v1);
    temp_v0 = FUN_0011356c(param_1 + 0xd0,*(unsigned int *)(param_1 + 0x78),param_1 + 0xac);
    if (temp_v0 != 0) {
      if (*(char *)(param_1 + 0xe0) != '\x01') {
        temp_v1 = FUN_002ea3c0(temp_v4,&LAB_0010fa5d,0,&LAB_0010fd90);
        FUN_002ea3d0(param_1,temp_v1);
      }
      else {
        FUN_002f7cb0(param_1);
      }
    }
    else {
      temp_v3 = 0x8001000d;
      temp_v1 = FUN_002e7908(temp_v2,(unsigned int *)&temp_v3);
      FUN_002fa6f8(param_1,3,temp_v1);
    }
  }
  else {
    FUN_002fa6e8(param_1);
  }
  return;
}
