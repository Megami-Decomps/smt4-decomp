/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a2278` (_code @ 0x3a2278, 0x214 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern int DAT_005f15fc; /* 0x5f15fc */
extern int DAT_005f1600; /* 0x5f1600 */
extern signed char DAT_005f1891; /* 0x5f1891 */

/* Supplied declaration required: FUN_001681cc. */
/* Supplied declaration required: FUN_00183f58. */
extern int FUN_0018719c(unsigned int);
extern int FUN_00314c18(void);
/* Supplied declaration required: FUN_00357a90. */
/* Supplied declaration required: FUN_00379be8. */
/* Supplied declaration required: FUN_003b61ec. */
/* Supplied declaration required: FUN_003c5848. */
extern int FUN_004a0404(void);


void FUN_003a2278(int param_1)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  if (param_1 != 0) {
    if (DAT_005f1891 != '\0') {
      return;
    }
    DAT_005f1891 = 1;
    FUN_00379be8();
    FUN_003b61ec();
    FUN_001681cc(0x92);
    return;
  }
  if (DAT_005f1891 != '\0') {
    DAT_005f1891 = 0;
    temp_v0 = FUN_0018719c(0x49a);
    if (temp_v0 != 0) {
      FUN_003c5848();
    }
    else {
      FUN_003b61ec();
    }
    temp_v0 = FUN_0018719c(0xc);
    if ((temp_v0 != 0) && (temp_v0 = FUN_0018719c(0x10), temp_v0 == 0)) {
      FUN_003b61ec();
    }
    FUN_00357a90();
    return;
  }
  temp_v0 = FUN_00314c18();
  if (temp_v0 != 0) {
    FUN_00357a90();
  }
  else {
    temp_v0 = DAT_005f15fc;
    if (DAT_005f15fc == 5) {
      temp_v0 = DAT_005f1600;
    }
    if ((!(DAT_005f15fc == 5 && temp_v0 == 0xc)) && (temp_v0 = FUN_0018719c(0x49a), temp_v0 != 0)) {
      temp_v0 = FUN_0018719c(0xc);
      if ((temp_v0 == 0) || (temp_v0 = FUN_0018719c(0x10), temp_v0 != 0)) {
        temp_v0 = FUN_004a0404();
        if (temp_v0 != 0) {
          if (DAT_005f15fc != 0x65) {
            FUN_001681cc(0x104);
            FUN_00183f58(0,0x13,0x59,1);
            FUN_00183f58(1,0);
          }
          else {
            FUN_001681cc(0x105);
            FUN_00183f58(0,0x13,0x59,1);
            FUN_00183f58(1,0);
          }
        }
        else {
          if (DAT_005f15fc < 100) {
            temp_v1 = 0x41;
          }
          else {
            temp_v1 = 0xd2;
          }
          FUN_001681cc(temp_v1);
        }
      }
      else {
        FUN_001681cc(0xd3);
      }
    }
    else {
      temp_v1 = 0xd3;
      FUN_001681cc(temp_v1);
    }
  }
  temp_v0 = FUN_0018719c(0xc);
  if ((temp_v0 != 0) && (temp_v0 = FUN_0018719c(0x10), temp_v0 == 0)) {
    FUN_003b61ec();
    return;
  }
  return;
}
