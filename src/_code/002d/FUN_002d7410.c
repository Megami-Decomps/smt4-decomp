/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002d7410` (_code @ 0x2d7410, 0x2f0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of void: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int sp9C; /* 0x9c: local_9c */
    unsigned int spA0; /* 0xa0: local_a0 */
} void_stack;

extern unsigned char LAB_001c0eb0; /* 0x1c0eb0 */
extern int FUN_001c0f14(); /* 0x1c0f14 */
extern unsigned char LAB_001ec8c0; /* 0x1ec8c0 */
extern int FUN_00211484(); /* 0x211484 */
extern unsigned char LAB_002d7744; /* 0x2d7744 */
extern unsigned char LAB_002d775c; /* 0x2d775c */
extern unsigned char LAB_002d7778; /* 0x2d7778 */
extern unsigned char LAB_002d7798; /* 0x2d7798 */
extern unsigned char LAB_002d77b0; /* 0x2d77b0 */
extern unsigned char LAB_002d77cc; /* 0x2d77cc */
extern unsigned char LAB_002d77e4; /* 0x2d77e4 */
extern unsigned int *DAT_0043db10; /* 0x43db10 */

extern unsigned int FUN_0024abfc(void);
/* Supplied declaration required: FUN_0026f018. */
/* Supplied declaration required: FUN_0026f084. */
/* Supplied declaration required: FUN_0026f174. */
/* Supplied declaration required: FUN_0026f25c. */
/* Supplied declaration required: FUN_0026f474. */
/* Supplied declaration required: FUN_0026f9f4. */
/* Supplied declaration required: FUN_0026fa70. */
/* Supplied declaration required: FUN_00297704. */
/* Supplied declaration required: FUN_002b8b78. */
/* Supplied declaration required: FUN_002c3b44. */
/* Supplied declaration required: FUN_002c4b30. */
extern unsigned int *FUN_002c4b84(unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c4c00. */
/* Supplied declaration required: FUN_002c5978. */
/* Supplied declaration required: FUN_00309db8. */
/* Supplied declaration required: FUN_0030a818. */
/* Supplied declaration required: FUN_0031b9ac. */


void FUN_002d7410(void)

{
/* irregular: 20 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned char *puVar3;
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  romwright_code *temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned char *temp_v8;
  
  if (DAT_0043db10 == (unsigned int *)0x0) {
    temp_v5 = (romwright_code *)0x1;
    DAT_0043db10 = (unsigned int *)FUN_002c4b84(0x100,0x100,0,0x16c);
  }
  puVar1 = DAT_0043db10;
  FUN_002c4b30(DAT_0043db10,0x16c);
  temp_v4 = 0;
  temp_v5 = FUN_001c0f14;
  temp_v6 = 0;
  puVar3 = &LAB_002d7744;
  temp_v7 = 0;
  FUN_002c5978(&LAB_002d7744,1,0,0);
  *puVar1 = (unsigned int)puVar3;
  temp_v6 = 0;
  temp_v5 = (romwright_code *)&LAB_001ec8c0;
  temp_v7 = 0;
  temp_v8 = puVar3;
  FUN_002c4c00(&LAB_002d775c,0x65,0);
  temp_v8 = (unsigned char *)*puVar1;
  temp_v6 = 0;
  temp_v5 = (romwright_code *)&LAB_001ec8c0;
  temp_v7 = 0;
  FUN_002c4c00(&LAB_002d7778,0xcc,0);
  temp_v8 = (unsigned char *)*puVar1;
  temp_v6 = 0;
  temp_v5 = (romwright_code *)&LAB_001c0eb0;
  temp_v7 = 0;
  FUN_002c4c00(&LAB_002d7798,0x81,0);
  temp_v8 = (unsigned char *)*puVar1;
  temp_v6 = 0;
  temp_v5 = (romwright_code *)&LAB_001c0eb0;
  temp_v7 = 0;
  FUN_002c4c00(&LAB_002d77b0,0xdf,0);
  temp_v8 = (unsigned char *)*puVar1;
  temp_v5 = FUN_00211484;
  temp_v6 = 0;
  temp_v7 = 0;
  FUN_002c4c00(&LAB_002d77cc,0xe6,0);
  puVar1[0x4f] = 0;
  puVar1[0x50] = 0;
  puVar1[0x51] = 0;
  puVar1[0x52] = 0;
  puVar1[0x54] = 0;
  *(unsigned char *)(puVar1 + 0x59) = 0;
  *(unsigned char *)((int)puVar1 + 0x165) = 0;
  puVar1[0x5a] = 0;
  do {
    temp_v0 = FUN_0026f25c(temp_v4);
    if (*(short *)(temp_v0 + 0x48) != 0) {
      puVar1[0x52] = puVar1[0x52] + 1;
    }
    temp_v4 = temp_v4 + 1;
  } while (temp_v4 < 0xc);
  FUN_00297704(&LAB_002d77e4,puVar1 + 0x58,0);
  temp_v1 = FUN_0024abfc();
  puVar1[2] = temp_v1;
  temp_v1 = FUN_0026f25c(puVar1[0x4f]);
  puVar1[3] = temp_v1;
  temp_v4 = 0;
  do {
    FUN_00309db8();
    temp_v0 = temp_v4 + 1;
    puVar1[temp_v4 + 0x4b] = temp_v1;
    temp_v4 = temp_v0;
  } while (temp_v0 < 3);
  FUN_0031b9ac();
  puVar1[0x4e] = temp_v1;
  puVar2 = DAT_0043db10;
  temp_v0 = 0;
  temp_v4 = temp_v2;
  do {
    temp_v4 = FUN_0026f25c(puVar2[0x50] + temp_v0,temp_v4);
    if (*(short *)(temp_v4 + 0x48) != 0) {
      FUN_0026f174(puVar2[temp_v0 + 0x4b]);
      temp_v4 = temp_v3;
    }
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 3);
  temp_v1 = FUN_0026f25c(puVar2[0x4f],temp_v4);
  puVar2[3] = temp_v1;
  puVar2 = DAT_0043db10;
  FUN_0026f474(DAT_0043db10[0x4e],DAT_0043db10[3],DAT_0043db10[0x58]);
  FUN_0030a818(puVar2[3],&temp_v5);
  temp_v4 = puVar2[2];
  FUN_0026f9f4();
  if (temp_v4 != 0) {
    FUN_0026f084(puVar2[2],&temp_v5);
    FUN_0026f018(puVar2[2]);
    FUN_0026fa70(puVar2[2],0);
    puVar2[0x53] = puVar2[0x4f];
  }
  temp_v4 = 0;
  do {
    FUN_002c3b44(puVar1 + temp_v4 * 5 + 0x28,0x14);
    temp_v4 = temp_v4 + 1;
  } while (temp_v4 < 2);
  temp_v4 = 0;
  do {
    FUN_002c3b44(puVar1 + temp_v4 * 5 + 0x32,0x14);
    temp_v0 = temp_v4 + 1;
    puVar1[temp_v4 * 5 + 0x33] = 0x14a;
    temp_v4 = temp_v0;
  } while (temp_v0 < 5);
  FUN_002b8b78(0xb2);
  return;
}
