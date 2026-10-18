/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a863c` (_code @ 0x1a863c, 0x2e8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern unsigned char LAB_001a87d0; /* 0x1a87d0 */
extern unsigned char LAB_001a87ec; /* 0x1a87ec */
extern unsigned char LAB_001a8804; /* 0x1a8804 */
extern unsigned char LAB_001a8818; /* 0x1a8818 */
extern unsigned char LAB_001a8830; /* 0x1a8830 */
extern unsigned char LAB_001a8848; /* 0x1a8848 */
extern unsigned char LAB_001a8860; /* 0x1a8860 */
extern unsigned char LAB_001a8878; /* 0x1a8878 */
extern unsigned char LAB_001a8890; /* 0x1a8890 */
extern unsigned char LAB_001a88a8; /* 0x1a88a8 */
extern unsigned char LAB_001a88c0; /* 0x1a88c0 */
extern unsigned char LAB_001a88d4; /* 0x1a88d4 */
extern unsigned char LAB_001a88e8; /* 0x1a88e8 */
extern unsigned char LAB_001a88fc; /* 0x1a88fc */
extern unsigned char LAB_001a8910; /* 0x1a8910 */
extern int DAT_004474d8; /* 0x4474d8 */
extern unsigned int DAT_0049fba4; /* 0x49fba4 */
extern unsigned int DAT_0049fba8; /* 0x49fba8 */
extern unsigned int DAT_0049fbac; /* 0x49fbac */
extern unsigned int DAT_0049fbb0; /* 0x49fbb0 */
extern unsigned int DAT_0049fbb4; /* 0x49fbb4 */
extern unsigned int DAT_0049fbb8; /* 0x49fbb8 */
extern unsigned int DAT_0049fbbc; /* 0x49fbbc */
extern unsigned int DAT_0049fbc0; /* 0x49fbc0 */
extern unsigned int DAT_0049fbc4; /* 0x49fbc4 */
extern unsigned int DAT_0049fbc8; /* 0x49fbc8 */
extern unsigned int DAT_0049fbcc; /* 0x49fbcc */
extern unsigned int DAT_0049fbd0; /* 0x49fbd0 */
extern unsigned int DAT_0049fbd4; /* 0x49fbd4 */
extern unsigned int DAT_0049fbd8; /* 0x49fbd8 */
extern unsigned int DAT_0049fbdc; /* 0x49fbdc */
extern unsigned int DAT_0049fbe0; /* 0x49fbe0 */
extern unsigned int DAT_0049fbe4; /* 0x49fbe4 */
extern unsigned int DAT_0049fbe8; /* 0x49fbe8 */
extern unsigned int DAT_0049fbec; /* 0x49fbec */
extern unsigned int DAT_0049fbf0; /* 0x49fbf0 */
extern unsigned int DAT_0049fbf4; /* 0x49fbf4 */
extern unsigned int DAT_0049fbf8; /* 0x49fbf8 */
extern unsigned int DAT_0049fbfc; /* 0x49fbfc */
extern unsigned int DAT_0049fc00; /* 0x49fc00 */
extern unsigned int DAT_0049fc04; /* 0x49fc04 */
extern unsigned int DAT_0049fc08; /* 0x49fc08 */
extern unsigned int DAT_0049fc0c; /* 0x49fc0c */
extern unsigned char DAT_0049fc10; /* 0x49fc10 */

/* Supplied declaration required: FUN_00192464. */
/* Supplied declaration required: FUN_0020cf24. */
/* Supplied declaration required: FUN_00287e9c. */
/* Supplied declaration required: FUN_002c4e28. */
/* Supplied declaration required: FUN_002c5ab8. */
extern unsigned int FUN_002c5e2c(unsigned char *);
/* Supplied declaration required: FUN_002c5e3c. */
/* Supplied declaration required: FUN_002f5898. */


void FUN_001a863c(void)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  
  FUN_00287e9c(0);
  FUN_00192464();
  FUN_0020cf24();
  FUN_002f5898();
  FUN_002c4e28(0x1c);
  FUN_002c5ab8(0x1c,3);
  FUN_002c5ab8(0x1c,4);
  DAT_0049fba4 = FUN_002c5e2c(&LAB_001a87d0);
  DAT_0049fba8 = FUN_002c5e2c(&LAB_001a87ec);
  DAT_0049fbac = FUN_002c5e3c(&LAB_001a8804,&DAT_0049fbb0,1,0x10);
  DAT_0049fbb4 = FUN_002c5e3c(&LAB_001a8818,&DAT_0049fbb8,1,0x10);
  DAT_0049fbbc = FUN_002c5e3c(&LAB_001a8830,&DAT_0049fbc0,1,0x10);
  DAT_0049fbc4 = FUN_002c5e3c(&LAB_001a8848,&DAT_0049fbc8,1,0x10);
  DAT_0049fbcc = FUN_002c5e3c(&LAB_001a8860,&DAT_0049fbd0,1,0x10);
  DAT_0049fbd4 = FUN_002c5e3c(&LAB_001a8878,&DAT_0049fbd8,1,0x10);
  DAT_0049fbdc = FUN_002c5e3c(&LAB_001a8890,&DAT_0049fbe0,1,0x10);
  DAT_0049fbe4 = FUN_002c5e3c(&LAB_001a88a8,&DAT_0049fbe8,1,0x10);
  DAT_0049fbec = FUN_002c5e3c(&LAB_001a88c0,&DAT_0049fbf0,1,0x10);
  DAT_0049fbf4 = FUN_002c5e3c(&LAB_001a88d4,&DAT_0049fbf8,1,0x10);
  DAT_0049fbfc = FUN_002c5e3c(&LAB_001a88e8,&DAT_0049fc00,1,0x10);
  DAT_0049fc04 = FUN_002c5e3c(&LAB_001a88fc,&DAT_0049fc08,1,0x10);
  DAT_0049fc0c = FUN_002c5e3c(&LAB_001a8910,&DAT_0049fc10,1,0x10);
  temp_v0 = DAT_004474d8;
  *(unsigned short *)(DAT_004474d8 + 0x14) = 0;
  *(unsigned int *)(temp_v0 + 0x20) = 0;
  *(unsigned int *)(temp_v0 + 0x24) = 0;
  *(unsigned int *)(temp_v0 + 0x28) = 0;
  *(unsigned int *)(temp_v0 + 0x2c) = 0;
  return;
}
