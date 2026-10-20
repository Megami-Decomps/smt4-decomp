/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0041f22c` (_code @ 0x41f22c, 0x284 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int padButtonIsPressed(...);
int eventQueueAddUnique(int);
int FUN_0019de98(int, unsigned int);
int FUN_0023b45c(int);
int FUN_002c8538(int);
int FUN_002e1a18(...);
int FUN_002f0384(int);
int FUN_003343f0(int);
int FUN_0033449c(int);
int FUN_0038b5fc(int, int);
int FUN_0041e2d8(int);
int FUN_0041e450(int);
int FUN_0041e7c0(int);
int FUN_0041e9d4(int);
int FUN_0041fc24(int);
int rt_memcpy_w(unsigned int, int, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

/* Supplied declaration required: padButtonIsPressed. */
/* Supplied declaration required: eventQueueAddUnique. */
extern unsigned int gameGetPlayerData(void);
/* Supplied declaration required: FUN_0019de98. */
/* Supplied declaration required: FUN_0023b45c. */
/* Supplied declaration required: FUN_002c8538. */
/* Supplied declaration required: FUN_002e1a18. */
/* Supplied declaration required: FUN_002f0384. */
extern int objBStateAllowsAction(void);
/* Supplied declaration required: FUN_003343f0. */
/* Supplied declaration required: FUN_0033449c. */
/* Supplied declaration required: FUN_0038b5fc. */
/* Supplied declaration required: FUN_0041e2d8. */
/* Supplied declaration required: FUN_0041e450. */
/* Supplied declaration required: FUN_0041e7c0. */
/* Supplied declaration required: FUN_0041e9d4. */
/* Supplied declaration required: FUN_0041fc24. */
/* Supplied declaration required: rt_memcpy_w. */


void FUN_0041f22c(int param_1)

{
/* irregular: 1 goto(s); 16 native warning(s); review required */
  char temp_v0;
  unsigned char temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned char temp_v5;
  float temp_v6;
  
  temp_v2 = objBStateAllowsAction();
  if (temp_v2 != 0) {
    if (*(char *)(param_1 + 0x5c) != '\0') {
      *(unsigned char *)(param_1 + 0x5c) = 0;
      if (*(char *)(param_1 + 0x30c) != '\0') goto LAB_0041f2b8;
      FUN_002f0384(1);
      *(unsigned char *)(param_1 + 0x68) = 1;
      FUN_003343f0(1);
    }
    temp_v0 = *(char *)(param_1 + 0x30c);
    temp_v5 = temp_v0 == '\0';
    if (temp_v5) {
      temp_v0 = *(char *)(param_1 + 0x68);
    }
    if ((temp_v5 && temp_v0 == '\0') && (*(char *)(*(int *)(param_1 + 0x2f8) + param_1 + 0x2ec) != '\0')
       ) {
      FUN_002f0384(1);
      *(unsigned char *)(param_1 + 0x68) = 1;
      FUN_003343f0(1);
    }
  }
LAB_0041f2b8:
  temp_v2 = *(int *)(param_1 + 0x618) - 1;
  *(int *)(param_1 + 0x618) = temp_v2;
  if (temp_v2 < 1) {
    temp_v6 = 1.0f;
    *(unsigned int *)(param_1 + 0x618) = 0x1e;
    *(unsigned int *)(param_1 + 0x61c) = 0x3f800000;
    *(float *)(param_1 + 0x61c) = temp_v6 - 0.06666667f;
  }
  else if (temp_v2 >= 0x10) {
    temp_v6 = *(float *)(param_1 + 0x61c);
    *(float *)(param_1 + 0x61c) = temp_v6 - 0.06666667f;
  }
  if (*(int *)(param_1 + 0x618) < 0xf) {
    *(float *)(param_1 + 0x61c) = *(float *)(param_1 + 0x61c) + 0.06666667f;
  }
  *(unsigned int *)(param_1 + 0x6ec) = 0;
  *(unsigned int *)(param_1 + 0x6f0) = 0;
  *(unsigned int *)(param_1 + 0x6f4) = *(unsigned int *)(param_1 + 0x61c);
  FUN_0041e450(param_1);
  FUN_0041e7c0(param_1);
  FUN_0041fc24(param_1);
  FUN_0041e2d8(param_1);
  temp_v2 = objBStateAllowsAction();
  if (((temp_v2 != 0) && (temp_v2 = padButtonIsPressed(1), temp_v2 != 0)) ||
     (temp_v2 = FUN_002e1a18(2), temp_v2 != 0)) {
    eventQueueAddUnique(0x100020f);
    FUN_0033449c(0);
    FUN_0023b45c(1);
    FUN_002c8538(1);
    FUN_002f0384(0);
    *(unsigned char *)(param_1 + 0x68) = 0;
    if (*(char *)(*(int *)(param_1 + 0x2f8) + param_1 + 0x2ec) == '\0') {
      FUN_0023b45c(0);
    }
    temp_v3 = gameGetPlayerData();
    rt_memcpy_w(temp_v3,param_1 + 0x28,0xe);
    FUN_0038b5fc(1,*(unsigned short *)(param_1 + 0x30));
    FUN_0038b5fc(2,*(unsigned short *)(param_1 + 0x32));
    FUN_0038b5fc(0,*(unsigned short *)(param_1 + 0x2e));
    *(unsigned char *)(param_1 + 0x5c) = 1;
    FUN_0019de98(0,0xf4f4f4ff);
    temp_v1 = *(unsigned char *)(param_1 + 7);
    *(unsigned char *)(param_1 + 7) = 5;
    *(unsigned char *)(param_1 + 0xd) = temp_v1;
    *(unsigned int *)(param_1 + 8) = 0;
    *(unsigned char *)(param_1 + 0xc) = 0;
  }
  else {
    temp_v4 = padButtonIsPressed(0);
    temp_v5 = temp_v4 != 0;
    if (!temp_v5) {
      temp_v4 = (unsigned int)*(unsigned char *)(param_1 + 0x44c);
    }
    if ((temp_v5 || temp_v4 != 0) || (temp_v2 = FUN_002e1a18(1), temp_v2 != 0)) {
      FUN_0041e9d4(param_1);
      return;
    }
    temp_v4 = padButtonIsPressed(10);
    temp_v5 = temp_v4 == 0;
    if (temp_v5) {
      temp_v4 = (unsigned int)*(unsigned char *)(param_1 + 0x44d);
    }
    if (temp_v5 && temp_v4 == 0) {
      FUN_002e1a18(4);
      return;
    }
  }
  return;
}

} /* extern "C" */
