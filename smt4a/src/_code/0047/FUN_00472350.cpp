/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00472350` (_code @ 0x472350, 0x1b8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int jyoucyuGetTableEntry(int);
int FUN_001b57a8(unsigned int *, int);
int FUN_001ba1c0(int, int *, int, int);
int FUN_001d0ea0(int *, unsigned int, unsigned int);
int FUN_001d0fcc(int *, unsigned int);
int FUN_001d1038(int, int *, int, unsigned int);

/* stack frame of param_3: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
} param_3_stack;

extern int g_aocMain; /* 0x570260 */
extern unsigned int g_aocSystem; /* 0x570280 */

#ifndef ROMWRIGHT_PIECE_3_1_DEFINED
#define ROMWRIGHT_PIECE_3_1_DEFINED
#define romwright_piece_3_1(upper, lower) ((unsigned int)(((unsigned int)(unsigned int)(upper) << 8) | (unsigned char)(lower)))
#endif
/* Supplied declaration required: jyoucyuGetTableEntry. */
extern int FUN_001af210(int);
/* Supplied declaration required: FUN_001b57a8. */
extern unsigned int *FUN_001b5acc(unsigned int *);
/* Supplied declaration required: FUN_001ba1c0. */
/* Supplied declaration required: FUN_001d0ea0. */
/* Supplied declaration required: FUN_001d0fcc. */
/* Supplied declaration required: FUN_001d1038. */
extern int FUN_001d10ac(unsigned int *);
extern int FUN_001d25ec(unsigned int *);


unsigned int FUN_00472350(unsigned int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 6 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int *puVar2;
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int uStack_48;
  unsigned int temp_v4;
  unsigned int uStack_40;
  int temp_v5;
  unsigned int uStack_38;
  unsigned int uStack_34;
  unsigned int uStack_30;
  unsigned int uStack_2c;
  int temp_v6;
  unsigned int uStack_24;
  unsigned int uStack_20;
  unsigned int uStack_1c;
  unsigned int uStack_18;
  
  (*(unsigned char *)((unsigned char *)&temp_v2 + 0)) = 1;
  puVar1 = (unsigned int *)FUN_001b5acc((unsigned int *)&temp_v3);
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar2 = (unsigned int *)&temp_v6;
  FUN_001b57a8(puVar2,0);
  temp_v1 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = temp_v1;
  puVar1 = (unsigned int *)&temp_v6;
  (*(unsigned char *)((unsigned char *)&temp_v2 + 0)) = 1;
  temp_v4 = 0;
  FUN_001b57a8(puVar1,0);
  temp_v3 = *puVar1;
  uStack_48 = puVar1[1];
  (*(unsigned char *)((unsigned char *)&temp_v2 + 0)) = 100;
  temp_v0 = FUN_001af210(g_aocMain + 0x98);
  if (temp_v0 != 0) {
    *(unsigned int *)(g_aocMain + 0x754) = *(unsigned int *)(g_aocMain + 0x754) & 0xfffeffff;
    temp_v2 = romwright_piece_3_1((((unsigned int)(temp_v2) >> 8) & 0xffffffU),200);
  }
  else {
    FUN_001d0ea0(&temp_v5,g_aocSystem,param_3);
    temp_v2 = temp_v5;
    temp_v3 = uStack_38;
    uStack_48 = uStack_34;
    temp_v4 = uStack_30;
    uStack_40 = uStack_2c;
    temp_v0 = FUN_001d10ac((unsigned int *)&temp_v2);
    if (temp_v0 == 0) {
      return 1;
    }
  }
  jyoucyuGetTableEntry(0);
  FUN_001d0fcc(&temp_v5,g_aocSystem);
  *(unsigned int *)(g_aocMain + 0x754) = (*(unsigned int *)(g_aocMain + 0x754) & 0xfffeffff) | 0x10;
  temp_v0 = FUN_001d25ec((unsigned int *)&temp_v3);
  if (temp_v0 != -0x36bec76f) {
    temp_v0 = FUN_001af210(g_aocMain + 0x98);
    if (temp_v0 != 0) {
      *(unsigned int *)(g_aocMain + 0x754) = *(unsigned int *)(g_aocMain + 0x754) & 0xfffeffff;
    }
    else if ((char)temp_v2 != -0x38) {
      temp_v5 = temp_v2;
      uStack_38 = temp_v3;
      uStack_34 = uStack_48;
      uStack_30 = temp_v4;
      uStack_2c = uStack_40;
      temp_v0 = g_aocMain;
      FUN_001d1038(g_aocMain,&temp_v5,temp_v3,uStack_48);
      if (temp_v0 != 0) {
        return 0;
      }
      jyoucyuGetTableEntry(0);
      return 0;
    }
    jyoucyuGetTableEntry(0);
    temp_v2 = romwright_piece_3_1((((unsigned int)(temp_v2) >> 8) & 0xffffffU),200);
    temp_v6 = temp_v2;
    uStack_24 = temp_v3;
    uStack_20 = uStack_48;
    uStack_1c = temp_v4;
    uStack_18 = uStack_40;
    FUN_001ba1c0(g_aocMain,&temp_v6,0x65,0);
  }
  else {
    jyoucyuGetTableEntry(0);
  }
  return 0;
}

} /* extern "C" */
