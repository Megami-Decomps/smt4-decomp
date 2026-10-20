/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0049d594` (_code @ 0x49d594, 0x1d8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int efctSetSpeed(void);
int FUN_001835b4(...);
int FUN_00344cd0(...);
int FUN_0049d938(int, unsigned int, unsigned int);

/* stack frame of param_1: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
} param_1_stack;

extern unsigned int FUN_001654d8(int);
extern unsigned int FUN_001654e4(int);
/* Supplied declaration required: efctSetSpeed. */
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: FUN_00344cd0. */
/* Supplied declaration required: FUN_0049d938. */


void FUN_0049d594(int param_1)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v0 = FUN_001654d8(param_1 + 0x23c);
  temp_v1 = FUN_001654e4(param_1 + 0x23c);
  efctSetSpeed();
  temp_v2 = 0;
  do {
    FUN_001835b4(2,0x33,temp_v2 + 0x39,temp_v0,temp_v1,temp_v2 + 0xbf);
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 5);
  temp_v2 = 0;
  do {
    FUN_001835b4(2,0x33,temp_v2 * 2 + 0x3e,temp_v0,temp_v1,temp_v2 + 0xc4);
    FUN_001835b4(2,0x33,temp_v2 * 2 + 0x3f,temp_v0,temp_v1,temp_v2 + 0xc5);
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 9);
  efctSetSpeed();
  FUN_0049d938(param_1,temp_v0,temp_v1);
  efctSetSpeed();
  FUN_00344cd0(param_1 + 0x18c,temp_v0,temp_v1,0x33,0x50,0x51,0x52,0x53,0x54,0x55,0x56,
               (int)*(short *)(param_1 + 0x216),(int)*(short *)(param_1 + 0x212),
               (int)*(short *)(param_1 + 0x214),0x6a,0);
  efctSetSpeed();
  switch(*(unsigned char *)(param_1 + 4)) {
  case 4:
  case 5:
  case 6:
    efctSetSpeed();
    FUN_001835b4(2,0x33,0x7e,temp_v0,temp_v1,0xc9);
  }
  efctSetSpeed();
  efctSetSpeed();
  return;
}

} /* extern "C" */
