/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001eb02c` (_code @ 0x1eb02c, 0x184 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

extern int FUN_001e989c(); /* 0x1e989c */
extern unsigned char LAB_001eb1f8; /* 0x1eb1f8 */
extern unsigned char LAB_001eb204; /* 0x1eb204 */
extern unsigned char LAB_001eb218; /* 0x1eb218 */
extern unsigned char LAB_001eb230; /* 0x1eb230 */
extern unsigned char LAB_0020fd5c; /* 0x20fd5c */
extern unsigned char LAB_0021f36c; /* 0x21f36c */
extern int FUN_002ca6f4(); /* 0x2ca6f4 */
extern int FUN_002ca7a8(); /* 0x2ca7a8 */
extern unsigned int *DAT_0044e300; /* 0x44e300 */

/* Supplied declaration required: FUN_002c4c00. */
/* Supplied declaration required: FUN_002c54f0. */
/* Supplied declaration required: FUN_002c5978. */


void FUN_001eb02c(unsigned char *param_1)

{
/* irregular: 6 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char *puVar2;
  
  puVar1 = (unsigned int *)0x10000;
  FUN_002c54f0(0x10000,0x100,0,0xa0,1);
  DAT_0044e300 = puVar1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(unsigned char *)(puVar1 + 4) = 1;
  *(unsigned char *)(puVar1 + 0x18) = 1;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x13] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  *(unsigned char *)((int)puVar1 + 99) = 0;
  *(unsigned char *)((int)puVar1 + 0x61) = 0;
  *(unsigned char *)((int)puVar1 + 0x62) = 0;
  puVar1[0x20] = 2;
  *(unsigned short *)(puVar1 + 0x1c) = 0;
  *(unsigned short *)((int)puVar1 + 0x72) = 0;
  puVar1[0x1d] = 0;
  puVar1[0x1e] = 0;
  puVar1[0x19] = 0;
  puVar1[0x1a] = 0;
  *(unsigned char *)(puVar1 + 0x1f) = 0;
  *(unsigned char *)(puVar1 + 0x21) = 1;
  *(unsigned char *)((int)puVar1 + 0x86) = 0;
  *(unsigned char *)((int)puVar1 + 0x85) = 1;
  *(unsigned char *)((int)puVar1 + 0x96) = 0;
  *(unsigned char *)(puVar1 + 0x25) = 0;
  puVar1[0x26] = 0;
  *(unsigned char *)((int)puVar1 + 0x95) = 0;
  *(unsigned char *)(puVar1 + 1) = 0;
  if (param_1 != (unsigned char *)0x0) {
    *(unsigned char *)((int)puVar1 + 0x95) = *param_1;
    *(unsigned char *)(puVar1 + 4) = 0;
  }
  puVar2 = &LAB_001eb1f8;
  FUN_002c5978(&LAB_001eb1f8,2,0,0,FUN_001e989c,FUN_002ca6f4,0);
  *puVar1 = (unsigned int)puVar2;
  FUN_002c4c00(&LAB_001eb204,0x76,0,0,&LAB_0020fd5c,0,0,puVar2);
  FUN_002c4c00(&LAB_001eb218,0xd4,0,0,&LAB_0021f36c,0,0,*puVar1);
  FUN_002c4c00(&LAB_001eb230,0xe7,0,0,FUN_002ca7a8,0,0,*puVar1);
  return;
}
