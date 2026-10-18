/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00345194` (_code @ 0x345194, 0x1b8c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 10 slot(s), 40 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
} param_1_stack;

extern int DAT_0043427c; /* 0x43427c */
extern int DAT_004342c8; /* 0x4342c8 */
extern int DAT_00435d18; /* 0x435d18 */
extern int DAT_004398d4; /* 0x4398d4 */
extern int DAT_00439ca8; /* 0x439ca8 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern int FUN_0019dfbc(unsigned int);
/* Supplied declaration required: FUN_0020fe74. */
/* Supplied declaration required: FUN_0023c22c. */
/* Supplied declaration required: FUN_0023c274. */
/* Supplied declaration required: FUN_0023c2b0. */
/* Supplied declaration required: FUN_0023c318. */
/* Supplied declaration required: FUN_0023c3a8. */
/* Supplied declaration required: FUN_0023c4c4. */
/* Supplied declaration required: FUN_0023c584. */
/* Supplied declaration required: FUN_0023c6c0. */
/* Supplied declaration required: FUN_0023c71c. */
/* Supplied declaration required: FUN_0023c748. */
/* Supplied declaration required: FUN_0023c794. */
extern int FUN_0023c7e0(unsigned int);
/* Supplied declaration required: FUN_0023c840. */
/* Supplied declaration required: FUN_0023c85c. */
/* Supplied declaration required: FUN_0023ce64. */
/* Supplied declaration required: FUN_0023cfec. */
/* Supplied declaration required: FUN_0023eb7c. */
/* Supplied declaration required: FUN_0023f640. */
/* Supplied declaration required: FUN_002406ac. */
/* Supplied declaration required: FUN_0024511c. */
extern int FUN_00245198(unsigned int, unsigned int);
/* Supplied declaration required: FUN_00245394. */
extern int FUN_002453e4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_00246e5c. */
extern int FUN_00248728(void);
/* Supplied declaration required: FUN_00250800. */
/* Supplied declaration required: FUN_00256b04. */
extern int FUN_00256b80(int, int, unsigned int);
/* Supplied declaration required: FUN_00263910. */
/* Supplied declaration required: FUN_0026c120. */
/* Supplied declaration required: FUN_0027de38. */
/* Supplied declaration required: FUN_0027e1a0. */
/* Supplied declaration required: FUN_0027e854. */
/* Supplied declaration required: FUN_0027eb98. */
/* Supplied declaration required: FUN_00282b94. */
/* Supplied declaration required: FUN_002934d4. */
/* Supplied declaration required: FUN_00293c98. */
/* Supplied declaration required: FUN_00295eac. */
/* Supplied declaration required: FUN_002971e4. */
extern int FUN_0029c68c(void);
/* Supplied declaration required: FUN_0029c6dc. */
/* Supplied declaration required: FUN_0029cee4. */
/* Supplied declaration required: FUN_0029e8e8. */
/* Supplied declaration required: FUN_002a0f50. */
/* Supplied declaration required: FUN_002b6e40. */
/* Supplied declaration required: FUN_002b8b78. */
extern unsigned int FUN_002bf9e4(unsigned int);
/* Supplied declaration required: FUN_002c4360. */
extern int FUN_002d8da8(void);
/* Supplied declaration required: FUN_002e10a4. */
extern unsigned int FUN_00336974(int);
/* Supplied declaration required: FUN_00338294. */
/* Supplied declaration required: FUN_00338938. */
/* Supplied declaration required: FUN_0034417c. */
/* Supplied declaration required: FUN_00344390. */
/* Supplied declaration required: FUN_00344830. */
/* Supplied declaration required: FUN_00344f2c. */
extern unsigned int FUN_00394938(unsigned int);
extern unsigned int FUN_00394968(void);
/* Supplied declaration required: FUN_00394dd8. */
/* Supplied declaration required: FUN_003ade84. */
/* Supplied declaration required: FUN_003ae328. */
/* Supplied declaration required: FUN_003ae638. */
/* Supplied declaration required: FUN_003ae794. */
/* Supplied declaration required: FUN_003af184. */
/* Supplied declaration required: FUN_003bcfd8. */
/* Supplied declaration required: FUN_003bf7d0. */
/* Supplied declaration required: FUN_003c0234. */
/* Supplied declaration required: FUN_003c03a4. */
/* Supplied declaration required: FUN_003c0460. */
/* Supplied declaration required: FUN_003c05b8. */
/* Supplied declaration required: FUN_003c0644. */
/* Supplied declaration required: FUN_003c0f98. */
/* Supplied declaration required: FUN_003c163c. */
/* Supplied declaration required: FUN_003c16c4. */
/* Supplied declaration required: FUN_003c1c54. */
extern int FUN_003d0590(int);
/* Supplied declaration required: FUN_003d15b4. */
/* Supplied declaration required: FUN_003d664c. */
/* Supplied declaration required: FUN_003d6870. */
/* Supplied declaration required: FUN_003d701c. */
/* Supplied declaration required: FUN_003d71c4. */
extern int FUN_003d7238(int);
/* Supplied declaration required: FUN_003d88cc. */
/* Supplied declaration required: FUN_003d9a94. */
extern int FUN_003d9d24(int, int);
/* Supplied declaration required: FUN_003d9dcc. */
/* Supplied declaration required: FUN_003da1a0. */
/* Supplied declaration required: FUN_003dd378. */
/* Supplied declaration required: FUN_003de984. */


unsigned int FUN_00345194(int *param_1)

{
/* irregular: 22 goto(s); irregular input(s): in_fpscr; 78 native warning(s); review required */
  char temp_v0;
  short *psVar2;
  short temp_v1;
  unsigned int temp_v2;
  unsigned int *puVar5;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int *puVar9;
  short temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned int *unaff_r5;
  short *psVar13;
  int temp_v9;
  unsigned char temp_v10;
  unsigned char temp_v11;
  unsigned int in_fpscr;
  
  psVar13 = (short *)param_1[2];
joined_r0x003451ac:
  psVar2 = psVar13;
  temp_v5 = DAT_00439ca8;
  if (psVar2 == (short *)0x0) {
    return 0;
  }
  temp_v0 = (char)psVar2[2];
  psVar13 = *(short **)(psVar2 + 6);
  if (temp_v0 == '!') goto LAB_003451e0;
  if (temp_v0 < '!') {
    if (temp_v0 == '\x12' || temp_v0 == '\x13') goto LAB_003451e0;
  }
  else if (temp_v0 == '\"' || temp_v0 == '+') goto LAB_003451e0;
  goto LAB_003451f8;
LAB_003451e0:
  if ((*(int *)(psVar2 + 10) != 0) && ((*(unsigned int *)(*(int *)(psVar2 + 10) + 0x54) & 7) != 0))
  goto joined_r0x003451ac;
LAB_003451f8:
  if (0 < *psVar2) {
    *psVar2 = *psVar2 - 1;
    goto joined_r0x003451ac;
  }
  if (psVar2[1] < 0) {
    if (*(int *)(psVar2 + 8) == 0) {
      param_1[2] = (int)psVar13;
    }
    else {
      *(short **)(*(int *)(psVar2 + 8) + 0xc) = psVar13;
    }
    if (*(int *)(psVar2 + 6) == 0) {
      param_1[3] = *(int *)(psVar2 + 8);
    }
    else {
      *(int *)(*(int *)(psVar2 + 6) + 0x10) = *(int *)(psVar2 + 8);
    }
    param_1[1] = param_1[1] - 1;
    FUN_002c4360();
    goto joined_r0x003451ac;
  }
  if ((*(unsigned char *)((int)psVar2 + 5) & 2) != 0) goto joined_r0x003451ac;
  switch(temp_v0) {
  case '\0':
    if (*(int *)(psVar2 + 0x16) == 0) {
      temp_v5 = DAT_00435d18;
      FUN_0023c85c(DAT_00435d18,(int)psVar2[0x12],(int)psVar2[0x13],(int)psVar2[0x24],
                   (int)psVar2[0x25],*(unsigned int *)(psVar2 + 0x14));
      if (temp_v5 != 0) {
        *(int *)(psVar2 + 0x20) = temp_v5;
        psVar2[1] = 1;
        *(int *)(psVar2 + 0x16) = *(int *)(psVar2 + 0x16) + 1;
      }
      break;
    }
    temp_v5 = *(int *)(psVar2 + 0x20);
    if ((temp_v5 != 0) && (*(int *)(temp_v5 + 4) < *(int *)(temp_v5 + 8))) {
      if ((char)psVar2[0x10] != '\0') {
        *(unsigned int *)(DAT_004342c8 + 0x634) = *(unsigned int *)(DAT_004342c8 + 0x634) | 0x8000000;
      }
      temp_v1 = 1;
      psVar2[1] = temp_v1;
      break;
    }
    *(unsigned int *)(DAT_004342c8 + 0x634) = *(unsigned int *)(DAT_004342c8 + 0x634) & 0xf7ffffff;
    temp_v1 = 0;
    psVar2[1] = temp_v1;
    break;
  case '\x01':
    FUN_00344390(param_1,psVar2);
    break;
  case '\x02':
    puVar9 = (unsigned int *)FUN_00293c98();
    FUN_00282b94(puVar9,(int)*(short *)(*(int *)(psVar2 + 10) + 0x62));
    if ((puVar9 != (unsigned int *)0x0) && ((*puVar9 & 0x10) == 0)) {
      temp_v9 = (int)*(short *)((int)puVar9 + 0x6e);
      temp_v5 = *(int *)(psVar2 + 0x14);
      if ((*puVar9 & 0x20) != 0) {
        temp_v9 = 4;
      }
      if ((temp_v5 != 0) && (temp_v5 != 2)) {
        if ((temp_v5 == 1) || (temp_v5 == 3)) {
          FUN_003ade84(DAT_00439ca8,temp_v9);
        }
      }
      else {
        FUN_003ade84(DAT_00439ca8,temp_v9);
      }
    }
    break;
  case '\x03':
    temp_v7 = *(unsigned int *)(DAT_00435d18 + 0x3028);
    if ((temp_v7 & 0x8000) != 0) {
      *(unsigned int *)(DAT_00435d18 + 0x3028) = temp_v7 & 0xffff7fff;
    }
    else {
      *(unsigned int *)(DAT_00435d18 + 0x3028) = temp_v7 | 2;
      temp_v5 = FUN_0027eb98(DAT_0043427c);
      if (*(char *)(temp_v5 + 0x59c) != '\0') {
        FUN_00394dd8(*(unsigned int *)(temp_v5 + 0x594) & 0xffff,*(unsigned int *)(psVar2 + 4));
      }
    }
    break;
  case '\x04':
    if (*(int *)(psVar2 + 0x14) < 1) break;
    temp_v4 = FUN_00293c98();
    VectorSignedToFloat((int)(char)psVar2[0x10],(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat((int)*(char *)((int)psVar2 + 0x21),(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat((int)(char)psVar2[0x11],(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat(*(int *)(psVar2 + 0x14) - *(int *)(psVar2 + 0x26),
                        (unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_0023c840(temp_v4,*(int *)(psVar2 + 0x14) - *(int *)(psVar2 + 0x26),(int)(char)psVar2[0x10],
                 (int)*(char *)((int)psVar2 + 0x21));
    temp_v5 = *(int *)(psVar2 + 0x26);
    *(int *)(psVar2 + 0x26) = temp_v5 + 1;
    if (*(int *)(psVar2 + 0x14) <= temp_v5 + 1) break;
    temp_v1 = 1;
    psVar2[1] = temp_v1;
    break;
  case '\x05':
    if (*(int *)(psVar2 + 0x14) < 1) break;
    temp_v4 = FUN_00293c98();
    VectorSignedToFloat(*(int *)(psVar2 + 0x14) - *(int *)(psVar2 + 0x26),
                        (unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_002e10a4((int)*(short *)(DAT_004398d4 + 0x8c),0);
    FUN_0023c840(temp_v4);
    temp_v5 = *(int *)(psVar2 + 0x26);
    *(int *)(psVar2 + 0x26) = temp_v5 + 1;
    if (*(int *)(psVar2 + 0x14) <= temp_v5 + 1) break;
    temp_v1 = 1;
    psVar2[1] = temp_v1;
    break;
  case '\x06':
    temp_v7 = **(unsigned int **)(psVar2 + 0xc);
    if ((temp_v7 & 0x10) != 0) break;
    temp_v5 = (int)*(short *)((int)*(unsigned int **)(psVar2 + 0xc) + 0x6e);
    if ((temp_v7 & 0x20) != 0) {
      temp_v5 = 4;
    }
    FUN_003af184(DAT_00439ca8,temp_v5);
    break;
  case '\a':
    FUN_00344f2c(param_1,psVar2);
    break;
  case '\b':
    puVar9 = (unsigned int *)FUN_00293c98();
    FUN_00282b94(puVar9,(int)*(short *)(*(int *)(psVar2 + 10) + 0x62));
    if (((puVar9 == (unsigned int *)0x0) || (temp_v7 = *puVar9, (temp_v7 & 0x10) != 0)) ||
       ((temp_v7 & 10) == 0)) break;
    temp_v5 = (int)*(short *)((int)puVar9 + 0x6e);
    temp_v2 = *(unsigned int *)(psVar2 + 0x14);
    if ((temp_v7 & 0x20) != 0) {
      temp_v5 = 4;
    }
    if (((((temp_v2 & 0x20) == 0) && ((temp_v2 & 0x40) == 0)) &&
        (((temp_v2 & 0x80) == 0 && (((temp_v2 & 0x100) == 0 && ((temp_v2 & 0x200) == 0)))))) &&
       ((temp_v2 & 8) == 0)) break;
    FUN_003af184(DAT_00439ca8,temp_v5);
    break;
  case '\t':
    temp_v5 = *(int *)(psVar2 + 10);
    temp_v9 = 0;
    if (temp_v5 != 0) {
      temp_v9 = (int)*(short *)(temp_v5 + 0x62);
    }
    temp_v3 = 0;
    if (temp_v5 != 0) {
      temp_v3 = temp_v9;
    }
    FUN_0023c85c(DAT_00435d18,temp_v9,temp_v3,4,*(unsigned int *)(psVar2 + 0x14),
                 *(unsigned int *)(psVar2 + 0x26));
    break;
  case '\v':
    temp_v4 = FUN_00293c98();
    temp_v1 = psVar2[0x12];
    if (temp_v1 != 0) {
      if (temp_v1 != 1) {
        if (temp_v1 == 2) {
          temp_v5 = FUN_002453e4(temp_v4,0);
joined_r0x003465f8:
          if (temp_v5 != 0) {
            temp_v1 = 0;
            psVar2[1] = temp_v1;
            break;
          }
        }
      }
      else {
        temp_v5 = FUN_00245198(temp_v4,0);
        if (temp_v5 != 0) {
          FUN_00245394(temp_v4,0);
          temp_v1 = 2;
          psVar2[0x12] = temp_v1;
        }
      }
    }
    else {
      FUN_0024511c(temp_v4,0,(int)psVar2[0x13],*(unsigned int *)(psVar2 + 0x14),
                   *(unsigned int *)(psVar2 + 0x26) & 0xff);
      temp_v1 = 1;
      psVar2[0x12] = temp_v1;
    }
    temp_v1 = 1;
    psVar2[1] = temp_v1;
    break;
  case '\f':
    temp_v4 = FUN_00293c98();
    temp_v0 = (char)psVar2[0x10];
    if (temp_v0 != '\0') {
      if (temp_v0 != '\x01') {
        if (temp_v0 != '\x02') {
          if (temp_v0 == '\x03') {
            temp_v5 = FUN_002453e4(temp_v4,1);
            goto joined_r0x003465f8;
          }
        }
        else {
LAB_003458b8:
          temp_v5 = *(int *)(psVar2 + 0x28);
          *(unsigned int *)(psVar2 + 0x28) = temp_v5 + 1U;
          if (*(unsigned int *)(psVar2 + 0x16) <= temp_v5 + 1U) {
            FUN_00245394(temp_v4,1);
            temp_v10 = 3;
            *(unsigned char *)(psVar2 + 0x10) = temp_v10;
          }
        }
      }
      else {
        temp_v5 = FUN_00245198(temp_v4,1);
        if (temp_v5 != 0) {
          *(unsigned char *)(psVar2 + 0x10) = 2;
          goto LAB_003458b8;
        }
      }
    }
    else {
      FUN_0024511c(temp_v4,1,(int)psVar2[0x13],*(unsigned int *)(psVar2 + 0x14),
                   *(unsigned int *)(psVar2 + 0x26) & 0xff);
      temp_v10 = 1;
      *(unsigned char *)(psVar2 + 0x10) = temp_v10;
    }
    temp_v1 = 1;
    psVar2[1] = temp_v1;
    break;
  case '\r':
    if (DAT_00439ca8 != -0x2460) {
      *(unsigned int *)(DAT_00439ca8 + 0x5ce4) = 0;
      *(unsigned int *)(temp_v5 + 0x5ce8) = 0;
      *(unsigned int *)(temp_v5 + 0x5cec) = *(unsigned int *)(psVar2 + 0x18);
      *(unsigned int *)(temp_v5 + 0x5cf0) = *(unsigned int *)(psVar2 + 0x14);
      *(unsigned int *)(temp_v5 + 0x5cf4) = *(unsigned int *)(temp_v5 + 0x5cec);
      *(unsigned int *)(temp_v5 + 0x5cf8) = *(unsigned int *)(temp_v5 + 0x5cf0);
    }
    break;
  case '\x0e':
    temp_v5 = FUN_00293c98();
    if ((*(unsigned int *)(temp_v5 + 0x44a0) & 0x140) != 0) {
      temp_v1 = 0;
      psVar2[1] = temp_v1;
      break;
    }
    if (psVar2[0x12] != 0) {
      if (psVar2[0x12] == 1) {
        temp_v7 = FUN_002b6e40();
        goto joined_r0x00346354;
      }
    }
    else {
      if (*(int *)(psVar2 + 0x14) >= 1) {
        FUN_003c0644(*(int *)(psVar2 + 0x14),*(unsigned int *)(psVar2 + 0xc));
      }
      else {
        FUN_0027de38(*(unsigned int *)(psVar2 + 0x26),1);
      }
      psVar2[0x12] = psVar2[0x12] + 1;
    }
    temp_v1 = 1;
    psVar2[1] = temp_v1;
    break;
  case '\x0f':
    temp_v5 = FUN_00293c98();
    if ((*(unsigned int *)(temp_v5 + 0x44a0) & 0x140) == 0) {
      if (psVar2[0x12] != 0) {
        if (psVar2[0x12] == 1) {
          temp_v5 = FUN_002b6e40();
joined_r0x00345bf8:
          if (temp_v5 == 0) {
            temp_v1 = 0;
            psVar2[1] = temp_v1;
            break;
          }
        }
        temp_v1 = 1;
        psVar2[1] = temp_v1;
        break;
      }
      temp_v1 = 0;
      temp_v11 = 0;
      temp_v9 = FUN_003d0590(DAT_0043427c);
      unaff_r5 = (unsigned int *)0x0;
      if (temp_v9 != 5) {
        temp_v3 = FUN_0023c7e0(*(unsigned int *)(psVar2 + 0x14));
        if (temp_v3 == 0 || temp_v9 == 1) break;
        if (temp_v9 != 2) {
          if (temp_v9 != 3) {
            temp_v6 = *(short *)(temp_v3 + 2);
            if (temp_v6 != 0) goto LAB_00345a74;
          }
          else {
            temp_v6 = *(short *)(temp_v3 + 4);
            if (temp_v6 != 0) {
LAB_00345a74:
              temp_v1 = temp_v6;
              if (temp_v6 == 0) {
                if (*(short *)(temp_v3 + 2) != 0) {
                  temp_v1 = *(short *)(temp_v3 + 2);
                }
              }
            }
            else if (*(short *)(temp_v3 + 2) != 0) {
              temp_v1 = *(short *)(temp_v3 + 2);
            }
          }
        }
        else {
          temp_v6 = *(short *)(temp_v3 + 6);
          if (temp_v6 != 0) goto LAB_00345a74;
          if (*(short *)(temp_v3 + 2) != 0) {
            temp_v1 = *(short *)(temp_v3 + 2);
          }
        }
        temp_v7 = *(unsigned int *)(temp_v3 + 8);
        if ((temp_v7 & 1) != 0) {
          unaff_r5 = *(unsigned int **)(psVar2 + 0xc);
        }
        if ((temp_v7 & 0x10) != 0) {
          unaff_r5 = *(unsigned int **)(psVar2 + 0xc);
        }
        if ((temp_v7 & 8) != 0) {
          temp_v9 = 0;
          do {
            puVar9 = (unsigned int *)(*(int *)(temp_v5 + 0x1fc0) + temp_v9 * 0x288);
            if ((*(short *)(*(int *)(psVar2 + 0xc) + 0x6e) != *(short *)((int)puVar9 + 0x6e)) &&
               ((((*puVar9 & 1) == 0 || ((*puVar9 & 0x40) != 0)) ||
                ((*(unsigned short *)((int)puVar9 + 0x1c6) & 0x10) == 0)))) goto LAB_00345b70;
            temp_v9 = temp_v9 + 1;
          } while (temp_v9 < 4);
          temp_v4 = 0x21;
          FUN_0027de38(temp_v4,1);
        }
        else {
LAB_00345b70:
          FUN_003c0644(temp_v1,unaff_r5);
        }
      }
      else {
        unaff_r5 = (unsigned int *)&DAT_0043427c;
        temp_v4 = 0x25;
        temp_v5 = DAT_0043427c;
        FUN_003d15b4();
        temp_v11 = temp_v5 < 2;
        temp_v5 = FUN_0027eb98(DAT_0043427c);
        FUN_0023c794(DAT_0043427c,(int)*(short *)(*(int *)(temp_v5 + 0x20) + 0x6e));
        FUN_0027de38(temp_v4,1);
      }
      if (temp_v11) break;
      psVar2[0x12] = psVar2[0x12] + 1;
      temp_v1 = 1;
      psVar2[1] = temp_v1;
      break;
    }
    temp_v1 = 0;
    psVar2[1] = temp_v1;
    break;
  case '\x10':
    temp_v5 = FUN_00293c98();
    if ((*(unsigned int *)(temp_v5 + 0x44a0) & 0x140) == 0) {
      if (psVar2[0x12] == 0) {
        FUN_003c05b8(*(unsigned int *)(psVar2 + 0x14),*(unsigned int *)(psVar2 + 0x26));
        psVar2[0x12] = psVar2[0x12] + 1;
        temp_v1 = 1;
        psVar2[1] = temp_v1;
        break;
      }
      if (psVar2[0x12] == 1) {
        temp_v5 = FUN_002b6e40();
        goto joined_r0x00345bf8;
      }
      temp_v1 = 1;
      psVar2[1] = temp_v1;
      break;
    }
    temp_v1 = 0;
    psVar2[1] = temp_v1;
    break;
  case '\x11':
    temp_v5 = FUN_00293c98();
    if ((*(unsigned int *)(temp_v5 + 0x44a0) & 0x140) == 0) {
      FUN_003c0460(*(int *)(temp_v5 + 0x1fc0) + *(int *)(psVar2 + 0x14) * 0x288,
                   *(unsigned int *)(psVar2 + 0x26));
      break;
    }
    temp_v1 = 0;
    psVar2[1] = temp_v1;
    break;
  case '\x12':
  case '\x13':
    puVar5 = (unsigned int *)FUN_00293c98();
    puVar9 = puVar5;
    FUN_00282b94(puVar5,(int)*(short *)(*(int *)(psVar2 + 10) + 0x62));
    if (puVar9 == (unsigned int *)0x0) break;
    if ((char)psVar2[2] == '\x12') {
      if ((*puVar9 & 0x10) != 0) {
        temp_v5 = FUN_002934d4(puVar5);
        if (temp_v5 != 0) {
          FUN_003c163c();
        }
        else {
          FUN_003c1c54(*(unsigned int *)(psVar2 + 10),*(unsigned int *)(psVar2 + 0x26));
        }
      }
      else {
        temp_v5 = (int)*(short *)((int)puVar9 + 0x6e);
        if ((*puVar9 & 0x20) != 0) {
          temp_v5 = 4;
        }
        FUN_003ae328(DAT_00439ca8,temp_v5);
        if (psVar2[0x12] != 0) {
          FUN_003d701c(DAT_004342c8);
        }
      }
      break;
    }
    if ((char)psVar2[2] != '\x13') break;
    FUN_0027e854(*(unsigned int *)(psVar2 + 10));
    break;
  case '\x14':
    unaff_r5 = (unsigned int *)FUN_00293c98();
    FUN_00282b94(unaff_r5,(int)*(short *)(*(int *)(psVar2 + 10) + 0x62));
    if (unaff_r5 == (unsigned int *)0x0) break;
    if ((*unaff_r5 & 0x110) != 0) {
      temp_v5 = FUN_00293c98();
      temp_v9 = 0;
      do {
        temp_v3 = (int)*(short *)((int)unaff_r5 + temp_v9 * 2 + 8);
        if (-1 < temp_v3) {
          FUN_0027e854(*(int *)(temp_v5 + 0x1e98) + temp_v3 * 0x114);
        }
        temp_v9 = temp_v9 + 1;
      } while (temp_v9 < 0x32);
      break;
    }
    FUN_0027e854(*(unsigned int *)(psVar2 + 10));
    break;
  case '\x15':
    FUN_00344830(param_1,psVar2);
    break;
  case '\x16':
    temp_v5 = FUN_00293c98();
    puVar9 = (unsigned int *)FUN_0027eb98(DAT_0043427c);
    unaff_r5 = (unsigned int *)(int)(short)*(unsigned int *)(psVar2 + 0x14);
    if (psVar2[0x13] != 0) {
      unaff_r5 = (unsigned int *)0x1;
    }
    if (((-1 < *(int *)(DAT_004342c8 + 0x760)) &&
        (temp_v9 = FUN_00256b80(DAT_004342c8,temp_v5,0), temp_v9 != 0)) &&
       (((*(unsigned int *)(temp_v5 + 0x44a0) & 0x1000) == 0 ||
        (temp_v9 = FUN_003d7238(DAT_004342c8), temp_v9 == 0)))) {
      FUN_00256b04(0,*(unsigned int *)(psVar2 + 4));
    }
    if ((*puVar9 & 0x200) != 0) {
      unaff_r5 = (unsigned int *)0x0;
      *(unsigned int *)(temp_v5 + 0x44a0) = *(unsigned int *)(temp_v5 + 0x44a0) | 0x80;
      FUN_0023c748(1,*(unsigned int *)(psVar2 + 4),0xffffffff,1,1);
      if ((*(unsigned int *)(temp_v5 + 0x44a4) & 2) != 0) {
        FUN_0023c71c(0,*(unsigned int *)(psVar2 + 4));
      }
    }
    else {
      temp_v4 = FUN_00336974(temp_v5);
      if (psVar2[0x12] == 0) {
        temp_v4 = 0xffffffff;
      }
      else if ((*(unsigned int *)(temp_v5 + 0x44a4) & 2) != 0) {
        FUN_0023c71c(0,*(unsigned int *)(psVar2 + 4));
      }
      FUN_0023c748(1,*(unsigned int *)(psVar2 + 4),temp_v4,1,unaff_r5);
    }
    break;
  case '\x17':
    FUN_003d664c(DAT_004342c8,*(unsigned int *)(psVar2 + 0x14));
    break;
  case '\x18':
    temp_v4 = FUN_00293c98();
    if (-1 < psVar2[0x12]) {
      FUN_003d6870(DAT_004342c8,temp_v4);
    }
    if (psVar2[0x13] != 0) {
      FUN_003d88cc(DAT_004342c8,0);
    }
    break;
  case '\x19':
    FUN_003d71c4(DAT_004342c8);
    break;
  case '\x1a':
    temp_v5 = param_1[2];
    do {
      while( 1 ) {
        temp_v9 = temp_v5;
        if (temp_v9 == 0) {
          temp_v5 = FUN_00293c98();
          if (*(char *)(temp_v5 + 0x2f04) < '\x01') {
            FUN_00293c98();
            FUN_0023f640();
            FUN_0023c6c0(0,*(unsigned int *)(psVar2 + 4),0,1,1);
            goto LAB_00346490;
          }
          goto LAB_00345630;
        }
        temp_v0 = *(char *)(temp_v9 + 4);
        temp_v5 = *(int *)(temp_v9 + 0xc);
        if (temp_v0 == '\x01') break;
        if (temp_v0 != '\0') {
          if (temp_v0 == '\a') {
            temp_v11 = *(int *)(temp_v9 + 8) == *(int *)(psVar2 + 4);
            if (temp_v11) {
              temp_v9 = *(int *)(temp_v9 + 0x28);
            }
            if (temp_v11 && temp_v9 == 3) goto LAB_00345630;
          }
        }
        else if (*(int *)(temp_v9 + 8) == *(int *)(psVar2 + 4)) goto LAB_00345630;
      }
    } while (*(int *)(temp_v9 + 8) != *(int *)(psVar2 + 4));
    temp_v1 = 1;
    psVar2[1] = temp_v1;
    break;
  case '\x1b':
    temp_v5 = FUN_00293c98();
    *(char *)(temp_v5 + 0x2f04) = *(char *)(temp_v5 + 0x2f04) - '\x01';
    break;
  case '\x1c':
    if ((*(unsigned int *)(*param_1 + 0x44a8) & 4) == 0) {
      FUN_003c0234((int)*(short *)(*(int *)(psVar2 + 10) + 0x62),*(unsigned int *)(psVar2 + 0x14));
    }
    break;
  case '\x1d':
    FUN_003bcfd8((int)*(short *)(*(int *)(psVar2 + 10) + 0x62),*(int *)(psVar2 + 0x14) != 0);
    unaff_r5 = (unsigned int *)FUN_00293c98();
    temp_v7 = *(unsigned int *)(psVar2 + 0x26);
    temp_v11 = (temp_v7 & 0x10) != 0;
    if (temp_v11) {
      temp_v7 = *(unsigned int *)(psVar2 + 0x14);
    }
    if (temp_v11 && temp_v7 != 0) {
      puVar9 = (unsigned int *)*param_1;
      FUN_00282b94(puVar9,(int)*(short *)(*(int *)(psVar2 + 10) + 0x62));
      if ((*puVar9 & 10) != 0) {
        temp_v5 = FUN_002934d4(unaff_r5);
        if (temp_v5 == 0) {
          FUN_00250800(0,*(unsigned int *)(psVar2 + 4),0x10001d3,0,1,0,0);
        }
        FUN_003ae794(DAT_00439ca8,(int)*(short *)((int)puVar9 + 0x6e));
      }
      else if ((*puVar9 & 0x10) != 0) {
        temp_v5 = FUN_002934d4(unaff_r5);
        if (temp_v5 == 0) {
          FUN_00250800(0,*(unsigned int *)(psVar2 + 4),0x10001d3,0,1,0,0);
        }
        FUN_0023ce64(*param_1,(int)*(short *)(*(int *)(psVar2 + 10) + 0x62));
        FUN_003ae638(DAT_00439ca8,puVar9);
      }
    }
    break;
  case '\x1e':
    temp_v5 = *param_1;
    if ((*(unsigned int *)(temp_v5 + 0x44a8) & 8) == 0) {
      temp_v9 = (int)psVar2[0x12] + (int)*(short *)(temp_v5 + 0x4968);
      if (temp_v9 < 0) {
        temp_v9 = 0;
      }
      *(short *)(temp_v5 + 0x4968) = (short)temp_v9;
      temp_v5 = (int)psVar2[0x13] + (int)*(short *)(*param_1 + 0x496a);
      if (temp_v5 < 0) {
        temp_v5 = 0;
      }
      *(short *)(*param_1 + 0x496a) = (short)temp_v5;
      if (*(int *)(psVar2 + 0x14) != 0) {
        FUN_00338294(*param_1,0);
      }
    }
    break;
  case ' ':
    FUN_003de984(0,*(unsigned int *)(psVar2 + 4));
    break;
  case '!':
  case '\"':
    temp_v5 = *(int *)(psVar2 + 10);
    temp_v7 = *(unsigned int *)(temp_v5 + 0x50);
    if ((temp_v7 & 1) == 0 || (temp_v7 & 2) == 0) break;
    temp_v8 = 0;
    temp_v4 = 0;
    if (temp_v0 == '!' || temp_v0 == '\"') {
      temp_v4 = *(unsigned int *)(psVar2 + 0x14);
      temp_v8 = *(unsigned int *)(psVar2 + 0x26);
    }
    if (psVar2[0x12] == 0) {
      if (temp_v0 != '!') {
        if (temp_v0 == '\"') {
          FUN_002406ac(*param_1,temp_v5);
        }
      }
      else {
        FUN_003c16c4(*param_1,temp_v5,temp_v4,temp_v8);
      }
      psVar2[0x12] = psVar2[0x12] + 1;
      temp_v1 = 1;
      psVar2[1] = temp_v1;
      break;
    }
    if (temp_v0 != '!') {
      if (temp_v0 != '\"') {
        temp_v1 = 1;
        psVar2[1] = temp_v1;
        break;
      }
      temp_v7 = temp_v7 & 0x2000;
    }
    else {
      temp_v7 = temp_v7 & 0x1000;
    }
joined_r0x00346354:
    if (temp_v7 != 0) {
      temp_v1 = 1;
      psVar2[1] = temp_v1;
      break;
    }
    temp_v1 = 0;
    psVar2[1] = temp_v1;
    break;
  case '#':
    FUN_0034417c(param_1,psVar2);
    break;
  case '$':
    FUN_003c0f98((int)*(short *)(*(int *)(psVar2 + 0xc) + 0x6e),0);
    FUN_00293c98();
    FUN_0023cfec();
    break;
  case '%':
    temp_v5 = *(int *)(psVar2 + 0x26);
    if (temp_v5 != 0) {
      if (temp_v5 != 1) {
        if ((temp_v5 != 2) ||
           (((temp_v5 = DAT_00435d18, FUN_003dd378(DAT_00435d18,(int)psVar2[0x12]), temp_v5 != 0 &&
             (temp_v5 = FUN_00263910(), temp_v5 == 0)) &&
            ((*(unsigned int *)(*(int *)(psVar2 + 10) + 0x50) & 1) != 0)))) {
          temp_v1 = 1;
          psVar2[1] = temp_v1;
          break;
        }
        temp_v5 = FUN_00293c98();
        *(char *)(temp_v5 + 0x2f04) = *(char *)(temp_v5 + 0x2f04) - '\x01';
        temp_v1 = 0;
        psVar2[1] = temp_v1;
        break;
      }
    }
    else {
      FUN_0023c584(DAT_00435d18,(int)*(short *)(*(int *)(psVar2 + 10) + 0x62));
      *(int *)(psVar2 + 0x26) = *(int *)(psVar2 + 0x26) + 1;
    }
    FUN_0023c4c4(0,*(unsigned int *)(psVar2 + 4),*(unsigned int *)(psVar2 + 10),0,0,0,0,0);
    FUN_0023c3a8(DAT_00435d18,(int)psVar2[0x12],*(unsigned int *)(*(int *)(psVar2 + 10) + 0x5c));
    FUN_0023c318(*(unsigned int *)(psVar2 + 0x14) & 0xffff,*(unsigned int *)(psVar2 + 4));
    temp_v5 = *(int *)(psVar2 + 0x26) + 1;
    *(int *)(psVar2 + 0x26) = temp_v5;
    temp_v1 = 1;
    psVar2[1] = temp_v1;
    break;
  case '&':
    temp_v5 = *(int *)(psVar2 + 0x26);
    temp_v9 = (int)*(short *)(*(int *)(psVar2 + 10) + 0x62);
    if (temp_v5 != 0) {
      if (temp_v5 != 1) {
        if ((temp_v5 == 2) &&
           ((temp_v5 = FUN_003d9d24(DAT_00435d18,temp_v9), temp_v5 == 0 ||
            ((*(unsigned int *)(*(int *)(psVar2 + 10) + 0x50) & 1) == 0)))) {
          temp_v5 = FUN_00293c98();
          *(char *)(temp_v5 + 0x2f04) = *(char *)(temp_v5 + 0x2f04) - '\x01';
          temp_v1 = 0;
          psVar2[1] = temp_v1;
          break;
        }
        temp_v1 = 1;
        psVar2[1] = temp_v1;
        break;
      }
    }
    else {
      unaff_r5 = (unsigned int *)&DAT_00435d18;
      FUN_0023c584(DAT_00435d18,temp_v9);
      FUN_003da1a0(DAT_00435d18,temp_v9);
      *(int *)(psVar2 + 0x26) = *(int *)(psVar2 + 0x26) + 1;
    }
    FUN_0023c4c4(0,*(unsigned int *)(psVar2 + 4),*(unsigned int *)(psVar2 + 10),0,0,0,0,0);
    FUN_0023c3a8(DAT_00435d18,(int)psVar2[0x12],*(unsigned int *)(*(int *)(psVar2 + 10) + 0x5c));
    FUN_0023c318(*(unsigned int *)(psVar2 + 0x14) & 0xffff,*(unsigned int *)(psVar2 + 4));
    *(int *)(psVar2 + 0x26) = *(int *)(psVar2 + 0x26) + 1;
    temp_v1 = 1;
    psVar2[1] = temp_v1;
    break;
  case '\'':
    unaff_r5 = (unsigned int *)(int)*(short *)(*(int *)(psVar2 + 10) + 0x62);
    temp_v5 = DAT_00435d18;
    FUN_003dd378(DAT_00435d18,(int)psVar2[0x12]);
    if ((temp_v5 != 0) && ((*(unsigned int *)(*(int *)(psVar2 + 10) + 0x50) & 1) != 0)) {
      temp_v9 = *(int *)(psVar2 + 0x26);
      if (temp_v9 != 0) {
        if (temp_v9 != 1) {
          if (temp_v9 != 2) {
            if (temp_v9 == 3) {
              temp_v5 = FUN_00263910(temp_v5);
              goto joined_r0x003465f8;
            }
          }
          else {
            if ((*(unsigned short *)(*(int *)(psVar2 + 10) + 0x58) & 0x1000) != 0) {
              temp_v9 = FUN_0020fe74();
              if (temp_v9 == 1) {
                FUN_0023eb7c(temp_v5,2);
              }
              temp_v5 = 3;
              *(int *)(psVar2 + 0x26) = temp_v5;
              temp_v1 = 1;
              psVar2[1] = temp_v1;
              break;
            }
            temp_v9 = FUN_00263910(temp_v5);
            if (temp_v9 != 0) {
              FUN_0023eb7c(temp_v5,1);
            }
          }
        }
        else {
          temp_v9 = FUN_00263910(temp_v5);
          if (temp_v9 != 0) {
            temp_v9 = FUN_0020fe74(temp_v5);
            if (temp_v9 == 0) {
              FUN_0023eb7c(temp_v5,1);
            }
            temp_v5 = 2;
            *(int *)(psVar2 + 0x26) = temp_v5;
          }
        }
        temp_v1 = 1;
        psVar2[1] = temp_v1;
        break;
      }
      FUN_0023c584(DAT_00435d18,unaff_r5);
      FUN_0023c3a8(DAT_00435d18,(int)psVar2[0x12]);
      temp_v5 = 1;
      *(int *)(psVar2 + 0x26) = temp_v5;
      temp_v1 = 1;
      psVar2[1] = temp_v1;
      break;
    }
LAB_00346490:
    temp_v1 = 0;
    psVar2[1] = temp_v1;
    break;
  case '(':
    temp_v1 = *(short *)(*(int *)(psVar2 + 10) + 0x60);
    temp_v4 = FUN_00293c98();
    FUN_0023c2b0(temp_v4,5,(int)temp_v1,0,unaff_r5);
    puVar9 = (unsigned int *)FUN_00293c98();
    FUN_00282b94(puVar9,(int)*(short *)(*(int *)(psVar2 + 10) + 0x62));
    if (puVar9 != (unsigned int *)0x0) {
      *puVar9 = *puVar9 & 0xf7ffffff;
    }
    break;
  case ')':
    FUN_003d9dcc(DAT_00435d18);
    break;
  case '*':
    temp_v7 = **(unsigned int **)(psVar2 + 0xc);
    temp_v11 = (temp_v7 & 0x100) != 0;
    if (temp_v11) {
      temp_v7 = *(unsigned int *)(psVar2 + 0x14);
    }
    if (!temp_v11 || temp_v7 == 0) break;
    temp_v5 = FUN_00293c98();
    temp_v9 = FUN_002934d4();
    if (temp_v9 != 0) {
      FUN_0026c120(0,*(unsigned int *)(psVar2 + 4),0,0,1);
      break;
    }
    if (*(int *)(psVar2 + 0x26) == 0) {
      temp_v10 = *(int *)(psVar2 + 0x14) == 1;
      if ((!temp_v10) && (*(int *)(psVar2 + 0x14) == 2)) {
        temp_v10 = 2;
      }
      FUN_002971e4(*(unsigned int *)(temp_v5 + 0x2254),temp_v10);
      FUN_002b8b78(0x90);
      *(int *)(psVar2 + 0x26) = *(int *)(psVar2 + 0x26) + 1;
      temp_v1 = 1;
      psVar2[1] = temp_v1;
      break;
    }
    if ((*(int *)(psVar2 + 0x26) == 1) &&
       (temp_v5 = FUN_0019dfbc(*(unsigned int *)(temp_v5 + 0x2254)), temp_v5 == 2)) {
      FUN_0026c120(0,*(unsigned int *)(psVar2 + 4),0,0,1);
      FUN_002a0f50();
      FUN_002b8b78();
      break;
    }
    temp_v1 = 1;
    psVar2[1] = temp_v1;
    break;
  case '+':
    FUN_003bf7d0((int)*(short *)(*(int *)(psVar2 + 10) + 0x62),*(unsigned int *)(psVar2 + 0x14));
    break;
  case ',':
    FUN_003c03a4((int)*(short *)(*(int *)(psVar2 + 10) + 0x62),*(unsigned int *)(psVar2 + 0x14),
                 *(unsigned int *)(psVar2 + 0x26),0);
    break;
  case '-':
    if (*(int *)(psVar2 + 0x14) != 0) {
      FUN_0023c85c(DAT_00435d18,(int)*(short *)(*(int *)(psVar2 + 10) + 0x62),
                   (int)*(short *)(*(int *)(psVar2 + 10) + 0x62),6,1,4);
    }
    else {
      FUN_0023c85c(DAT_00435d18,(int)*(short *)(*(int *)(psVar2 + 10) + 0x62),
                   (int)*(short *)(*(int *)(psVar2 + 10) + 0x62),6,0,4);
    }
    break;
  case '.':
    unaff_r5 = (unsigned int *)FUN_00293c98();
    temp_v4 = FUN_0027eb98(DAT_0043427c);
    if (*(int *)(psVar2 + 0x14) == 0) {
      temp_v5 = 0;
      puVar9 = unaff_r5 + 0x7a6;
      puVar5 = unaff_r5 + 0x7f0;
      do {
        unaff_r5 = (unsigned int *)(*puVar5 + temp_v5 * 0x288);
        if (((((*unaff_r5 & 1) != 0) && ((*unaff_r5 & 0x40) == 0)) &&
            (temp_v7 = unaff_r5[0x32], temp_v7 != 0)) && (-1 < (short)unaff_r5[2])) {
          if (((*(unsigned short *)((int)unaff_r5 + 0x1c6) & 8) == 0) && (temp_v7 != 1)) {
            if ((temp_v7 != 2) || (temp_v9 = (int)*(short *)((int)unaff_r5 + 0x1b6), temp_v9 == -1))
            goto LAB_00346a8c;
          }
          else {
            temp_v9 = 1;
          }
          FUN_0027e1a0(0,*(unsigned int *)(psVar2 + 4),*puVar9 + (short)unaff_r5[2] * 0x114,0,temp_v9,
                       0xffffffff,0xffffffff,0,0,0,9,0,1);
          FUN_00250800(0,*(unsigned int *)(psVar2 + 4),0x10001c5,0,1,0,0);
          FUN_0023c274(0,*(unsigned int *)(psVar2 + 4),(int)*(short *)((int)unaff_r5 + 0x6e),
                       unaff_r5[0x32]);
          FUN_0023c22c(DAT_0043427c,temp_v4,(int)(short)unaff_r5[2],temp_v9);
          psVar2[0x14] = 1;
          psVar2[0x15] = 0;
          psVar2[1] = 1;
        }
LAB_00346a8c:
        temp_v5 = temp_v5 + 1;
      } while (temp_v5 < 0x6d);
      break;
    }
    temp_v5 = *(int *)(psVar2 + 0x14) + 1;
    *(int *)(psVar2 + 0x14) = temp_v5;
    if (temp_v5 >= 0x15) break;
    temp_v1 = 1;
    psVar2[1] = temp_v1;
    break;
  case '/':
    temp_v5 = *(int *)(psVar2 + 0x26);
    if (temp_v5 == 0) {
      temp_v5 = FUN_00248728();
      if (temp_v5 == 0) {
        FUN_0029e8e8(0);
      }
      *(int *)(psVar2 + 0x26) = *(int *)(psVar2 + 0x26) + 1;
      temp_v1 = 1;
      psVar2[1] = temp_v1;
      break;
    }
    if (temp_v5 != 1) {
      if ((temp_v5 == 2) && (temp_v5 = FUN_0029c68c(), temp_v5 == 1)) {
        FUN_00295eac(*(unsigned int *)(psVar2 + 0x14));
        FUN_0029cee4(1);
        temp_v1 = 0;
        psVar2[1] = temp_v1;
        break;
      }
    }
    else {
      temp_v5 = FUN_002d8da8();
      if (temp_v5 != 0) {
        FUN_0029c6dc(*(unsigned int *)(psVar2 + 0x14),0);
        *(int *)(psVar2 + 0x26) = *(int *)(psVar2 + 0x26) + 1;
      }
    }
LAB_00345630:
    temp_v1 = 1;
    psVar2[1] = temp_v1;
    break;
  case '0':
    temp_v5 = *param_1;
    temp_v7 = temp_v5 + 0x4900;
    temp_v11 = *(short *)(temp_v5 + 0x496c) == 0;
    if (temp_v11) {
      temp_v7 = (unsigned int)*(unsigned short *)(temp_v5 + 0x496e);
    }
    if (temp_v11 && temp_v7 == 0) {
      FUN_00246e5c(temp_v5,*(unsigned int *)(temp_v5 + 0x49dc));
    }
    break;
  case '1':
    temp_v5 = FUN_00293c98();
    if (*(int *)(psVar2 + 0x14) != 0) {
      temp_v4 = FUN_00394938(*(unsigned int *)(psVar2 + 0x16));
    }
    else if (*(int *)(psVar2 + 0x26) != 0) {
      temp_v4 = FUN_00394968();
    }
    else {
      temp_v4 = FUN_002bf9e4(*(unsigned int *)(psVar2 + 0x16));
    }
    if (0 < psVar2[0x12]) {
      *(unsigned int *)(temp_v5 + 0x49e8) = temp_v4;
    }
    break;
  case '2':
    temp_v5 = FUN_00293c98();
    if (0 < *(int *)(temp_v5 + 0x49e4)) {
      FUN_00250800(0,*(unsigned int *)(psVar2 + 4),*(int *)(temp_v5 + 0x49e4),0,0,0,0);
    }
    break;
  case '3':
    temp_v7 = *(unsigned int *)(*(int *)(psVar2 + 10) + 0x50);
    if ((temp_v7 & 1) != 0 && (temp_v7 & 0x80) != 0) {
      puVar9 = (unsigned int *)*param_1;
      FUN_00282b94(puVar9,(int)*(short *)(*(int *)(psVar2 + 10) + 0x62));
      if ((*puVar9 & 1) != 0 && (*puVar9 & 0x20) != 0) {
        FUN_00338938(*param_1);
      }
    }
    break;
  case '4':
    FUN_003d9a94(DAT_00435d18);
  }
  if ((*(unsigned char *)((int)psVar2 + 5) & 1) == 0) {
    psVar2[1] = psVar2[1] - 1;
  }
  psVar2[3] = psVar2[3] + 1;
  goto joined_r0x003451ac;
}
