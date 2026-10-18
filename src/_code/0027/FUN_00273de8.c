/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00273de8` (_code @ 0x273de8, 0xd4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern int DAT_00447e28; /* 0x447e28 */
extern signed char DAT_0049f942; /* 0x49f942 */

/* Supplied declaration required: FUN_00264900. */
/* Supplied declaration required: FUN_00277e4c. */
/* Supplied declaration required: FUN_0027b8cc. */
/* Supplied declaration required: FUN_002819f4. */
/* Supplied declaration required: FUN_00284aa8. */
/* Supplied declaration required: FUN_00284c14. */
/* Supplied declaration required: FUN_002857e4. */
/* Supplied declaration required: FUN_00297c9c. */


void FUN_00273de8(void)

{
/* irregular: 8 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  temp_v0 = DAT_00447e28;
  if (DAT_0049f942 == '\0') {
    FUN_002819f4();
    temp_v3 = *(unsigned int *)(temp_v0 + 0x2c);
    temp_v2 = *(unsigned int *)(temp_v0 + 0x30);
    FUN_00297c9c();
    FUN_0027b8cc(temp_v3,temp_v2);
    FUN_00277e4c();
    FUN_00284aa8();
    FUN_00264900(1);
    return;
  }
  temp_v1 = FUN_002857e4();
  if (temp_v1 != 0) {
    FUN_002819f4();
    FUN_00297c9c();
    temp_v2 = FUN_002857e4();
    FUN_0027b8cc(*(unsigned int *)(temp_v0 + 0x2c),temp_v2);
    FUN_00284c14(1);
    FUN_00264900(1);
    return;
  }
  FUN_002819f4();
  FUN_00297c9c();
  FUN_00284c14(1);
  FUN_00284aa8();
  FUN_00264900(1);
  return;
}
