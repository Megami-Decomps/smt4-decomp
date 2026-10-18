/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030a4fc` (_code @ 0x30a4fc, 0x168 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} void_stack;

extern int FUN_002221f0(); /* 0x2221f0 */
extern int FUN_00222428(); /* 0x222428 */
extern unsigned char LAB_0030a6a8; /* 0x30a6a8 */
extern unsigned char LAB_0030a6bc; /* 0x30a6bc */
extern unsigned char LAB_0030a6d4; /* 0x30a6d4 */
extern unsigned int *DAT_0043dee8; /* 0x43dee8 */
extern unsigned int DAT_0043df00; /* 0x43df00 */
extern unsigned int DAT_0043df04; /* 0x43df04 */

extern int FUN_0024bd24(unsigned int);
/* Supplied declaration required: FUN_002a6214. */
extern int FUN_002a63f8(unsigned int, unsigned int);
extern unsigned int *FUN_002c4b84(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c4c00. */
/* Supplied declaration required: FUN_002c5978. */
/* Supplied declaration required: FUN_002c5b04. */


void FUN_0030a4fc(void)

{
/* irregular: 6 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char *puVar2;
  int temp_v0;
  int temp_v1;
  
  if (DAT_0043dee8 == (unsigned int *)0x0) {
    DAT_0043dee8 = (unsigned int *)FUN_002c4b84(0x100,0x100,0,0x1c,1);
  }
  puVar1 = DAT_0043dee8;
  temp_v1 = 0;
  *DAT_0043dee8 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar2 = &LAB_0030a6a8;
  FUN_002c5978(&LAB_0030a6a8,1,0,0,FUN_00222428,0,0);
  *puVar1 = (unsigned int)puVar2;
  FUN_002c4c00(&LAB_0030a6bc,0x81,0,0,FUN_002221f0,0,0,puVar2);
  FUN_002c4c00(&LAB_0030a6d4,0xdf,0,0,FUN_002221f0,0,0,*puVar1);
  puVar1[4] = 0;
  puVar1[2] = 0;
  *(unsigned char *)(puVar1 + 6) = 0;
  puVar1[5] = 0x3f800000;
  puVar1[3] = 0x28;
  do {
    temp_v0 = FUN_0024bd24((&DAT_0043df00)[temp_v1 * 3]);
    if (temp_v0 == 0) {
      FUN_002c5b04((&DAT_0043df00)[temp_v1 * 3],0);
      *(unsigned char *)(temp_v1 * 0xc + 0x43df09) = 1;
    }
    temp_v0 = FUN_002a63f8((&DAT_0043df00)[temp_v1 * 3],(&DAT_0043df04)[temp_v1 * 3]);
    if (temp_v0 == 0) {
      FUN_002a6214((&DAT_0043df00)[temp_v1 * 3],(&DAT_0043df04)[temp_v1 * 3]);
      *(unsigned char *)(temp_v1 * 0xc + 0x43df08) = 1;
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 2);
  return;
}
