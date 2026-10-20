/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004b4e00` (_code @ 0x4b4e00, 0x194 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00164b5c(int, int, int, unsigned int, unsigned int, int);
int efctSetSpeed(void);
int FUN_001835b4(...);

/* stack frame of param_4: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_4_stack;

/* Supplied declaration required: FUN_00164b5c. */
/* Supplied declaration required: efctSetSpeed. */
/* Supplied declaration required: FUN_001835b4. */


void FUN_004b4e00(unsigned int param_1,unsigned int param_2,unsigned int param_3,int param_4)

{
/* irregular: 3 native warning(s); review required */
  efctSetSpeed();
  FUN_00164b5c(2,0x1d,10,param_2,param_3,0xbf);
  efctSetSpeed();
  FUN_001835b4(2,0x1d,0xf7,param_2,param_3,0xc4);
  if (param_4 != 0) {
    FUN_001835b4(2,0x1d,0x184,param_2,param_3,0xc4);
    FUN_001835b4(2,0x1d,0x185,param_2,param_3,0xc4);
    FUN_001835b4(2,0x1d,0x186,param_2,param_3,0xc6);
    efctSetSpeed();
    FUN_001835b4(2,0x1d,0x187,param_2,param_3,0xc9);
    efctSetSpeed();
    return;
  }
  FUN_001835b4(2,0x1d,0xf8,param_2,param_3,0xc4);
  FUN_001835b4(2,0x1d,0xf9,param_2,param_3,0xc4);
  FUN_001835b4(2,0x1d,0xfa,param_2,param_3,0xc6);
  efctSetSpeed();
  FUN_001835b4(2,0x1d,0x17f,param_2,param_3,0xc9);
  efctSetSpeed();
  return;
}

} /* extern "C" */
