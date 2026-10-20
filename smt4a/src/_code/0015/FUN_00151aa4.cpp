/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00151aa4` (_code @ 0x151aa4, 0x168 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001654d8(...);
int FUN_001677c0(void);
int FUN_001835b4(...);

/* stack frame of param_6: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp40; /* 0x40: local_40 */
} param_6_stack;

extern unsigned char DAT_0057f588; /* 0x57f588 */

/* Supplied declaration required: FUN_001654d8. */
extern unsigned int FUN_001654e4(int);
/* Supplied declaration required: FUN_001677c0. */
/* Supplied declaration required: FUN_001835b4. */


void FUN_00151aa4(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                 unsigned int param_5,unsigned int param_6)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  
  temp_v4 = (*(int *)((unsigned char *)&DAT_0057f588 + 0x8));
  if (*(char *)((*(int *)((unsigned char *)&DAT_0057f588 + 0x8)) + 0x19fa) != '\0') {
    temp_v0 = (*(int *)((unsigned char *)&DAT_0057f588 + 0x8)) + 0x15f0;
    temp_v1 = FUN_001654d8();
    temp_v2 = FUN_001654e4(temp_v0);
    temp_v0 = FUN_001654d8();
    temp_v3 = FUN_001654e4(temp_v4 + 0x167c);
    FUN_001835b4(2,4,param_3,temp_v1,temp_v2,0xf1);
    temp_v4 = temp_v0;
  }
  else {
    temp_v4 = (*(int *)((unsigned char *)&DAT_0057f588 + 0x8)) + 0x1708;
    temp_v1 = FUN_001654d8(temp_v4);
    temp_v1 = -temp_v1;
    temp_v2 = 0;
    temp_v4 = FUN_001654d8(temp_v4);
    FUN_001835b4(2,4,param_1,temp_v1 + 0x140,0,0xf1);
    temp_v0 = temp_v4 - 0x140;
    temp_v3 = 0;
    param_6 = param_5;
  }
  FUN_001835b4(2,4,param_6,temp_v0,temp_v3,0xf1);
  FUN_001835b4(2,4,param_1,temp_v1,temp_v2,0xf1);
  FUN_001835b4(2,4,param_2,temp_v1,temp_v2,0xf1);
  FUN_001835b4(2,4,param_4,temp_v4,temp_v3,0xf1);
  FUN_001835b4(2,4,param_5,temp_v4,temp_v3,0xf1);
  FUN_001677c0();
  return;
}

} /* extern "C" */
