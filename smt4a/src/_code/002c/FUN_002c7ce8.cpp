/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c7ce8` (_code @ 0x2c7ce8, 0x134 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001641c4(void);
int FUN_0019de98(int, unsigned int);
int FUN_001b4a90(int, int, unsigned int);
int FUN_00230b9c(unsigned int, unsigned int, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern int DAT_00588fe8; /* 0x588fe8 */

/* Supplied declaration required: FUN_001641c4. */
/* Supplied declaration required: FUN_0019de98. */
/* Supplied declaration required: FUN_001b4a90. */
/* Supplied declaration required: FUN_00230b9c. */
extern int FUN_0035db94(void);


void FUN_002c7ce8(unsigned int param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned char *puVar2;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int *puVar5;
  int temp_v3;
  
  temp_v0 = DAT_00588fe8;
  puVar2 = (unsigned char *)(DAT_00588fe8 + 0x514);
  if (*(unsigned char *)(DAT_00588fe8 + 0x514) == param_1) {
    return;
  }
  *(unsigned char *)(DAT_00588fe8 + 0x515) = *(unsigned char *)(DAT_00588fe8 + 0x514);
  *puVar2 = (char)param_1;
  temp_v1 = FUN_0035db94();
  if (temp_v1 < 0) {
    temp_v2 = 3;
    FUN_00230b9c(temp_v2,0xffffffff,0);
  }
  else {
    temp_v1 = FUN_0035db94();
    if (0 < temp_v1) {
      temp_v2 = 2;
      FUN_00230b9c(temp_v2,0xffffffff,0);
    }
  }
  temp_v1 = DAT_00588fe8;
  temp_v3 = 0;
  if (*(char *)(DAT_00588fe8 + 0x59a) != '\0') {
    do {
      FUN_001641c4();
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < (int)(unsigned int)*(unsigned char *)(temp_v1 + 0x59a));
  }
  *(unsigned char *)(temp_v1 + 0x59a) = 0;
  FUN_001b4a90(temp_v1 + 0x544,0x54,0xffffffff);
  temp_v1 = DAT_00588fe8;
  *(unsigned int *)(DAT_00588fe8 + 0x524) = 0;
  puVar5 = (unsigned int *)(temp_v1 + 0x518);
  temp_v2 = *puVar5;
  *puVar5 = 2;
  *(unsigned int *)(temp_v1 + 0x51c) = temp_v2;
  if (param_1 == 0) {
    *(unsigned int *)(temp_v0 + 0x520) = 0;
  }
  else {
    if (param_1 == 1) {
      temp_v2 = 3;
    }
    else if (param_1 == 2) {
      temp_v2 = 0x13;
    }
    else if (param_1 == 3) {
      temp_v2 = 0x14;
    }
    else if (param_1 == 4) {
      temp_v2 = 0x16;
    }
    else if (param_1 == 5) {
      temp_v2 = 0x18;
    }
    else {
      if (param_1 != 6) {
        FUN_0019de98(0,0xf4f4f4ff);
        return;
      }
      temp_v2 = 0x1f;
    }
    *(unsigned int *)(temp_v0 + 0x520) = temp_v2;
  }
  FUN_0019de98(0,0xf4f4f4ff);
  return;
}

} /* extern "C" */
