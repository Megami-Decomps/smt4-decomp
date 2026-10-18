/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001b4410` (_code @ 0x1b4410, 0x15c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} void_stack;

extern unsigned char LAB_001b45b0; /* 0x1b45b0 */
extern unsigned char LAB_001b45c0; /* 0x1b45c0 */
extern int FUN_001b7e78(); /* 0x1b7e78 */
extern unsigned char LAB_001e9414; /* 0x1e9414 */
extern unsigned char LAB_0020fd2c; /* 0x20fd2c */
extern unsigned char LAB_002ca688; /* 0x2ca688 */
extern unsigned int *DAT_00447e28; /* 0x447e28 */
extern unsigned char DAT_0049fb47; /* 0x49fb47 */

/* Supplied declaration required: FUN_0018ab7c. */
/* Supplied declaration required: FUN_00192298. */
/* Supplied declaration required: FUN_00192320. */
/* Supplied declaration required: FUN_001923d0. */
/* Supplied declaration required: FUN_001a8b64. */
/* Supplied declaration required: FUN_001b3ca0. */
/* Supplied declaration required: FUN_001b4664. */
/* Supplied declaration required: FUN_00280d30. */
extern int FUN_002c2b1c(void);
extern unsigned int *FUN_002c4b84(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c4c00. */
/* Supplied declaration required: FUN_002c5978. */


void FUN_001b4410(void)

{
/* irregular: 11 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  unsigned char *puVar3;
  unsigned char *puVar4;
  
  puVar1 = (unsigned int *)FUN_002c4b84(0x100,0x100,0,200,1);
  DAT_00447e28 = puVar1;
  temp_v0 = FUN_002c2b1c();
  FUN_00280d30(1);
  *(unsigned char *)((int)puVar1 + 0xd) = 0;
  *(unsigned char *)((int)puVar1 + 0xe) = 0;
  *(unsigned char *)((int)puVar1 + 0xf) = 0;
  *(unsigned char *)(puVar1 + 4) = 0;
  *(unsigned char *)((int)puVar1 + 0x11) = 0;
  *(unsigned char *)((int)puVar1 + 0x12) = 0;
  *(unsigned char *)((int)puVar1 + 0x13) = 0;
  *(unsigned char *)(puVar1 + 5) = 0;
  puVar1[6] = 0;
  *(unsigned char *)(puVar1 + 7) = 0;
  *(unsigned char *)((int)puVar1 + 0x1d) = 0;
  *(unsigned char *)((int)puVar1 + 0x1e) = 0;
  *(unsigned char *)((int)puVar1 + 0x1f) = 0;
  *(unsigned char *)(puVar1 + 8) = 0;
  *(unsigned char *)((int)puVar1 + 0x3d) = 0;
  puVar1[0x10] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 1;
  puVar1[0xd] = 0;
  puVar1[0xc] = 1;
  *(unsigned char *)(puVar1 + 0xf) = 0;
  *(unsigned char *)((int)puVar1 + 0x47) = 1;
  *(unsigned char *)(puVar1 + 0x12) = 0;
  *(unsigned char *)((int)puVar1 + 0x46) = 0;
  FUN_00192298();
  FUN_001b4664();
  FUN_001b3ca0();
  FUN_00192320();
  FUN_0018ab7c();
  FUN_001923d0();
  FUN_001a8b64();
  puVar1[0x2a] = 0x1c2;
  puVar1[0x2b] = 0;
  puVar1[0x2d] = 0;
  *(unsigned char *)(puVar1 + 0x2e) = 0;
  *(unsigned char *)((int)puVar1 + 0xb9) = 0;
  DAT_0049fb47 = 0;
  *(unsigned char *)(temp_v0 + 0x790) = 0;
  puVar1[0x31] = 0;
  *(unsigned char *)(puVar1 + 3) = 0;
  puVar3 = &LAB_001b45b0;
  FUN_002c5978(&LAB_001b45b0,2,0,0,FUN_001b7e78,&LAB_0020fd2c,0);
  *puVar1 = (unsigned int)puVar3;
  puVar4 = &LAB_001b45c0;
  FUN_002c4c00(&LAB_001b45c0,0x6f,0,0,&LAB_001e9414,&LAB_002ca688,0,puVar3);
  puVar1[1] = (unsigned int)puVar4;
  return;
}
