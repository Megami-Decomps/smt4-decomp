/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002d7b48` (_code @ 0x2d7b48, 0x12c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

extern int FUN_00221214(); /* 0x221214 */
extern unsigned char LAB_002d7cb4; /* 0x2d7cb4 */
extern unsigned char LAB_002d7cc4; /* 0x2d7cc4 */
extern unsigned char LAB_002d7cfc; /* 0x2d7cfc */
extern unsigned char LAB_002d7d10; /* 0x2d7d10 */
extern int FUN_002ed584(); /* 0x2ed584 */
extern int FUN_002ed5d0(); /* 0x2ed5d0 */
extern unsigned int *DAT_0043dc24; /* 0x43dc24 */
extern unsigned int *DAT_0043dc28; /* 0x43dc28 */

/* Supplied declaration required: FUN_00296de0. */
extern unsigned int FUN_002bda1c(unsigned int);
/* Supplied declaration required: FUN_002c4c00. */
/* Supplied declaration required: FUN_002c4e28. */
/* Supplied declaration required: FUN_002c54f0. */
/* Supplied declaration required: FUN_002c5ab8. */


void FUN_002d7b48(void)

{
/* irregular: 8 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  unsigned char *puVar3;
  
  puVar1 = (unsigned int *)0x100;
  FUN_002c54f0(0x100,0x100,0,0x24,1);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  DAT_0043dc28 = puVar1;
  temp_v0 = FUN_002bda1c(0);
  puVar1[3] = temp_v0;
  FUN_00296de0(temp_v0,3,0xffffffff,0,0,&LAB_002d7cb4);
  temp_v0 = FUN_002bda1c(0);
  puVar1[4] = temp_v0;
  FUN_00296de0(temp_v0,3,0xffffffff,0,0,&LAB_002d7cc4);
  FUN_002c4e28(0x2d);
  FUN_002c5ab8(0x2d,0);
  puVar3 = &LAB_002d7cfc;
  FUN_002c4c00(&LAB_002d7cfc,2,8,0,FUN_00221214,FUN_002ed584,puVar1,*DAT_0043dc24);
  *puVar1 = (unsigned int)puVar3;
  FUN_002c4c00(&LAB_002d7d10,0xe7,8,0,FUN_002ed5d0,0,puVar1,puVar3);
  return;
}
