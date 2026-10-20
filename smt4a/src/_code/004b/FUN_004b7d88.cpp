/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004b7d88` (_code @ 0x4b7d88, 0x94 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int sysPlaySe(int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: sysPlaySe. */
extern int gameFlagIsSet(unsigned int);
extern int gameDataFlagTestBit(unsigned int);


void FUN_004b7d88(int param_1)

{
/* irregular: 1 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  
  temp_v1 = gameFlagIsSet(0x40c);
  if (temp_v1 != 0) {
    temp_v1 = gameDataFlagTestBit(0x76);
    temp_v0 = *(short *)(param_1 + 0x3c);
    if (temp_v1 != 0) {
      if (temp_v0 == 4) {
        sysPlaySe(0xea);
        return;
      }
      if (temp_v0 != 3) {
        sysPlaySe(0x45);
        return;
      }
      sysPlaySe(0xeb);
      return;
    }
  }
  else {
    temp_v0 = *(short *)(param_1 + 0x3c);
  }
  if (temp_v0 == 4) {
    sysPlaySe(0xea);
    return;
  }
  if (temp_v0 != 3) {
    sysPlaySe(0x43);
    return;
  }
  sysPlaySe(0xeb);
  return;
}

} /* extern "C" */
