/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003481c4` (_code @ 0x3481c4, 0xe0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0017ffa8(int, int, unsigned int, unsigned int, unsigned int, unsigned int);

/* stack frame of param_4: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp10; /* 0x10: local_10 */
} param_4_stack;

/* Supplied declaration required: FUN_0017ffa8. */


void FUN_003481c4(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  
  if (param_1 != 0) {
    temp_v0 = 0;
    switch(param_1) {
    case 1:
      temp_v0 = 0xf;
      break;
    case 2:
      temp_v0 = 0x10;
      break;
    case 3:
      temp_v0 = 0x23;
      break;
    case 4:
      temp_v0 = 0x12;
      break;
    case 5:
      temp_v0 = 0xc;
      break;
    case 6:
      temp_v0 = 0xb;
      break;
    case 7:
      temp_v0 = 10;
      break;
    case 8:
      temp_v0 = 0xd;
      break;
    case 9:
      temp_v0 = 0xe;
      break;
    case 10:
      temp_v0 = 0x14;
      break;
    case 0xb:
      temp_v0 = 0x2c;
      break;
    case 0xc:
      temp_v0 = 0x2a;
      break;
    case 0xd:
      temp_v0 = 0x28;
    }
    FUN_0017ffa8(2,0xb,temp_v0,param_2,param_3,param_4);
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  return;
}

} /* extern "C" */
