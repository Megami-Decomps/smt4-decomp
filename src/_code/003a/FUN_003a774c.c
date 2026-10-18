/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a774c` (_code @ 0x3a774c, 0x188 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

/* Supplied declaration required: FUN_0022df7c. */
/* Supplied declaration required: FUN_0022e008. */
/* Supplied declaration required: FUN_00233488. */
extern int FUN_002337a0(int);
extern int FUN_002338ac(int);
/* Supplied declaration required: FUN_0029da10. */
/* Supplied declaration required: FUN_0029dcd4. */
extern int FUN_0029ebc4(int);
extern unsigned int FUN_002b0824(short);
/* Supplied declaration required: FUN_003a719c. */
/* Supplied declaration required: FUN_003a74c0. */
/* Supplied declaration required: FUN_003a8670. */
/* Supplied declaration required: FUN_003aad98. */


void FUN_003a774c(int param_1)

{
/* irregular: 9 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  short *psVar5;
  unsigned int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned char temp_v7 [1552];
  
  temp_v6 = param_1 + 0x5a8;
  if (*(int *)(param_1 + 0x14) != 9) {
    if (*(int *)(param_1 + 0x14) == 2) {
      temp_v1 = FUN_002337a0(param_1 + 0x20);
      temp_v0 = *(short *)(temp_v6 + temp_v1 * 0x20 + 4);
      FUN_00233488(param_1);
      temp_v1 = FUN_002337a0(param_1 + 0x20);
      temp_v4 = (unsigned int)*(short *)(temp_v6 + temp_v1 * 0x20 + 4);
      if (temp_v4 != (int)temp_v0) {
        if (*(char *)(param_1 + 0x5a4) != '\0') {
          temp_v1 = FUN_002337a0(param_1 + 0x20);
          temp_v0 = *(short *)(temp_v6 + temp_v1 * 0x20 + 4);
          temp_v4 = (unsigned int)temp_v0;
          if (*(char *)(param_1 + 0x5a5) != '\x01') {
            FUN_0029da10(temp_v4 & 0xffff,temp_v7);
            FUN_0029dcd4(0,1,temp_v4 & 0xffff,temp_v7);
          }
          else {
            temp_v3 = FUN_002b0824(temp_v0);
            FUN_0029dcd4(0,1,temp_v0,temp_v3);
          }
        }
        else {
          FUN_0029da10(temp_v4 & 0xffff,temp_v7);
          FUN_0029dcd4(0,1,temp_v4 & 0xffff,temp_v7);
        }
      }
      if (*(char *)(param_1 + 0x5a4) != '\0') {
        FUN_003a719c();
      }
      else {
        FUN_003a8670(param_1);
      }
    }
  }
  else {
    FUN_003a74c0(param_1);
  }
  FUN_0022e008(param_1);
  FUN_003aad98(param_1 + 0x96);
  temp_v1 = FUN_002338ac(param_1 + 0x20);
  temp_v5 = 0;
  if (temp_v5 < temp_v1) {
    do {
      temp_v2 = FUN_0029ebc4(param_1 + 0x20);
      FUN_0022df7c(param_1 + 0x96,*(unsigned short *)(temp_v6 + (temp_v2 + temp_v5) * 0x20 + 4));
      temp_v5 = temp_v5 + 1;
    } while (temp_v5 < temp_v1);
  }
  temp_v6 = 0;
  temp_v1 = 0x10;
  do {
    psVar5 = (short *)(param_1 + 0x96 + temp_v6 * 2);
    temp_v0 = *psVar5;
    if ((temp_v0 != -1 && temp_v0 != 0) && (*(char *)(param_1 + 0x96 + temp_v6 + 0x20) == '\0')) {
      *psVar5 = -1;
    }
    temp_v1 = temp_v1 - 1;
    temp_v6 = temp_v6 + 1;
  } while (temp_v1 != 0);
  return;
}
