/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0021ecac` (_code @ 0x21ecac, 0x124 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp28; /* 0x28: local_28 */
} void_stack;

extern int DAT_004398d4; /* 0x4398d4 */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_0024f15c. */
/* Supplied declaration required: FUN_00275c2c. */
/* Supplied declaration required: FUN_002b2520. */
extern int FUN_002bf41c(unsigned int);
extern int FUN_002c0ac8(void);
/* Supplied declaration required: FUN_002c4160. */
/* Supplied declaration required: FUN_002c41e8. */
/* Supplied declaration required: FUN_002c42fc. */
/* Supplied declaration required: FUN_002c4360. */
/* Supplied declaration required: FUN_002c45b8. */
/* Supplied declaration required: FUN_002c5468. */


void FUN_0021ecac(void)

{
/* irregular: 10 native warning(s); review required */
  int temp_v0;
  unsigned char *puVar2;
  int temp_v1;
  int temp_v2;
  int uStack_20;
  unsigned char temp_v3 [4];
  
  temp_v0 = FUN_002c0ac8();
  temp_v2 = DAT_004398d4;
  if (DAT_004398d4 != 0) {
    uStack_20 = *(unsigned int *)(DAT_004398d4 + 0xa4);
    puVar2 = temp_v3;
    FUN_002c42fc(puVar2,&uStack_20,1,0,0xffffffff,0xffffffff);
    if ((int)puVar2 < 0) {
      FUN_002c5468();
    }
    *(unsigned char *)(temp_v2 + 0xa8) = 1;
    FUN_002c41e8(temp_v2 + 0xa4);
    if (*(int *)(temp_v2 + 0xa4) != 0) {
      software_interrupt(0x23);
      *(unsigned int *)(temp_v2 + 0xa4) = 0;
    }
    if (*(int *)(temp_v2 + 0xb0) != 0) {
      FUN_002c4160();
      temp_v1 = *(int *)(temp_v2 + 0xb0);
      if (temp_v1 != 0) {
        FUN_002c4160();
        FUN_002b2520(temp_v1);
      }
      *(unsigned int *)(temp_v2 + 0xb0) = 0;
    }
    if (*(int *)(temp_v2 + 0xac) != 0) {
      FUN_002c4360();
      *(unsigned int *)(temp_v2 + 0xac) = 0;
    }
    *(unsigned int *)(temp_v2 + 0xc0) = 0xffffffff;
    if (*(int *)(temp_v2 + 0xa0) != 0) {
      *(unsigned int *)(temp_v2 + 0xa0) = 0;
    }
    FUN_00275c2c();
    FUN_0024f15c(temp_v2);
    *(unsigned int *)(temp_v2 + 0x80) = 0;
    FUN_002c4360(DAT_004398d4);
    DAT_004398d4 = 0;
  }
  temp_v2 = FUN_002bf41c(*(unsigned int *)(temp_v0 + 0x30));
  if (temp_v2 != 0) {
    FUN_002c45b8(*(unsigned int *)(temp_v0 + 0x30),0);
    return;
  }
  return;
}
