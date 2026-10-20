/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e1454` (_code @ 0x3e1454, 0x268 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001568f8(int, int);
int FUN_002e342c(unsigned char [132], unsigned int);
int FUN_002e5924(int);
int sysMemClear(unsigned char [132], int);
int FUN_003e0bb8(unsigned int *, int);
int FUN_003e1390(unsigned int *, int);
int FUN_003ed6e8(int);
int FUN_003edb9c(int);
int FUN_003edbd0(int);
int FUN_003f0b28(int);
int FUN_003f0d50(int);
int FUN_003f26d4(int);
int FUN_004f282c(unsigned int);
int FUN_004fb43c(int, int, int, int, int, int, int);

/* stack frame of param_2: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int spB0; /* 0xb0: local_b0 */
    unsigned int spB4; /* 0xb4: local_b4 */
    unsigned int spB8; /* 0xb8: local_b8 */
} param_2_stack;

extern unsigned int g_aocSystem; /* 0x570280 */
extern unsigned int DAT_00571508; /* 0x571508 */
extern unsigned int DAT_00573878; /* 0x573878 */
extern unsigned int DAT_0057387c; /* 0x57387c */
extern unsigned int DAT_00573888; /* 0x573888 */
extern unsigned int DAT_0057388c; /* 0x57388c */
extern unsigned int DAT_00573890; /* 0x573890 */
extern unsigned int DAT_00573894; /* 0x573894 */

/* Supplied declaration required: FUN_001568f8. */
extern int FUN_00240c34(unsigned char *);
/* Supplied declaration required: FUN_002e342c. */
/* Supplied declaration required: FUN_002e5924. */
/* Supplied declaration required: sysMemClear. */
/* Supplied declaration required: FUN_003e0bb8. */
extern int FUN_003e0f94(unsigned int *, int);
/* Supplied declaration required: FUN_003e1390. */
/* Supplied declaration required: FUN_003ed6e8. */
/* Supplied declaration required: FUN_003edb9c. */
/* Supplied declaration required: FUN_003edbd0. */
extern unsigned int FUN_003efa38(int);
/* Supplied declaration required: FUN_003f0b28. */
/* Supplied declaration required: FUN_003f0d50. */
extern int FUN_003f10c8(int, unsigned short);
/* Supplied declaration required: FUN_003f26d4. */
extern int FUN_0046ebf0(unsigned int);
/* Supplied declaration required: FUN_004f282c. */
/* Supplied declaration required: FUN_004fb43c. */


void FUN_003e1454(unsigned int *param_1,int param_2)

{
/* irregular: 14 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int *puVar7;
  unsigned char temp_v6 [132];
  
  temp_v0 = 0;
  if ((0 < *(int *)(param_2 + 0xf0)) && (temp_v1 = FUN_0046ebf0(g_aocSystem), temp_v1 != 0)) {
    temp_v0 = 1;
  }
  sysMemClear(temp_v6,0x80);
  temp_v2 = FUN_003efa38(param_2);
  FUN_002e342c(temp_v6,temp_v2);
  if ((!temp_v0) && (temp_v1 = FUN_00240c34(temp_v6), temp_v1 == 0)) {
    FUN_003edbd0(param_2);
    FUN_003f0d50(param_2);
    FUN_003edb9c(param_2);
    FUN_003f0b28(param_2);
    FUN_004f282c(DAT_00571508);
    temp_v1 = FUN_003e0f94(param_1,param_2);
    puVar7 = (unsigned int *)(param_2 + 0x45a0);
    if ((temp_v1 == 1) || (temp_v1 == 2 || temp_v1 == 5)) {
      temp_v1 = 4;
      do {
        temp_v5 = *(int *)(param_2 + 0x1ed4) + temp_v1 * 0x1d0;
        if ((((*(unsigned int *)(temp_v5 + 0x50) & 1) != 0 && (*(unsigned int *)(temp_v5 + 0x50) & 2) != 0) &&
            ((*(unsigned int *)(temp_v5 + 0x58) & 8) != 0)) &&
           (*(unsigned int *)(temp_v5 + 0x58) = *(unsigned int *)(temp_v5 + 0x58) & 0xfffffff7,
           (*(unsigned short *)(temp_v5 + 0x60) & 0x800) == 0)) {
          temp_v3 = param_2;
          FUN_001568f8(param_2,(int)*(short *)(temp_v5 + 0x6a));
          temp_v3 = FUN_003f10c8(param_2,*(unsigned short *)(temp_v3 + 2));
          if (temp_v3 == 0) {
            *(unsigned short *)(temp_v5 + 0x60) = *(unsigned short *)(temp_v5 + 0x60) | 0x800;
          }
        }
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < 0x36);
      FUN_004fb43c(0,0,0x100021b,0,0,0,0);
      FUN_003ed6e8(param_2);
      FUN_003f26d4(param_2);
      temp_v4 = *puVar7 | DAT_00573878 | DAT_00573890;
      *(unsigned int *)(param_2 + 0x45a4) = *(unsigned int *)(param_2 + 0x45a4) | DAT_0057387c | DAT_00573894;
      *puVar7 = temp_v4;
    }
    param_1[4] = 0;
    *param_1 = 0x17;
    param_1[3] = 0;
    temp_v1 = FUN_003e0f94(param_1,param_2);
    if ((temp_v1 != 2 && temp_v1 != 5) &&
       ((*puVar7 & DAT_00573888) == 0 && (DAT_0057388c & *(unsigned int *)(param_2 + 0x45a4)) == 0)) {
      FUN_002e5924(2);
      temp_v4 = *(unsigned int *)(param_2 + 0x45a4) | DAT_0057388c;
      *puVar7 = *puVar7 | DAT_00573888;
      *(unsigned int *)(param_2 + 0x45a4) = temp_v4;
    }
    FUN_003e0bb8(param_1,param_2);
    return;
  }
  param_1[4] = 0;
  *param_1 = 0x15;
  param_1[3] = 0;
  FUN_003e1390(param_1,param_2);
  return;
}

} /* extern "C" */
