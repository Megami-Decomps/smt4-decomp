/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001065dc` (_code @ 0x1065dc, 0x158 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_5: 7 slot(s), 25 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned char sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
} param_5_stack;

extern int FUN_002e7674(int, unsigned char *, unsigned int);
/* Supplied declaration required: FUN_002e76a0. */
/* Supplied declaration required: FUN_002e76b6. */
/* Supplied declaration required: FUN_002ed2b0. */
/* Supplied declaration required: FUN_002ed838. */
/* Supplied declaration required: FUN_002ed84a. */
extern int FUN_002ed864(int, int);
/* Supplied declaration required: FUN_002ed882. */


void FUN_001065dc(unsigned int param_1,int param_2,int param_3,unsigned int param_4,unsigned int param_5)

{
/* irregular: 6 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned char temp_v5;
  char temp_v6 [4];
  unsigned char temp_v7 [16];
  unsigned int temp_v8;
  unsigned int temp_v9 [2];
  unsigned int uStack_24;
  int iStack_20;
  int iStack_1c;
  unsigned int temp_v10;
  
  uStack_24 = param_1;
  iStack_20 = param_2;
  iStack_1c = param_3;
  temp_v10 = param_4;
  FUN_002ed838(param_3);
  temp_v6[0] = -0xb;
  temp_v1 = param_3;
  FUN_002ed84a(param_3,temp_v6);
  if ((temp_v1 != 0) && (temp_v6[0] = *(char *)(param_2 + 0x24), temp_v6[0] == -0x30)) {
    temp_v1 = param_3;
    FUN_002ed84a(param_3,temp_v6);
    temp_v5 = temp_v1 == 0;
    do {
      if (temp_v5) {
        return;
      }
      temp_v1 = FUN_002ed864(param_3,param_2 + 0xa2);
      if (temp_v1 == 0) {
        return;
      }
      temp_v1 = FUN_002ed882(param_3,param_2 + 0xa4);
      if (temp_v1 == 0) {
        return;
      }
      temp_v1 = FUN_002ed882(param_3,param_2 + 0xa8);
      if (temp_v1 == 0) {
        return;
      }
      temp_v1 = FUN_002ed864(param_3,param_2 + 0xac);
      if (temp_v1 == 0) {
        return;
      }
      temp_v1 = FUN_002ed864(param_3,param_2 + 0xae);
      if (temp_v1 == 0) {
        return;
      }
      temp_v9[0] = *(unsigned int *)(param_2 + 0xb0) ^ 0xdb319579;
      temp_v1 = FUN_002ed882(param_3,temp_v9);
      if (temp_v1 == 0) {
        return;
      }
      temp_v9[0] = *(unsigned int *)(param_2 + 0xb4) ^ 0xbee17d2f;
      temp_v1 = FUN_002ed882(param_3,temp_v9);
      if (temp_v1 == 0) {
        return;
      }
      temp_v1 = FUN_002ed882(param_3,param_2 + 0xb8);
      if (temp_v1 == 0) {
        return;
      }
      temp_v8 = 0;
      if (*(int *)(param_2 + 0xd8) != 0) {
        temp_v4 = *(unsigned int *)(*(int *)(param_2 + 0xd8) + 0x10);
        temp_v2 = FUN_002e76b6();
        temp_v3 = FUN_002e76b6(*(unsigned int *)(param_3 + 8));
        temp_v0 = *(unsigned short *)(param_2 + 0xa2);
      }
      else {
        temp_v3 = FUN_002e76b6(*(unsigned int *)(param_3 + 8));
        temp_v0 = *(unsigned short *)(param_2 + 0xa2);
        temp_v2 = 0;
        temp_v4 = 0;
      }
      FUN_002ed2b0(temp_v7,temp_v0 & 0xf,temp_v10,param_5,temp_v3,temp_v2,temp_v4);
      temp_v1 = FUN_002e7674(param_3,temp_v7,temp_v8);
      temp_v5 = 1;
    } while (temp_v1 == 0);
    if (*(int *)(param_2 + 0xd8) != 0) {
      FUN_002e76a0(param_3);
    }
  }
  return;
}
