/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010af84` (_code @ 0x10af84, 0x1a4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} void_stack;

extern unsigned char LAB_0010b168; /* 0x10b168 */
extern unsigned char LAB_0010b17c; /* 0x10b17c */
extern unsigned char LAB_0010b190; /* 0x10b190 */
extern int FUN_0011ae10(); /* 0x11ae10 */
extern unsigned char LAB_0011b1bc; /* 0x11b1bc */
extern unsigned char DAT_00403aa8; /* 0x403aa8 */
extern unsigned int *DAT_0043e128; /* 0x43e128 */

/* Supplied declaration required: FUN_002bda00. */
/* Supplied declaration required: FUN_002bda10. */
extern unsigned int FUN_002bda1c(unsigned int);
/* Supplied declaration required: FUN_002bdac0. */
/* Supplied declaration required: FUN_002bdb2c. */
/* Supplied declaration required: FUN_002c32f8. */
/* Supplied declaration required: FUN_002c3344. */
/* Supplied declaration required: FUN_002c4b30. */
extern unsigned int *FUN_002c4b84(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c4c00. */
/* Supplied declaration required: FUN_002c5978. */


void FUN_0010af84(void)

{
/* irregular: 10 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char *puVar2;
  unsigned int temp_v0;
  
  if (DAT_0043e128 == (unsigned int *)0x0) {
    DAT_0043e128 = (unsigned int *)FUN_002c4b84(0x100,0x100,0,0x1bc,1);
  }
  puVar1 = DAT_0043e128;
  FUN_002c4b30(DAT_0043e128,0x1bc);
  puVar2 = &LAB_0010b168;
  FUN_002c5978(&LAB_0010b168,1,0,0,&LAB_0011b1bc,0,0);
  *puVar1 = (unsigned int)puVar2;
  FUN_002c4c00(&LAB_0010b17c,0x81,0,0,FUN_0011ae10,0,0,puVar2);
  FUN_002c4c00(&LAB_0010b190,0xdf,0,0,FUN_0011ae10,0,0,*puVar1);
  puVar1 = DAT_0043e128;
  FUN_002c3344(DAT_0043e128 + 9);
  FUN_002c32f8(puVar1 + 9,&DAT_00403aa8,0x24,0,0,0,0,0,0,0,0);
  FUN_002bdb2c(puVar1 + 0x11,0xe,0x87,puVar1 + 9,1);
  FUN_002bdac0(puVar1 + 0x11,0);
  FUN_002bdb2c(puVar1 + 0x34,0xe,0x87,puVar1 + 9,1);
  FUN_002bdac0(puVar1 + 0x34,2,0);
  temp_v0 = FUN_002bda1c(0);
  puVar1[0x6e] = temp_v0;
  FUN_002bda10(temp_v0,0xffffffff);
  FUN_002bda00(puVar1[0x6e],0,0x646464ff);
  puVar1[4] = 0x1e;
  return;
}
