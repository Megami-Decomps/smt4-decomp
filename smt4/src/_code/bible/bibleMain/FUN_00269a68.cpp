/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00269a68` (_code @ 0x269a68, 0xec bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002c498c(int, int, int, int, int);
int FUN_002c4a08(...);
int FUN_002c564c(int);
int FUN_002c5788(unsigned char *, int, int, int, unsigned char *, unsigned char *, unsigned int *);

/* stack frame of void: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} void_stack;

extern unsigned char LAB_001e4734; /* 0x1e4734 */
extern unsigned char LAB_0020ed68; /* 0x20ed68 */
extern unsigned char LAB_00269b90; /* 0x269b90 */
extern unsigned char LAB_00269ba4; /* 0x269ba4 */
extern unsigned char LAB_00269bb4; /* 0x269bb4 */
extern unsigned char LAB_002c9d94; /* 0x2c9d94 */
extern unsigned char LAB_002c9df8; /* 0x2c9df8 */
extern unsigned int *DAT_0043da10; /* 0x43da10 */

/* Supplied declaration required: FUN_002c498c. */
/* Supplied declaration required: FUN_002c4a08. */
/* Supplied declaration required: FUN_002c564c. */
/* Supplied declaration required: FUN_002c5788. */


void FUN_00269a68(void)

{
/* irregular: 4 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char *puVar2;
  unsigned char *puVar3;
  
  FUN_002c564c(0);
  puVar1 = (unsigned int *)0x100;
  FUN_002c498c(0x100,0x100,0,0x20,1);
  DAT_0043da10 = puVar1;
  *(unsigned char *)((int)puVar1 + 0xd) = 0;
  *(unsigned char *)(puVar1 + 3) = 0;
  puVar1[4] = 1;
  *(unsigned char *)(puVar1 + 5) = 1;
  puVar2 = &LAB_00269b90;
  FUN_002c5788(&LAB_00269b90,2,0,0,&LAB_001e4734,&LAB_002c9d94,puVar1);
  *puVar1 = (unsigned int)puVar2;
  puVar3 = &LAB_00269ba4;
  FUN_002c4a08(&LAB_00269ba4,0x6f,1,0,&LAB_0020ed68,0,DAT_0043da10,puVar2);
  puVar1[1] = (unsigned int)puVar3;
  puVar2 = &LAB_00269bb4;
  FUN_002c4a08(&LAB_00269bb4,0xe6,1,0,&LAB_002c9df8,0,DAT_0043da10,*puVar1);
  puVar1[2] = (unsigned int)puVar2;
  return;
}

} /* extern "C" */
