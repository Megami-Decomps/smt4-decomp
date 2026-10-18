/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00208c28` (_code @ 0x208c28, 0xa8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern unsigned char LAB_00208cd4; /* 0x208cd4 */
extern int *DAT_004475d0; /* 0x4475d0 */

/* Supplied declaration required: FUN_0019fb4c. */
/* Supplied declaration required: FUN_002bd730. */
/* Supplied declaration required: FUN_002bd940. */
extern unsigned int FUN_002c32f0(unsigned char *, unsigned int *, unsigned int);
/* Supplied declaration required: FUN_002c4360. */


void FUN_00208c28(void)

{
/* irregular: irregular input(s): in_r3; 5 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int in_r3;
  int temp_v3;
  
  temp_v0 = 0;
  temp_v3 = in_r3;
  FUN_002bd940();
  *DAT_004475d0 = temp_v0;
  temp_v1 = FUN_002c32f0(&LAB_00208cd4,(unsigned int *)&temp_v3,0);
  FUN_0019fb4c(temp_v0,temp_v1,temp_v3,0x10000);
  FUN_002c4360(temp_v1);
  FUN_002bd730(temp_v0);
  piVar1 = DAT_004475d0;
  *(unsigned int *)(*DAT_004475d0 + 0x3c) = 1;
  *(unsigned int *)(*piVar1 + 0x40) = 1;
  temp_v2 = 0x40;
  temp_v0 = 0;
  do {
    piVar1[temp_v0 + 1] = 0;
    piVar1[temp_v0 * 3 + 0x41] = 0;
    piVar1[temp_v0 * 3 + 0x42] = 0;
    temp_v2 = temp_v2 - 1;
    piVar1[temp_v0 * 3 + 0x43] = 0;
    temp_v0 = temp_v0 + 1;
  } while (temp_v2 != 0);
  return;
}
