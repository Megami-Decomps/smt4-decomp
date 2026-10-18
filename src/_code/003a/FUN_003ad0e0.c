/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ad0e0` (_code @ 0x3ad0e0, 0x1e8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp40; /* 0x40: local_40 */
} void_stack;

extern unsigned char LAB_003ac480; /* 0x3ac480 */
extern unsigned char LAB_003ad31c; /* 0x3ad31c */
extern unsigned char DAT_004023c4; /* 0x4023c4 */
extern unsigned char DAT_004023e8; /* 0x4023e8 */
extern unsigned char DAT_00402400; /* 0x402400 */
extern signed char DAT_0043d9e0; /* 0x43d9e0 */
extern unsigned int *DAT_0043d9e4; /* 0x43d9e4 */

/* Supplied declaration required: FUN_002af5c0. */
/* Supplied declaration required: FUN_002bd954. */
extern short FUN_002c09f4(unsigned int);
/* Supplied declaration required: FUN_002c312c. */
/* Supplied declaration required: FUN_002c3178. */
/* Supplied declaration required: FUN_002c4938. */
/* Supplied declaration required: FUN_002c498c. */
/* Supplied declaration required: FUN_002c5788. */


void FUN_003ad0e0(void)

{
/* irregular: 7 native warning(s); review required */
  short temp_v0;
  unsigned int *puVar2;
  unsigned char *puVar3;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  if (DAT_0043d9e0 < '\x01') {
    temp_v2 = 0x3f800000;
    if (DAT_0043d9e4 == (unsigned int *)0x0) {
      puVar2 = (unsigned int *)0x100;
      FUN_002c498c(0x100,0x100,0,0x474,1);
      DAT_0043d9e4 = puVar2;
      puVar2[1] = 0;
      *(unsigned short *)(puVar2 + 2) = 0xffff;
      puVar2[3] = 0;
      *(unsigned short *)(puVar2 + 4) = 0xffff;
      puVar2[5] = 0;
      *(unsigned short *)(puVar2 + 6) = 0xffff;
      *(unsigned char *)(puVar2 + 0x11c) = 0;
      *(unsigned char *)(puVar2 + 7) = 0;
      *(unsigned char *)((int)puVar2 + 0x1d) = 0;
      *(unsigned char *)((int)puVar2 + 0x1f) = 0;
      *(unsigned char *)((int)puVar2 + 0x1e) = 0;
      temp_v3 = 0;
      *(unsigned short *)(puVar2 + 0x9c) = 0;
      *(unsigned short *)((int)puVar2 + 0x272) = 0;
      puVar2[0x9d] = 0;
      puVar2[0x9f] = temp_v2;
      *(unsigned short *)(puVar2 + 0xa1) = 0;
      temp_v0 = FUN_002c09f4(200);
      *(short *)(puVar2 + 0xa2) = temp_v0 + 100;
      *(unsigned char *)(puVar2 + 0xa3) = 0;
      puVar2[0x9e] = temp_v3;
      puVar2[0xa0] = 0xc0400000;
      *(unsigned short *)((int)puVar2 + 0x286) = 0;
      temp_v0 = FUN_002c09f4(200);
      *(short *)((int)puVar2 + 0x28a) = temp_v0 + 100;
      *(unsigned char *)((int)puVar2 + 0x28d) = 0;
      FUN_002c4938(puVar2 + 0xa4,0x1e0);
    }
    puVar2 = DAT_0043d9e4;
    puVar3 = &LAB_003ad31c;
    FUN_002c5788(&LAB_003ad31c,2,0,0,&LAB_003ac480,0,0);
    *puVar2 = (unsigned int)puVar3;
    FUN_002c3178(puVar2 + 8);
    FUN_002c312c(puVar2 + 8,&DAT_004023c4,0x24,&DAT_004023e8,0x18,0,0,0,0,&DAT_00402400,0x70);
    temp_v1 = 0;
    do {
      FUN_002bd954(puVar2 + temp_v1 * 0x23 + 0x10,0x23,0,puVar2 + 8,0x15);
      FUN_002af5c0(puVar2 + temp_v1 * 0x23 + 0x10,0);
      FUN_002bd954(puVar2 + temp_v1 * 0x23 + 0x56,0x23,0,puVar2 + 8,0x15);
      FUN_002af5c0(puVar2 + temp_v1 * 0x23 + 0x56,1,0);
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < 2);
  }
  DAT_0043d9e0 = DAT_0043d9e0 + '\x01';
  return;
}
