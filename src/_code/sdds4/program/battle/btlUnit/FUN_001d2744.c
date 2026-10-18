/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001d2744` (_code @ 0x1d2744, 0x214 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 10 slot(s), 31 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned char sp2E; /* 0x2e: local_2e */
    unsigned char sp2F; /* 0x2f: local_2f */
    unsigned char sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
} param_1_stack;

extern int FUN_001b790c(); /* 0x1b790c */
extern unsigned char LAB_001d2960; /* 0x1d2960 */
extern unsigned char LAB_001d2974; /* 0x1d2974 */
extern int FUN_001e4c4c(); /* 0x1e4c4c */
extern int FUN_0020f484(); /* 0x20f484 */
extern unsigned char DAT_004203bc; /* 0x4203bc */
extern unsigned char DAT_00420534; /* 0x420534 */
extern unsigned char DAT_00420628; /* 0x420628 */
extern unsigned int *DAT_00439ce4; /* 0x439ce4 */
extern int DAT_0049356c; /* 0x49356c */
extern unsigned int *DAT_00493570; /* 0x493570 */

#ifndef ROMWRIGHT_PIECE_2_2_DEFINED
#define ROMWRIGHT_PIECE_2_2_DEFINED
#define romwright_piece_2_2(upper, lower) ((unsigned int)(((unsigned int)(unsigned short)(upper) << 16) | (unsigned short)(lower)))
#endif
/* Supplied declaration required: FUN_001c0898. */
/* Supplied declaration required: FUN_002c23f8. */
extern unsigned int FUN_002c31d8(void);
/* Supplied declaration required: FUN_002c4c00. */
/* Supplied declaration required: FUN_002c54f0. */
extern int FUN_0036773c(unsigned int **, unsigned int);


void FUN_001d2744(unsigned int *param_1)

{
/* irregular: 7 native warning(s); review required */
  unsigned char *puVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int *piVar8;
  unsigned int *temp_v4;
  unsigned char *temp_v5;
  unsigned int uStack_38;
  unsigned int temp_v6;
  unsigned char temp_v7;
  unsigned char temp_v8;
  unsigned char temp_v9;
  unsigned int temp_v10;
  unsigned char *temp_v11;
  
  temp_v5 = (unsigned char *)*param_1;
  puVar1 = &LAB_001d2960;
  temp_v4 = param_1;
  FUN_002c4c00(&LAB_001d2960,2,0,0,FUN_001b790c,FUN_0020f484);
  param_1[0xd] = (unsigned int)puVar1;
  temp_v4 = param_1;
  temp_v5 = puVar1;
  FUN_002c4c00(&LAB_001d2974,0x6f,0,0,FUN_001e4c4c,0);
  puVar2 = (unsigned int *)0x14;
  FUN_002c23f8();
  if (puVar2 != (unsigned int *)0x0) {
    *puVar2 = (unsigned int)&DAT_00420628;
    puVar2[1] = (unsigned int)param_1;
  }
  temp_v3 = 0;
  puVar1 = &DAT_004203bc;
  temp_v11 = &DAT_00420534;
  DAT_00439ce4 = puVar2;
  do {
    puVar2 = (unsigned int *)0x10000;
    FUN_002c54f0(0x10000,0x100,0,0xc,1);
    DAT_00493570 = puVar2;
    if (puVar2 != (unsigned int *)0x0) {
      puVar2[2] = (unsigned int)DAT_00439ce4;
      *puVar2 = (unsigned int)puVar1;
    }
    while( 1 ) {
      piVar8 = &DAT_0049356c + temp_v3 * 2;
      temp_v0 = FUN_002c31d8();
      temp_v4 = (unsigned int *)romwright_piece_2_2((*(unsigned short *)((unsigned char *)&temp_v4 + 2)),0x100);
      temp_v6 = 1;
      temp_v5 = (unsigned char *)0x4;
      uStack_38 = 8;
      temp_v7 = 0;
      temp_v8 = 0;
      temp_v10 = 0;
      temp_v9 = 0;
      temp_v1 = FUN_0036773c(&temp_v4,temp_v0);
      *piVar8 = temp_v1;
      temp_v2 = (int)(&DAT_00493570)[temp_v3 * 2];
      if (*(int *)(temp_v1 + 0x14c) != 0) {
        *(unsigned int *)(*(int *)(temp_v1 + 0x14c) + 4) = 0;
      }
      *(int *)(temp_v1 + 0x14c) = temp_v2;
      *(int *)(temp_v2 + 4) = temp_v1;
      FUN_001c0898(*piVar8,1);
      temp_v1 = DAT_0049356c;
      if (temp_v3 != 0) {
        temp_v3 = temp_v3 + 1;
        *(unsigned char *)(*piVar8 + 0x14a) = 3;
        *(unsigned char *)(*piVar8 + 0x148) = 0;
        *(unsigned char *)(*piVar8 + 0x149) = 0xb;
        if (temp_v3 >= 2) {
          return;
        }
      }
      else {
        temp_v3 = 1;
        *(unsigned char *)(DAT_0049356c + 0x14a) = 2;
        *(unsigned char *)(temp_v1 + 0x148) = 0;
        *(unsigned char *)(temp_v1 + 0x149) = 0xb;
      }
      if (temp_v3 == 0) break;
      puVar3 = (unsigned int *)0x10000;
      FUN_002c54f0(0x10000,0x100,0,0xc,1);
      puVar2 = DAT_00439ce4;
      if (puVar3 != (unsigned int *)0x0) {
        *puVar3 = (unsigned int)temp_v11;
        puVar3[2] = (unsigned int)puVar2;
      }
      (&DAT_00493570)[temp_v3 * 2] = puVar3;
    }
  } while( 1 );
}
