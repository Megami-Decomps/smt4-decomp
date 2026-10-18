/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001ffaf4` (_code @ 0x1ffaf4, 0x330 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp40; /* 0x40: local_40 */
} void_stack;

extern int FUN_0018af6c(); /* 0x18af6c */
extern unsigned char LAB_0018b10c; /* 0x18b10c */
extern int FUN_001dbdb0(); /* 0x1dbdb0 */
extern int FUN_001dbe2c(); /* 0x1dbe2c */
extern int FUN_001dc500(); /* 0x1dc500 */
extern int FUN_001ebd24(); /* 0x1ebd24 */
extern int FUN_001ebdf0(); /* 0x1ebdf0 */
extern int FUN_001ec5f4(); /* 0x1ec5f4 */
extern unsigned char LAB_001ffe68; /* 0x1ffe68 */
extern unsigned char LAB_001ffe7c; /* 0x1ffe7c */
extern unsigned char LAB_001ffe90; /* 0x1ffe90 */
extern unsigned char LAB_001ffedc; /* 0x1ffedc */
extern unsigned char LAB_001ffef0; /* 0x1ffef0 */
extern int FUN_00210fb0(); /* 0x210fb0 */
extern int FUN_002112c4(); /* 0x2112c4 */
extern int FUN_00211400(); /* 0x211400 */
extern unsigned char LAB_00220eac; /* 0x220eac */
extern int FUN_002ccacc(); /* 0x2ccacc */
extern int FUN_002e1824(); /* 0x2e1824 */
extern int FUN_002ec530(); /* 0x2ec530 */
extern int FUN_002ece08(); /* 0x2ece08 */
extern int FUN_00310658(); /* 0x310658 */
extern unsigned char LAB_003f70e0; /* 0x3f70e0 */
extern unsigned char LAB_003f71a0; /* 0x3f71a0 */
extern unsigned char LAB_003f721c; /* 0x3f721c */
extern unsigned int *DAT_0043daa8; /* 0x43daa8 */

/* Supplied declaration required: FUN_001a7f30. */
/* Supplied declaration required: FUN_002027dc. */
/* Supplied declaration required: FUN_00257bf0. */
/* Supplied declaration required: FUN_002594cc. */
/* Supplied declaration required: FUN_0026b7ec. */
/* Supplied declaration required: FUN_00297704. */
/* Supplied declaration required: FUN_002a0640. */
/* Supplied declaration required: FUN_002b8b78. */
/* Supplied declaration required: FUN_002bce50. */
/* Supplied declaration required: FUN_002bcf34. */
/* Supplied declaration required: FUN_002c23f8. */
extern unsigned int FUN_002c34a4(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c4b30. */
extern unsigned int *FUN_002c4b84(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c4c00. */
/* Supplied declaration required: FUN_002c5468. */
/* Supplied declaration required: FUN_002c5978. */
/* Supplied declaration required: FUN_002d72c4. */
/* Supplied declaration required: FUN_0032fef4. */
/* Supplied declaration required: FUN_0035a1a0. */
/* Supplied declaration required: FUN_0035a238. */


void FUN_001ffaf4(void)

{
/* irregular: 34 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char *puVar2;
  unsigned int temp_v0;
  unsigned int *puVar4;
  int temp_v1;
  unsigned char *temp_v2;
  unsigned char *temp_v3;
  unsigned char *temp_v4;
  unsigned int *temp_v5 [2];
  
  if (DAT_0043daa8 == (unsigned int *)0x0) {
    DAT_0043daa8 = (unsigned int *)FUN_002c4b84(0x100,0x100,0,0xd7c,1);
  }
  puVar1 = DAT_0043daa8;
  FUN_002c4b30(DAT_0043daa8,0xd7c);
  puVar2 = &LAB_001ffe68;
  FUN_002c5978(&LAB_001ffe68,1,0,0,&LAB_0018b10c,0,0);
  *puVar1 = (unsigned int)puVar2;
  FUN_002c4c00(&LAB_001ffe7c,0x7d,0,0,FUN_0018af6c,0,0,puVar2);
  FUN_002c4c00(&LAB_001ffe90,0xdb,0,0,FUN_0018af6c,0,0,*puVar1);
  puVar1[0x349] = 0xffffffff;
  puVar1[0x34a] = 0;
  puVar1[0x34b] = 0xffffffff;
  puVar1[0x34c] = 0xffffffff;
  puVar1[0x34d] = 0;
  puVar1[2] = (unsigned int)FUN_002112c4;
  puVar1[3] = (unsigned int)FUN_002ec530;
  puVar1[4] = (unsigned int)FUN_002ccacc;
  puVar1[5] = (unsigned int)FUN_001ebdf0;
  puVar1[6] = (unsigned int)FUN_001dbe2c;
  puVar1[7] = (unsigned int)FUN_00210fb0;
  puVar1[8] = (unsigned int)FUN_002e1824;
  puVar1[0xb] = (unsigned int)FUN_00211400;
  puVar1[9] = (unsigned int)FUN_001dbdb0;
  puVar1[0xc] = (unsigned int)FUN_001ebd24;
  puVar1[10] = (unsigned int)FUN_001dc500;
  puVar1[0xd] = (unsigned int)FUN_001ebd24;
  puVar1[0xe] = (unsigned int)FUN_00310658;
  puVar1[0xf] = (unsigned int)FUN_002ece08;
  puVar2 = &LAB_00220eac;
  puVar1[0x11] = (unsigned int)&LAB_00220eac;
  puVar1[0x357] = 0;
  FUN_0035a238();
  if (puVar2 != (unsigned char *)0x0) {
    puVar1[0x357] = 1;
  }
  else {
    FUN_0035a1a0();
    if (puVar2 == (unsigned char *)0x0) {
      puVar1[0x357] = 2;
    }
  }
  *(unsigned char *)(puVar1 + 0x359) = 0;
  if (puVar1[0x357] != 0) {
    FUN_00297704(&LAB_001ffedc,puVar1 + 0x33d,0);
    FUN_00297704(&LAB_001ffef0,puVar1 + 0x33e,0);
    puVar1[0x34a] = 0xd;
  }
  else {
    FUN_002b8b78(3);
    *(unsigned char *)((int)puVar1 + 0xd61) = 0;
    *(unsigned char *)((int)puVar1 + 0xd62) = 1;
    *(unsigned char *)((int)puVar1 + 0xd63) = 0;
    FUN_002b8b78(0xb9);
    FUN_00257bf0(0);
    FUN_002d72c4(DAT_0043daa8 + 0x28);
    FUN_001a7f30(0);
    FUN_002a0640(0x1000062,0,0x3c);
    FUN_002027dc();
    FUN_0032fef4();
    FUN_0026b7ec(2);
    FUN_002594cc(2);
    *(unsigned char *)((int)puVar1 + 0xd65) = 0;
    puVar1[0x35a] = 0;
    temp_v0 = FUN_002c34a4(0x100,0x100,0,0x1000,0x1000,1);
    puVar1[0x35e] = temp_v0;
    puVar4 = (unsigned int *)0x18;
    FUN_002c23f8(0x18,FUN_0018af6c);
    if (puVar4 != (unsigned int *)0x0) {
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = 0;
      puVar4[3] = 0;
      *(unsigned char *)(puVar4 + 4) = 0;
    }
    puVar1[0x35b] = (unsigned int)puVar4;
    FUN_002bcf34();
    puVar4 = puVar1 + 0x35c;
    temp_v1 = 4;
    temp_v2 = &LAB_003f70e0;
    temp_v3 = &LAB_003f721c;
    temp_v4 = &LAB_003f71a0;
    temp_v5[0] = puVar1;
    FUN_002bce50(puVar4,&temp_v1,FUN_001ec5f4,temp_v5,
                 *(int *)(puVar1[0x35b] + 0xc) + *(int *)(puVar1[0x35b] + 8),0x11,0xfffffffe,0);
    if (((unsigned int)puVar4 & 0x7e00000) != 0x600000 && (int)puVar4 < 0) {
      FUN_002c5468();
      return;
    }
  }
  return;
}
