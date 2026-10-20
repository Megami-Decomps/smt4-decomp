/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f56ac` (_code @ 0x3f56ac, 0x248 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001517b4(...);
int FUN_00163aa4(int);
int FUN_001641b4(int);
int FUN_00184758(int, int, int);
int FUN_00184c00(...);
int FUN_002a48e0(int);
int FUN_003f5268(...);
int FUN_003f6f68(int, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: FUN_001517b4. */
/* Supplied declaration required: FUN_00163aa4. */
/* Supplied declaration required: FUN_001641b4. */
/* Supplied declaration required: FUN_00184758. */
/* Supplied declaration required: FUN_00184c00. */
extern int FUN_002a4860(int);
/* Supplied declaration required: FUN_002a48e0. */
extern int FUN_002c2c68(int);
extern int FUN_0031d1a0(int);
/* Supplied declaration required: FUN_003f5268. */
/* Supplied declaration required: FUN_003f6f68. */


void FUN_003f56ac(int param_1)

{
/* irregular: 1 goto(s); 8 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  FUN_00163aa4(param_1 + 0x428);
  FUN_003f6f68(param_1,7);
  temp_v0 = 9;
  FUN_001517b4(9,0);
  if (temp_v0 != 0) {
    temp_v0 = FUN_002a4860(param_1 + 0xbc);
    if (temp_v0 == 0) goto LAB_003f57a4;
    FUN_001641b4(0x100020d);
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) - 1;
    FUN_002a48e0(param_1 + 0xbc);
  }
  temp_v0 = 10;
  FUN_001517b4(10,0);
  if ((temp_v0 != 0) && (temp_v0 = FUN_002c2c68(param_1 + 0xbc), temp_v0 >= 7)) {
    temp_v0 = FUN_002a4860(param_1 + 0xbc);
    temp_v1 = FUN_002c2c68(param_1 + 0xbc);
    if ((temp_v0 != temp_v1 - 7) &&
       ((temp_v0 = FUN_0031d1a0(param_1 + 0xbc), temp_v0 != 0 ||
        (temp_v0 = FUN_002c2c68(param_1 + 0xbc), temp_v0 >= 7)))) {
      FUN_001641b4(0x100020d);
      *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
      FUN_002a48e0(param_1 + 0xbc);
    }
  }
LAB_003f57a4:
  if (*(char *)(param_1 + 0x120) != '\0') {
    temp_v0 = 8;
    FUN_001517b4(8,1);
    if (temp_v0 != 0) {
      FUN_001641b4(0x1000210);
      FUN_00184758(param_1 + 0x284,3,0);
      FUN_00184c00(param_1 + 0x284,1,0);
      *(unsigned char *)(param_1 + 0x5e4) = 1;
      FUN_003f5268(param_1,6,7);
    }
    temp_v0 = 7;
    FUN_001517b4(7,1);
    if (temp_v0 != 0) {
      FUN_001641b4(0x1000210);
      FUN_00184758(param_1 + 0x284,2,0);
      FUN_00184c00(param_1 + 0x284,1,0);
      *(unsigned char *)(param_1 + 0x5e5) = 1;
      FUN_003f5268(param_1,6,7);
    }
  }
  temp_v0 = 1;
  FUN_001517b4();
  if (temp_v0 != 0) {
    FUN_001641b4(0x100020f);
    FUN_00184758(param_1 + 0x1f8,2,0);
    FUN_00184c00(param_1 + 0x1f8,1,0);
    FUN_00184758(param_1 + 0x540,1,0);
    FUN_00184c00(param_1 + 0x540,0);
    if (*(int *)(param_1 + 0x3c) != 0) {
      FUN_003f5268(param_1,5,8);
      return;
    }
    FUN_003f5268(param_1,5,3);
    return;
  }
  return;
}

} /* extern "C" */
