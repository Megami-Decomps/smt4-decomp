/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a8450` (_code @ 0x3a8450, 0x370 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int spA8; /* 0xa8: local_a8 */
} param_1_stack;

extern unsigned int DAT_0043d9cc; /* 0x43d9cc */

/* Supplied declaration required: FUN_00232848. */
/* Supplied declaration required: FUN_002328b4. */
/* Supplied declaration required: FUN_00233240. */
extern int FUN_0023360c(int);
/* Supplied declaration required: FUN_00233818. */
/* Supplied declaration required: FUN_00233854. */
/* Supplied declaration required: FUN_0023553c. */
extern int FUN_00256510(void);
/* Supplied declaration required: FUN_0026c57c. */
extern int FUN_0026c63c(void);
extern int FUN_002762e0(void);
extern int FUN_0027ee9c(void);
/* Supplied declaration required: FUN_00295660. */
/* Supplied declaration required: FUN_00296f4c. */
/* Supplied declaration required: FUN_0029ca58. */
/* Supplied declaration required: FUN_0029cc44. */
/* Supplied declaration required: FUN_0029ce60. */
extern int FUN_0029e010(void);
/* Supplied declaration required: FUN_0029e1ec. */
/* Supplied declaration required: FUN_0029e328. */
/* Supplied declaration required: FUN_0029e39c. */
/* Supplied declaration required: FUN_0029e620. */
/* Supplied declaration required: FUN_0029ede8. */
/* Supplied declaration required: FUN_0029ee6c. */
/* Supplied declaration required: FUN_002a0cc8. */
/* Supplied declaration required: FUN_002b8838. */
extern unsigned int FUN_002bce30(unsigned short, unsigned int);
extern unsigned int FUN_002bd06c(unsigned short);
/* Supplied declaration required: FUN_002bf694. */
/* Supplied declaration required: FUN_003a7ec8. */


void FUN_003a8450(int param_1)

{
/* irregular: 22 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7 [33];
  
  temp_v5 = 0;
  temp_v6 = 0;
  temp_v1 = FUN_0023360c(param_1 + 0x20);
  temp_v7[0] = 0;
  temp_v2 = (unsigned int)*(unsigned short *)(param_1 + 0x5a8 + temp_v1 * 0x20 + 4);
  FUN_0029ce60(temp_v2,*(unsigned char *)(param_1 + 0x5a5),0);
  FUN_0029e620(-temp_v2,0);
  temp_v1 = FUN_002762e0();
  temp_v7[0] = param_1 + 0x55c;
  if (0 < *(short *)(param_1 + 0x5a8)) {
    temp_v5 = FUN_0027ee9c();
    temp_v6 = FUN_00256510();
    if (temp_v5 == 0) {
      temp_v5 = (int)*(char *)(temp_v7[0] + 0x12);
    }
  }
  temp_v3 = FUN_0026c63c();
  if (temp_v3 != 0) {
    *(unsigned int *)(param_1 + 0x14) = 9;
    *(unsigned int *)(param_1 + 0x18) = 0;
    temp_v1 = FUN_0029e010();
    if (temp_v1 == 1) {
      *(unsigned short *)(param_1 + 0xa5b4) = 1;
    }
    else {
      *(unsigned short *)(param_1 + 0xa5b4) = 5;
    }
    FUN_00233240(param_1 + 0xdc,(int)*(short *)(param_1 + 0xa5b4));
    if (*(char *)(param_1 + 0x5a4) == '\0') {
      FUN_0029cc44(1);
    }
    FUN_00233854(*(unsigned int *)(param_1 + 0x590));
    FUN_00233818(temp_v7[0]);
    return;
  }
  if (temp_v5 != 0) {
    temp_v1 = FUN_0023360c(param_1 + 0x20);
    temp_v0 = *(unsigned short *)(param_1 + 0x5a8 + temp_v1 * 0x20 + 4);
    temp_v7[0] = 0;
    temp_v2 = (unsigned int)temp_v0;
    FUN_0029ce60(temp_v2,*(unsigned char *)(param_1 + 0x5a5),0);
    FUN_0029ede8(0x18,temp_v2,0xffffffff,0);
    temp_v1 = param_1;
    FUN_003a7ec8(param_1,temp_v0);
    if (temp_v1 != 0) {
      temp_v4 = FUN_002bd06c(temp_v0);
      FUN_002bf694(temp_v7,temp_v4);
      FUN_00295660(8,temp_v7);
      temp_v4 = FUN_002bce30(temp_v0,1);
      FUN_002bf694(temp_v7,temp_v4);
      FUN_00295660(0x10,temp_v7);
      FUN_00296f4c(*(unsigned int *)(param_1 + 0x5a0),0);
      *(unsigned int *)(param_1 + 0x14) = 3;
      *(unsigned int *)(param_1 + 0x18) = 0;
    }
    else {
      temp_v4 = 0;
      switch(*(unsigned char *)(param_1 + 0xa5b0)) {
      case 1:
        temp_v4 = 2;
        break;
      case 2:
        temp_v4 = 1;
        break;
      case 3:
        temp_v4 = 3;
        break;
      case 4:
        temp_v4 = 4;
        break;
      case 5:
        temp_v4 = 5;
      }
      FUN_00296f4c(*(unsigned int *)(param_1 + 0x5a0),temp_v4);
      *(unsigned int *)(param_1 + 0x14) = 5;
      *(unsigned int *)(param_1 + 0x18) = 0;
      FUN_002b8838(0x9e);
    }
    FUN_0023553c(1);
    FUN_002a0cc8(1);
    FUN_002328b4();
    return;
  }
  if (temp_v1 == 0) {
    if (temp_v6 == 0) {
      return;
    }
    DAT_0043d9cc = 0xffffffff;
    FUN_0029e39c(0xf,0);
    FUN_0029e328(1);
    FUN_0029e328(2);
    FUN_0029e328(7);
    FUN_0029e328(3);
    FUN_0029e1ec();
    FUN_002a0cc8(1);
    *(unsigned int *)(param_1 + 0x14) = 6;
    *(unsigned int *)(param_1 + 0x18) = 0;
    FUN_0029ee6c(0,0x323232ff);
    FUN_002328b4();
    return;
  }
  if (*(char *)(param_1 + 0x5a4) == '\0') {
    FUN_0029cc44(1);
  }
  FUN_0029ee6c(0,0x323232ff);
  FUN_0029ca58();
  FUN_00233240(param_1 + 0xdc,1);
  FUN_002a0cc8(1);
  *(unsigned int *)(param_1 + 0x14) = 0xb;
  *(unsigned int *)(param_1 + 0x18) = 0;
  FUN_00232848();
  FUN_0026c57c();
  return;
}
