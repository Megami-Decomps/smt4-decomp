/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001d23e0` (_code @ 0x1d23e0, 0x1b8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int jyoucyuGetTableEntry(int);
int FUN_001b57a8(...);
int FUN_001b5acc(int *);
int FUN_001d25a0(...);
int FUN_001d2a2c(int, int, unsigned int, int);
int libc_strcmp(int, unsigned int *);

/* stack frame of param_6: 9 slot(s), 36 byte(s) */
typedef struct {
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp80; /* 0x80: local_80 */
} param_6_stack;

extern int g_aocMain; /* 0x570260 */

#ifndef ROMWRIGHT_PIECE_3_1_DEFINED
#define ROMWRIGHT_PIECE_3_1_DEFINED
#define romwright_piece_3_1(upper, lower) ((unsigned int)(((unsigned int)(unsigned int)(upper) << 8) | (unsigned char)(lower)))
#endif
/* Supplied declaration required: jyoucyuGetTableEntry. */
extern int FUN_001a0380(int);
extern int FUN_001af210(int);
/* Supplied declaration required: FUN_001b57a8. */
/* Supplied declaration required: FUN_001b5acc. */
/* Supplied declaration required: FUN_001d25a0. */
extern int FUN_001d25ec(unsigned int *);
/* Supplied declaration required: FUN_001d2a2c. */
/* Supplied declaration required: libc_strcmp. */


void FUN_001d23e0(unsigned int *param_1,int param_2,unsigned int *param_3,unsigned int param_4,
                 unsigned int param_5,unsigned int param_6)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  int temp_v2;
  unsigned int uStack_7c;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  unsigned int uStack_68;
  unsigned int uStack_64;
  unsigned int uStack_60;
  int temp_v7;
  unsigned int uStack_54;
  unsigned int temp_v8 [3];
  unsigned int uStack_44;
  unsigned int uStack_40;
  unsigned int temp_v9 [5];
  
  temp_v0 = param_2 + 0x331;
  puVar3 = (unsigned int *)&temp_v2;
  temp_v1 = temp_v0;
  libc_strcmp(temp_v0,param_3);
  if (temp_v1 != 0) {
    if (*(char *)(param_2 + 0x330) != '\0') {
      temp_v1 = FUN_001a0380(temp_v0);
      *(unsigned char *)(param_2 + 0x330) = 0;
      if (temp_v1 < 0) {
        FUN_001d25a0(temp_v8,0);
        FUN_001b57a8(&temp_v2,temp_v1);
        temp_v6 = *puVar3;
        uStack_68 = puVar3[1];
        *param_1 = temp_v8[0];
        param_1[1] = temp_v6;
        param_1[2] = uStack_68;
        param_1[3] = uStack_44;
        param_1[4] = uStack_40;
        return;
      }
    }
    *(unsigned int *)(param_2 + 0x331) = *param_3;
    *(unsigned int *)(param_2 + 0x335) = param_3[1];
    *(unsigned int *)(param_2 + 0x339) = param_3[2];
    *(unsigned int *)(param_2 + 0x33d) = param_3[3];
    FUN_001b5acc(&temp_v7);
    temp_v2 = 2;
    temp_v4 = 0;
    uStack_7c = param_4;
    temp_v3 = param_5;
    FUN_001d2a2c(temp_v0,0x19a2,param_6,2);
    puVar3 = temp_v9;
    FUN_001b57a8(puVar3,temp_v0);
    temp_v7 = *puVar3;
    uStack_54 = puVar3[1];
    temp_v1 = FUN_001d25ec((unsigned int *)&temp_v7);
    if (temp_v1 < 0) {
      FUN_001d25a0(&temp_v5,0);
      temp_v1 = FUN_001d25ec((unsigned int *)&temp_v7);
      temp_v8[0] = temp_v5;
      uStack_44 = uStack_64;
      uStack_40 = uStack_60;
      if (temp_v1 < 0) {
        temp_v5 = romwright_piece_3_1((((unsigned int)(temp_v5) >> 8) & 0xffffffU),100);
        temp_v6 = temp_v7;
        uStack_68 = uStack_54;
        jyoucyuGetTableEntry(0);
        temp_v1 = FUN_001af210(g_aocMain + 0x98);
        temp_v8[0] = temp_v5;
        uStack_44 = uStack_64;
        uStack_40 = uStack_60;
        if (temp_v1 != 0) {
          *(unsigned int *)(g_aocMain + 0x754) = *(unsigned int *)(g_aocMain + 0x754) & 0xfffeffff;
          temp_v5 = romwright_piece_3_1((((unsigned int)(temp_v5) >> 8) & 0xffffffU),200);
          temp_v8[0] = temp_v5;
        }
      }
      *param_1 = temp_v8[0];
      param_1[1] = temp_v6;
      param_1[2] = uStack_68;
      param_1[3] = uStack_44;
      param_1[4] = uStack_40;
      return;
    }
    *(unsigned char *)(param_2 + 0x330) = 1;
  }
  FUN_001d25a0(param_1,0);
  return;
}

} /* extern "C" */
