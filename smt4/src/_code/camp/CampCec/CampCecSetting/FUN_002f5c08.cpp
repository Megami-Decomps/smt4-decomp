/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f5c08` (_code @ 0x2f5c08, 0x138 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00297468(...);
int FUN_002b8838(...);
int FUN_002c4938(void);
int FUN_002c498c(int, int, int, int, int);
int FUN_002c4a08(...);
int FUN_002c5788(unsigned char *, int, int, int, unsigned char *, int, int);

/* stack frame of void: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} void_stack;

extern unsigned char LAB_002000ac; /* 0x2000ac */
extern unsigned char LAB_002000c8; /* 0x2000c8 */
extern unsigned char LAB_002f5d84; /* 0x2f5d84 */
extern unsigned char LAB_002f5d9c; /* 0x2f5d9c */
extern unsigned char LAB_002f5db8; /* 0x2f5db8 */
extern unsigned char LAB_002f5dd4; /* 0x2f5dd4 */
extern unsigned char LAB_002f5dec; /* 0x2f5dec */
extern unsigned int *DAT_0043daf8; /* 0x43daf8 */

/* Supplied declaration required: FUN_00297468. */
/* Supplied declaration required: FUN_002b8838. */
/* Supplied declaration required: FUN_002c4938. */
/* Supplied declaration required: FUN_002c498c. */
/* Supplied declaration required: FUN_002c4a08. */
/* Supplied declaration required: FUN_002c5788. */


void FUN_002f5c08(void)

{
/* irregular: 6 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char *puVar2;
  
  if (DAT_0043daf8 == (unsigned int *)0x0) {
    puVar1 = (unsigned int *)0x100;
    FUN_002c498c(0x100,0x100,0,0x44,1);
    DAT_0043daf8 = puVar1;
  }
  puVar1 = DAT_0043daf8;
  FUN_002c4938();
  puVar2 = &LAB_002f5d84;
  FUN_002c5788(&LAB_002f5d84,1,0,0,&LAB_002000c8,0,0);
  *puVar1 = (unsigned int)puVar2;
  FUN_002c4a08(&LAB_002f5d9c,0x81,0,0,&LAB_002000ac,0,0,puVar2);
  FUN_002c4a08(&LAB_002f5db8,0xdf,0,0,&LAB_002000ac,0,0,*puVar1);
  FUN_00297468(&LAB_002f5dd4,puVar1 + 2,0);
  FUN_00297468(&LAB_002f5dec,puVar1 + 3,0);
  puVar1[0xe] = 0;
  *(unsigned char *)(puVar1 + 0xf) = 2;
  puVar1[6] = 2;
  puVar1[7] = 3;
  puVar1[8] = 4;
  puVar1[9] = 5;
  puVar1[10] = 6;
  puVar1[4] = 0;
  puVar1[5] = 1;
  puVar1[0xb] = 10;
  puVar1[0xc] = 7;
  puVar1[0xd] = 0xb;
  FUN_002b8838(0xe2);
  return;
}

} /* extern "C" */
