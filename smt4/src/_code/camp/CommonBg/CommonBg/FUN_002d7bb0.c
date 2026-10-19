/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002d7bb0` (_code @ 0x2d7bb0, 0x12c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

extern int FUN_00221310(); /* 0x221310 */
extern unsigned char LAB_002d7d1c; /* 0x2d7d1c */
extern unsigned char LAB_002d7d2c; /* 0x2d7d2c */
extern unsigned char LAB_002d7d64; /* 0x2d7d64 */
extern unsigned char LAB_002d7d78; /* 0x2d7d78 */
extern int FUN_002ed5dc(); /* 0x2ed5dc */
extern int FUN_002ed628(); /* 0x2ed628 */
extern unsigned int *DAT_0043dc24; /* 0x43dc24 */
extern unsigned int *DAT_0043dc28; /* 0x43dc28 */

/* Supplied declaration required: FUN_00296b3c. */
extern unsigned int FUN_002bd838(unsigned int);
/* Supplied declaration required: FUN_002c4a08. */
/* Supplied declaration required: FUN_002c4c2c. */
/* Supplied declaration required: FUN_002c5300. */
/* Supplied declaration required: FUN_002c58c8. */


void FUN_002d7bb0(void)

{
/* irregular: 8 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  unsigned char *puVar3;
  
  puVar1 = (unsigned int *)0x100;
  FUN_002c5300(0x100,0x100,0,0x24,1);
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
  temp_v0 = FUN_002bd838(0);
  puVar1[3] = temp_v0;
  FUN_00296b3c(temp_v0,3,0xffffffff,0,0,&LAB_002d7d1c);
  temp_v0 = FUN_002bd838(0);
  puVar1[4] = temp_v0;
  FUN_00296b3c(temp_v0,3,0xffffffff,0,0,&LAB_002d7d2c);
  FUN_002c4c2c(0x2d);
  FUN_002c58c8(0x2d,0);
  puVar3 = &LAB_002d7d64;
  FUN_002c4a08(&LAB_002d7d64,2,8,0,FUN_00221310,FUN_002ed5dc,puVar1,*DAT_0043dc24);
  *puVar1 = (unsigned int)puVar3;
  FUN_002c4a08(&LAB_002d7d78,0xe7,8,0,FUN_002ed628,0,puVar1,puVar3);
  return;
}
