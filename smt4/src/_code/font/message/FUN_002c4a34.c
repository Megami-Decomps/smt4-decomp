/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c4a34` (_code @ 0x2c4a34, 0x18c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} void_stack;

extern int FUN_00114474(); /* 0x114474 */
extern int FUN_00116a54(); /* 0x116a54 */
extern unsigned char LAB_002c4c00; /* 0x2c4c00 */
extern unsigned char LAB_002c4c0c; /* 0x2c4c0c */
extern unsigned char LAB_002c4c18; /* 0x2c4c18 */
extern unsigned char DAT_00403ce4; /* 0x403ce4 */
extern unsigned char DAT_00403d5c; /* 0x403d5c */
extern unsigned char DAT_00403da4; /* 0x403da4 */
extern unsigned char DAT_00403df8; /* 0x403df8 */

/* Supplied declaration required: FUN_001183bc. */
/* Supplied declaration required: FUN_002bc0e0. */
/* Supplied declaration required: FUN_002bd81c. */
/* Supplied declaration required: FUN_002bd82c. */
extern unsigned int FUN_002bd838(unsigned int);
/* Supplied declaration required: FUN_002c312c. */
/* Supplied declaration required: FUN_002c4938. */
/* Supplied declaration required: FUN_002c498c. */
/* Supplied declaration required: FUN_002c4a08. */
/* Supplied declaration required: FUN_002c5788. */
/* Supplied declaration required: Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object. */


unsigned int * FUN_002c4a34(void)

{
/* irregular: 12 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  unsigned char *puVar3;
  
  puVar1 = (unsigned int *)0x100;
  FUN_002c498c(0x100,0x100,0,0xa3c,1);
  FUN_002c4938();
  *(unsigned char *)((int)puVar1 + 0xa11) = 0x14;
  FUN_002bc0e0();
  temp_v0 = FUN_002bd838(0);
  puVar1[1] = temp_v0;
  FUN_002bd82c(temp_v0,0x320202ff);
  FUN_001183bc(puVar1[1],3,0xffffffff);
  FUN_002bd81c(puVar1[1],0,0x646464ff);
  *(unsigned char *)(puVar1 + 2) = 0;
  *(unsigned char *)(puVar1 + 0xd) = 0;
  *(unsigned char *)((int)puVar1 + 0x35) = 0;
  *(unsigned char *)((int)puVar1 + 0xa26) = 1;
  *(unsigned char *)((int)puVar1 + 0x32) = 0;
  *(unsigned char *)((int)puVar1 + 0x7d) = 0;
  *(unsigned char *)((int)puVar1 + 0x7e) = 0;
  *(unsigned char *)((int)puVar1 + 0x33) = 0;
  puVar1[0x28e] = 0xfffffffe;
  puVar3 = &LAB_002c4c00;
  FUN_002c5788(&LAB_002c4c00,2,0,0,FUN_00114474,0,puVar1);
  *puVar1 = (unsigned int)puVar3;
  FUN_002c4a08(&LAB_002c4c0c,0x81,0,0,FUN_00116a54,0,puVar1,puVar3);
  FUN_002c4a08(&LAB_002c4c18,0xdf,0,0,FUN_00116a54,0,puVar1,*puVar1);
  Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object(puVar1 + 0x29);
  FUN_002c312c(puVar1 + 0x29,&DAT_00403ce4,0x78,&DAT_00403d5c,0x48,&DAT_00403da4,0x54,0,0,
               &DAT_00403df8,0x310);
  return puVar1;
}
