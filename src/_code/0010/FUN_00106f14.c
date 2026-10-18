/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00106f14` (_code @ 0x106f14, 0x104 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of void: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} void_stack;

extern unsigned int DAT_0044e368; /* 0x44e368 */
extern signed char DAT_0044e3b0; /* 0x44e3b0 */
extern romwright_code *DAT_0044e3e8; /* 0x44e3e8 */
extern int DAT_0044e440; /* 0x44e440 */
extern unsigned int DAT_0044e444; /* 0x44e444 */

/* Supplied declaration required: FUN_0011008c. */
/* Supplied declaration required: FUN_001101d4. */
/* Supplied declaration required: FUN_001103bc. */
/* Supplied declaration required: FUN_001105ac. */
/* Supplied declaration required: FUN_00110638. */
/* Supplied declaration required: FUN_002c0efc. */
/* Supplied declaration required: FUN_002c0f28. */
/* Supplied declaration required: FUN_002c1320. */
/* Supplied declaration required: FUN_002c14b8. */
/* Supplied declaration required: FUN_002c14e4. */


void FUN_00106f14(void)

{
/* irregular: 11 native warning(s); review required */
  int temp_v0;
  char temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int uStack_1c;
  
  temp_v1 = DAT_0044e3b0;
  if (DAT_0044e3b0 != '\0') {
    DAT_0044e3b0 = '\0';
    FUN_002c14e4(3);
    FUN_002c14b8(0);
  }
  FUN_002c1320(0);
  if (DAT_0044e3e8 != (romwright_code *)0x0) {
    (*DAT_0044e3e8)();
  }
  FUN_001101d4(2,0,&temp_v4,&temp_v3,0);
  temp_v0 = temp_v2;
  if (temp_v4 != 0) {
    temp_v0 = temp_v3;
  }
  if (!(temp_v4 != 0 && temp_v4 != temp_v0)) {
    FUN_001105ac();
    FUN_0011008c(0,0,DAT_0044e368);
  }
  else {
    FUN_00110638();
    FUN_001103bc(temp_v4,0,0,DAT_0044e368);
  }
  temp_v4 = DAT_0044e440;
  uStack_1c = DAT_0044e444;
  FUN_002c0f28(0,0,0,0,0);
  if (temp_v1 == '\0') {
    return;
  }
  DAT_0044e3b0 = 1;
  FUN_002c0efc();
  return;
}
