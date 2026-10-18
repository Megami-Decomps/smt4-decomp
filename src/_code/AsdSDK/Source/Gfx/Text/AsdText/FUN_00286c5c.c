/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00286c5c` (_code @ 0x286c5c, 0x634 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_6: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
} param_6_stack;

extern unsigned short uRam00464d4a; /* 0x464d4a */
extern unsigned int DAT_00464d68; /* 0x464d68 */
extern signed char DAT_004729b8; /* 0x4729b8 */
extern int DAT_004729c0; /* 0x4729c0 */
extern unsigned char DAT_004daf08; /* 0x4daf08 */
extern unsigned char DAT_004dcf08; /* 0x4dcf08 */
extern unsigned char DAT_004def18; /* 0x4def18 */
extern unsigned char DAT_004def28; /* 0x4def28 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_001eb498. */
/* Supplied declaration required: FUN_00248130. */
extern int FUN_002ae6b0(unsigned int);
/* Supplied declaration required: FUN_002aed40. */
extern int FUN_002b3398(int *);
/* Supplied declaration required: FUN_002c4360. */
extern int FUN_002c4b84(unsigned int, unsigned int, unsigned int, int, unsigned int);
/* Supplied declaration required: FUN_002d602c. */


void FUN_00286c5c(int *param_1,unsigned int param_2,int param_3,unsigned int param_4,unsigned int param_5,
                 char *param_6)

{
/* irregular: 7 goto(s); irregular input(s): in_fpscr; 7 native warning(s); review required */
  unsigned char temp_v0;
  unsigned char *puVar2;
  unsigned int temp_v1;
  int *piVar4;
  unsigned char *puVar5;
  unsigned char *puVar6;
  unsigned short *puVar7;
  unsigned char *unaff_r10;
  int unaff_r11;
  unsigned int in_fpscr;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int *temp_v5;
  int *temp_v6;
  
  temp_v3 = VectorSignedToFloat(param_4,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v2 = VectorSignedToFloat(param_5,(unsigned char)(in_fpscr >> 0x16) & 3);
  param_1[8] = param_3;
  param_1[6] = temp_v3;
  param_1[7] = temp_v2;
  temp_v2 = FUN_002aed40(param_2);
  param_1[5] = temp_v2;
  if (param_1[0x14] == -1) {
    param_1[0x15] = 0;
  }
  else {
    temp_v2 = FUN_002aed40();
    param_1[0x15] = temp_v2;
  }
  if (param_1[0x27] == -1) {
    param_1[0x29] = 0;
  }
  else {
    temp_v2 = FUN_002aed40();
    param_1[0x29] = temp_v2;
  }
  temp_v2 = 0;
  param_1[0xd] = param_1[0xd] & 0xffffffef;
  param_1[9] = 0;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[0x10] = 0;
  *(unsigned char *)(param_1 + 0x11) = 1;
  *(unsigned short *)((int)param_1 + 0x46) = 0;
  *(unsigned short *)(param_1 + 0x12) = 0;
  param_1[0x13] = 0;
  param_1[0x2c] = 0;
  temp_v4 = 0;
  if (*param_1 != 0) {
    FUN_002c4360();
    *param_1 = 0;
  }
  if (*param_6 != '\0') {
    FUN_001eb498(param_6,&DAT_004daf08,0);
    puVar2 = &DAT_004daf08;
    FUN_002d602c(&DAT_004daf08,&DAT_004dcf08,0);
    param_1[1] = (int)puVar2;
    temp_v3 = FUN_002c4b84(0x100,0x100,0,(int)puVar2 << 5,0);
    *param_1 = temp_v3;
    temp_v5 = (int *)0x0;
    temp_v6 = (int *)0x0;
    temp_v0 = 0;
    puVar6 = (unsigned char *)0x0;
    piVar4 = *(int **)(param_1[5] + 8);
    if (param_1[0x15] != 0) {
      temp_v5 = *(int **)(param_1[0x15] + 8);
    }
    if (param_1[0x29] != 0) {
      temp_v6 = *(int **)(param_1[0x29] + 8);
    }
    param_1[0xf] = 1;
    *(unsigned short *)((int)param_1 + 0x46) = 0;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
    param_1[0x20] = 0;
    param_1[0x21] = 0;
    param_1[0x22] = 0;
    param_1[0x23] = 0;
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    if (puVar2 != (unsigned char *)0x0) {
      unaff_r11 = 0x4daee8;
      unaff_r10 = &DAT_004dcf08;
    }
    param_1[0x26] = 0;
    *(unsigned short *)(param_1 + 0x12) = 0;
    param_1[0x13] = temp_v2;
    if (puVar2 != (unsigned char *)0x0) {
LAB_00286e2c:
      puVar7 = (unsigned short *)(*param_1 + (int)puVar6 * 0x20);
      temp_v1 = ((*(unsigned short *)(unaff_r10 + (int)puVar6 * 2) & 0xff) << 8) |
              (unsigned int)(*(unsigned short *)(unaff_r10 + (int)puVar6 * 2) >> 8);
      *puVar7 = (short)temp_v1;
      if (temp_v1 != 0xffff) {
        if (temp_v0) {
          if (temp_v1 != 0) goto LAB_00286e74;
          temp_v0 = 0;
        }
        else {
          if (temp_v1 == 0) {
            temp_v1 = 0x8260;
          }
LAB_00286e74:
          temp_v2 = FUN_002ae6b0(temp_v1);
          if (temp_v2 != 0) {
            if (temp_v1 == 0xf816) {
              temp_v4 = 1;
            }
            else if (temp_v1 < 0xf817) {
              if (temp_v1 == 0xf812) {
                temp_v0 = 1;
              }
              else if (temp_v1 < 0xf813) {
                if (temp_v1 != 0xf802) {
                  if (temp_v1 != 0xf804) {
LAB_002870b8:
                    temp_v2 = 0;
                    do {
                      if ((*(int *)(unaff_r11 + temp_v2 * 4) != 0) &&
                         (*(unsigned short *)(&DAT_004def18 + temp_v2 * 2) == temp_v1)) {
                        temp_v2 = 0;
                        goto LAB_002871e8;
                      }
                      temp_v2 = temp_v2 + 1;
                    } while (temp_v2 < 8);
                  }
                  else {
                    puVar6 = puVar6 + 1;
                    *(unsigned short *)(*param_1 + (int)puVar6 * 0x20) =
                         *(unsigned short *)(unaff_r10 + (int)puVar6 * 2);
                  }
                }
                else {
                  param_1[0xf] = param_1[0xf] + 1;
                }
              }
              else if (temp_v1 != 0xf813) {
                if (temp_v1 != 0xf814) goto LAB_002870b8;
                puVar5 = puVar6 + 1;
                puVar6 = puVar6 + 2;
                *(unsigned short *)(*param_1 + (int)puVar5 * 0x20) =
                     *(unsigned short *)(unaff_r10 + (int)puVar5 * 2);
                *(unsigned short *)(*param_1 + (int)puVar6 * 0x20) =
                     *(unsigned short *)(unaff_r10 + (int)puVar6 * 2);
              }
              else {
                *(unsigned short *)(*param_1 + (int)(puVar6 + 1) * 0x20) =
                     *(unsigned short *)(unaff_r10 + (int)(puVar6 + 1) * 2);
                puVar5 = puVar6 + 3;
                *(unsigned short *)(*param_1 + (int)(puVar6 + 2) * 0x20) =
                     *(unsigned short *)(unaff_r10 + (int)(puVar6 + 2) * 2);
                puVar6 = puVar6 + 4;
                *(unsigned short *)(*param_1 + (int)puVar5 * 0x20) =
                     *(unsigned short *)(unaff_r10 + (int)puVar5 * 2);
                *(unsigned short *)(*param_1 + (int)puVar6 * 0x20) =
                     *(unsigned short *)(unaff_r10 + (int)puVar6 * 2);
              }
            }
            else if (temp_v1 == 0xf817) {
              temp_v4 = 2;
            }
            else if (temp_v1 == 0xf818) {
              temp_v4 = 0;
            }
            else {
              if (temp_v1 != 0xf819 && temp_v1 != 0xf81a) goto LAB_002870b8;
              puVar6 = puVar6 + 1;
              *(unsigned short *)(*param_1 + (int)puVar6 * 0x20) =
                   *(unsigned short *)(unaff_r10 + (int)puVar6 * 2);
            }
          }
          else if (temp_v4 != 2) {
            if (temp_v0) {
              if (temp_v5 != (int *)0x0) {
                temp_v2 = (**(romwright_code **)(*temp_v5 + 0x44))(temp_v5,temp_v1);
                if (temp_v2 == 0) {
                  temp_v1 = (unsigned int)uRam00464d4a;
                }
                (**(romwright_code **)(*temp_v5 + 0x40))(temp_v5,puVar7 + 2,temp_v1);
                temp_v2 = param_1[0x15];
                FUN_00248130(temp_v2,temp_v1);
                *(int *)(puVar7 + 0xe) = temp_v2;
              }
            }
            else {
              temp_v2 = (**(romwright_code **)(*piVar4 + 0x44))(piVar4,temp_v1);
              if (temp_v2 == 0) {
                temp_v1 = (unsigned int)uRam00464d4a;
              }
              if ((DAT_00464d68 != 0) && (DAT_00464d68 == temp_v1)) {
                (**(romwright_code **)(*piVar4 + 0x40))(piVar4,puVar7 + 2,0x8140);
                temp_v2 = param_1[5];
                FUN_00248130(temp_v2,0x8140);
                *(int *)(puVar7 + 0xe) = temp_v2;
              }
              else {
                (**(romwright_code **)(*piVar4 + 0x40))(piVar4,puVar7 + 2,temp_v1);
                temp_v2 = param_1[5];
                FUN_00248130(temp_v2,temp_v1);
                *(int *)(puVar7 + 0xe) = temp_v2;
              }
            }
          }
          else if (temp_v6 != (int *)0x0) {
            temp_v2 = (**(romwright_code **)(*temp_v6 + 0x44))(temp_v6,temp_v1);
            if (temp_v2 == 0) {
              temp_v1 = (unsigned int)uRam00464d4a;
            }
            (**(romwright_code **)(*temp_v6 + 0x40))(temp_v6,puVar7 + 2,temp_v1);
            temp_v2 = param_1[0x29];
            FUN_00248130(temp_v2,temp_v1);
            *(int *)(puVar7 + 0xe) = temp_v2;
          }
        }
        goto LAB_0028723c;
      }
    }
  }
LAB_00287248:
  if (param_3 == -1) {
    do {
      temp_v2 = FUN_002b3398(param_1);
    } while (temp_v2 == 0);
  }
  temp_v2 = DAT_004729c0;
  if (DAT_004729b8 != '\0') {
    *(unsigned int *)(DAT_004729c0 + 4) = 0;
    *(unsigned int *)(temp_v2 + 8) = 0;
    *(unsigned int *)(temp_v2 + 0xc) = 0;
    *(unsigned int *)(temp_v2 + 0x10) = 0;
    *(unsigned int *)(temp_v2 + 0x14) = 0;
    *(unsigned int *)(temp_v2 + 0x18) = 0;
    *(unsigned int *)(temp_v2 + 0x1c) = 0;
    *(unsigned int *)(temp_v2 + 0x20) = 0;
    *(unsigned int *)(temp_v2 + 0x24) = 0;
    *(unsigned int *)(temp_v2 + 0x28) = 0;
    *(unsigned int *)(temp_v2 + 0x2c) = 0;
    *(unsigned int *)(temp_v2 + 0x30) = 0;
    *(unsigned short *)(temp_v2 + 0x34) = 0;
  }
  return;
  while (temp_v2 = temp_v2 + 1, temp_v2 < 8) {
LAB_002871e8:
    if ((*(int *)(unaff_r11 + temp_v2 * 4) != 0) && (*(unsigned short *)(&DAT_004def18 + temp_v2 * 2) == temp_v1))
    {
      temp_v3 = *(int *)(&DAT_004def28 + temp_v2 * 4);
      temp_v2 = 0;
      if (temp_v2 < temp_v3) {
        do {
          puVar6 = puVar6 + 1;
          temp_v2 = temp_v2 + 1;
          *(unsigned short *)(*param_1 + (int)puVar6 * 0x20) =
               *(unsigned short *)(unaff_r10 + (int)puVar6 * 2);
        } while (temp_v2 < temp_v3);
      }
      break;
    }
  }
LAB_0028723c:
  puVar6 = puVar6 + 1;
  if (puVar2 <= puVar6) goto LAB_00287248;
  goto LAB_00286e2c;
}
