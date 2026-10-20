/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001b4cbc` (_code @ 0x1b4cbc, 0x31c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0027e990(int);
int FUN_0027e9c0(int);
int FUN_0027ea28(int, int, int, int);
int FUN_0027eafc(void);
int FUN_0027eb30(int);
int FUN_002a126c(int *, int);
int FUN_002ba9ac(int);
int FUN_002baa40(unsigned int *, int);
int FUN_002c564c(int);
int FUN_00387af0(int);
int FUN_003887cc(int *, int);

/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp50; /* 0x50: local_50 */
} void_stack;

extern int DAT_00432fc8; /* 0x432fc8 */
extern int DAT_00432fe0; /* 0x432fe0 */
extern unsigned int DAT_00432fe4; /* 0x432fe4 */
extern int DAT_00433158; /* 0x433158 */

#ifndef ROMWRIGHT_PIECE_3_1_DEFINED
#define ROMWRIGHT_PIECE_3_1_DEFINED
#define romwright_piece_3_1(upper, lower) ((unsigned int)(((unsigned int)(unsigned int)(upper) << 8) | (unsigned char)(lower)))
#endif
/* Supplied declaration required: FUN_0027e990. */
/* Supplied declaration required: FUN_0027e9c0. */
extern int FUN_0027ea14(unsigned int *);
/* Supplied declaration required: FUN_0027ea28. */
/* Supplied declaration required: FUN_0027eafc. */
/* Supplied declaration required: FUN_0027eb30. */
/* Supplied declaration required: FUN_002a126c. */
extern int FUN_002a1520(unsigned int *);
extern int FUN_002ad1e0(int);
/* Supplied declaration required: FUN_002ba9ac. */
/* Supplied declaration required: FUN_002baa40. */
extern unsigned int *FUN_002bad5c(unsigned int *);
/* Supplied declaration required: FUN_002c564c. */
/* Supplied declaration required: FUN_00387af0. */
/* Supplied declaration required: FUN_003887cc. */
extern int FUN_003943f8(unsigned int *);


unsigned int FUN_001b4cbc(void)

{
/* irregular: 11 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int *puVar2;
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  int uStack_4c;
  unsigned int uStack_48;
  unsigned int uStack_44;
  unsigned int uStack_40;
  int temp_v7;
  int uStack_38;
  unsigned int uStack_34;
  unsigned int uStack_30;
  unsigned int uStack_2c;
  
  temp_v0 = DAT_00432fe0;
  temp_v6 = romwright_piece_3_1((((unsigned int)(temp_v6) >> 8) & 0xffffffU),1);
  puVar1 = (unsigned int *)FUN_002bad5c((unsigned int *)&uStack_4c);
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar2 = (unsigned int *)&uStack_38;
  FUN_002baa40(puVar2,0);
  temp_v4 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = temp_v4;
  if (*(unsigned int *)(temp_v0 + 0x5f0) < 0xff) {
    *(unsigned int *)(temp_v0 + 0x5f0) = *(unsigned int *)(temp_v0 + 0x5f0) + 1;
  }
  temp_v3 = DAT_00432fc8;
  temp_v5 = *(unsigned int *)(DAT_00432fc8 + 0x754);
  *(unsigned int *)(DAT_00432fc8 + 0x754) = temp_v5 & 0xffffff8f;
  if ((temp_v5 & 0x10) != 0) {
    *(unsigned char *)(temp_v0 + 8) = 4;
    FUN_002ba9ac(DAT_00433158);
    FUN_0027eb30(temp_v0 + 0xc);
    *(unsigned char *)(temp_v0 + 9) = 0;
    temp_v0 = FUN_002ad1e0(DAT_00432fc8 + 0x98);
    if (temp_v0 != 0) {
      *(unsigned int *)(DAT_00432fc8 + 0x754) = *(unsigned int *)(DAT_00432fc8 + 0x754) & 0xfffeffff;
    }
  }
  else {
    switch(*(unsigned char *)(temp_v0 + 8)) {
    case 0:
      temp_v1 = FUN_002ad1e0(temp_v3 + 0x98);
      temp_v3 = DAT_00432fc8;
      temp_v2 = 0;
      if (temp_v1 != 0) {
        *(unsigned int *)(DAT_00432fc8 + 0x754) = *(unsigned int *)(DAT_00432fc8 + 0x754) & 0xfffeffff;
        temp_v2 = temp_v3;
      }
      FUN_0027eafc();
      if (temp_v2 != 0) {
        *(unsigned char *)(temp_v0 + 8) = 1;
        *(unsigned char *)(DAT_00432fc8 + 0xd50) = 1;
        FUN_00387af0(DAT_00433158);
      }
      else {
        FUN_002c564c(0);
        *(unsigned char *)(temp_v0 + 8) = 2;
      }
      break;
    case 1:
      FUN_003887cc(&temp_v7,DAT_00433158);
      temp_v6 = temp_v7;
      uStack_4c = uStack_38;
      uStack_48 = uStack_34;
      uStack_44 = uStack_30;
      uStack_40 = uStack_2c;
      if ((*(char *)(temp_v0 + 9) == '\0') && (*(int *)(DAT_00433158 + 0x314) != 0)) {
        *(unsigned int *)(DAT_00433158 + 0x448) = 6;
        FUN_0027ea28(temp_v0 + 0xc,0xbe,2,0);
        *(unsigned char *)(temp_v0 + 9) = 1;
      }
      temp_v5 = *(unsigned int *)(DAT_00432fc8 + 0x754);
      *(unsigned int *)(DAT_00432fc8 + 0x754) = temp_v5 & 0xffffff8f;
      if ((temp_v5 & 0x10) == 0) {
        temp_v3 = FUN_003943f8((unsigned int *)&temp_v6);
        if (temp_v3 != 0) {
          *(unsigned char *)(temp_v0 + 8) = 0;
          FUN_0027ea28(temp_v0 + 0xc,0xbe,2,0);
          *(unsigned char *)(temp_v0 + 9) = 1;
          return 0;
        }
        temp_v3 = FUN_0027ea14((unsigned int *)&temp_v6);
        if ((temp_v3 == 0) && (temp_v3 = FUN_002a1520((unsigned int *)&temp_v6), temp_v3 == 0)) {
          return 0;
        }
        *(unsigned char *)(temp_v0 + 8) = 2;
        return 0;
      }
      *(unsigned char *)(temp_v0 + 8) = 4;
      FUN_002ba9ac(DAT_00433158);
      FUN_0027eb30(temp_v0 + 0xc);
      *(unsigned char *)(temp_v0 + 9) = 0;
      temp_v0 = FUN_002ad1e0(DAT_00432fc8 + 0x98);
      if (temp_v0 != 0) {
        *(unsigned int *)(DAT_00432fc8 + 0x754) = *(unsigned int *)(DAT_00432fc8 + 0x754) & 0xfffeffff;
      }
      break;
    case 2:
      if (*(char *)(temp_v0 + 9) != '\0') {
        if (*(unsigned int *)(temp_v0 + 0x5f0) < 0x1e) {
          return 0;
        }
        FUN_0027e9c0(temp_v0 + 0xc);
      }
      *(unsigned char *)(temp_v0 + 8) = 3;
      break;
    case 3:
      if (*(char *)(temp_v0 + 9) != '\0') {
        if (*(unsigned int *)(temp_v0 + 0x5f0) < 0x1e) {
          return 0;
        }
        if (*(char *)(temp_v0 + 0x4d6) == '\0') {
          return 0;
        }
        FUN_0027eb30(temp_v0 + 0xc);
      }
      FUN_0027e990(DAT_00433158);
      FUN_002a126c(&temp_v7,DAT_00433158);
      DAT_00432fe4 = 1;
      *(unsigned char *)(temp_v0 + 8) = 5;
      return 0xffffffff;
    case 4:
      if ((temp_v5 & 4) == 0 && (temp_v5 & 8) == 0) {
        *(unsigned int *)(temp_v0 + 0x5f0) = 0xffff;
        *(unsigned char *)(temp_v0 + 8) = 3;
      }
    }
  }
  return 0;
}

} /* extern "C" */
