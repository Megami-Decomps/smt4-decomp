/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023f65c` (_code @ 0x23f65c, 0x290 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp128; /* 0x128: local_128 */
    unsigned int sp12C; /* 0x12c: local_12c */
    unsigned int sp130; /* 0x130: local_130 */
} param_2_stack;

extern unsigned int DAT_004342c8; /* 0x4342c8 */

/* Supplied declaration required: FUN_0023fd38. */
/* Supplied declaration required: FUN_00240158. */
/* Supplied declaration required: FUN_00240420. */
extern unsigned int FUN_00240578(int);
extern int FUN_002406f8(int, unsigned short);
/* Supplied declaration required: FUN_00250800. */
/* Supplied declaration required: FUN_00255198. */
/* Supplied declaration required: FUN_00270298. */
/* Supplied declaration required: FUN_0027dca0. */
extern int FUN_00289924(void);
/* Supplied declaration required: FUN_00297704. */
/* Supplied declaration required: FUN_002bf86c. */
/* Supplied declaration required: FUN_002c2ba4. */
extern int FUN_002c2bd0(unsigned int);
/* Supplied declaration required: FUN_002c4360. */
/* Supplied declaration required: FUN_002c4b30. */
/* Supplied declaration required: FUN_00338658. */
/* Supplied declaration required: FUN_0033868c. */
/* Supplied declaration required: FUN_0033a014. */
/* Supplied declaration required: FUN_0033a378. */
/* Supplied declaration required: FUN_00394e88. */
/* Supplied declaration required: FUN_003d7228. */


void FUN_0023f65c(unsigned int *param_1,int param_2)

{
/* irregular: 18 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int *puVar5;
  unsigned char temp_v4 [128];
  unsigned char temp_v5 [128];
  
  FUN_002c4b30(temp_v4,0x80);
  temp_v0 = FUN_00240578(param_2);
  FUN_002bf86c(temp_v4,temp_v0);
  temp_v2 = param_2;
  FUN_00240420(param_2,temp_v4);
  if (temp_v2 != 0) {
    *param_1 = 0xb;
    FUN_002c4b30(temp_v5,0x80);
    temp_v0 = FUN_00240578(param_2);
    FUN_002bf86c(temp_v5,temp_v0);
    if (param_1[1] != 0) {
      FUN_002c4360();
      param_1[1] = 0;
    }
    FUN_00297704(temp_v5,param_1 + 1,0);
    *param_1 = 0xc;
    FUN_00240158(param_1,param_2);
  }
  else {
    puVar5 = (unsigned int *)(param_2 + 0x44a0);
    *param_1 = 0xd;
    if ((*puVar5 & 0x40000000) == 0) {
      FUN_00270298(2);
      *puVar5 = *puVar5 | 0x40000000;
    }
    FUN_0033868c(param_2);
    FUN_0033a378(param_2);
    FUN_00338658(param_2);
    FUN_0033a014(param_2);
    FUN_003d7228(DAT_004342c8);
    if ((*(char *)(param_2 + 0x44b7) == '\0') &&
       (((*(unsigned int *)(param_2 + 0xe0) & 0x2000000) != 0 || ((*puVar5 & 2) != 0)))) {
      temp_v2 = 4;
      do {
        temp_v3 = *(int *)(param_2 + 0x1e98) + temp_v2 * 0x114;
        if ((((*(unsigned int *)(temp_v3 + 0x50) & 1) != 0 && (*(unsigned int *)(temp_v3 + 0x50) & 2) != 0) &&
            ((*(unsigned int *)(temp_v3 + 0x54) & 8) != 0)) &&
           (*(unsigned int *)(temp_v3 + 0x54) = *(unsigned int *)(temp_v3 + 0x54) & 0xfffffff7,
           (*(unsigned short *)(temp_v3 + 0x58) & 0x800) == 0)) {
          temp_v1 = param_2;
          FUN_0027dca0(param_2,(int)*(short *)(temp_v3 + 0x62));
          temp_v1 = FUN_002406f8(param_2,*(unsigned short *)(temp_v1 + 2));
          if (temp_v1 == 0) {
            *(unsigned short *)(temp_v3 + 0x58) = *(unsigned short *)(temp_v3 + 0x58) | 0x800;
          }
        }
        temp_v2 = temp_v2 + 1;
      } while (temp_v2 < 0x36);
      FUN_00250800(0,0,0x100017b,0,0,0,0);
      FUN_00255198(param_2);
      *puVar5 = *puVar5 | 0x200000;
      if ((*(unsigned int *)(param_2 + 0xe4) & 0x20) == 0) {
        FUN_00394e88(3);
      }
    }
    temp_v2 = FUN_002c2bd0(0);
    if (temp_v2 == 3) {
      FUN_002c2ba4(0,10,0xff);
    }
    temp_v2 = FUN_002c2bd0(1);
    if (temp_v2 == 3) {
      FUN_002c2ba4(1,10,0xff);
    }
    temp_v2 = FUN_00289924();
    if (temp_v2 != 0) {
      *param_1 = 0xe;
      param_1[3] = 0;
      FUN_0023fd38(param_1,param_2);
      return;
    }
  }
  return;
}
