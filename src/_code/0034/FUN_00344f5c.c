/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00344f5c` (_code @ 0x344f5c, 0x1b8c bytes) from smt4_v1.2.0.cxi.
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
extern int FUN_0019e0c0(unsigned int);
/* Supplied declaration required: FUN_0020ffd8. */
/* Supplied declaration required: FUN_0023c0d0. */
/* Supplied declaration required: FUN_0023c118. */
/* Supplied declaration required: FUN_0023c154. */
/* Supplied declaration required: FUN_0023c1bc. */
/* Supplied declaration required: FUN_0023c24c. */
/* Supplied declaration required: FUN_0023c368. */
/* Supplied declaration required: FUN_0023c428. */
/* Supplied declaration required: FUN_0023c564. */
/* Supplied declaration required: FUN_0023c5c0. */
/* Supplied declaration required: FUN_0023c5ec. */
/* Supplied declaration required: FUN_0023c638. */
extern int FUN_0023c684(unsigned int);
/* Supplied declaration required: FUN_0023c6e4. */
/* Supplied declaration required: FUN_0023c700. */
/* Supplied declaration required: FUN_0023cd08. */
/* Supplied declaration required: FUN_0023ce90. */
/* Supplied declaration required: FUN_0023ea20. */
/* Supplied declaration required: FUN_0023f4e4. */
/* Supplied declaration required: FUN_0024057c. */
/* Supplied declaration required: FUN_00244fb0. */
extern int FUN_0024502c(unsigned int, unsigned int);
/* Supplied declaration required: FUN_00245228. */
extern int FUN_00245278(unsigned int, unsigned int);
/* Supplied declaration required: FUN_00246cf0. */
extern int FUN_002485b8(void);
/* Supplied declaration required: FUN_002505c0. */
/* Supplied declaration required: FUN_002568c4. */
extern int FUN_00256940(int, int, unsigned int);
/* Supplied declaration required: FUN_002636e4. */
/* Supplied declaration required: FUN_0026beb4. */
/* Supplied declaration required: FUN_0027dbc8. */
/* Supplied declaration required: FUN_0027df30. */
/* Supplied declaration required: FUN_0027e5e4. */
/* Supplied declaration required: FUN_0027e928. */
/* Supplied declaration required: FUN_00282924. */
/* Supplied declaration required: FUN_00293230. */
/* Supplied declaration required: FUN_002939f4. */
/* Supplied declaration required: FUN_00295c08. */
/* Supplied declaration required: FUN_00296f4c. */
extern int FUN_0029c3ec(void);
/* Supplied declaration required: FUN_0029c43c. */
/* Supplied declaration required: FUN_0029cc44. */
/* Supplied declaration required: FUN_0029e648. */
/* Supplied declaration required: FUN_002a0cb0. */
/* Supplied declaration required: FUN_002b6b00. */
/* Supplied declaration required: FUN_002b8838. */
extern unsigned int FUN_002bf80c(unsigned int);
/* Supplied declaration required: FUN_002c415c. */
extern int FUN_002d8e10(void);
/* Supplied declaration required: FUN_002e1118. */
extern unsigned int FUN_00336740(int);
/* Supplied declaration required: FUN_00338060. */
/* Supplied declaration required: FUN_00338704. */
/* Supplied declaration required: FUN_00343f44. */
/* Supplied declaration required: FUN_00344158. */
/* Supplied declaration required: FUN_003445f8. */
/* Supplied declaration required: FUN_00344cf4. */
extern unsigned int FUN_0039471c(unsigned int);
extern unsigned int FUN_0039474c(void);
/* Supplied declaration required: FUN_00394bbc. */
/* Supplied declaration required: FUN_003adc64. */
/* Supplied declaration required: FUN_003ae108. */
/* Supplied declaration required: FUN_003ae418. */
/* Supplied declaration required: FUN_003ae574. */
/* Supplied declaration required: FUN_003aef64. */
/* Supplied declaration required: FUN_003bcdb0. */
/* Supplied declaration required: FUN_003bf5a8. */
/* Supplied declaration required: FUN_003c000c. */
/* Supplied declaration required: FUN_003c017c. */
/* Supplied declaration required: FUN_003c0238. */
/* Supplied declaration required: FUN_003c0390. */
/* Supplied declaration required: FUN_003c041c. */
/* Supplied declaration required: FUN_003c0d70. */
/* Supplied declaration required: FUN_003c1414. */
/* Supplied declaration required: FUN_003c149c. */
/* Supplied declaration required: FUN_003c1a2c. */
extern int FUN_003d0364(int);
/* Supplied declaration required: FUN_003d1388. */
/* Supplied declaration required: FUN_003d6420. */
/* Supplied declaration required: FUN_003d6644. */
/* Supplied declaration required: FUN_003d6df0. */
/* Supplied declaration required: FUN_003d6f98. */
extern int FUN_003d700c(int);
/* Supplied declaration required: FUN_003d86a0. */
/* Supplied declaration required: FUN_003d9868. */
extern int FUN_003d9af8(int, int);
/* Supplied declaration required: FUN_003d9ba0. */
/* Supplied declaration required: FUN_003d9f74. */
/* Supplied declaration required: FUN_003dd14c. */
/* Supplied declaration required: FUN_003de758. */


unsigned int FUN_00344f5c(int *param_1)

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
joined_r0x00344f74:
  psVar2 = psVar13;
  temp_v5 = DAT_00439ca8;
  if (psVar2 == (short *)0x0) {
    return 0;
  }
  temp_v0 = (char)psVar2[2];
  psVar13 = *(short **)(psVar2 + 6);
  if (temp_v0 == '!') goto LAB_00344fa8;
  if (temp_v0 < '!') {
    if (temp_v0 == '\x12' || temp_v0 == '\x13') goto LAB_00344fa8;
  }
  else if (temp_v0 == '\"' || temp_v0 == '+') goto LAB_00344fa8;
  goto LAB_00344fc0;
LAB_00344fa8:
  if ((*(int *)(psVar2 + 10) != 0) && ((*(unsigned int *)(*(int *)(psVar2 + 10) + 0x54) & 7) != 0))
  goto joined_r0x00344f74;
LAB_00344fc0:
  if (0 < *psVar2) {
    *psVar2 = *psVar2 - 1;
    goto joined_r0x00344f74;
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
    FUN_002c415c();
    goto joined_r0x00344f74;
  }
  if ((*(unsigned char *)((int)psVar2 + 5) & 2) != 0) goto joined_r0x00344f74;
  switch(temp_v0) {
  case '\0':
    if (*(int *)(psVar2 + 0x16) == 0) {
      temp_v5 = DAT_00435d18;
      FUN_0023c700(DAT_00435d18,(int)psVar2[0x12],(int)psVar2[0x13],(int)psVar2[0x24],
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
    FUN_00344158(param_1,psVar2);
    break;
  case '\x02':
    puVar9 = (unsigned int *)FUN_002939f4();
    FUN_00282924(puVar9,(int)*(short *)(*(int *)(psVar2 + 10) + 0x62));
    if ((puVar9 != (unsigned int *)0x0) && ((*puVar9 & 0x10) == 0)) {
      temp_v9 = (int)*(short *)((int)puVar9 + 0x6e);
      temp_v5 = *(int *)(psVar2 + 0x14);
      if ((*puVar9 & 0x20) != 0) {
        temp_v9 = 4;
      }
      if ((temp_v5 != 0) && (temp_v5 != 2)) {
        if ((temp_v5 == 1) || (temp_v5 == 3)) {
          FUN_003adc64(DAT_00439ca8,temp_v9);
        }
      }
      else {
        FUN_003adc64(DAT_00439ca8,temp_v9);
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
      temp_v5 = FUN_0027e928(DAT_0043427c);
      if (*(char *)(temp_v5 + 0x59c) != '\0') {
        FUN_00394bbc(*(unsigned int *)(temp_v5 + 0x594) & 0xffff,*(unsigned int *)(psVar2 + 4));
      }
    }
    break;
  case '\x04':
    if (*(int *)(psVar2 + 0x14) < 1) break;
    temp_v4 = FUN_002939f4();
    VectorSignedToFloat((int)(char)psVar2[0x10],(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat((int)*(char *)((int)psVar2 + 0x21),(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat((int)(char)psVar2[0x11],(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat(*(int *)(psVar2 + 0x14) - *(int *)(psVar2 + 0x26),
                        (unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_0023c6e4(temp_v4,*(int *)(psVar2 + 0x14) - *(int *)(psVar2 + 0x26),(int)(char)psVar2[0x10],
                 (int)*(char *)((int)psVar2 + 0x21));
    temp_v5 = *(int *)(psVar2 + 0x26);
    *(int *)(psVar2 + 0x26) = temp_v5 + 1;
    if (*(int *)(psVar2 + 0x14) <= temp_v5 + 1) break;
    temp_v1 = 1;
    psVar2[1] = temp_v1;
    break;
  case '\x05':
    if (*(int *)(psVar2 + 0x14) < 1) break;
    temp_v4 = FUN_002939f4();
    VectorSignedToFloat(*(int *)(psVar2 + 0x14) - *(int *)(psVar2 + 0x26),
                        (unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_002e1118((int)*(short *)(DAT_004398d4 + 0x8c),0);
    FUN_0023c6e4(temp_v4);
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
    FUN_003aef64(DAT_00439ca8,temp_v5);
    break;
  case '\a':
    FUN_00344cf4(param_1,psVar2);
    break;
  case '\b':
    puVar9 = (unsigned int *)FUN_002939f4();
    FUN_00282924(puVar9,(int)*(short *)(*(int *)(psVar2 + 10) + 0x62));
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
    FUN_003aef64(DAT_00439ca8,temp_v5);
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
    FUN_0023c700(DAT_00435d18,temp_v9,temp_v3,4,*(unsigned int *)(psVar2 + 0x14),
                 *(unsigned int *)(psVar2 + 0x26));
    break;
  case '\v':
    temp_v4 = FUN_002939f4();
    temp_v1 = psVar2[0x12];
    if (temp_v1 != 0) {
      if (temp_v1 != 1) {
        if (temp_v1 == 2) {
          temp_v5 = FUN_00245278(temp_v4,0);
joined_r0x003463c0:
          if (temp_v5 != 0) {
            temp_v1 = 0;
            psVar2[1] = temp_v1;
            break;
          }
        }
      }
      else {
        temp_v5 = FUN_0024502c(temp_v4,0);
        if (temp_v5 != 0) {
          FUN_00245228(temp_v4,0);
          temp_v1 = 2;
          psVar2[0x12] = temp_v1;
        }
      }
    }
    else {
      FUN_00244fb0(temp_v4,0,(int)psVar2[0x13],*(unsigned int *)(psVar2 + 0x14),
                   *(unsigned int *)(psVar2 + 0x26) & 0xff);
      temp_v1 = 1;
      psVar2[0x12] = temp_v1;
    }
    temp_v1 = 1;
    psVar2[1] = temp_v1;
    break;
  case '\f':
    temp_v4 = FUN_002939f4();
    temp_v0 = (char)psVar2[0x10];
    if (temp_v0 != '\0') {
      if (temp_v0 != '\x01') {
        if (temp_v0 != '\x02') {
          if (temp_v0 == '\x03') {
            temp_v5 = FUN_00245278(temp_v4,1);
            goto joined_r0x003463c0;
          }
        }
        else {
LAB_00345680:
          temp_v5 = *(int *)(psVar2 + 0x28);
          *(unsigned int *)(psVar2 + 0x28) = temp_v5 + 1U;
          if (*(unsigned int *)(psVar2 + 0x16) <= temp_v5 + 1U) {
            FUN_00245228(temp_v4,1);
            temp_v10 = 3;
            *(unsigned char *)(psVar2 + 0x10) = temp_v10;
          }
        }
      }
      else {
        temp_v5 = FUN_0024502c(temp_v4,1);
        if (temp_v5 != 0) {
          *(unsigned char *)(psVar2 + 0x10) = 2;
          goto LAB_00345680;
        }
      }
    }
    else {
      FUN_00244fb0(temp_v4,1,(int)psVar2[0x13],*(unsigned int *)(psVar2 + 0x14),
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
    temp_v5 = FUN_002939f4();
    if ((*(unsigned int *)(temp_v5 + 0x44a0) & 0x140) != 0) {
      temp_v1 = 0;
      psVar2[1] = temp_v1;
      break;
    }
    if (psVar2[0x12] != 0) {
      if (psVar2[0x12] == 1) {
        temp_v7 = FUN_002b6b00();
        goto joined_r0x0034611c;
      }
    }
    else {
      if (*(int *)(psVar2 + 0x14) >= 1) {
        FUN_003c041c(*(int *)(psVar2 + 0x14),*(unsigned int *)(psVar2 + 0xc));
      }
      else {
        FUN_0027dbc8(*(unsigned int *)(psVar2 + 0x26),1);
      }
      psVar2[0x12] = psVar2[0x12] + 1;
    }
    temp_v1 = 1;
    psVar2[1] = temp_v1;
    break;
  case '\x0f':
    temp_v5 = FUN_002939f4();
    if ((*(unsigned int *)(temp_v5 + 0x44a0) & 0x140) == 0) {
      if (psVar2[0x12] != 0) {
        if (psVar2[0x12] == 1) {
          temp_v5 = FUN_002b6b00();
joined_r0x003459c0:
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
      temp_v9 = FUN_003d0364(DAT_0043427c);
      unaff_r5 = (unsigned int *)0x0;
      if (temp_v9 != 5) {
        temp_v3 = FUN_0023c684(*(unsigned int *)(psVar2 + 0x14));
        if (temp_v3 == 0 || temp_v9 == 1) break;
        if (temp_v9 != 2) {
          if (temp_v9 != 3) {
            temp_v6 = *(short *)(temp_v3 + 2);
            if (temp_v6 != 0) goto LAB_0034583c;
          }
          else {
            temp_v6 = *(short *)(temp_v3 + 4);
            if (temp_v6 != 0) {
LAB_0034583c:
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
          if (temp_v6 != 0) goto LAB_0034583c;
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
                ((*(unsigned short *)((int)puVar9 + 0x1c6) & 0x10) == 0)))) goto LAB_00345938;
            temp_v9 = temp_v9 + 1;
          } while (temp_v9 < 4);
          temp_v4 = 0x21;
          FUN_0027dbc8(temp_v4,1);
        }
        else {
LAB_00345938:
          FUN_003c041c(temp_v1,unaff_r5);
        }
      }
      else {
        unaff_r5 = (unsigned int *)&DAT_0043427c;
        temp_v4 = 0x25;
        temp_v5 = DAT_0043427c;
        FUN_003d1388();
        temp_v11 = temp_v5 < 2;
        temp_v5 = FUN_0027e928(DAT_0043427c);
        FUN_0023c638(DAT_0043427c,(int)*(short *)(*(int *)(temp_v5 + 0x20) + 0x6e));
        FUN_0027dbc8(temp_v4,1);
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
    temp_v5 = FUN_002939f4();
    if ((*(unsigned int *)(temp_v5 + 0x44a0) & 0x140) == 0) {
      if (psVar2[0x12] == 0) {
        FUN_003c0390(*(unsigned int *)(psVar2 + 0x14),*(unsigned int *)(psVar2 + 0x26));
        psVar2[0x12] = psVar2[0x12] + 1;
        temp_v1 = 1;
        psVar2[1] = temp_v1;
        break;
      }
      if (psVar2[0x12] == 1) {
        temp_v5 = FUN_002b6b00();
        goto joined_r0x003459c0;
      }
      temp_v1 = 1;
      psVar2[1] = temp_v1;
      break;
    }
    temp_v1 = 0;
    psVar2[1] = temp_v1;
    break;
  case '\x11':
    temp_v5 = FUN_002939f4();
    if ((*(unsigned int *)(temp_v5 + 0x44a0) & 0x140) == 0) {
      FUN_003c0238(*(int *)(temp_v5 + 0x1fc0) + *(int *)(psVar2 + 0x14) * 0x288,
                   *(unsigned int *)(psVar2 + 0x26));
      break;
    }
    temp_v1 = 0;
    psVar2[1] = temp_v1;
    break;
  case '\x12':
  case '\x13':
    puVar5 = (unsigned int *)FUN_002939f4();
    puVar9 = puVar5;
    FUN_00282924(puVar5,(int)*(short *)(*(int *)(psVar2 + 10) + 0x62));
    if (puVar9 == (unsigned int *)0x0) break;
    if ((char)psVar2[2] == '\x12') {
      if ((*puVar9 & 0x10) != 0) {
        temp_v5 = FUN_00293230(puVar5);
        if (temp_v5 != 0) {
          FUN_003c1414();
        }
        else {
          FUN_003c1a2c(*(unsigned int *)(psVar2 + 10),*(unsigned int *)(psVar2 + 0x26));
        }
      }
      else {
        temp_v5 = (int)*(short *)((int)puVar9 + 0x6e);
        if ((*puVar9 & 0x20) != 0) {
          temp_v5 = 4;
        }
        FUN_003ae108(DAT_00439ca8,temp_v5);
        if (psVar2[0x12] != 0) {
          FUN_003d6df0(DAT_004342c8);
        }
      }
      break;
    }
    if ((char)psVar2[2] != '\x13') break;
    FUN_0027e5e4(*(unsigned int *)(psVar2 + 10));
    break;
  case '\x14':
    unaff_r5 = (unsigned int *)FUN_002939f4();
    FUN_00282924(unaff_r5,(int)*(short *)(*(int *)(psVar2 + 10) + 0x62));
    if (unaff_r5 == (unsigned int *)0x0) break;
    if ((*unaff_r5 & 0x110) != 0) {
      temp_v5 = FUN_002939f4();
      temp_v9 = 0;
      do {
        temp_v3 = (int)*(short *)((int)unaff_r5 + temp_v9 * 2 + 8);
        if (-1 < temp_v3) {
          FUN_0027e5e4(*(int *)(temp_v5 + 0x1e98) + temp_v3 * 0x114);
        }
        temp_v9 = temp_v9 + 1;
      } while (temp_v9 < 0x32);
      break;
    }
    FUN_0027e5e4(*(unsigned int *)(psVar2 + 10));
    break;
  case '\x15':
    FUN_003445f8(param_1,psVar2);
    break;
  case '\x16':
    temp_v5 = FUN_002939f4();
    puVar9 = (unsigned int *)FUN_0027e928(DAT_0043427c);
    unaff_r5 = (unsigned int *)(int)(short)*(unsigned int *)(psVar2 + 0x14);
    if (psVar2[0x13] != 0) {
      unaff_r5 = (unsigned int *)0x1;
    }
    if (((-1 < *(int *)(DAT_004342c8 + 0x760)) &&
        (temp_v9 = FUN_00256940(DAT_004342c8,temp_v5,0), temp_v9 != 0)) &&
       (((*(unsigned int *)(temp_v5 + 0x44a0) & 0x1000) == 0 ||
        (temp_v9 = FUN_003d700c(DAT_004342c8), temp_v9 == 0)))) {
      FUN_002568c4(0,*(unsigned int *)(psVar2 + 4));
    }
    if ((*puVar9 & 0x200) != 0) {
      unaff_r5 = (unsigned int *)0x0;
      *(unsigned int *)(temp_v5 + 0x44a0) = *(unsigned int *)(temp_v5 + 0x44a0) | 0x80;
      FUN_0023c5ec(1,*(unsigned int *)(psVar2 + 4),0xffffffff,1,1);
      if ((*(unsigned int *)(temp_v5 + 0x44a4) & 2) != 0) {
        FUN_0023c5c0(0,*(unsigned int *)(psVar2 + 4));
      }
    }
    else {
      temp_v4 = FUN_00336740(temp_v5);
      if (psVar2[0x12] == 0) {
        temp_v4 = 0xffffffff;
      }
      else if ((*(unsigned int *)(temp_v5 + 0x44a4) & 2) != 0) {
        FUN_0023c5c0(0,*(unsigned int *)(psVar2 + 4));
      }
      FUN_0023c5ec(1,*(unsigned int *)(psVar2 + 4),temp_v4,1,unaff_r5);
    }
    break;
  case '\x17':
    FUN_003d6420(DAT_004342c8,*(unsigned int *)(psVar2 + 0x14));
    break;
  case '\x18':
    temp_v4 = FUN_002939f4();
    if (-1 < psVar2[0x12]) {
      FUN_003d6644(DAT_004342c8,temp_v4);
    }
    if (psVar2[0x13] != 0) {
      FUN_003d86a0(DAT_004342c8,0);
    }
    break;
  case '\x19':
    FUN_003d6f98(DAT_004342c8);
    break;
  case '\x1a':
    temp_v5 = param_1[2];
    do {
      while( 1 ) {
        temp_v9 = temp_v5;
        if (temp_v9 == 0) {
          temp_v5 = FUN_002939f4();
          if (*(char *)(temp_v5 + 0x2f04) < '\x01') {
            FUN_002939f4();
            FUN_0023f4e4();
            FUN_0023c564(0,*(unsigned int *)(psVar2 + 4),0,1,1);
            goto LAB_00346258;
          }
          goto LAB_003453f8;
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
            if (temp_v11 && temp_v9 == 3) goto LAB_003453f8;
          }
        }
        else if (*(int *)(temp_v9 + 8) == *(int *)(psVar2 + 4)) goto LAB_003453f8;
      }
    } while (*(int *)(temp_v9 + 8) != *(int *)(psVar2 + 4));
    temp_v1 = 1;
    psVar2[1] = temp_v1;
    break;
  case '\x1b':
    temp_v5 = FUN_002939f4();
    *(char *)(temp_v5 + 0x2f04) = *(char *)(temp_v5 + 0x2f04) - '\x01';
    break;
  case '\x1c':
    if ((*(unsigned int *)(*param_1 + 0x44a8) & 4) == 0) {
      FUN_003c000c((int)*(short *)(*(int *)(psVar2 + 10) + 0x62),*(unsigned int *)(psVar2 + 0x14));
    }
    break;
  case '\x1d':
    FUN_003bcdb0((int)*(short *)(*(int *)(psVar2 + 10) + 0x62),*(int *)(psVar2 + 0x14) != 0);
    unaff_r5 = (unsigned int *)FUN_002939f4();
    temp_v7 = *(unsigned int *)(psVar2 + 0x26);
    temp_v11 = (temp_v7 & 0x10) != 0;
    if (temp_v11) {
      temp_v7 = *(unsigned int *)(psVar2 + 0x14);
    }
    if (temp_v11 && temp_v7 != 0) {
      puVar9 = (unsigned int *)*param_1;
      FUN_00282924(puVar9,(int)*(short *)(*(int *)(psVar2 + 10) + 0x62));
      if ((*puVar9 & 10) != 0) {
        temp_v5 = FUN_00293230(unaff_r5);
        if (temp_v5 == 0) {
          FUN_002505c0(0,*(unsigned int *)(psVar2 + 4),0x10001d3,0,1,0,0);
        }
        FUN_003ae574(DAT_00439ca8,(int)*(short *)((int)puVar9 + 0x6e));
      }
      else if ((*puVar9 & 0x10) != 0) {
        temp_v5 = FUN_00293230(unaff_r5);
        if (temp_v5 == 0) {
          FUN_002505c0(0,*(unsigned int *)(psVar2 + 4),0x10001d3,0,1,0,0);
        }
        FUN_0023cd08(*param_1,(int)*(short *)(*(int *)(psVar2 + 10) + 0x62));
        FUN_003ae418(DAT_00439ca8,puVar9);
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
        FUN_00338060(*param_1,0);
      }
    }
    break;
  case ' ':
    FUN_003de758(0,*(unsigned int *)(psVar2 + 4));
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
          FUN_0024057c(*param_1,temp_v5);
        }
      }
      else {
        FUN_003c149c(*param_1,temp_v5,temp_v4,temp_v8);
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
joined_r0x0034611c:
    if (temp_v7 != 0) {
      temp_v1 = 1;
      psVar2[1] = temp_v1;
      break;
    }
    temp_v1 = 0;
    psVar2[1] = temp_v1;
    break;
  case '#':
    FUN_00343f44(param_1,psVar2);
    break;
  case '$':
    FUN_003c0d70((int)*(short *)(*(int *)(psVar2 + 0xc) + 0x6e),0);
    FUN_002939f4();
    FUN_0023ce90();
    break;
  case '%':
    temp_v5 = *(int *)(psVar2 + 0x26);
    if (temp_v5 != 0) {
      if (temp_v5 != 1) {
        if ((temp_v5 != 2) ||
           (((temp_v5 = DAT_00435d18, FUN_003dd14c(DAT_00435d18,(int)psVar2[0x12]), temp_v5 != 0 &&
             (temp_v5 = FUN_002636e4(), temp_v5 == 0)) &&
            ((*(unsigned int *)(*(int *)(psVar2 + 10) + 0x50) & 1) != 0)))) {
          temp_v1 = 1;
          psVar2[1] = temp_v1;
          break;
        }
        temp_v5 = FUN_002939f4();
        *(char *)(temp_v5 + 0x2f04) = *(char *)(temp_v5 + 0x2f04) - '\x01';
        temp_v1 = 0;
        psVar2[1] = temp_v1;
        break;
      }
    }
    else {
      FUN_0023c428(DAT_00435d18,(int)*(short *)(*(int *)(psVar2 + 10) + 0x62));
      *(int *)(psVar2 + 0x26) = *(int *)(psVar2 + 0x26) + 1;
    }
    FUN_0023c368(0,*(unsigned int *)(psVar2 + 4),*(unsigned int *)(psVar2 + 10),0,0,0,0,0);
    FUN_0023c24c(DAT_00435d18,(int)psVar2[0x12],*(unsigned int *)(*(int *)(psVar2 + 10) + 0x5c));
    FUN_0023c1bc(*(unsigned int *)(psVar2 + 0x14) & 0xffff,*(unsigned int *)(psVar2 + 4));
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
           ((temp_v5 = FUN_003d9af8(DAT_00435d18,temp_v9), temp_v5 == 0 ||
            ((*(unsigned int *)(*(int *)(psVar2 + 10) + 0x50) & 1) == 0)))) {
          temp_v5 = FUN_002939f4();
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
      FUN_0023c428(DAT_00435d18,temp_v9);
      FUN_003d9f74(DAT_00435d18,temp_v9);
      *(int *)(psVar2 + 0x26) = *(int *)(psVar2 + 0x26) + 1;
    }
    FUN_0023c368(0,*(unsigned int *)(psVar2 + 4),*(unsigned int *)(psVar2 + 10),0,0,0,0,0);
    FUN_0023c24c(DAT_00435d18,(int)psVar2[0x12],*(unsigned int *)(*(int *)(psVar2 + 10) + 0x5c));
    FUN_0023c1bc(*(unsigned int *)(psVar2 + 0x14) & 0xffff,*(unsigned int *)(psVar2 + 4));
    *(int *)(psVar2 + 0x26) = *(int *)(psVar2 + 0x26) + 1;
    temp_v1 = 1;
    psVar2[1] = temp_v1;
    break;
  case '\'':
    unaff_r5 = (unsigned int *)(int)*(short *)(*(int *)(psVar2 + 10) + 0x62);
    temp_v5 = DAT_00435d18;
    FUN_003dd14c(DAT_00435d18,(int)psVar2[0x12]);
    if ((temp_v5 != 0) && ((*(unsigned int *)(*(int *)(psVar2 + 10) + 0x50) & 1) != 0)) {
      temp_v9 = *(int *)(psVar2 + 0x26);
      if (temp_v9 != 0) {
        if (temp_v9 != 1) {
          if (temp_v9 != 2) {
            if (temp_v9 == 3) {
              temp_v5 = FUN_002636e4(temp_v5);
              goto joined_r0x003463c0;
            }
          }
          else {
            if ((*(unsigned short *)(*(int *)(psVar2 + 10) + 0x58) & 0x1000) != 0) {
              temp_v9 = FUN_0020ffd8();
              if (temp_v9 == 1) {
                FUN_0023ea20(temp_v5,2);
              }
              temp_v5 = 3;
              *(int *)(psVar2 + 0x26) = temp_v5;
              temp_v1 = 1;
              psVar2[1] = temp_v1;
              break;
            }
            temp_v9 = FUN_002636e4(temp_v5);
            if (temp_v9 != 0) {
              FUN_0023ea20(temp_v5,1);
            }
          }
        }
        else {
          temp_v9 = FUN_002636e4(temp_v5);
          if (temp_v9 != 0) {
            temp_v9 = FUN_0020ffd8(temp_v5);
            if (temp_v9 == 0) {
              FUN_0023ea20(temp_v5,1);
            }
            temp_v5 = 2;
            *(int *)(psVar2 + 0x26) = temp_v5;
          }
        }
        temp_v1 = 1;
        psVar2[1] = temp_v1;
        break;
      }
      FUN_0023c428(DAT_00435d18,unaff_r5);
      FUN_0023c24c(DAT_00435d18,(int)psVar2[0x12]);
      temp_v5 = 1;
      *(int *)(psVar2 + 0x26) = temp_v5;
      temp_v1 = 1;
      psVar2[1] = temp_v1;
      break;
    }
LAB_00346258:
    temp_v1 = 0;
    psVar2[1] = temp_v1;
    break;
  case '(':
    temp_v1 = *(short *)(*(int *)(psVar2 + 10) + 0x60);
    temp_v4 = FUN_002939f4();
    FUN_0023c154(temp_v4,5,(int)temp_v1,0,unaff_r5);
    puVar9 = (unsigned int *)FUN_002939f4();
    FUN_00282924(puVar9,(int)*(short *)(*(int *)(psVar2 + 10) + 0x62));
    if (puVar9 != (unsigned int *)0x0) {
      *puVar9 = *puVar9 & 0xf7ffffff;
    }
    break;
  case ')':
    FUN_003d9ba0(DAT_00435d18);
    break;
  case '*':
    temp_v7 = **(unsigned int **)(psVar2 + 0xc);
    temp_v11 = (temp_v7 & 0x100) != 0;
    if (temp_v11) {
      temp_v7 = *(unsigned int *)(psVar2 + 0x14);
    }
    if (!temp_v11 || temp_v7 == 0) break;
    temp_v5 = FUN_002939f4();
    temp_v9 = FUN_00293230();
    if (temp_v9 != 0) {
      FUN_0026beb4(0,*(unsigned int *)(psVar2 + 4),0,0,1);
      break;
    }
    if (*(int *)(psVar2 + 0x26) == 0) {
      temp_v10 = *(int *)(psVar2 + 0x14) == 1;
      if ((!temp_v10) && (*(int *)(psVar2 + 0x14) == 2)) {
        temp_v10 = 2;
      }
      FUN_00296f4c(*(unsigned int *)(temp_v5 + 0x2254),temp_v10);
      FUN_002b8838(0x90);
      *(int *)(psVar2 + 0x26) = *(int *)(psVar2 + 0x26) + 1;
      temp_v1 = 1;
      psVar2[1] = temp_v1;
      break;
    }
    if ((*(int *)(psVar2 + 0x26) == 1) &&
       (temp_v5 = FUN_0019e0c0(*(unsigned int *)(temp_v5 + 0x2254)), temp_v5 == 2)) {
      FUN_0026beb4(0,*(unsigned int *)(psVar2 + 4),0,0,1);
      FUN_002a0cb0();
      FUN_002b8838();
      break;
    }
    temp_v1 = 1;
    psVar2[1] = temp_v1;
    break;
  case '+':
    FUN_003bf5a8((int)*(short *)(*(int *)(psVar2 + 10) + 0x62),*(unsigned int *)(psVar2 + 0x14));
    break;
  case ',':
    FUN_003c017c((int)*(short *)(*(int *)(psVar2 + 10) + 0x62),*(unsigned int *)(psVar2 + 0x14),
                 *(unsigned int *)(psVar2 + 0x26),0);
    break;
  case '-':
    if (*(int *)(psVar2 + 0x14) != 0) {
      FUN_0023c700(DAT_00435d18,(int)*(short *)(*(int *)(psVar2 + 10) + 0x62),
                   (int)*(short *)(*(int *)(psVar2 + 10) + 0x62),6,1,4);
    }
    else {
      FUN_0023c700(DAT_00435d18,(int)*(short *)(*(int *)(psVar2 + 10) + 0x62),
                   (int)*(short *)(*(int *)(psVar2 + 10) + 0x62),6,0,4);
    }
    break;
  case '.':
    unaff_r5 = (unsigned int *)FUN_002939f4();
    temp_v4 = FUN_0027e928(DAT_0043427c);
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
            goto LAB_00346854;
          }
          else {
            temp_v9 = 1;
          }
          FUN_0027df30(0,*(unsigned int *)(psVar2 + 4),*puVar9 + (short)unaff_r5[2] * 0x114,0,temp_v9,
                       0xffffffff,0xffffffff,0,0,0,9,0,1);
          FUN_002505c0(0,*(unsigned int *)(psVar2 + 4),0x10001c5,0,1,0,0);
          FUN_0023c118(0,*(unsigned int *)(psVar2 + 4),(int)*(short *)((int)unaff_r5 + 0x6e),
                       unaff_r5[0x32]);
          FUN_0023c0d0(DAT_0043427c,temp_v4,(int)(short)unaff_r5[2],temp_v9);
          psVar2[0x14] = 1;
          psVar2[0x15] = 0;
          psVar2[1] = 1;
        }
LAB_00346854:
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
      temp_v5 = FUN_002485b8();
      if (temp_v5 == 0) {
        FUN_0029e648(0);
      }
      *(int *)(psVar2 + 0x26) = *(int *)(psVar2 + 0x26) + 1;
      temp_v1 = 1;
      psVar2[1] = temp_v1;
      break;
    }
    if (temp_v5 != 1) {
      if ((temp_v5 == 2) && (temp_v5 = FUN_0029c3ec(), temp_v5 == 1)) {
        FUN_00295c08(*(unsigned int *)(psVar2 + 0x14));
        FUN_0029cc44(1);
        temp_v1 = 0;
        psVar2[1] = temp_v1;
        break;
      }
    }
    else {
      temp_v5 = FUN_002d8e10();
      if (temp_v5 != 0) {
        FUN_0029c43c(*(unsigned int *)(psVar2 + 0x14),0);
        *(int *)(psVar2 + 0x26) = *(int *)(psVar2 + 0x26) + 1;
      }
    }
LAB_003453f8:
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
      FUN_00246cf0(temp_v5,*(unsigned int *)(temp_v5 + 0x49dc));
    }
    break;
  case '1':
    temp_v5 = FUN_002939f4();
    if (*(int *)(psVar2 + 0x14) != 0) {
      temp_v4 = FUN_0039471c(*(unsigned int *)(psVar2 + 0x16));
    }
    else if (*(int *)(psVar2 + 0x26) != 0) {
      temp_v4 = FUN_0039474c();
    }
    else {
      temp_v4 = FUN_002bf80c(*(unsigned int *)(psVar2 + 0x16));
    }
    if (0 < psVar2[0x12]) {
      *(unsigned int *)(temp_v5 + 0x49e8) = temp_v4;
    }
    break;
  case '2':
    temp_v5 = FUN_002939f4();
    if (0 < *(int *)(temp_v5 + 0x49e4)) {
      FUN_002505c0(0,*(unsigned int *)(psVar2 + 4),*(int *)(temp_v5 + 0x49e4),0,0,0,0);
    }
    break;
  case '3':
    temp_v7 = *(unsigned int *)(*(int *)(psVar2 + 10) + 0x50);
    if ((temp_v7 & 1) != 0 && (temp_v7 & 0x80) != 0) {
      puVar9 = (unsigned int *)*param_1;
      FUN_00282924(puVar9,(int)*(short *)(*(int *)(psVar2 + 10) + 0x62));
      if ((*puVar9 & 1) != 0 && (*puVar9 & 0x20) != 0) {
        FUN_00338704(*param_1);
      }
    }
    break;
  case '4':
    FUN_003d9868(DAT_00435d18);
  }
  if ((*(unsigned char *)((int)psVar2 + 5) & 1) == 0) {
    psVar2[1] = psVar2[1] - 1;
  }
  psVar2[3] = psVar2[3] + 1;
  goto joined_r0x00344f74;
}
