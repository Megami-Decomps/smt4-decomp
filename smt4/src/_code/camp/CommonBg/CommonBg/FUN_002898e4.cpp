/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002898e4` (_code @ 0x2898e4, 0x314 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002034b4(...);
int FUN_002c09f4(...);
int FUN_002c4938(...);
int FUN_002c498c(...);
int FUN_002c4a08(...);
int FUN_002c5788(...);
int VectorUnsignedToFloat(...);

/* stack frame of void: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
} void_stack;

extern int FUN_001a0a1c(...); /* 0x1a0a1c */
extern unsigned char LAB_001ecd64; /* 0x1ecd64 */
extern int FUN_001ecd68(...); /* 0x1ecd68 */
extern unsigned char LAB_001ed134; /* 0x1ed134 */
extern unsigned char LAB_00289c44; /* 0x289c44 */
extern unsigned char LAB_00289c54; /* 0x289c54 */
extern unsigned char LAB_00289c68; /* 0x289c68 */
extern signed char DAT_0043dc20; /* 0x43dc20 */
extern unsigned int *DAT_0043dc24; /* 0x43dc24 */

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
/* Supplied declaration required: FUN_002034b4. */
extern int FUN_002c09d0(unsigned int);
/* Supplied declaration required: FUN_002c09f4. */
/* Supplied declaration required: FUN_002c4938. */
/* Supplied declaration required: FUN_002c498c. */
/* Supplied declaration required: FUN_002c4a08. */
/* Supplied declaration required: FUN_002c5788. */


void FUN_002898e4(void)

{
/* irregular: irregular input(s): in_fpscr; 9 native warning(s); review required */
  unsigned int temp_v0;
  short temp_v1;
  unsigned int *puVar3;
  unsigned char *puVar4;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int in_fpscr;
  float temp_v6;
  float temp_v7;
  float temp_v8;
  float temp_v9;
  unsigned int temp_v10;
  unsigned long long temp_v11;
  
  temp_v10 = 0x3f800000;
  if (DAT_0043dc20 < '\x01') {
    if (DAT_0043dc24 == (unsigned int *)0x0) {
      puVar3 = (unsigned int *)0x100;
      FUN_002c498c(0x100,0x100,0,0xe0,1);
      DAT_0043dc24 = puVar3;
    }
    puVar3 = DAT_0043dc24;
    FUN_002c4938();
    puVar4 = &LAB_00289c44;
    FUN_002c5788(&LAB_00289c44,2,0,0,FUN_001a0a1c,&LAB_001ecd64,0);
    *puVar3 = (unsigned int)puVar4;
    FUN_002c4a08(&LAB_00289c54,0xe5,0,0,FUN_001ecd68,0,0,puVar4);
    FUN_002c4a08(&LAB_00289c68,0x15f,0,0,&LAB_001ed134,0,0,*puVar3);
    FUN_002034b4();
    puVar3 = DAT_0043dc24;
    temp_v7 = 0.1f;
    temp_v8 = -0.1f;
    temp_v9 = 0.0f;
    temp_v5 = 0;
    do {
      temp_v2 = FUN_002c09f4(0x131);
      temp_v2 = VectorUnsignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
      puVar3[temp_v5 * 5 + 6] = temp_v2;
      temp_v2 = FUN_002c09f4(0xe1);
      temp_v2 = VectorUnsignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
      puVar3[temp_v5 * 5 + 7] = temp_v2;
      temp_v3 = FUN_002c09f4(0x13);
      temp_v6 = (float)VectorUnsignedToFloat(temp_v3 + 1,(unsigned char)(in_fpscr >> 0x16) & 3);
      puVar3[temp_v5 * 5 + 8] = temp_v8 + temp_v6 * temp_v7;
      temp_v3 = FUN_002c09f4(0x13);
      temp_v6 = (float)VectorUnsignedToFloat(temp_v3 + 1,(unsigned char)(in_fpscr >> 0x16) & 3);
      puVar3[temp_v5 * 5 + 9] = temp_v8 + temp_v6 * temp_v7;
      temp_v3 = FUN_002c09f4(0x14);
      temp_v4 = temp_v5 + 1;
      temp_v0 = (in_fpscr & 0xfffffff) | ((unsigned int)((float)puVar3[temp_v5 * 5 + 8] == temp_v9) << 0x1e);
      temp_v6 = (float)VectorUnsignedToFloat(temp_v3 + 0x14,(unsigned char)(temp_v0 >> 0x16) & 3);
      *(float *)&puVar3[temp_v5 * 5 + 10] = temp_v6 * temp_v7;
      if (romwright_subpiece_4_1_0(temp_v0 >> 0x1e,0)) {
        puVar3[temp_v5 * 5 + 8] = temp_v10;
      }
      in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)((float)puVar3[temp_v5 * 5 + 9] == temp_v9) << 0x1e);
      if (romwright_subpiece_4_1_0(in_fpscr >> 0x1e,0)) {
        puVar3[temp_v5 * 5 + 9] = temp_v10;
      }
      temp_v5 = temp_v4;
    } while (temp_v4 < 5);
    temp_v11 = 0x4120000042cc0000;
    temp_v5 = 0;
    do {
      temp_v2 = FUN_002c09f4(0xf0);
      temp_v2 = VectorUnsignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
      puVar3[temp_v5 * 5 + 0x1f] = temp_v2;
      temp_v3 = FUN_002c09f4(0x13);
      temp_v6 = (float)VectorUnsignedToFloat(temp_v3 + 1,(unsigned char)(in_fpscr >> 0x16) & 3);
      puVar3[temp_v5 * 5 + 0x20] = temp_v8 + temp_v6 * temp_v7;
      temp_v3 = FUN_002c09f4(0x14);
      puVar3[temp_v5 * 5 + 0x22] = (int)temp_v11;
      *(unsigned short *)(puVar3 + temp_v5 * 5 + 0x23) = 0;
      *(unsigned short *)((int)puVar3 + temp_v5 * 0x14 + 0x8e) = 0xf0;
      temp_v6 = (float)VectorUnsignedToFloat(temp_v3 + 0x14,(unsigned char)(in_fpscr >> 0x16) & 3);
      *(float *)&puVar3[temp_v5 * 5 + 0x21] = temp_v6 * temp_v7;
      temp_v3 = FUN_002c09f4(2);
      if (temp_v3 == 0) {
        temp_v1 = FUN_002c09f4(0x1e);
        *(short *)(puVar3 + temp_v5 * 5 + 0x23) = *(short *)(puVar3 + temp_v5 * 5 + 0x23) - temp_v1;
        temp_v1 = FUN_002c09f4(0x1e);
        *(short *)((int)puVar3 + temp_v5 * 0x14 + 0x8e) =
             temp_v1 + *(short *)((int)puVar3 + temp_v5 * 0x14 + 0x8e);
      }
      in_fpscr = (in_fpscr & 0xfffffff) |
                 ((unsigned int)((float)puVar3[temp_v5 * 5 + 0x20] == temp_v9) << 0x1e);
      if (romwright_subpiece_4_1_0(in_fpscr >> 0x1e,0)) {
        puVar3[temp_v5 * 5 + 0x20] = temp_v10;
      }
      temp_v6 = (float)puVar3[temp_v5 * 5 + 0x20];
      if (((int)temp_v6 < 0x3dcccccd) && ((unsigned int)temp_v6 < 0xbdcccccd)) {
        *(float *)&puVar3[temp_v5 * 5 + 0x20] = temp_v6 * (float)((unsigned long long)temp_v11 >> 0x20);
      }
      temp_v5 = temp_v5 + 1;
    } while (temp_v5 < 5);
    *(float *)&puVar3[4] = temp_v9;
    puVar3[2] = 0;
    puVar3[5] = 0;
  }
  puVar3 = DAT_0043dc24;
  if ((DAT_0043dc24 != (unsigned int *)0x0) && (DAT_0043dc24[2] == 0)) {
    temp_v5 = FUN_002c09d0(0x400);
    if (temp_v5 != 0) {
      puVar3[3] = 0;
    }
    else {
      puVar3[3] = 1;
    }
    puVar3[2] = 1;
    puVar3[4] = temp_v10;
    puVar3[5] = 0;
  }
  DAT_0043dc20 = DAT_0043dc20 + '\x01';
  return;
}

} /* extern "C" */
