/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c8c90` (_code @ 0x2c8c90, 0xe48 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp68; /* 0x68: local_68 */
} void_stack;

extern unsigned char DAT_004045ac; /* 0x4045ac */
extern unsigned char DAT_0040464c; /* 0x40464c */
extern unsigned char DAT_004046ec; /* 0x4046ec */
extern unsigned char DAT_0040478c; /* 0x40478c */
extern int DAT_00447e88; /* 0x447e88 */
extern int DAT_0049f91c; /* 0x49f91c */
extern int DAT_0049f920; /* 0x49f920 */
extern signed char DAT_0049f93d; /* 0x49f93d */
extern unsigned char DAT_0049f94f; /* 0x49f94f */
extern signed char DAT_0049fa98; /* 0x49fa98 */
extern unsigned int DAT_0049fa9c; /* 0x49fa9c */
extern unsigned int DAT_0049faa0; /* 0x49faa0 */
extern unsigned int DAT_0049faa4; /* 0x49faa4 */
extern unsigned int DAT_0049faa8; /* 0x49faa8 */
extern short DAT_0049faac; /* 0x49faac */
extern unsigned short DAT_0049faae; /* 0x49faae */
extern short DAT_0049fab0; /* 0x49fab0 */
extern signed char DAT_0049fabc; /* 0x49fabc */
extern unsigned int DAT_0049fac0; /* 0x49fac0 */
extern unsigned int DAT_0049fb34; /* 0x49fb34 */
extern signed char DAT_0049fce8; /* 0x49fce8 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00256524. */
/* Supplied declaration required: FUN_002565b0. */
extern int FUN_00256750(void);
extern int FUN_0025a378(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0025beb8. */
/* Supplied declaration required: FUN_0025bffc. */
/* Supplied declaration required: FUN_0027f6fc. */
/* Supplied declaration required: FUN_0027fab8. */
/* Supplied declaration required: FUN_0027fbc8. */
/* Supplied declaration required: FUN_0027fd08. */
/* Supplied declaration required: FUN_0027ff10. */
/* Supplied declaration required: FUN_002805d4. */
/* Supplied declaration required: FUN_0028075c. */
/* Supplied declaration required: FUN_00280bf8. */
/* Supplied declaration required: FUN_00282600. */
/* Supplied declaration required: FUN_0028277c. */
/* Supplied declaration required: FUN_00287c44. */
/* Supplied declaration required: FUN_00287d54. */
/* Supplied declaration required: FUN_002920e4. */
extern int FUN_00297004(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002bcf58. */


void FUN_002c8c90(void)

{
/* irregular: 9 goto(s); irregular input(s): in_fpscr; 19 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int *puVar7;
  unsigned int *puVar8;
  int unaff_r4;
  int unaff_r5;
  unsigned int in_fpscr;
  float temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  float temp_v9;
  float temp_v10;
  float temp_v11;
  float temp_v12;
  float temp_v13;
  float temp_v14;
  int aiStack_2e8 [40];
  int aiStack_248 [40];
  int aiStack_1a8 [40];
  int aiStack_108 [40];
  unsigned int temp_v15;
  unsigned int uStack_64;
  unsigned int uStack_60;
  unsigned int temp_v16;
  unsigned int temp_v17 [13];
  
  FUN_002bcf58(aiStack_2e8,&DAT_004045ac,0xa0);
  FUN_002bcf58(aiStack_248,&DAT_0040464c,0xa0);
  FUN_002bcf58(aiStack_1a8,&DAT_004046ec,0xa0);
  FUN_002bcf58(aiStack_108,&DAT_0040478c,0xa0);
  temp_v2 = DAT_00447e88;
  temp_v14 = 0.33333334f;
  temp_v4 = *(int *)(DAT_00447e88 + 4);
  temp_v9 = *(float *)(DAT_00447e88 + 0x28);
  temp_v8 = *(unsigned int *)(DAT_00447e88 + 0x2c);
  temp_v7 = *(unsigned int *)(DAT_00447e88 + 0x30);
  if (temp_v4 != 0) {
    temp_v12 = 0.0f;
    temp_v13 = 20.0f;
    if (temp_v4 != 1) {
      if (temp_v4 == 2) {
        *(int *)(DAT_00447e88 + 8) = *(int *)(DAT_00447e88 + 8) + 1;
        if (((DAT_0049f91c != 0x24) && (temp_v2 = FUN_0025a378(2,5), temp_v2 != 0)) &&
           (*(float *)(DAT_00447e88 + 0x160) < temp_v12)) {
          FUN_002565b0(2,5);
          *(unsigned int *)(DAT_00447e88 + 0x160) = 0x447a0000;
          FUN_00256524(0xf,0x50);
          temp_v3 = FUN_002920e4(0x1000186);
          temp_v2 = DAT_00447e88;
          *(unsigned int *)(DAT_00447e88 + 0x18c) = temp_v3;
          *(unsigned int *)(temp_v2 + 400) = 0x14;
        }
        if (temp_v12 > *(float *)(DAT_00447e88 + 0x15c)) {
          temp_v2 = DAT_0049f91c;
          if (DAT_0049f91c == 5) {
            temp_v2 = DAT_0049f920;
          }
          if (DAT_0049f91c == 5 && temp_v2 == 9) {
            temp_v3 = 0x44bb8000;
          }
          else {
            temp_v3 = 0x43fa0000;
          }
          *(unsigned int *)(DAT_00447e88 + 0x15c) = temp_v3;
          temp_v3 = 0x20;
          FUN_0027fd08(temp_v3);
        }
        else {
          FUN_0027fbc8(&temp_v16,temp_v17,0);
          if (DAT_0049fb34 != 0) {
            if (DAT_0049fb34 == 1) {
              if (*(int *)(DAT_00447e88 + 8) == 5) {
                FUN_0027ff10(0xffffffff);
                FUN_0025beb8();
                FUN_0025bffc();
              }
              temp_v2 = *(int *)(DAT_00447e88 + 8);
joined_r0x002c97fc:
              if (temp_v2 == 6) {
                FUN_0025beb8();
                FUN_0025bffc();
              }
              goto LAB_002c98bc;
            }
            if (DAT_0049fb34 == 2) {
              if (*(int *)(DAT_00447e88 + 8) == 5) {
                FUN_0027ff10(0xffffffff);
                FUN_0025beb8();
                FUN_0025bffc();
              }
              temp_v2 = *(int *)(DAT_00447e88 + 8);
              goto joined_r0x002c97fc;
            }
            if (DAT_0049fb34 == 3) {
              if (*(int *)(DAT_00447e88 + 8) == 5) {
                FUN_0027ff10(0xffffffff);
                FUN_0025beb8();
                FUN_0025bffc();
              }
              temp_v2 = *(int *)(DAT_00447e88 + 8);
              goto joined_r0x002c97b8;
            }
          }
          else {
            if (*(int *)(DAT_00447e88 + 8) == 5) {
              FUN_0027ff10(0xffffffff);
              FUN_0025beb8();
              FUN_0025bffc();
            }
            temp_v2 = *(int *)(DAT_00447e88 + 8);
joined_r0x002c97b8:
            if (temp_v2 == 6) {
              FUN_0025bffc();
              FUN_0025beb8();
            }
LAB_002c98bc:
            if (DAT_0049fb34 != 0) {
              if (DAT_0049fb34 != 1) {
                if (DAT_0049fb34 != 2) {
                  if ((DAT_0049fb34 == 3) && (*(int *)(DAT_00447e88 + 8) >= 9)) {
                    temp_v4 = FUN_00256750();
                    temp_v2 = DAT_00447e88;
joined_r0x002c9954:
                    DAT_00447e88 = temp_v2;
                    if (temp_v4 != 0) {
                      *(unsigned int *)(temp_v2 + 4) = 0;
                      *(unsigned int *)(temp_v2 + 8) = 0;
                      goto LAB_002c9a10;
                    }
                  }
                }
                else if (*(int *)(DAT_00447e88 + 8) >= 9) {
                  temp_v4 = FUN_00256750();
                  temp_v2 = DAT_00447e88;
                  goto joined_r0x002c9954;
                }
              }
              else if (*(int *)(DAT_00447e88 + 8) >= 4) {
                temp_v4 = FUN_00256750();
                temp_v2 = DAT_00447e88;
                goto joined_r0x002c9954;
              }
            }
            else if (*(int *)(DAT_00447e88 + 8) >= 7) {
              temp_v4 = FUN_00256750();
              temp_v2 = DAT_00447e88;
              goto joined_r0x002c9954;
            }
          }
          temp_v2 = DAT_00447e88;
          if (((temp_v16 >= 0xbf000001) || ((int)temp_v16 >= 0x3f000001)) ||
             ((temp_v17[0] >= 0xbf000001 ||
              (((int)temp_v17[0] >= 0x3f000001 || (*(int *)(DAT_00447e88 + 8) >= 0xb)))))) {
            *(float *)(DAT_00447e88 + 0x68) = temp_v12;
            *(unsigned int *)(temp_v2 + 0x58) = 0x40a00000;
            if (*(int *)(temp_v2 + 8) >= 0xb) {
              *(unsigned int *)(temp_v2 + 0x188) = 1;
            }
            else if (DAT_0049fb34 < 2) {
              *(unsigned int *)(temp_v2 + 0x188) = 2;
            }
            else if (DAT_0049fb34 == 2 || DAT_0049fb34 == 3) {
              *(unsigned int *)(temp_v2 + 0x188) = 4;
            }
            temp_v3 = 1;
            FUN_0027fd08(temp_v3);
          }
        }
        goto LAB_002c9a00;
      }
    }
    else {
      temp_v11 = 0.017453292f;
      temp_v2 = *(int *)(DAT_00447e88 + 8) + 1;
      *(int *)(DAT_00447e88 + 8) = temp_v2;
      if (temp_v2 < 0x14) {
        if (DAT_0049fb34 != 0) {
          if (DAT_0049fb34 != 1) {
            if (DAT_0049fb34 != 2) {
              if (DAT_0049fb34 == 3) {
                unaff_r5 = aiStack_108[temp_v2 * 2];
                unaff_r4 = aiStack_108[temp_v2 * 2 + 1];
              }
            }
            else {
              unaff_r5 = aiStack_1a8[temp_v2 * 2];
              unaff_r4 = aiStack_1a8[temp_v2 * 2 + 1];
            }
          }
          else {
            unaff_r5 = aiStack_248[temp_v2 * 2];
            unaff_r4 = aiStack_248[temp_v2 * 2 + 1];
          }
        }
        else {
          unaff_r5 = aiStack_2e8[temp_v2 * 2];
          unaff_r4 = aiStack_2e8[temp_v2 * 2 + 1];
        }
        if (unaff_r5 >> 0x10 != 0) {
          VectorSignedToFloat(unaff_r4 >> 0x10,(unsigned char)(in_fpscr >> 0x16) & 3);
          VectorSignedToFloat((int)(short)unaff_r4,(unsigned char)(in_fpscr >> 0x16) & 3);
          FUN_0025bffc(unaff_r4 >> 0x10,(int)(short)unaff_r4);
        }
        temp_v10 = (float)VectorSignedToFloat((int)(short)unaff_r5,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v6 = *(float *)(DAT_00447e88 + 0x50) * temp_v11;
        FUN_0028277c();
        temp_v2 = DAT_00447e88;
        *(float *)(DAT_00447e88 + 0x28) = *(float *)(DAT_00447e88 + 0x28) + temp_v6 * temp_v10;
        temp_v11 = *(float *)(temp_v2 + 0x50) * temp_v11;
        FUN_00282600();
        *(float *)(DAT_00447e88 + 0x30) = *(float *)(DAT_00447e88 + 0x30) + temp_v11 * temp_v10;
        FUN_0027fab8();
        temp_v2 = DAT_00447e88;
        *(unsigned int *)(DAT_00447e88 + 0x28) = temp_v15;
        *(unsigned int *)(temp_v2 + 0x2c) = uStack_64;
        *(unsigned int *)(temp_v2 + 0x30) = uStack_60;
        *(float *)(temp_v2 + 0x34) = temp_v9;
        *(unsigned int *)(temp_v2 + 0x38) = temp_v8;
        *(unsigned int *)(temp_v2 + 0x3c) = temp_v7;
        if ((DAT_0049fce8 == '\0') && (DAT_0049f93d != '\0')) {
          temp_v0 = temp_v2 + 0x28;
          FUN_0027f6fc(temp_v0,temp_v2 + 0x34);
          temp_v2 = DAT_00447e88;
          temp_v4 = 0;
          if (temp_v0 != 0) {
            temp_v4 = DAT_00447e88;
          }
          if (temp_v0 != 0) {
            *(float *)(temp_v4 + 0x68) = temp_v12;
          }
          else {
            temp_v11 = *(float *)(DAT_00447e88 + 0x68) + 2.0f;
            *(float *)(DAT_00447e88 + 0x68) = temp_v11;
            if ((int)temp_v11 < 0x41a00001) {
              temp_v13 = temp_v11;
            }
            *(float *)(temp_v2 + 0x68) = temp_v13;
          }
        }
        temp_v13 = temp_v9;
        if ((DAT_0049f91c != 0x24) && (temp_v2 = FUN_0025a378(2,5), temp_v13 = temp_v9, temp_v2 != 0)) {
          FUN_00287d54();
          *(float *)(DAT_00447e88 + 0x160) = *(float *)(DAT_00447e88 + 0x160) - temp_v9;
        }
        temp_v1 = DAT_00447e88 + 0x28;
        FUN_0028075c();
        temp_v9 = temp_v13;
        if ((temp_v1 & 2) != 0) {
          FUN_00287d54();
          *(float *)(DAT_00447e88 + 0x15c) = *(float *)(DAT_00447e88 + 0x15c) - temp_v13;
          DAT_0049f94f = 4;
        }
        else {
          if (temp_v12 < *(float *)(DAT_00447e88 + 0x15c)) {
            FUN_00287d54();
            *(float *)(DAT_00447e88 + 0x15c) = *(float *)(DAT_00447e88 + 0x15c) - temp_v13;
          }
          if (temp_v12 < *(float *)(DAT_00447e88 + 0x15c)) {
            temp_v12 = *(float *)(DAT_00447e88 + 0x15c);
          }
          *(float *)(DAT_00447e88 + 0x15c) = temp_v12;
          DAT_0049f94f = 0xff;
        }
        temp_v2 = DAT_00447e88;
        puVar7 = (unsigned int *)(DAT_00447e88 + 0x1c);
        puVar8 = (unsigned int *)(DAT_00447e88 + 0x40);
        *(float *)(DAT_00447e88 + 0x1c) =
             *(float *)(DAT_00447e88 + 0x1c) +
             (*(float *)(DAT_00447e88 + 0x28) - *(float *)(DAT_00447e88 + 0x1c)) * temp_v14;
        *(float *)(temp_v2 + 0x20) =
             *(float *)(temp_v2 + 0x20) +
             (*(float *)(temp_v2 + 0x2c) - *(float *)(temp_v2 + 0x20)) * temp_v14;
        temp_v12 = *(float *)(temp_v2 + 0x24) +
                 (*(float *)(temp_v2 + 0x30) - *(float *)(temp_v2 + 0x24)) * temp_v14;
        *(float *)(temp_v2 + 0x24) = temp_v12;
        temp_v3 = *(unsigned int *)(temp_v2 + 0x20);
        *puVar8 = *puVar7;
        *(unsigned int *)(temp_v2 + 0x44) = temp_v3;
        *(float *)(temp_v2 + 0x48) = temp_v12;
        *(float *)(temp_v2 + 0x34) = temp_v9;
        *(unsigned int *)(temp_v2 + 0x38) = temp_v8;
        *(unsigned int *)(temp_v2 + 0x3c) = temp_v7;
      }
      if (DAT_0049fb34 != 0) {
        if (DAT_0049fb34 != 1) {
          if (DAT_0049fb34 != 2) {
            if (DAT_0049fb34 == 3) {
              if (*(int *)(DAT_00447e88 + 8) == 2) {
                FUN_0028277c();
                FUN_00282600();
                temp_v2 = FUN_00297004(0,2);
                FUN_002920e4(temp_v2 + 0x1000235);
              }
              if (*(int *)(DAT_00447e88 + 8) == 3) {
                FUN_0028277c();
                FUN_00282600();
                FUN_002920e4(0x10001f3);
                FUN_0027ff10(0xffffffff);
              }
              if ((*(int *)(DAT_00447e88 + 8) == 6) &&
                 (FUN_0025beb8(), *(int *)(DAT_00447e88 + 8) == 6)) {
                temp_v5 = 0x14;
                temp_v3 = 6;
                FUN_00287c44(temp_v3,temp_v5,0);
              }
            }
          }
          else {
            if (*(int *)(DAT_00447e88 + 8) == 2) {
              FUN_0028277c();
              FUN_00282600();
              temp_v2 = FUN_00297004(0,2);
              FUN_002920e4(temp_v2 + 0x1000232);
            }
            if (*(int *)(DAT_00447e88 + 8) == 3) {
              FUN_0028277c();
              FUN_00282600();
              FUN_002920e4(0x10001f2);
              FUN_0027ff10(0xffffffff);
            }
            if (*(int *)(DAT_00447e88 + 8) == 4) {
              FUN_0025beb8();
            }
          }
        }
        else {
          if (*(int *)(DAT_00447e88 + 8) == 3) {
            FUN_0028277c();
            FUN_00282600();
            FUN_002920e4(0x10001f1);
            FUN_0028277c();
            FUN_00282600();
            temp_v2 = FUN_00297004(0,2);
            FUN_002920e4(temp_v2 + 0x100022f);
            FUN_0027ff10(0xffffffff);
          }
          if (*(int *)(DAT_00447e88 + 8) == 6) {
            FUN_0025beb8();
          }
        }
      }
      else {
        if (*(int *)(DAT_00447e88 + 8) == 3) {
          FUN_0028277c();
          FUN_00282600();
          FUN_002920e4(0x10001f0);
          FUN_0028277c();
          FUN_00282600();
          temp_v2 = FUN_00297004(0,2);
          FUN_002920e4(temp_v2 + 0x100022c);
          FUN_0027ff10(0xffffffff);
        }
        if ((*(int *)(DAT_00447e88 + 8) == 6) && (FUN_0025beb8(), *(int *)(DAT_00447e88 + 8) == 6))
        {
          temp_v5 = 8;
          temp_v3 = 4;
          FUN_00287c44(temp_v3,temp_v5,0);
        }
      }
      temp_v2 = DAT_00447e88;
      if (*(int *)(DAT_00447e88 + 8) == 3) {
        *(unsigned int *)(DAT_00447e88 + 0x16c) = 0xffffffff;
        *(unsigned int *)(temp_v2 + 0x168) = 0;
        DAT_0049fa98 = '\x01';
        DAT_0049fa9c = *(unsigned int *)(temp_v2 + 0x1c);
        DAT_0049faa0 = *(unsigned int *)(temp_v2 + 0x20);
        DAT_0049faa4 = *(unsigned int *)(temp_v2 + 0x24);
        DAT_0049faa8 = *(unsigned int *)(temp_v2 + 0x4c);
        DAT_0049faac = 0;
        DAT_0049faae = 0;
      }
      if (DAT_0049fa98 != '\0') {
        DAT_0049fa9c = *(unsigned int *)(temp_v2 + 0x1c);
        DAT_0049faa0 = *(unsigned int *)(temp_v2 + 0x20);
        DAT_0049faa4 = *(unsigned int *)(temp_v2 + 0x24);
        DAT_0049faa8 = *(unsigned int *)(temp_v2 + 0x4c);
        DAT_0049faac = DAT_0049faac + 1;
        temp_v4 = (int)DAT_0049faac;
        DAT_0049faae = 0;
        if (DAT_0049fb34 != 0) {
          if (DAT_0049fb34 != 1) {
            if (DAT_0049fb34 != 2) {
              if ((DAT_0049fb34 == 3) && (4 >= temp_v4 - 5U)) {
                DAT_0049faae = 1;
              }
            }
            else if (temp_v4 - 6U < 6) {
              DAT_0049faae = 1;
            }
          }
          else {
            temp_v1 = temp_v4 - 3;
            if (temp_v1 < 4) {
              DAT_0049faae = 1;
            }
          }
        }
        else {
          temp_v1 = temp_v4 - 5;
          if (temp_v1 < 4) {
            DAT_0049faae = 1;
          }
        }
      }
      if ((DAT_0049fabc == '\0') && (0 < DAT_0049fab0)) {
        DAT_0049fabc = '\x01';
        DAT_0049fac0 = 0;
      }
      else if ((DAT_0049fab0 == 0) && (*(int *)(temp_v2 + 8) >= 0xf)) {
        DAT_0049fa98 = '\0';
        *(unsigned int *)(temp_v2 + 0x168) = 0;
        *(int *)(temp_v2 + 4) = *(int *)(temp_v2 + 4) + 1;
        *(unsigned int *)(temp_v2 + 8) = 0;
      }
LAB_002c9a00:
      if (*(int *)(DAT_00447e88 + 4) == 1) goto LAB_002c9a1c;
    }
LAB_002c9a10:
    FUN_0028075c(DAT_00447e88 + 0x28);
  }
  else {
    *(unsigned char *)(DAT_00447e88 + 0x6c) = 0;
    if (DAT_0049fb34 == 0) {
      *(unsigned int *)(temp_v2 + 0x54) = 4;
    }
    else if (DAT_0049fb34 == 1) {
      temp_v3 = 0x16;
      *(unsigned int *)(temp_v2 + 0x54) = temp_v3;
    }
    else if (DAT_0049fb34 == 2) {
      temp_v3 = 0x17;
      *(unsigned int *)(temp_v2 + 0x54) = temp_v3;
    }
    else if (DAT_0049fb34 == 3) {
      *(unsigned int *)(temp_v2 + 0x54) = 0x18;
    }
    *(unsigned int *)(temp_v2 + 0x58) = 0x40400000;
    *(unsigned char *)(temp_v2 + 0x5c) = 1;
    *(unsigned int *)(temp_v2 + 4) = 1;
    *(unsigned int *)(temp_v2 + 8) = 0;
  }
LAB_002c9a1c:
  FUN_002805d4();
  FUN_00280bf8();
  temp_v2 = DAT_00447e88;
  puVar7 = (unsigned int *)(DAT_00447e88 + 0x1c);
  puVar8 = (unsigned int *)(DAT_00447e88 + 0x40);
  *(float *)(DAT_00447e88 + 0x1c) =
       *(float *)(DAT_00447e88 + 0x1c) +
       (*(float *)(DAT_00447e88 + 0x28) - *(float *)(DAT_00447e88 + 0x1c)) * temp_v14;
  *(float *)(temp_v2 + 0x20) =
       *(float *)(temp_v2 + 0x20) + (*(float *)(temp_v2 + 0x2c) - *(float *)(temp_v2 + 0x20)) * 0.16666667f
  ;
  temp_v14 = *(float *)(temp_v2 + 0x24) + (*(float *)(temp_v2 + 0x30) - *(float *)(temp_v2 + 0x24)) * temp_v14
  ;
  *(float *)(temp_v2 + 0x24) = temp_v14;
  temp_v3 = *(unsigned int *)(temp_v2 + 0x20);
  *puVar8 = *puVar7;
  *(unsigned int *)(temp_v2 + 0x44) = temp_v3;
  *(float *)(temp_v2 + 0x48) = temp_v14;
  *(float *)(temp_v2 + 0x34) = temp_v9;
  *(unsigned int *)(temp_v2 + 0x38) = temp_v8;
  *(unsigned int *)(temp_v2 + 0x3c) = temp_v7;
  return;
}
