/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00337594` (_code @ 0x337594, 0x3bc bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_2_stack;

extern unsigned char LAB_00200001; /* 0x200001 */
extern unsigned int DAT_0043427c; /* 0x43427c */
extern int DAT_004342c8; /* 0x4342c8 */
extern int DAT_00435d18; /* 0x435d18 */
extern int DAT_00435d90; /* 0x435d90 */
extern unsigned int DAT_00439a24; /* 0x439a24 */
extern unsigned int DAT_00439a28; /* 0x439a28 */
extern unsigned int DAT_00439a38; /* 0x439a38 */
extern unsigned int DAT_00439cf8; /* 0x439cf8 */

/* Supplied declaration required: FUN_0023fce0. */
/* Supplied declaration required: FUN_00240660. */
/* Supplied declaration required: FUN_002406ac. */
/* Supplied declaration required: FUN_00240744. */
/* Supplied declaration required: FUN_00245330. */
extern unsigned int FUN_0027dc58(int, int);
extern unsigned int FUN_0027eb98(unsigned int);
/* Supplied declaration required: FUN_0029423c. */
extern unsigned int FUN_00294334(int, unsigned int);
extern int FUN_00295284(unsigned int);
extern int FUN_00295300(unsigned int);
/* Supplied declaration required: FUN_002b087c. */
/* Supplied declaration required: FUN_003c1b8c. */


unsigned int FUN_00337594(int param_1,unsigned int param_2)

{
/* irregular: 1 goto(s); 8 native warning(s); review required */
  short temp_v0;
  short temp_v1;
  short temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int *puVar6;
  unsigned int *puVar7;
  int temp_v5;
  int *piVar9;
  int temp_v6;
  char *pcVar11;
  unsigned char temp_v7;
  unsigned int temp_v8;
  
  if (*(int *)(param_1 + 0x4454) != -1) {
    temp_v3 = 1;
  }
  else {
    param_2 = param_2 & 0xffff;
    FUN_002b087c();
    pcVar11 = (char *)(param_1 + 0x4450);
    piVar9 = (int *)(param_1 + 0x1fe8);
    puVar7 = (unsigned int *)(param_1 + 0x1fe4);
    if (*pcVar11 != '\0') {
      if (*pcVar11 == '\x01') {
        temp_v3 = FUN_0027dc58(param_1,*piVar9);
        if ((*puVar7 & 1) == 0) {
          temp_v4 = FUN_00295300(temp_v3);
          if (temp_v4 == 0) {
            return 0;
          }
          *puVar7 = *puVar7 | 1;
          FUN_0029423c(temp_v3,7);
        }
        if ((*puVar7 & 2) == 0) {
          temp_v4 = FUN_00295284(temp_v3);
          if (temp_v4 == 0) {
            return 0;
          }
          FUN_0023fce0(temp_v3);
          *puVar7 = *puVar7 | 2;
          *(unsigned int *)(param_1 + 0x4458) = temp_v3;
        }
        piVar9 = (int *)(param_1 + 0x1fc0);
        temp_v4 = 0x35;
        do {
          temp_v7 = (*(unsigned int *)(*piVar9 + temp_v4 * 0x288) & 1) == 0;
          if (!temp_v7) {
            temp_v4 = temp_v4 - 1;
          }
        } while ((!temp_v7 && temp_v4 != -1) && (temp_v7 || -2 < temp_v4));
        puVar6 = (unsigned int *)(*piVar9 + temp_v4 * 0x288);
        *puVar6 = (unsigned int)&LAB_00200001;
        puVar6[1] = 0;
        temp_v5 = 0x35;
        do {
          temp_v7 = (*(unsigned int *)(*(int *)(param_1 + 0x1e98) + temp_v5 * 0x114 + 0x50) & 1) == 0;
          if (!temp_v7) {
            temp_v5 = temp_v5 - 1;
          }
        } while ((!temp_v7 && temp_v5 != 3) && (temp_v7 || temp_v5 >= 3));
        temp_v8 = 0;
        temp_v6 = *(int *)(DAT_00435d90 + 0x1e98) + temp_v5 * 0x114;
        *(unsigned int *)(temp_v6 + 0x50) = 0x20483;
        *(short *)(temp_v6 + 0x60) = (short)temp_v4;
        *(unsigned int *)(temp_v6 + 0xc) = 0;
        *(unsigned int *)(temp_v6 + 0x10) = 0;
        *(unsigned int *)(temp_v6 + 0x14) = 0x41700000;
        *(unsigned short *)(temp_v6 + 0x5a) = 0;
        temp_v3 = DAT_00439cf8;
        *(unsigned int *)(temp_v6 + 100) = DAT_00439cf8;
        *(unsigned int *)(temp_v6 + 0x68) = temp_v3;
        *(unsigned int *)(temp_v6 + 0x6c) = temp_v3;
        FUN_003c1b8c(1);
        *(unsigned int *)(temp_v6 + 0x40) = temp_v8;
        *(unsigned short *)(temp_v6 + 0x58) = *(unsigned short *)(temp_v6 + 0x58) | 0x800;
        *(int *)(*piVar9 + temp_v4 * 0x288 + 0xd8) = (int)*(short *)(param_2 + 0x88);
        *(unsigned short *)(*piVar9 + temp_v4 * 0x288 + 8) = *(unsigned short *)(temp_v6 + 0x62);
        *(int *)(param_1 + 0x4454) = temp_v5;
        *pcVar11 = '\0';
        temp_v0 = (short)DAT_00439a24;
        temp_v1 = (short)DAT_00439a38;
        temp_v2 = (short)DAT_00439a28;
        FUN_002406ac(param_1,temp_v6,0);
        temp_v3 = FUN_0027eb98(DAT_0043427c);
        FUN_00245330((int)temp_v1 + (int)temp_v0,temp_v3,temp_v6,0xff,(int)temp_v2,0);
        temp_v3 = 6;
        if ((*(unsigned int *)(temp_v6 + 0x50) & 0x10) != 0) {
          temp_v3 = 7;
        }
        temp_v8 = FUN_0027eb98(DAT_0043427c);
        FUN_00240660((int)temp_v1,temp_v8,temp_v6,temp_v3,0xd);
        return 1;
      }
    }
    else {
      temp_v4 = 0;
      temp_v5 = 0x2a;
      do {
        temp_v6 = param_1 + temp_v4 * 8;
        *(unsigned int *)(temp_v6 + 0x1fe4) = 0;
        temp_v5 = temp_v5 - 1;
        temp_v4 = temp_v4 + 1;
        *(unsigned int *)(temp_v6 + 0x1fe8) = 0xffffffff;
      } while (temp_v5 != 0);
      *(unsigned int *)(param_1 + 0x4458) = 0;
      temp_v5 = (int)*(short *)(param_2 + 0x88);
      temp_v4 = 0;
      do {
        temp_v6 = *(int *)(param_1 + temp_v4 * 4 + 0x2134);
        if ((temp_v6 != 0) && (*(int *)(temp_v6 + 4) == temp_v5)) {
          *piVar9 = temp_v5;
          *puVar7 = *puVar7 | 3;
          goto LAB_003376c4;
        }
        temp_v4 = temp_v4 + 1;
      } while (temp_v4 < 0x2a);
      temp_v3 = FUN_00294334(temp_v5,1);
      temp_v4 = 0;
      do {
        if (*(int *)(param_1 + temp_v4 * 4 + 0x2134) == 0) {
          *(unsigned int *)(param_1 + temp_v4 * 4 + 0x2134) = temp_v3;
          break;
        }
        temp_v4 = temp_v4 + 1;
      } while (temp_v4 < 0x2a);
      *piVar9 = (int)*(short *)(param_2 + 0x88);
LAB_003376c4:
      *(unsigned int *)(DAT_004342c8 + 0x634) = *(unsigned int *)(DAT_004342c8 + 0x634) | 0x4000;
      if ((*(unsigned int *)(DAT_00435d18 + 0x3028) & 0x400) != 0) {
        FUN_00240744();
      }
      *pcVar11 = '\x01';
    }
    temp_v3 = 0;
  }
  return temp_v3;
}
