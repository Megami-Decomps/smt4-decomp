/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039c2b8` (_code @ 0x39c2b8, 0x220 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern signed char DAT_0049fb6d; /* 0x49fb6d */

/* Supplied declaration required: FUN_002313d4. */
/* Supplied declaration required: FUN_002316a0. */
/* Supplied declaration required: FUN_0023187c. */
extern int FUN_00231f6c(int);
extern int FUN_002327d8(void);
/* Supplied declaration required: FUN_002333d4. */
/* Supplied declaration required: FUN_0025a318. */
/* Supplied declaration required: FUN_00276170. */
/* Supplied declaration required: FUN_00289ae8. */
extern unsigned int FUN_002bef70(int);
extern unsigned int FUN_002bef7c(int);
/* Supplied declaration required: FUN_002bf9f0. */
extern int FUN_002c0ba8(unsigned int);
/* Supplied declaration required: FUN_0039fa54. */
/* Supplied declaration required: FUN_0039fa7c. */


void FUN_0039c2b8(int param_1)

{
/* irregular: 10 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  
  temp_v0 = *(int *)(param_1 + 8);
  if (temp_v0 != 0) {
    if (temp_v0 != 1) {
      if (temp_v0 == 2) {
        if (*(char *)(param_1 + 0x8d2) == '\0') {
          temp_v0 = 0;
          do {
            if (temp_v0 <= *(int *)(param_1 + 0x14)) {
              FUN_002bf9f0(param_1 + temp_v0 * 0x8c + 0x618);
            }
            temp_v0 = temp_v0 + 1;
          } while (temp_v0 < 5);
          *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
          return;
        }
        *(unsigned int *)(param_1 + 0x10) = *(unsigned int *)(param_1 + 0x10) & 0xfeffffff;
        *(unsigned int *)(param_1 + 4) = 2;
        *(unsigned int *)(param_1 + 8) = 0;
      }
    }
    else {
      temp_v4 = param_1 + 0x198;
      temp_v0 = FUN_002bf9f0(temp_v4);
      if (temp_v0 != 0) {
        *(unsigned int *)(param_1 + 8) = 2;
      }
      temp_v2 = FUN_002bef70(temp_v4);
      temp_v3 = FUN_002bef7c(temp_v4);
      FUN_002313d4(param_1 + 0x164,temp_v3,temp_v2);
      if (*(char *)(param_1 + 0x8d2) == '\0') {
        temp_v0 = 0;
        do {
          if (temp_v0 <= *(int *)(param_1 + 0x14)) {
            FUN_002bf9f0(param_1 + temp_v0 * 0x8c + 0x618);
          }
          temp_v0 = temp_v0 + 1;
        } while (temp_v0 < 5);
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
        return;
      }
    }
  }
  else {
    FUN_002313d4(param_1 + 0x164,0xfffffec0);
    if (DAT_0049fb6d != '\0') {
      DAT_0049fb6d = '\0';
      temp_v0 = FUN_002c0ba8(0x16);
      if (temp_v0 != 0) {
        FUN_0025a318();
      }
      else {
        FUN_00289ae8();
      }
    }
    FUN_00276170();
    FUN_002333d4(param_1 + 0x178,0);
    *(unsigned int *)(param_1 + 0x10) = (*(unsigned int *)(param_1 + 0x10) & 0xfffffffd) | 0x1000000;
    temp_v0 = param_1 + 0x162;
    *(unsigned int *)(param_1 + 8) = 1;
    temp_v4 = FUN_002327d8();
    temp_v1 = FUN_00231f6c(temp_v0);
    if (temp_v4 != temp_v1) {
      temp_v4 = FUN_00231f6c(temp_v0);
      FUN_0039fa54(temp_v0,temp_v4);
      FUN_0039fa7c(temp_v0,0);
      *(unsigned int *)(param_1 + 0x18) = 0;
      if (temp_v4 >= 100) {
        *(unsigned char *)(param_1 + 0xc) = 0;
        FUN_0023187c(param_1,temp_v4);
        return;
      }
      *(unsigned char *)(param_1 + 0xc) = 1;
      FUN_002316a0(param_1,temp_v4);
      return;
    }
  }
  return;
}
