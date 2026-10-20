/* NON_MATCHING: romwright 0.5.0 decompilation of `MapMain_Register` (_code @ 0x1b4514, 0x15c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0018ac7c(...);
int FUN_00192420(...);
int FUN_001924d0(...);
int FUN_001a8c6c(...);
int FUN_001b3da4(...);
int FUN_001b4764(...);
int FUN_00280ac0(...);
int FUN_002c498c(...);
int FUN_002c4a08(...);
int FUN_002c5788(...);
int MapEpl_InitState(...);

/* stack frame of void: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} void_stack;

extern unsigned char LAB_001b46b0; /* 0x1b46b0 */
extern unsigned char LAB_001b46c0; /* 0x1b46c0 */
extern int FUN_001b7f78(...); /* 0x1b7f78 */
extern unsigned char LAB_001e9508; /* 0x1e9508 */
extern unsigned char LAB_0020fe90; /* 0x20fe90 */
extern unsigned char LAB_002ca6dc; /* 0x2ca6dc */
extern unsigned int *DAT_00447e28; /* 0x447e28 */
extern unsigned char DAT_0049fb47; /* 0x49fb47 */

/* Supplied declaration required: FUN_0018ac7c. */
/* Supplied declaration required: FUN_00192420. */
/* Supplied declaration required: FUN_001924d0. */
/* Supplied declaration required: FUN_001a8c6c. */
/* Supplied declaration required: FUN_001b3da4. */
/* Supplied declaration required: FUN_001b4764. */
/* Supplied declaration required: FUN_00280ac0. */
extern int FUN_002c2950(void);
/* Supplied declaration required: FUN_002c498c. */
/* Supplied declaration required: FUN_002c4a08. */
/* Supplied declaration required: FUN_002c5788. */
/* Supplied declaration required: MapEpl_InitState. */


void MapMain_Register(void)

{
/* irregular: 12 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  unsigned char *puVar3;
  unsigned char *puVar4;
  
  puVar1 = (unsigned int *)0x100;
  FUN_002c498c(0x100,0x100,0,200,1);
  DAT_00447e28 = puVar1;
  temp_v0 = FUN_002c2950();
  FUN_00280ac0(1);
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
  MapEpl_InitState();
  FUN_001b4764();
  FUN_001b3da4();
  FUN_00192420();
  FUN_0018ac7c();
  FUN_001924d0();
  FUN_001a8c6c();
  puVar1[0x2a] = 0x1c2;
  puVar1[0x2b] = 0;
  puVar1[0x2d] = 0;
  *(unsigned char *)(puVar1 + 0x2e) = 0;
  *(unsigned char *)((int)puVar1 + 0xb9) = 0;
  DAT_0049fb47 = 0;
  *(unsigned char *)(temp_v0 + 0x790) = 0;
  puVar1[0x31] = 0;
  *(unsigned char *)(puVar1 + 3) = 0;
  puVar3 = &LAB_001b46b0;
  FUN_002c5788(&LAB_001b46b0,2,0,0,FUN_001b7f78,&LAB_0020fe90,0);
  *puVar1 = (unsigned int)puVar3;
  puVar4 = &LAB_001b46c0;
  FUN_002c4a08(&LAB_001b46c0,0x6f,0,0,&LAB_001e9508,&LAB_002ca6dc,0,puVar3);
  puVar1[1] = (unsigned int)puVar4;
  return;
}

} /* extern "C" */
