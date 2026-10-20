/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001bce30` (_code @ 0x1bce30, 0x50 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001abae0(unsigned char [32]);
int FUN_001add78(unsigned char [32], unsigned int);
int FUN_001c5b68(unsigned char [32]);

/* stack frame of param_4: 3 slot(s), 9 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned char sp140; /* 0x140: local_140 */
} param_4_stack;

/* Supplied declaration required: FUN_001abae0. */
/* Supplied declaration required: FUN_001add78. */
/* Supplied declaration required: FUN_001c5b68. */


void FUN_001bce30(unsigned int param_1,unsigned char param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  unsigned char temp_v0 [32];
  unsigned char temp_v1;
  unsigned int temp_v2;
  unsigned int uStack_2c;
  unsigned int temp_v3;
  
  temp_v3 = 0xe7e3ffff;
  FUN_001c5b68(temp_v0);
  FUN_001add78(temp_v0,param_1);
  temp_v1 = param_2;
  temp_v2 = param_3;
  uStack_2c = param_4;
  FUN_001abae0(temp_v0);
  return;
}

} /* extern "C" */
