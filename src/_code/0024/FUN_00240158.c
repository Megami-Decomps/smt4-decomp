/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00240158` (_code @ 0x240158, 0x2ac bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_2_stack;

extern unsigned int DAT_004342c8; /* 0x4342c8 */

/* Supplied declaration required: FUN_0023fd38. */
extern int FUN_002406f8(int, unsigned short);
/* Supplied declaration required: FUN_00250800. */
/* Supplied declaration required: FUN_00270298. */
/* Supplied declaration required: FUN_0027dca0. */
extern int FUN_00289924(void);
/* Supplied declaration required: FUN_002bcf58. */
/* Supplied declaration required: FUN_002c2ba4. */
extern int FUN_002c2bd0(unsigned int);
/* Supplied declaration required: FUN_0033a06c. */
/* Supplied declaration required: FUN_0033a250. */
/* Supplied declaration required: FUN_003d7228. */


void FUN_00240158(unsigned int *param_1,int param_2)

{
/* irregular: 9 native warning(s); review required */
  char temp_v0;
  char temp_v1;
  char temp_v2;
  char temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned int *puVar9;
  
  temp_v4 = param_1[1];
  if (temp_v4 != 0) {
    puVar9 = (unsigned int *)(param_2 + 0x44a0);
    if (((*puVar9 & 0x200) == 0) && (*(char *)(temp_v4 + 10) == '\x01')) {
      temp_v0 = *(char *)(temp_v4 + 4);
      temp_v1 = *(char *)(temp_v4 + 5);
      temp_v2 = *(char *)(temp_v4 + 6);
      temp_v3 = *(char *)(temp_v4 + 7);
      temp_v7 = *(int *)(temp_v4 + 0xc);
      temp_v4 = (unsigned int)*(unsigned short *)(temp_v4 + 8) + temp_v4;
      *(unsigned int *)(param_2 + 0x1ea4) = 0;
      *(unsigned int *)(param_2 + 0x1ea8) = 0;
      *(unsigned int *)(param_2 + 0x1eac) = 0;
      *(unsigned int *)(param_2 + 0x1eb0) = 0;
      *(unsigned int *)(param_2 + 0x1eb4) = 0;
      *(unsigned int *)(param_2 + 0x1eb8) = 0;
      *(unsigned int *)(param_2 + 0x1ebc) = 0;
      if ((int)temp_v3 + ((temp_v0 * 1000 + temp_v1 * 100 + temp_v2 * 10) - 0xd050) == 0x44c) {
        FUN_002bcf58((unsigned int *)(param_2 + 0x1ea4),temp_v4,0x118);
        temp_v4 = temp_v4 + 0x118;
      }
      temp_v5 = (temp_v7 - 0x118U) / 0x18;
      if (*(unsigned char *)(param_2 + 0x1e9d) < temp_v5) {
        temp_v5 = (unsigned int)*(unsigned char *)(param_2 + 0x1e9d);
      }
      FUN_002bcf58(*(unsigned int *)(param_2 + 0x1fbc),temp_v4,temp_v5 * 0x18);
    }
    FUN_0033a250(param_2);
    FUN_0033a06c(param_2);
    FUN_003d7228(DAT_004342c8);
    if ((*(char *)(param_2 + 0x44b7) == '\0') &&
       (((*(unsigned int *)(param_2 + 0xe0) & 0x2000000) != 0 || ((*puVar9 & 2) != 0)))) {
      temp_v4 = 4;
      do {
        temp_v7 = *(int *)(param_2 + 0x1e98) + temp_v4 * 0x114;
        if ((((*(unsigned int *)(temp_v7 + 0x50) & 1) != 0 && (*(unsigned int *)(temp_v7 + 0x50) & 2) != 0) &&
            ((*(unsigned int *)(temp_v7 + 0x54) & 8) != 0)) &&
           (*(unsigned int *)(temp_v7 + 0x54) = *(unsigned int *)(temp_v7 + 0x54) & 0xfffffff7,
           (*(unsigned short *)(temp_v7 + 0x58) & 0x800) == 0)) {
          temp_v6 = param_2;
          FUN_0027dca0(param_2,(int)*(short *)(temp_v7 + 0x62));
          temp_v6 = FUN_002406f8(param_2,*(unsigned short *)(temp_v6 + 2));
          if (temp_v6 == 0) {
            *(unsigned short *)(temp_v7 + 0x58) = *(unsigned short *)(temp_v7 + 0x58) | 0x800;
          }
        }
        temp_v4 = temp_v4 + 1;
      } while (temp_v4 < 0x36);
      FUN_00250800(0,0,0x100017b,0,0,0,0);
    }
    *param_1 = 0xd;
    if ((*puVar9 & 0x40000000) == 0) {
      FUN_00270298(2);
      *puVar9 = *puVar9 | 0x40000000;
    }
    temp_v4 = FUN_002c2bd0(0);
    if (temp_v4 == 3) {
      FUN_002c2ba4(0,10,0xff);
    }
    temp_v4 = FUN_002c2bd0(1);
    if (temp_v4 == 3) {
      FUN_002c2ba4(1,10,0xff);
    }
    temp_v4 = FUN_00289924();
    if (temp_v4 != 0) {
      *param_1 = 0xe;
      param_1[3] = 0;
      FUN_0023fd38(param_1,param_2);
      return;
    }
  }
  return;
}
