/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010250c` (_code @ 0x10250c, 0xe4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern unsigned int DAT_00465008; /* 0x465008 */
extern unsigned int DAT_0046500c; /* 0x46500c */
extern unsigned int DAT_00465010; /* 0x465010 */
extern unsigned int DAT_00465024; /* 0x465024 */

/* Supplied declaration required: FUN_0010d070. */
/* Supplied declaration required: FUN_0010f5b8. */
/* Supplied declaration required: FUN_0010f674. */
/* Supplied declaration required: FUN_0010f69c. */
/* Supplied declaration required: FUN_0010f6f0. */
/* Supplied declaration required: FUN_002c541c. */
/* Supplied declaration required: FUN_002c5450. */
/* Supplied declaration required: FUN_002c5468. */
/* Supplied declaration required: FUN_002c54d8. */
/* Supplied declaration required: FUN_002c54f0. */


void FUN_0010250c(void)

{
/* irregular: irregular input(s): in_r3; 11 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int *puVar3;
  unsigned int *puVar4;
  unsigned int in_r3;
  int temp_v2;
  
  puVar4 = (unsigned int *)&temp_v2;
  DAT_0046500c = 0;
  temp_v2 = in_r3;
  FUN_0010f5b8();
  temp_v0 = 0x10;
  FUN_0010f674(0x10,0x10,1);
  temp_v1 = 0x100;
  temp_v2 = 1;
  FUN_002c54f0(0x100,0x100,0,temp_v0);
  temp_v2 = 1;
  DAT_00465008 = temp_v1;
  FUN_0010f6f0(0x10,0x10,temp_v1,temp_v0);
  temp_v2 = 0;
  puVar3 = puVar4;
  FUN_002c54d8(puVar4,0,2);
  if (-1 < (int)puVar3) {
    puVar3 = (unsigned int *)0x0;
    DAT_00465010 = temp_v2;
  }
  if ((int)puVar3 < 0) {
    FUN_002c5468();
  }
  FUN_002c5450(puVar4,DAT_00465010,1);
  if ((int)puVar4 < 0) {
    FUN_002c5468();
  }
  FUN_002c541c(&DAT_00465024,0);
  FUN_0010d070();
  FUN_0010f69c();
  return;
}
