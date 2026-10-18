/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00106e04` (_code @ 0x106e04, 0x108 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of void: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp28; /* 0x28: local_28 */
} void_stack;

extern unsigned int DAT_0044e368; /* 0x44e368 */
extern signed char DAT_0044e3b0; /* 0x44e3b0 */
extern romwright_code *DAT_0044e3e8; /* 0x44e3e8 */

/* Supplied declaration required: FUN_0011008c. */
/* Supplied declaration required: FUN_001105ac. */
extern int FUN_0011d1d0(void);
/* Supplied declaration required: FUN_0011d1e0. */
/* Supplied declaration required: FUN_002c0efc. */
/* Supplied declaration required: FUN_002c0f28. */
/* Supplied declaration required: FUN_002c1320. */
extern int FUN_002c1494(void);
extern int FUN_002c14a8(void);
/* Supplied declaration required: FUN_002c14b8. */
/* Supplied declaration required: FUN_002c14e4. */


void FUN_00106e04(void)

{
/* irregular: 8 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  
  temp_v0 = DAT_0044e3b0;
  if (DAT_0044e3b0 != '\0') {
    DAT_0044e3b0 = '\0';
    FUN_002c14e4(3);
    FUN_002c14b8(0);
  }
  temp_v1 = FUN_0011d1d0();
  if ((temp_v1 != 0) || (temp_v1 = FUN_002c14a8(), temp_v1 != 0)) {
    FUN_0011d1e0(0);
    temp_v1 = FUN_002c1494();
    if ((temp_v1 == 0) || (temp_v1 = FUN_002c1494(), temp_v1 == 2)) {
      FUN_002c1320(0);
      if (DAT_0044e3e8 != (romwright_code *)0x0) {
        (*DAT_0044e3e8)();
      }
    }
    FUN_001105ac();
    FUN_0011008c(0,0,DAT_0044e368);
  }
  FUN_002c0f28(0,0,0,0,0);
  if (temp_v0 == '\0') {
    return;
  }
  DAT_0044e3b0 = 1;
  FUN_002c0efc();
  return;
}
