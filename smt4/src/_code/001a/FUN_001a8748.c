/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a8748` (_code @ 0x1a8748, 0x2e8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern unsigned char LAB_001a88dc; /* 0x1a88dc */
extern unsigned char LAB_001a88f8; /* 0x1a88f8 */
extern unsigned char LAB_001a8910; /* 0x1a8910 */
extern unsigned char LAB_001a8924; /* 0x1a8924 */
extern unsigned char LAB_001a893c; /* 0x1a893c */
extern unsigned char LAB_001a8954; /* 0x1a8954 */
extern unsigned char LAB_001a896c; /* 0x1a896c */
extern unsigned char LAB_001a8984; /* 0x1a8984 */
extern unsigned char LAB_001a899c; /* 0x1a899c */
extern unsigned char LAB_001a89b4; /* 0x1a89b4 */
extern unsigned char LAB_001a89cc; /* 0x1a89cc */
extern unsigned char LAB_001a89e0; /* 0x1a89e0 */
extern unsigned char LAB_001a89f4; /* 0x1a89f4 */
extern unsigned char LAB_001a8a08; /* 0x1a8a08 */
extern unsigned char LAB_001a8a1c; /* 0x1a8a1c */
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

/* Supplied declaration required: FUN_00192564. */
/* Supplied declaration required: FUN_0020d088. */
/* Supplied declaration required: FUN_00287c34. */
/* Supplied declaration required: FUN_002c4c2c. */
/* Supplied declaration required: FUN_002c58c8. */
extern unsigned int FUN_002c5c04(unsigned char *);
/* Supplied declaration required: FUN_002c5c14. */
/* Supplied declaration required: FUN_002f58e0. */


void FUN_001a8748(void)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  
  FUN_00287c34(0);
  FUN_00192564();
  FUN_0020d088();
  FUN_002f58e0();
  FUN_002c4c2c(0x1c);
  FUN_002c58c8(0x1c,3);
  FUN_002c58c8(0x1c,4);
  DAT_0049fba4 = FUN_002c5c04(&LAB_001a88dc);
  DAT_0049fba8 = FUN_002c5c04(&LAB_001a88f8);
  DAT_0049fbac = FUN_002c5c14(&LAB_001a8910,&DAT_0049fbb0,1,0x10);
  DAT_0049fbb4 = FUN_002c5c14(&LAB_001a8924,&DAT_0049fbb8,1,0x10);
  DAT_0049fbbc = FUN_002c5c14(&LAB_001a893c,&DAT_0049fbc0,1,0x10);
  DAT_0049fbc4 = FUN_002c5c14(&LAB_001a8954,&DAT_0049fbc8,1,0x10);
  DAT_0049fbcc = FUN_002c5c14(&LAB_001a896c,&DAT_0049fbd0,1,0x10);
  DAT_0049fbd4 = FUN_002c5c14(&LAB_001a8984,&DAT_0049fbd8,1,0x10);
  DAT_0049fbdc = FUN_002c5c14(&LAB_001a899c,&DAT_0049fbe0,1,0x10);
  DAT_0049fbe4 = FUN_002c5c14(&LAB_001a89b4,&DAT_0049fbe8,1,0x10);
  DAT_0049fbec = FUN_002c5c14(&LAB_001a89cc,&DAT_0049fbf0,1,0x10);
  DAT_0049fbf4 = FUN_002c5c14(&LAB_001a89e0,&DAT_0049fbf8,1,0x10);
  DAT_0049fbfc = FUN_002c5c14(&LAB_001a89f4,&DAT_0049fc00,1,0x10);
  DAT_0049fc04 = FUN_002c5c14(&LAB_001a8a08,&DAT_0049fc08,1,0x10);
  DAT_0049fc0c = FUN_002c5c14(&LAB_001a8a1c,&DAT_0049fc10,1,0x10);
  temp_v0 = DAT_004474d8;
  *(unsigned short *)(DAT_004474d8 + 0x14) = 0;
  *(unsigned int *)(temp_v0 + 0x20) = 0;
  *(unsigned int *)(temp_v0 + 0x24) = 0;
  *(unsigned int *)(temp_v0 + 0x28) = 0;
  *(unsigned int *)(temp_v0 + 0x2c) = 0;
  return;
}
