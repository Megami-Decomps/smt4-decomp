/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001e1118` (_code @ 0x1e1118, 0x148 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern int FUN_001b0fe0(); /* 0x1b0fe0 */
extern unsigned char LAB_001e129c; /* 0x1e129c */
extern unsigned char LAB_001e12b4; /* 0x1e12b4 */
extern unsigned char LAB_001e12d8; /* 0x1e12d8 */
extern unsigned char LAB_001e12e8; /* 0x1e12e8 */
extern unsigned char LAB_001e12f4; /* 0x1e12f4 */
extern int FUN_001e1318(); /* 0x1e1318 */
extern int FUN_00206b40(); /* 0x206b40 */
extern unsigned int *DAT_0043de80; /* 0x43de80 */

/* Supplied declaration required: FUN_00282e6c. */
/* Supplied declaration required: FUN_00289ae8. */
/* Supplied declaration required: FUN_00289b4c. */
/* Supplied declaration required: FUN_0028d974. */
/* Supplied declaration required: FUN_002972f8. */
/* Supplied declaration required: FUN_002976ac. */
/* Supplied declaration required: FUN_002c4b30. */
/* Supplied declaration required: FUN_002c4c00. */
/* Supplied declaration required: FUN_002c54f0. */
/* Supplied declaration required: FUN_002c5978. */
/* Supplied declaration required: FUN_002c5ab8. */
extern unsigned int FUN_002c5e2c(unsigned char *);


void FUN_001e1118(int param_1)

{
/* irregular: 14 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  int temp_v1;
  unsigned char *puVar4;
  
  puVar1 = (unsigned int *)0x100;
  FUN_002c54f0(0x100,0x100,0,0x94,1);
  DAT_0043de80 = puVar1;
  FUN_002c4b30();
  if (param_1 == 0) {
    *(unsigned char *)(DAT_0043de80 + 2) = 1;
  }
  puVar1 = DAT_0043de80;
  FUN_002976ac(0x3c);
  FUN_00289b4c();
  FUN_0028d974();
  FUN_00289ae8();
  temp_v0 = FUN_002c5e2c(&LAB_001e129c);
  puVar1[0x22] = temp_v0;
  temp_v0 = FUN_002c5e2c(&LAB_001e12b4);
  puVar1[0x24] = temp_v0;
  temp_v1 = puVar1[0x22];
  FUN_002972f8(temp_v1,temp_v0);
  puVar1[0x23] = temp_v1;
  *(unsigned int *)(temp_v1 + 0x108) = 2;
  FUN_002c5ab8(2,0x83);
  if (*(char *)(puVar1 + 2) != '\0') {
    FUN_00282e6c(0,0xff);
    FUN_00282e6c(1,0xff);
  }
  puVar4 = &LAB_001e12d8;
  FUN_002c5978(&LAB_001e12d8,2,0,0,FUN_001b0fe0,FUN_00206b40,DAT_0043de80);
  puVar1 = DAT_0043de80;
  *DAT_0043de80 = (unsigned int)puVar4;
  FUN_002c4c00(&LAB_001e12e8,0x65,0,0,FUN_001e1318,0,puVar1,puVar4);
  FUN_002c4c00(&LAB_001e12f4,0xcc,0,0,FUN_001e1318,0,DAT_0043de80,*DAT_0043de80);
  return;
}
