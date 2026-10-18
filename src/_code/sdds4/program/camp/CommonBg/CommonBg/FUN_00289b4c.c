/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00289b4c` (_code @ 0x289b4c, 0x314 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
} void_stack;

extern int FUN_001a090c(); /* 0x1a090c */
extern unsigned char LAB_001ecc78; /* 0x1ecc78 */
extern int FUN_001ecc7c(); /* 0x1ecc7c */
extern unsigned char LAB_001ed048; /* 0x1ed048 */
extern unsigned char LAB_00289eac; /* 0x289eac */
extern unsigned char LAB_00289ebc; /* 0x289ebc */
extern unsigned char LAB_00289ed0; /* 0x289ed0 */
extern signed char DAT_0043dc20; /* 0x43dc20 */
extern unsigned int *DAT_0043dc24; /* 0x43dc24 */

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
/* Supplied declaration required: FUN_00203350. */
extern int FUN_002c0ba8(unsigned int);
/* Supplied declaration required: FUN_002c0bcc. */
/* Supplied declaration required: FUN_002c4b30. */
extern unsigned int FUN_002c4b84(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c4c00. */
/* Supplied declaration required: FUN_002c5978. */


void FUN_00289b4c(void)

{
/* irregular: irregular input(s): in_fpscr; 8 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int *puVar2;
  short temp_v1;
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
      DAT_0043dc24 = (unsigned int *)FUN_002c4b84(0x100,0x100,0,0xe0,1);
    }
    puVar2 = DAT_0043dc24;
    FUN_002c4b30(DAT_0043dc24,0xe0);
    puVar4 = &LAB_00289eac;
    FUN_002c5978(&LAB_00289eac,2,0,0,FUN_001a090c,&LAB_001ecc78,0);
    *puVar2 = (unsigned int)puVar4;
    FUN_002c4c00(&LAB_00289ebc,0xe5,0,0,FUN_001ecc7c,0,0,puVar4);
    FUN_002c4c00(&LAB_00289ed0,0x15f,0,0,&LAB_001ed048,0,0,*puVar2);
    FUN_00203350();
    puVar2 = DAT_0043dc24;
    temp_v7 = 0.1f;
    temp_v8 = -0.1f;
    temp_v9 = 0.0f;
    temp_v5 = 0;
    do {
      temp_v2 = FUN_002c0bcc(0x131);
      temp_v2 = VectorUnsignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
      puVar2[temp_v5 * 5 + 6] = temp_v2;
      temp_v2 = FUN_002c0bcc(0xe1);
      temp_v2 = VectorUnsignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
      puVar2[temp_v5 * 5 + 7] = temp_v2;
      temp_v3 = FUN_002c0bcc(0x13);
      temp_v6 = (float)VectorUnsignedToFloat(temp_v3 + 1,(unsigned char)(in_fpscr >> 0x16) & 3);
      puVar2[temp_v5 * 5 + 8] = temp_v8 + temp_v6 * temp_v7;
      temp_v3 = FUN_002c0bcc(0x13);
      temp_v6 = (float)VectorUnsignedToFloat(temp_v3 + 1,(unsigned char)(in_fpscr >> 0x16) & 3);
      puVar2[temp_v5 * 5 + 9] = temp_v8 + temp_v6 * temp_v7;
      temp_v3 = FUN_002c0bcc(0x14);
      temp_v4 = temp_v5 + 1;
      temp_v0 = (in_fpscr & 0xfffffff) | ((unsigned int)((float)puVar2[temp_v5 * 5 + 8] == temp_v9) << 0x1e);
      temp_v6 = (float)VectorUnsignedToFloat(temp_v3 + 0x14,(unsigned char)(temp_v0 >> 0x16) & 3);
      puVar2[temp_v5 * 5 + 10] = temp_v6 * temp_v7;
      if (romwright_subpiece_4_1_0(temp_v0 >> 0x1e,0)) {
        puVar2[temp_v5 * 5 + 8] = temp_v10;
      }
      in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)((float)puVar2[temp_v5 * 5 + 9] == temp_v9) << 0x1e);
      if (romwright_subpiece_4_1_0(in_fpscr >> 0x1e,0)) {
        puVar2[temp_v5 * 5 + 9] = temp_v10;
      }
      temp_v5 = temp_v4;
    } while (temp_v4 < 5);
    temp_v11 = 0x4120000042cc0000;
    temp_v5 = 0;
    do {
      temp_v2 = FUN_002c0bcc(0xf0);
      temp_v2 = VectorUnsignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
      puVar2[temp_v5 * 5 + 0x1f] = temp_v2;
      temp_v3 = FUN_002c0bcc(0x13);
      temp_v6 = (float)VectorUnsignedToFloat(temp_v3 + 1,(unsigned char)(in_fpscr >> 0x16) & 3);
      puVar2[temp_v5 * 5 + 0x20] = temp_v8 + temp_v6 * temp_v7;
      temp_v3 = FUN_002c0bcc(0x14);
      puVar2[temp_v5 * 5 + 0x22] = (int)temp_v11;
      *(unsigned short *)(puVar2 + temp_v5 * 5 + 0x23) = 0;
      *(unsigned short *)((int)puVar2 + temp_v5 * 0x14 + 0x8e) = 0xf0;
      temp_v6 = (float)VectorUnsignedToFloat(temp_v3 + 0x14,(unsigned char)(in_fpscr >> 0x16) & 3);
      puVar2[temp_v5 * 5 + 0x21] = temp_v6 * temp_v7;
      temp_v3 = FUN_002c0bcc(2);
      if (temp_v3 == 0) {
        temp_v1 = FUN_002c0bcc(0x1e);
        *(short *)(puVar2 + temp_v5 * 5 + 0x23) = *(short *)(puVar2 + temp_v5 * 5 + 0x23) - temp_v1;
        temp_v1 = FUN_002c0bcc(0x1e);
        *(short *)((int)puVar2 + temp_v5 * 0x14 + 0x8e) =
             temp_v1 + *(short *)((int)puVar2 + temp_v5 * 0x14 + 0x8e);
      }
      in_fpscr = (in_fpscr & 0xfffffff) |
                 ((unsigned int)((float)puVar2[temp_v5 * 5 + 0x20] == temp_v9) << 0x1e);
      if (romwright_subpiece_4_1_0(in_fpscr >> 0x1e,0)) {
        puVar2[temp_v5 * 5 + 0x20] = temp_v10;
      }
      temp_v6 = (float)puVar2[temp_v5 * 5 + 0x20];
      if (((int)temp_v6 < 0x3dcccccd) && ((unsigned int)temp_v6 < 0xbdcccccd)) {
        puVar2[temp_v5 * 5 + 0x20] = temp_v6 * (float)((unsigned long long)temp_v11 >> 0x20);
      }
      temp_v5 = temp_v5 + 1;
    } while (temp_v5 < 5);
    *(float *)&puVar2[4] = temp_v9;
    puVar2[2] = 0;
    puVar2[5] = 0;
  }
  puVar2 = DAT_0043dc24;
  if ((DAT_0043dc24 != (unsigned int *)0x0) && (DAT_0043dc24[2] == 0)) {
    temp_v5 = FUN_002c0ba8(0x400);
    if (temp_v5 != 0) {
      puVar2[3] = 0;
    }
    else {
      puVar2[3] = 1;
    }
    puVar2[2] = 1;
    puVar2[4] = temp_v10;
    puVar2[5] = 0;
  }
  DAT_0043dc20 = DAT_0043dc20 + '\x01';
  return;
}
