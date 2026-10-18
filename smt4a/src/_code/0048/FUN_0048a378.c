/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0048a378` (_code @ 0x48a378, 0x138 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern signed char DAT_005f161d; /* 0x5f161d */
extern signed char DAT_005f1891; /* 0x5f1891 */
extern signed char DAT_005f1a5c; /* 0x5f1a5c */
extern signed char DAT_005f1a5e; /* 0x5f1a5e */

extern int FUN_00162e8c(void);
/* Supplied declaration required: FUN_001681cc. */
/* Supplied declaration required: FUN_00183e58. */
extern int FUN_0018719c(unsigned int);
extern int FUN_00384cf4(void);
/* Supplied declaration required: FUN_003adc58. */
/* Supplied declaration required: FUN_003b61ec. */
/* Supplied declaration required: FUN_003c5848. */


void FUN_0048a378(int param_1)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_00162e8c();
  if (DAT_005f1891 != '\0') {
    DAT_005f1891 = '\0';
    temp_v1 = FUN_0018719c(0x49a);
    if (temp_v1 != 0) {
      FUN_003c5848();
    }
    else {
      FUN_003b61ec();
    }
    temp_v1 = FUN_0018719c(0xc);
    if ((temp_v1 != 0) && (temp_v1 = FUN_0018719c(0x10), temp_v1 == 0)) {
      FUN_003b61ec();
    }
  }
  if (DAT_005f1a5c == '\0') {
    if (DAT_005f161d == '\0') {
      FUN_003adc58();
      return;
    }
    if (*(char *)(param_1 + 0xc) != '\0') {
      if ((DAT_005f1a5e != '\0') && (temp_v0 = FUN_00384cf4(), temp_v0 == 0)) {
        FUN_00183e58();
        FUN_001681cc(0x114);
        return;
      }
      FUN_001681cc(0xf5);
      return;
    }
    FUN_00183e58();
    temp_v0 = *(int *)(temp_v0 + 0x1514);
    if (temp_v0 == 0) {
      FUN_00183e58();
      FUN_001681cc(0x10a);
      return;
    }
    if (temp_v0 == 1 || temp_v0 == 2) {
      FUN_00183e58();
      FUN_001681cc(0xf6);
      return;
    }
  }
  return;
}
