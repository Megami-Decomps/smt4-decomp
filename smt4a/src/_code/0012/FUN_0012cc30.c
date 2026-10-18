/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012cc30` (_code @ 0x12cc30, 0xb0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 4 slot(s), 14 byte(s) */
typedef struct {
    unsigned short sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp40; /* 0x40: local_40 */
} param_1_stack;

extern unsigned char LAB_0012cce0; /* 0x12cce0 */
extern unsigned char LAB_0012cced; /* 0x12cced */

extern int FUN_002e760a(unsigned int);
extern unsigned int FUN_002e7908(unsigned char *, unsigned int *);
/* Supplied declaration required: FUN_002e9af4. */
/* Supplied declaration required: FUN_002e9ec8. */
extern unsigned int FUN_002ea3c0(int, unsigned char *, unsigned int, unsigned char *);
/* Supplied declaration required: FUN_002f7c94. */
/* Supplied declaration required: FUN_002f7cb0. */
/* Supplied declaration required: FUN_002f7cba. */
/* Supplied declaration required: FUN_0030c720. */
extern unsigned short FUN_0030c774(int);
/* Supplied declaration required: FUN_0030c78c. */


void FUN_0012cc30(int param_1)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3 [2];
  unsigned char temp_v4 [8];
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned short temp_v7;
  unsigned char temp_v8 [16];
  
  temp_v0 = FUN_002e9af4();
  FUN_002e9ec8(temp_v0,*(unsigned int *)(param_1 + 0x68));
  if (temp_v0 != 0) {
    FUN_0030c78c(temp_v4);
    temp_v5 = *(unsigned int *)(param_1 + 0x130);
    temp_v6 = *(unsigned int *)(param_1 + 0x134);
    temp_v7 = FUN_0030c774(param_1 + 0x3e0);
    temp_v3[0] = *(unsigned int *)(param_1 + 0x3f8);
    temp_v0 = (**(romwright_code **)(**(int **)(param_1 + 0x70) + 0x50))
                      (*(int **)(param_1 + 0x70),param_1 + 0x80,temp_v4,param_1 + 0x110);
    if (temp_v0 != 0) {
      temp_v2 = *(unsigned int *)(param_1 + 0xc4);
      temp_v1 = FUN_002e9af4();
      FUN_002f7c94(temp_v1,*(unsigned int *)(param_1 + 0x68),temp_v2);
      FUN_002f7cb0(param_1);
      temp_v0 = FUN_002e760a(0x10);
      temp_v1 = 0;
      if (temp_v0 != 0) {
        temp_v1 = FUN_002ea3c0(temp_v0,&LAB_0012cced,0,&LAB_0012cce0);
      }
      FUN_002f7cba(param_1,param_1 + 0x80,temp_v1);
      return;
    }
    temp_v3[0] = 0x8001000d;
  }
  else {
    temp_v3[0] = 0x80010004;
  }
  temp_v1 = FUN_002e7908(temp_v8,temp_v3);
  FUN_0030c720(param_1,temp_v1);
  return;
}
