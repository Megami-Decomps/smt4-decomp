/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010b350` (_code @ 0x10b350, 0x138 bytes) from smt4.cxi.
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

extern unsigned char LAB_0010b4c8; /* 0x10b4c8 */
extern unsigned char LAB_0010b4dc; /* 0x10b4dc */
extern unsigned char LAB_0010b4f0; /* 0x10b4f0 */
extern int FUN_0011a9b4(); /* 0x11a9b4 */
extern int FUN_0011b128(); /* 0x11b128 */
extern unsigned char DAT_00403a08; /* 0x403a08 */
extern unsigned char DAT_00403a20; /* 0x403a20 */
extern unsigned char DAT_00403a38; /* 0x403a38 */
extern unsigned int *DAT_0043e110; /* 0x43e110 */

/* Supplied declaration required: FUN_002bdb2c. */
/* Supplied declaration required: FUN_002bf030. */
/* Supplied declaration required: FUN_002c32f8. */
/* Supplied declaration required: FUN_002c3344. */
/* Supplied declaration required: FUN_002c4b30. */
extern unsigned int *FUN_002c4b84(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c4c00. */
/* Supplied declaration required: FUN_002c5978. */


void FUN_0010b350(void)

{
/* irregular: 9 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char *puVar2;
  
  if (DAT_0043e110 == (unsigned int *)0x0) {
    DAT_0043e110 = (unsigned int *)FUN_002c4b84(0x100,0x100,0,0xbc,1);
  }
  puVar1 = DAT_0043e110;
  FUN_002c4b30(DAT_0043e110,0xbc);
  puVar2 = &LAB_0010b4c8;
  FUN_002c5978(&LAB_0010b4c8,1,0,0,FUN_0011b128,0,0);
  *puVar1 = (unsigned int)puVar2;
  FUN_002c4c00(&LAB_0010b4dc,0x81,0,0,FUN_0011a9b4,0,0,puVar2);
  FUN_002c4c00(&LAB_0010b4f0,0xdf,0,0,FUN_0011a9b4,0,0,*puVar1);
  puVar1 = DAT_0043e110;
  FUN_002c3344(DAT_0043e110 + 4);
  FUN_002c32f8(puVar1 + 4,&DAT_00403a08,0x18,&DAT_00403a20,0x18,0,0,0,0,&DAT_00403a38,0x70);
  FUN_002bdb2c(puVar1 + 0xc,0xe,0x87,puVar1 + 4,1);
  FUN_002bf030(puVar1 + 0xc,0);
  return;
}
