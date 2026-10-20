/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0041e9d4` (_code @ 0x41e9d4, 0x1b0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001641c4(void);
int FUN_00169ddc(int);
int FUN_0019de98(int, unsigned int);
int FUN_00275f44(unsigned int, unsigned int);
int FUN_0050d778(int, unsigned int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern unsigned char DAT_00588e16; /* 0x588e16 */
extern unsigned char DAT_00588e17; /* 0x588e17 */

/* Supplied declaration required: FUN_001641c4. */
/* Supplied declaration required: FUN_00169ddc. */
/* Supplied declaration required: FUN_0019de98. */
/* Supplied declaration required: FUN_00275f44. */
/* Supplied declaration required: FUN_0050d778. */


void FUN_0041e9d4(int param_1)

{
/* irregular: 5 native warning(s); review required */
  char temp_v0;
  unsigned char temp_v1;
  int temp_v2;
  unsigned char temp_v3;
  
  temp_v2 = 0;
  if (temp_v2 < *(int *)(param_1 + 0x448)) {
    do {
      FUN_001641c4();
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < *(int *)(param_1 + 0x448));
  }
  *(unsigned int *)(param_1 + 0x448) = 0;
  FUN_0050d778(param_1 + 0x43c,0xffffffff);
  *(unsigned char *)(param_1 + 0x44c) = 0;
  *(unsigned char *)(param_1 + 0x44d) = 0;
  *(unsigned char *)(param_1 + 0x44e) = 0;
  temp_v0 = *(char *)(*(int *)(param_1 + 0x2f8) + param_1 + 0x2ec);
  temp_v3 = temp_v0 == '\0';
  if (temp_v3) {
    temp_v0 = *(char *)(param_1 + 5);
  }
  if ((temp_v3 && temp_v0 == '\0') ||
     (((*(char *)(param_1 + 5) == '\x01' && (0 < *(int *)(param_1 + 0x2f8))) &&
      (*(char *)(param_1 + 0x13) == '\0')))) {
    *(unsigned char *)(param_1 + 0x12) = 0;
    FUN_00169ddc(0x100020f);
    return;
  }
  FUN_0019de98(0,0xf4f4f4ff);
  FUN_00169ddc(0x100020e);
  *(unsigned char *)(param_1 + 0x12) = 1;
  if ((*(char *)(param_1 + 0x50) == '\0') && (0 < *(int *)(param_1 + 0x2f8))) {
    FUN_00275f44(*(unsigned int *)(param_1 + 0x40),*(unsigned int *)(param_1 + 0x4c));
    *(unsigned char *)(param_1 + 0x50) = 1;
    temp_v0 = *(char *)(param_1 + 5);
    if (temp_v0 == '\0') {
      DAT_00588e17 = 1;
    }
    else if (temp_v0 == '\x01') {
      DAT_00588e16 = 1;
    }
    *(unsigned char *)(param_1 + 0x44) = 1;
    if (temp_v0 == '\0') {
      temp_v1 = *(unsigned char *)(param_1 + 7);
      *(unsigned int *)(param_1 + 8) = 0;
      *(unsigned char *)(param_1 + 7) = 0x15;
      *(unsigned char *)(param_1 + 0xd) = temp_v1;
      *(unsigned char *)(param_1 + 0xc) = 7;
      return;
    }
    if (temp_v0 == '\x01') {
      temp_v1 = *(unsigned char *)(param_1 + 7);
      *(unsigned int *)(param_1 + 8) = 0;
      *(unsigned char *)(param_1 + 7) = 0x15;
      *(unsigned char *)(param_1 + 0xd) = temp_v1;
      *(unsigned char *)(param_1 + 0xc) = 10;
    }
  }
  else {
    if (*(char *)(param_1 + 5) == '\0') {
      temp_v1 = *(unsigned char *)(param_1 + 7);
      *(unsigned char *)(param_1 + 7) = 7;
      *(unsigned char *)(param_1 + 0xd) = temp_v1;
      *(unsigned int *)(param_1 + 8) = 0;
      *(unsigned char *)(param_1 + 0xc) = 0;
      return;
    }
    if (*(char *)(param_1 + 5) == '\x01') {
      temp_v1 = *(unsigned char *)(param_1 + 7);
      *(unsigned char *)(param_1 + 7) = 10;
      *(unsigned char *)(param_1 + 0xd) = temp_v1;
      *(unsigned int *)(param_1 + 8) = 0;
      *(unsigned char *)(param_1 + 0xc) = 0;
      return;
    }
  }
  return;
}

} /* extern "C" */
