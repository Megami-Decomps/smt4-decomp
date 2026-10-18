/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00104378` (_code @ 0x104378, 0x5b0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
} void_stack;

extern unsigned char LAB_00104788; /* 0x104788 */
extern unsigned char LAB_00104794; /* 0x104794 */
extern unsigned char LAB_001047a0; /* 0x1047a0 */
extern unsigned char LAB_001047ac; /* 0x1047ac */
extern unsigned char LAB_001047b8; /* 0x1047b8 */
extern unsigned char LAB_001047c4; /* 0x1047c4 */
extern unsigned char LAB_001047d0; /* 0x1047d0 */
extern unsigned char LAB_001047dc; /* 0x1047dc */
extern unsigned char LAB_001047e8; /* 0x1047e8 */
extern unsigned char LAB_001047f4; /* 0x1047f4 */
extern unsigned char LAB_00104800; /* 0x104800 */
extern unsigned char LAB_0010480c; /* 0x10480c */
extern unsigned char LAB_00104818; /* 0x104818 */
extern unsigned char LAB_00104828; /* 0x104828 */
extern unsigned char LAB_00104838; /* 0x104838 */
extern unsigned char LAB_00104848; /* 0x104848 */
extern unsigned char LAB_00104930; /* 0x104930 */
extern unsigned char LAB_0010493c; /* 0x10493c */
extern unsigned char LAB_00104948; /* 0x104948 */
extern unsigned char LAB_00104954; /* 0x104954 */
extern int FUN_00107890(); /* 0x107890 */
extern int FUN_00108064(); /* 0x108064 */
extern int FUN_001080d0(); /* 0x1080d0 */
extern int FUN_00108154(); /* 0x108154 */
extern int FUN_001081c0(); /* 0x1081c0 */
extern int FUN_00108300(); /* 0x108300 */
extern int FUN_001084f0(); /* 0x1084f0 */
extern int FUN_001086f8(); /* 0x1086f8 */
extern int FUN_00108798(); /* 0x108798 */
extern int FUN_00108840(); /* 0x108840 */
extern int FUN_00108ab0(); /* 0x108ab0 */
extern int FUN_001092ec(); /* 0x1092ec */
extern int FUN_0010938c(); /* 0x10938c */
extern int FUN_00109440(); /* 0x109440 */
extern int FUN_001094c4(); /* 0x1094c4 */
extern int FUN_00109ed8(); /* 0x109ed8 */
extern int FUN_00109f4c(); /* 0x109f4c */
extern int FUN_00109fd4(); /* 0x109fd4 */
extern int FUN_0010a0a8(); /* 0x10a0a8 */
extern int FUN_0010a33c(); /* 0x10a33c */
extern int FUN_0010a3e8(); /* 0x10a3e8 */
extern int FUN_0010b1b4(); /* 0x10b1b4 */
extern int FUN_0010b260(); /* 0x10b260 */
extern unsigned char DAT_0040420c; /* 0x40420c */
extern unsigned char DAT_00404224; /* 0x404224 */
extern unsigned char DAT_00404230; /* 0x404230 */
extern unsigned char DAT_0040423c; /* 0x40423c */
extern unsigned int *DAT_0043e278; /* 0x43e278 */

/* Supplied declaration required: FUN_002c32f8. */
/* Supplied declaration required: FUN_002c3344. */
/* Supplied declaration required: FUN_002c336c. */
/* Supplied declaration required: FUN_002c4b30. */
extern unsigned int *FUN_002c4b84(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c4c00. */
/* Supplied declaration required: FUN_002c5978. */


void FUN_00104378(void)

{
/* irregular: 29 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned int temp_v0;
  unsigned char *puVar4;
  
  puVar2 = (unsigned int *)FUN_002c4b84(0x100,0x100,0,0xfec,1);
  DAT_0043e278 = puVar2;
  FUN_002c4b30(puVar2,0xfec);
  temp_v0 = 0;
  FUN_002c336c();
  puVar2[1] = temp_v0;
  temp_v0 = 0;
  FUN_002c336c();
  puVar2[2] = temp_v0;
  temp_v0 = 0;
  FUN_002c336c();
  puVar2[0x3c8] = temp_v0;
  temp_v0 = 0;
  FUN_002c336c();
  puVar2[0x3c9] = temp_v0;
  puVar2[0x3f7] = 0;
  *(unsigned char *)(puVar2 + 3) = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  *(unsigned char *)(puVar2 + 7) = 0;
  FUN_002c3344(puVar2 + 0xd);
  FUN_002c32f8(puVar2 + 0xd,&DAT_0040420c,0x18,&DAT_00404224,0xc,&DAT_00404230,0xc,0,0,&DAT_0040423c
               ,0x70);
  puVar2[0xb] = 0x3e800000;
  puVar2[10] = 0x3e800000;
  puVar2[0xc] = 0x41a00000;
  puVar1 = DAT_0043e278;
  *(unsigned char *)(DAT_0043e278 + 0x3a3) = 0;
  *(unsigned char *)(puVar1 + 0x3b7) = 0;
  *(unsigned char *)(puVar2 + 0x3ca) = 0;
  *(unsigned char *)((int)puVar2 + 0xf2b) = 0;
  *(unsigned char *)(puVar2 + 0x3cb) = 0;
  *(unsigned char *)(puVar2 + 0x3e6) = 0;
  *(unsigned char *)((int)puVar2 + 0xf99) = 0;
  *(unsigned char *)(puVar2 + 0x3f8) = 0;
  puVar4 = &LAB_00104788;
  FUN_002c5978(&LAB_00104788,0x6a,0,0,FUN_00108300,FUN_00107890,puVar1);
  *puVar2 = (unsigned int)puVar4;
  FUN_002c4c00(&LAB_00104794,0xce,0,0,FUN_001084f0,0,DAT_0043e278,puVar4);
  FUN_002c4c00(&LAB_001047a0,0x6b,0,0,FUN_00108064,0,DAT_0043e278,*puVar2);
  FUN_002c4c00(&LAB_001047ac,0xcf,0,0,FUN_001080d0,0,DAT_0043e278,*puVar2);
  FUN_002c4c00(&LAB_001047b8,0x6d,0,0,FUN_001086f8,0,DAT_0043e278,*puVar2);
  FUN_002c4c00(&LAB_001047c4,0xd1,0,0,FUN_00108798,0,DAT_0043e278,*puVar2);
  FUN_002c4c00(&LAB_001047d0,0x6c,0,0,FUN_00108154,0,DAT_0043e278,*puVar2);
  FUN_002c4c00(&LAB_001047dc,0xd0,0,0,FUN_001081c0,0,DAT_0043e278,*puVar2);
  FUN_002c4c00(&LAB_001047e8,0x78,0,0,FUN_001092ec,0,DAT_0043e278,*puVar2);
  FUN_002c4c00(&LAB_001047f4,0xd6,0,0,FUN_0010938c,0,DAT_0043e278,*puVar2);
  FUN_002c4c00(&LAB_00104800,0x65,0,0,FUN_00108840,0,DAT_0043e278,*puVar2);
  FUN_002c4c00(&LAB_0010480c,0xcc,0,0,FUN_00108ab0,0,DAT_0043e278,*puVar2);
  FUN_002c4c00(&LAB_00104818,0x77,0,0,FUN_0010a33c,0,DAT_0043e278,*puVar2);
  FUN_002c4c00(&LAB_00104828,0xd5,0,0,FUN_0010a3e8,0,DAT_0043e278,*puVar2);
  FUN_002c4c00(&LAB_00104838,0x82,0,0,FUN_00109fd4,0,DAT_0043e278,*puVar2);
  FUN_002c4c00(&LAB_00104848,0xe0,0,0,FUN_0010a0a8,0,DAT_0043e278,*puVar2);
  FUN_002c4c00(&LAB_00104818,0x7e,0,0,FUN_0010b1b4,0,DAT_0043e278,*puVar2);
  FUN_002c4c00(&LAB_00104828,0xdc,0,0,FUN_0010b260,0,DAT_0043e278,*puVar2);
  FUN_002c4c00(&LAB_00104930,0x77,0,0,FUN_00109ed8,0,DAT_0043e278,*puVar2);
  FUN_002c4c00(&LAB_0010493c,0xd5,0,0,FUN_00109f4c,0,DAT_0043e278,*puVar2);
  FUN_002c4c00(&LAB_00104948,0x79,0,0,FUN_00109440,0,DAT_0043e278,*puVar2);
  FUN_002c4c00(&LAB_00104954,0xd7,0,0,FUN_001094c4,0,DAT_0043e278,*puVar2);
  return;
}
