/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002639f4` (_code @ 0x2639f4, 0x138 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} void_stack;

extern unsigned char LAB_00263b6c; /* 0x263b6c */
extern unsigned char LAB_00263b80; /* 0x263b80 */
extern unsigned char LAB_00263b94; /* 0x263b94 */
extern int FUN_0032aa84(); /* 0x32aa84 */
extern unsigned char LAB_0032ac30; /* 0x32ac30 */
extern unsigned char DAT_00403acc; /* 0x403acc */
extern unsigned char DAT_00403ae4; /* 0x403ae4 */
extern unsigned char DAT_00403afc; /* 0x403afc */
extern unsigned int *DAT_0043e140; /* 0x43e140 */

/* Supplied declaration required: FUN_002bdb2c. */
/* Supplied declaration required: FUN_002bf030. */
/* Supplied declaration required: FUN_002c32f8. */
/* Supplied declaration required: FUN_002c3344. */
/* Supplied declaration required: FUN_002c4b30. */
extern unsigned int *FUN_002c4b84(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c4c00. */
/* Supplied declaration required: FUN_002c5978. */


void FUN_002639f4(void)

{
/* irregular: 8 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char *puVar2;
  
  if (DAT_0043e140 == (unsigned int *)0x0) {
    DAT_0043e140 = (unsigned int *)FUN_002c4b84(0x100,0x100,0,0x140,1);
  }
  puVar1 = DAT_0043e140;
  FUN_002c4b30(DAT_0043e140,0x140);
  puVar2 = &LAB_00263b6c;
  FUN_002c5978(&LAB_00263b6c,1,0,0,&LAB_0032ac30,0,0);
  *puVar1 = (unsigned int)puVar2;
  FUN_002c4c00(&LAB_00263b80,0x81,0,0,FUN_0032aa84,0,0,puVar2);
  FUN_002c4c00(&LAB_00263b94,0xdf,0,0,FUN_0032aa84,0,0,*puVar1);
  puVar1 = DAT_0043e140;
  FUN_002c3344(DAT_0043e140 + 5);
  FUN_002c32f8(puVar1 + 5,&DAT_00403acc,0x18,&DAT_00403ae4,0x18,0,0,0,0,&DAT_00403afc,0x70);
  FUN_002bdb2c(puVar1 + 0xd,0xe,0x87,puVar1 + 5,1);
  FUN_002bf030(puVar1 + 0xd,0);
  return;
}
