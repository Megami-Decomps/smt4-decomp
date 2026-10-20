/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003756c8` (_code @ 0x3756c8, 0x178 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001681cc(int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern int DAT_00573920; /* 0x573920 */
extern unsigned int DAT_005739f0; /* 0x5739f0 */
extern unsigned int DAT_005739f4; /* 0x5739f4 */
extern unsigned int DAT_00573a28; /* 0x573a28 */
extern unsigned int DAT_00573a2c; /* 0x573a2c */

/* Supplied declaration required: FUN_001681cc. */
extern int FUN_0018719c(unsigned int);
extern int FUN_003e46f4(unsigned int);


void FUN_003756c8(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  if ((DAT_005739f0 & *(unsigned int *)(DAT_00573920 + 0x45a0)) == 0 &&
      (DAT_005739f4 & *(unsigned int *)(DAT_00573920 + 0x45a4)) == 0) {
    if ((*(unsigned int *)(DAT_00573920 + 0x45a4) & DAT_00573a2c) == 0 &&
        (*(unsigned int *)(DAT_00573920 + 0x45a0) & DAT_00573a28) == 0) {
      temp_v0 = FUN_0018719c(0x525);
      if (temp_v0 != 0) {
        FUN_001681cc(0xe7);
        return;
      }
      temp_v0 = FUN_003e46f4(0x10);
      if (temp_v0 == 0) {
        temp_v0 = FUN_003e46f4(0x7f);
        if (temp_v0 == 0) {
          if (param_1 != 0) {
            FUN_001681cc(0xc9);
            return;
          }
          FUN_001681cc(0xaf);
          return;
        }
        if (param_1 != 0) {
          FUN_001681cc(0x38);
          return;
        }
        FUN_001681cc(0x39);
        return;
      }
      temp_v0 = FUN_003e46f4(0x7f);
      if (temp_v0 == 0) {
        if (param_1 != 0) {
          FUN_001681cc(200);
          return;
        }
        FUN_001681cc(0xae);
        return;
      }
      if (param_1 != 0) {
        FUN_001681cc(0x36);
        return;
      }
      FUN_001681cc(0x37);
      return;
    }
  }
  temp_v0 = FUN_0018719c(0x525);
  if (temp_v0 != 0) {
    FUN_001681cc(0xe6);
    return;
  }
  temp_v0 = FUN_003e46f4(0x10);
  if (temp_v0 != 0) {
    FUN_001681cc(0xb5);
    return;
  }
  FUN_001681cc(0xb6);
  return;
}

} /* extern "C" */
