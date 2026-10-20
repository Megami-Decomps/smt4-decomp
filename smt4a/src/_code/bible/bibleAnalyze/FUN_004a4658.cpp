/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004a4658` (_code @ 0x4a4658, 0x1d0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00100388(...);
int sysPlaySe(...);
int FUN_00184310(...);
int FUN_0019de98(...);
int FUN_0032d0c8(...);
int FUN_003343f0(...);
int FUN_004935b0(...);
int FUN_004d05c4(...);

typedef int romwright_code(...);
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
} param_1_stack;

extern unsigned int DAT_0057f0a8; /* 0x57f0a8 */

/* Supplied declaration required: FUN_00100388. */
extern unsigned int FUN_001654d8(int);
extern unsigned int FUN_001654e4(int);
/* Supplied declaration required: sysPlaySe. */
/* Supplied declaration required: FUN_00184310. */
/* Supplied declaration required: FUN_0019de98. */
/* Supplied declaration required: FUN_0032d0c8. */
/* Supplied declaration required: FUN_003343f0. */
extern int FUN_004929d8(unsigned char *, unsigned int);
/* Supplied declaration required: FUN_004935b0. */
extern int FUN_004cf8dc(int, int);
extern int FUN_004cfe4c(int);
/* Supplied declaration required: FUN_004d05c4. */


void FUN_004a4658(int param_1)

{
/* irregular: 8 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned short *puVar5;
  int temp_v4;
  unsigned char temp_v5 [80];
  unsigned char temp_v6 [4];
  
  temp_v0 = FUN_004cf8dc(param_1 + 0xdc,(int)*(short *)(param_1 + 0xa872));
  temp_v4 = param_1 + *(short *)(param_1 + 0xa872) * 0x8c + 0xfc;
  temp_v1 = FUN_001654e4(temp_v4);
  temp_v2 = FUN_001654d8(temp_v4);
  FUN_004935b0(param_1 + 200,temp_v2,temp_v1);
  if (temp_v0 == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x860) != '\0') {
    sysPlaySe(0x48);
  }
  else {
    temp_v0 = FUN_004cfe4c(param_1 + 0x20);
    temp_v3 = (unsigned int)*(unsigned short *)(param_1 + 0x864 + temp_v0 * 0x20 + 4);
    FUN_00184310();
    if ((*(unsigned char *)(temp_v3 + 0xb3) & 2) == 0) {
      temp_v1 = 0x30;
    }
    else {
      temp_v1 = 0x121;
    }
    sysPlaySe(temp_v1);
  }
  if (*(char *)(param_1 + 0x860) != '\0') {
    temp_v0 = FUN_004929d8(temp_v6,*(unsigned int *)(param_1 + 0xa874));
    if (temp_v0 == 0) {
      temp_v0 = 0x52b5bc;
    }
    FUN_00100388(temp_v5,"%s%s",temp_v0,DAT_0057f0a8);
    FUN_0019de98(temp_v5,0x323232ff);
  }
  else {
    temp_v0 = FUN_004cfe4c(param_1 + 0x20);
    FUN_0032d0c8(0,1,*(unsigned short *)(param_1 + 0x864 + temp_v0 * 0x20 + 4));
  }
  FUN_003343f0(0);
  *(unsigned int *)(param_1 + 0x14) = 2;
  *(unsigned int *)(param_1 + 0x18) = 0;
  FUN_004935b0(param_1 + 200,0,0);
  (**(romwright_code **)(**(int **)(param_1 + 0x84c) + 8))(*(int **)(param_1 + 0x84c),param_1 + 0x20);
  puVar5 = (unsigned short *)(*(int *)(param_1 + 0x84c) + 4);
  *puVar5 = *puVar5 | 0x1000;
  temp_v0 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0x860) == '\0') {
    if (temp_v0 >= 10) {
      temp_v0 = 10;
    }
    FUN_004d05c4(param_1 + 0x818,0x14,0x40e,temp_v0);
    return;
  }
  if (temp_v0 >= 10) {
    temp_v0 = 10;
  }
  FUN_004d05c4(param_1 + 0x818,0x13,0x1030,temp_v0);
  return;
}

} /* extern "C" */
