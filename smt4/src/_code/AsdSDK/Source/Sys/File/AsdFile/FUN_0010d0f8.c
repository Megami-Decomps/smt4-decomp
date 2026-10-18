/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010d0f8` (_code @ 0x10d0f8, 0xf0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp38; /* 0x38: local_38 */
} void_stack;

extern int FUN_00113e4c(); /* 0x113e4c */
extern unsigned char LAB_00123c88; /* 0x123c88 */
extern unsigned char LAB_00123ca4; /* 0x123ca4 */
extern unsigned char LAB_00123cb4; /* 0x123cb4 */
extern unsigned char DAT_00465000; /* 0x465000 */
extern unsigned int DAT_00465018; /* 0x465018 */
extern unsigned int *DAT_0046501c; /* 0x46501c */
extern unsigned int DAT_00465020; /* 0x465020 */

/* Supplied declaration required: FUN_002bcc60. */
/* Supplied declaration required: FUN_002bcd44. */
/* Supplied declaration required: FUN_002c222c. */
extern unsigned int FUN_002c32a0(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c526c. */


void FUN_0010d0f8(void)

{
/* irregular: 5 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  unsigned char *temp_v1;
  unsigned char *temp_v2;
  unsigned char *temp_v3;
  unsigned char temp_v4;
  
  DAT_00465000 = 0;
  DAT_00465018 = FUN_002c32a0(0x100,0x100,0,0x1000,0x1000,1);
  puVar1 = (unsigned int *)0x18;
  FUN_002c222c();
  if (puVar1 != (unsigned int *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *(unsigned char *)(puVar1 + 4) = 0;
  }
  DAT_0046501c = puVar1;
  FUN_002bcd44();
  temp_v0 = 4;
  temp_v1 = &LAB_00123c88;
  puVar1 = &DAT_00465020;
  temp_v2 = &LAB_00123cb4;
  temp_v3 = &LAB_00123ca4;
  FUN_002bcc60(&DAT_00465020,&temp_v0,FUN_00113e4c,&temp_v4,DAT_0046501c[3] + DAT_0046501c[2],0x12
               ,0xfffffffe,0);
  if (((unsigned int)puVar1 & 0x7e00000) != 0x600000 && (int)puVar1 < 0) {
    FUN_002c526c();
  }
  return;
}
