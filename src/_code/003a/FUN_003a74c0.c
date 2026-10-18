/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a74c0` (_code @ 0x3a74c0, 0x288 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern unsigned int DAT_0043d9cc; /* 0x43d9cc */

/* Supplied declaration required: FUN_0022e008. */
/* Supplied declaration required: FUN_002313d4. */
/* Supplied declaration required: FUN_00232a48. */
/* Supplied declaration required: FUN_002333d4. */
/* Supplied declaration required: FUN_002334d8. */
/* Supplied declaration required: FUN_00233598. */
extern int FUN_002337a0(int);
extern int FUN_00240e8c(int);
extern int FUN_0024c48c(void);
extern int FUN_0026c8a8(void);
extern int FUN_00293d50(void);
extern int FUN_00293e30(void);
/* Supplied declaration required: FUN_0029d100. */
extern int FUN_0029e2b0(void);
extern int FUN_0029e468(void);
/* Supplied declaration required: FUN_0029e8c0. */
/* Supplied declaration required: FUN_0029e8e8. */
extern int FUN_0029ebc4(int);
/* Supplied declaration required: FUN_002b8794. */
/* Supplied declaration required: FUN_002b8b78. */
/* Supplied declaration required: FUN_002b8ccc. */
extern unsigned int FUN_002bef70(int);
extern unsigned int FUN_002bef7c(int);
/* Supplied declaration required: FUN_003c2d9c. */
/* Supplied declaration required: FUN_003c2e94. */


void FUN_003a74c0(int param_1)

{
/* irregular: 14 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  
  temp_v1 = FUN_0029e468();
  if (temp_v1 == 0) {
    return;
  }
  FUN_002334d8(param_1 + 0xdc,(int)*(short *)(param_1 + 0xa5b4));
  temp_v1 = param_1 + *(short *)(param_1 + 0xa5b4) * 0x8c + 0xfc;
  temp_v2 = FUN_002bef70(temp_v1);
  temp_v3 = FUN_002bef7c(temp_v1);
  FUN_002313d4(param_1 + 200,temp_v3,temp_v2);
  temp_v1 = FUN_0026c8a8();
  if ((temp_v1 != 0) && (temp_v1 = FUN_00293d50(), temp_v1 == 0)) {
    *(unsigned int *)(param_1 + 0x14) = 10;
    *(unsigned int *)(param_1 + 0x18) = 0;
    temp_v1 = FUN_0029e2b0();
    if (temp_v1 == 1) {
      *(unsigned short *)(param_1 + 0xa5b4) = 0;
    }
    else {
      *(unsigned short *)(param_1 + 0xa5b4) = 4;
    }
    FUN_002333d4(param_1 + 0xdc,(int)*(short *)(param_1 + 0xa5b4));
    if (*(char *)(param_1 + 0x5a4) != '\0') {
      return;
    }
    temp_v1 = FUN_002337a0(param_1 + 0x20);
    temp_v6 = (unsigned int)*(unsigned short *)(param_1 + temp_v1 * 0x20 + 0x5ac);
    FUN_0029d100(temp_v6,*(unsigned char *)(param_1 + 0x5a5),0);
    FUN_0029e8e8(1,0);
    FUN_0029e8c0(-temp_v6,0);
    return;
  }
  temp_v1 = FUN_0026c8a8();
  if (temp_v1 != 0) {
    return;
  }
  if (*(int *)(param_1 + 0x28) < 1) {
    return;
  }
  temp_v1 = FUN_0029ebc4(param_1 + 0x20);
  temp_v4 = FUN_00240e8c(param_1 + 0x20);
  temp_v5 = FUN_00293e30();
  if (temp_v5 != 1) {
    temp_v5 = FUN_00293e30();
    if (temp_v5 != -1) {
      if (*(char *)(param_1 + 0x5a4) != '\x01') {
        temp_v5 = FUN_0029ebc4(param_1 + 0x20);
        if ((temp_v5 == temp_v1) && (temp_v1 = FUN_00240e8c(param_1 + 0x20), temp_v1 == temp_v4)) {
          return;
        }
        FUN_00233598();
        return;
      }
      temp_v5 = FUN_0024c48c();
      if (temp_v5 != 0) {
        temp_v0 = *(char *)(param_1 + 0x5a5) + '\x01';
        *(char *)(param_1 + 0x5a5) = temp_v0;
        if ('\x01' < temp_v0) {
          *(unsigned char *)(param_1 + 0x5a5) = 0;
        }
        FUN_00232a48();
        *(unsigned char *)(param_1 + 0x5a7) = 1;
        DAT_0043d9cc = 0xffffffff;
        FUN_0022e008(param_1);
        FUN_002b8ccc();
        FUN_002b8b78();
      }
    }
    else {
      FUN_003c2e94(param_1 + 0x20);
    }
  }
  else {
    FUN_003c2d9c(param_1 + 0x20);
  }
  if (*(char *)(param_1 + 0x5a4) == '\x01') {
    if (*(char *)(param_1 + 0x5a5) != '\x01') {
      FUN_002b8794(2,4,0x41,1);
    }
    else {
      FUN_002b8794(2,4,0x40,1);
    }
  }
  temp_v5 = FUN_0029ebc4(param_1 + 0x20);
  if ((temp_v5 == temp_v1) && (temp_v1 = FUN_00240e8c(param_1 + 0x20), temp_v1 == temp_v4)) {
    return;
  }
  FUN_00233598();
  return;
}
