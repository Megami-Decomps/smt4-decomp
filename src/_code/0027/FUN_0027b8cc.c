/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0027b8cc` (_code @ 0x27b8cc, 0xd74 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 26 slot(s), 104 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int sp9C; /* 0x9c: local_9c */
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned int spA8; /* 0xa8: local_a8 */
    unsigned int spAC; /* 0xac: local_ac */
    unsigned int spB0; /* 0xb0: local_b0 */
    unsigned int spB4; /* 0xb4: local_b4 */
    unsigned int spB8; /* 0xb8: local_b8 */
    unsigned int spBC; /* 0xbc: local_bc */
    unsigned int spC0; /* 0xc0: local_c0 */
    unsigned int spC4; /* 0xc4: local_c4 */
    unsigned int spC8; /* 0xc8: local_c8 */
    unsigned int spCC; /* 0xcc: local_cc */
    unsigned int spD0; /* 0xd0: local_d0 */
} param_2_stack;

extern unsigned char LAB_0027c3d4; /* 0x27c3d4 */
extern int DAT_00447a2c; /* 0x447a2c */
extern unsigned char DAT_00447a30; /* 0x447a30 */
extern unsigned char DAT_00447a31; /* 0x447a31 */
extern unsigned char DAT_00447a32; /* 0x447a32 */
extern unsigned char DAT_00447a33; /* 0x447a33 */
extern unsigned char DAT_00447a34; /* 0x447a34 */
extern unsigned char DAT_004a1264; /* 0x4a1264 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern int FUN_00248320(void);
/* Supplied declaration required: FUN_00248358. */
extern unsigned int *FUN_002483b8(unsigned int);
extern int FUN_00248418(void);
/* Supplied declaration required: FUN_0024f460. */
/* Supplied declaration required: FUN_0024f6e4. */
/* Supplied declaration required: FUN_0025b8a8. */
/* Supplied declaration required: FUN_00263ee4. */
extern unsigned int FUN_002762d0(int);
extern unsigned int *FUN_0027636c(int);
extern int FUN_002764d4(int);
extern int FUN_0027dbd8(void);
extern unsigned int *FUN_00287b10(int);
/* Supplied declaration required: FUN_00299064. */
/* Supplied declaration required: FUN_002a7fc4. */
/* Supplied declaration required: FUN_002bf86c. */
/* Supplied declaration required: FUN_002c0ba8. */
extern unsigned int FUN_002df798(int);
/* Supplied declaration required: FUN_002dfd94. */
extern unsigned int FUN_002e00f0(int);
extern unsigned int FUN_002eabf4(int);
/* Supplied declaration required: FUN_002eae80. */
extern int FUN_002eafe4(void);
extern int FUN_002f35cc(int);
/* Supplied declaration required: FUN_00308c98. */
extern int FUN_0030f6fc(void);
extern unsigned int *FUN_00316fc4(int);
extern unsigned int FUN_0031b8fc(void);
extern int FUN_00321aa4(void);
/* Supplied declaration required: FUN_00324720. */
/* Supplied declaration required: FUN_00327074. */


void FUN_0027b8cc(int param_1,int param_2)

{
/* irregular: 28 goto(s); irregular input(s): in_fpscr; 15 native warning(s); review required */
  unsigned short temp_v0;
  unsigned int *puVar2;
  int temp_v1;
  unsigned int *puVar4;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  int *piVar11;
  unsigned int temp_v8;
  unsigned char *puVar13;
  short temp_v9;
  int temp_v10;
  unsigned int temp_v11;
  unsigned int temp_v12;
  int temp_v13;
  unsigned int temp_v14;
  unsigned char temp_v15;
  unsigned char temp_v16;
  unsigned int in_fpscr;
  unsigned int temp_v17;
  unsigned char temp_v18;
  unsigned int temp_v19;
  unsigned char temp_v20;
  unsigned char temp_v21;
  unsigned char temp_v22;
  unsigned char temp_v23;
  unsigned char temp_v24;
  unsigned char temp_v25;
  unsigned char temp_v26 [4];
  unsigned char temp_v27 [20];
  unsigned int temp_v28;
  int temp_v29;
  int temp_v30;
  int temp_v31;
  int temp_v32;
  int temp_v33;
  int temp_v34;
  int temp_v35;
  int temp_v36;
  
  temp_v35 = param_1;
  temp_v36 = param_2;
  temp_v32 = FUN_00248418();
  temp_v14 = 0;
  if ((int)temp_v14 < temp_v32) {
    do {
      puVar2 = (unsigned int *)FUN_002483b8(temp_v14);
      temp_v1 = (int)(char)puVar2[2];
      if (temp_v1 == -1) {
        return;
      }
      if ((temp_v1 == temp_v35) && ((temp_v1 >= 100 || (*(char *)((int)puVar2 + 9) == temp_v36)))) {
        temp_v12 = *puVar2;
        temp_v13 = -1;
        temp_v34 = -1;
        temp_v33 = -1;
        temp_v29 = 0;
        temp_v31 = 0;
        temp_v19 = 0;
        temp_v30 = 0;
        temp_v28 = puVar2[1];
        if (temp_v12 == 4) {
          temp_v19 = 1;
        }
        else if (temp_v12 != 0) {
          if (temp_v12 >= 0x100) {
            temp_v1 = FUN_00321aa4();
            temp_v10 = 0;
            if (0 < temp_v1) {
              do {
                puVar4 = (unsigned int *)FUN_00308c98(temp_v10);
                if (*puVar4 == 0xffffffff) break;
                temp_v2 = FUN_00299064((short)puVar4[1]);
                if ((((temp_v2 != 0) && (*puVar4 == temp_v12)) &&
                    ((*(short *)((int)puVar4 + 6) == 0 || (temp_v2 = FUN_002c0ba8(), temp_v2 != 0)))) &&
                   (((short)puVar4[2] == 0 || (temp_v2 = FUN_002c0ba8(), temp_v2 == 0)))) {
                  temp_v34 = temp_v10;
                  if (temp_v10 != -1) goto LAB_0027beb8;
                  goto LAB_0027ba40;
                }
                temp_v10 = temp_v10 + 1;
              } while (temp_v10 < temp_v1);
              temp_v34 = -1;
            }
LAB_0027ba40:
            temp_v11 = *puVar2;
            temp_v3 = FUN_0031b8fc();
            temp_v13 = 0;
            temp_v4 = temp_v3;
            if (0 < (int)temp_v3) {
              do {
                puVar4 = (unsigned int *)FUN_00248358(temp_v13);
                temp_v4 = *puVar4;
                if (temp_v4 == 0xffffffff) break;
                if (temp_v4 == temp_v11) {
                  if ((((short)puVar4[1] == 0) || (temp_v1 = FUN_002c0ba8(), temp_v1 != 0)) &&
                     ((*(short *)((int)puVar4 + 6) == 0 || (temp_v1 = FUN_002c0ba8(), temp_v1 == 0)))) {
                    temp_v4 = (unsigned int)*(short *)((int)puVar4 + 10);
                    if (temp_v4 != 0xffffffff) {
                      if (temp_v13 == -2) {
                        temp_v4 = 1;
                        temp_v13 = -1;
                        temp_v30 = 1;
                        goto LAB_0027bb9c;
                      }
                      if (temp_v13 == -1) goto LAB_0027bb9c;
                      piVar11 = (int *)FUN_00248358(temp_v13);
                      DAT_00447a30 = 0;
                      DAT_00447a31 = 0;
                      DAT_00447a32 = 0;
                      DAT_00447a33 = 0;
                      DAT_00447a34 = 0;
                      if ((*(short *)((int)piVar11 + 10) != 0) &&
                         (*(short *)((int)piVar11 + 10) < 0x259)) {
                        temp_v10 = *piVar11;
                        temp_v1 = 0x2802001;
                        temp_v16 = temp_v10 != 0x2802001;
                        if (temp_v16) {
                          temp_v1 = 0x3303001;
                        }
                        temp_v15 = temp_v10 != temp_v1;
                        if (temp_v16 && temp_v15) {
                          temp_v1 = 0x3402001;
                        }
                        if (((temp_v16 && temp_v15) && temp_v10 != temp_v1) &&
                           (temp_v1 = FUN_0027dbd8(), temp_v1 != -1)) {
                          switch((char)piVar11[7]) {
                          case 0:
                          case 1:
                            goto LAB_0027c620;
                          case 3:
                          case 4:
                          case 5:
                            DAT_00447a30 = 1;
                            DAT_00447a32 = *(unsigned char *)((int)piVar11 + 0x1d);
                            DAT_00447a33 = *(unsigned char *)((int)piVar11 + 0x1e);
                            DAT_00447a34 = *(unsigned char *)((int)piVar11 + 0x1f);
                            DAT_00447a31 = (char)piVar11[7];
                          }
                        }
                      }
                      temp_v31 = 1;
                      goto LAB_0027bef8;
                    }
                    break;
                  }
                  temp_v4 = (unsigned int)*(short *)((int)puVar4 + 10);
                  if (temp_v4 == 0xffffffff) {
                    temp_v4 = 1;
                    temp_v13 = -1;
                    temp_v30 = 1;
                    goto LAB_0027bb9c;
                  }
                }
                temp_v13 = temp_v13 + 1;
              } while (temp_v13 < (int)temp_v3);
            }
            temp_v13 = -1;
LAB_0027bb9c:
            temp_v3 = *puVar2;
            temp_v1 = 0;
            FUN_0024f6e4();
            if (0 < (int)temp_v4) {
              do {
                puVar4 = (unsigned int *)FUN_0027636c(temp_v1);
                temp_v4 = *puVar4;
                if (temp_v4 == 0xffffffff) break;
                if (temp_v4 == temp_v3) {
                  if ((short)puVar4[1] != 0) {
                    temp_v10 = FUN_002c0ba8();
                    temp_v4 = 0;
                    if (temp_v10 == 0) goto LAB_0027bc0c;
                  }
                  temp_v4 = 0;
                  if ((*(short *)((int)puVar4 + 6) == 0) || (temp_v4 = FUN_002c0ba8(), temp_v4 == 0)) {
                    temp_v33 = temp_v1;
                    if (temp_v1 == -1) goto LAB_0027bc88;
                    temp_v29 = 1;
                    goto LAB_0027beb8;
                  }
                }
LAB_0027bc0c:
                temp_v1 = temp_v1 + 1;
                FUN_0024f6e4();
              } while (temp_v1 < (int)temp_v4);
            }
            temp_v33 = -1;
LAB_0027bc88:
            temp_v3 = *puVar2;
            temp_v1 = 0;
            FUN_00324720();
            if (0 < (int)temp_v4) {
              do {
                puVar4 = (unsigned int *)FUN_00287b10(temp_v1);
                temp_v4 = *puVar4;
                if (temp_v4 == 0xffffffff) break;
                if (temp_v4 == temp_v3) {
                  if (*(short *)((int)puVar4 + 6) != 0) {
                    temp_v10 = FUN_002c0ba8();
                    temp_v4 = 0;
                    if (temp_v10 == 0) goto LAB_0027bd68;
                  }
                  if (((short)puVar4[2] == 0) || (temp_v4 = FUN_002c0ba8(), temp_v4 == 0)) {
                    if ((short)puVar4[1] != 0) {
                      temp_v10 = FUN_00299064((short)puVar4[1]);
                      temp_v4 = 0;
                      if (temp_v10 == 0) goto LAB_0027bd68;
                    }
                    temp_v4 = FUN_002762d0(temp_v1);
                    if ((0 < (int)temp_v4) && (temp_v4 = FUN_002762d0(temp_v1), temp_v4 != 0xff))
                    goto LAB_0027bea8;
                    temp_v33 = temp_v1;
                    if (temp_v1 == -1) goto LAB_0027bd84;
                    if (temp_v1 == -2) goto LAB_0027bea8;
                    temp_v4 = 2;
                    temp_v29 = 2;
                    if (temp_v1 != -1) goto LAB_0027beb8;
                    goto LAB_0027bd84;
                  }
                }
LAB_0027bd68:
                temp_v1 = temp_v1 + 1;
                FUN_00324720();
              } while (temp_v1 < (int)temp_v4);
              temp_v33 = -1;
            }
LAB_0027bd84:
            temp_v3 = *puVar2;
            temp_v1 = 0;
            FUN_00327074();
            if (0 < (int)temp_v4) {
              do {
                puVar4 = (unsigned int *)FUN_00316fc4(temp_v1);
                temp_v4 = *puVar4;
                if (temp_v4 == 0xffffffff) break;
                if (temp_v4 == temp_v3) {
                  if ((short)puVar4[1] != 0) {
                    temp_v10 = FUN_002c0ba8();
                    temp_v4 = 0;
                    if (temp_v10 == 0) goto LAB_0027be20;
                  }
                  if (((*(short *)((int)puVar4 + 6) == 0) || (temp_v4 = FUN_002c0ba8(), temp_v4 == 0))
                     && (temp_v4 = FUN_002df798(temp_v1), (int)temp_v4 < 1)) {
                    temp_v33 = temp_v1;
                    if (temp_v1 == -1) goto LAB_0027be3c;
                    temp_v29 = 3;
                    goto LAB_0027beb8;
                  }
                }
LAB_0027be20:
                temp_v1 = temp_v1 + 1;
                FUN_00327074();
              } while (temp_v1 < (int)temp_v4);
              temp_v33 = -1;
            }
LAB_0027be3c:
            if (temp_v30 == 0) {
              temp_v4 = *puVar2;
              temp_v10 = 0;
              temp_v1 = FUN_00248320();
              if (0 < temp_v1) {
                do {
                  temp_v1 = temp_v10;
                  FUN_0025b8a8();
                  if ((*(unsigned int *)(temp_v1 + 0x20) != 0xffffffff) && (*(unsigned int *)(temp_v1 + 0x20) == temp_v4))
                  {
                    temp_v1 = FUN_002f35cc((int)*(short *)(temp_v1 + 0x24));
                    if (temp_v1 == 0) goto LAB_0027bea8;
                    temp_v33 = temp_v10;
                    if (temp_v10 != -1) {
                      if (temp_v10 != -2) {
                        temp_v29 = 4;
                      }
                      else {
LAB_0027bea8:
                        temp_v29 = 5;
                        temp_v33 = 0;
                      }
                    }
                    goto LAB_0027beb8;
                  }
                  temp_v10 = temp_v10 + 1;
                  temp_v1 = FUN_00248320();
                } while (temp_v10 < temp_v1);
                temp_v33 = -1;
              }
              if (temp_v13 != -1) {
LAB_0027bef8:
                temp_v1 = FUN_00248358(temp_v13);
                temp_v9 = *(short *)(temp_v1 + 8);
                temp_v16 = temp_v9 == 0;
                if (temp_v16) {
                  temp_v9 = *(short *)(temp_v1 + 10);
                }
                if ((temp_v16 && temp_v9 == 0) &&
                   (*(char *)(temp_v1 + 0xc) == '\0' || *(char *)(temp_v1 + 0xc) == '0')) {
                  temp_v13 = -1;
                }
                goto LAB_0027bf3c;
              }
            }
LAB_0027beb8:
            if (((*(char *)((int)puVar2 + 10) != '\x12') && (temp_v33 == -1)) &&
               (temp_v34 == -1 && (temp_v12 & 0x80000000) == 0)) goto LAB_0027c620;
          }
        }
        else {
          temp_v12 = (temp_v1 << 0x10) | ((int)*(char *)((int)puVar2 + 9) << 8) | (temp_v14 & 0xff) |
                   0xff000000;
        }
LAB_0027bf3c:
        temp_v1 = FUN_0030f6fc();
        temp_v10 = 0;
        if (temp_v10 < temp_v1) {
          do {
            temp_v2 = FUN_002764d4(temp_v10);
            if (*(int *)(temp_v2 + 0x20) == -1) break;
            if (((*(short *)(temp_v2 + 0x26) == 0) || (temp_v5 = FUN_002c0ba8(), temp_v5 == 0)) &&
               ((*(unsigned int *)(temp_v2 + 0x20) == temp_v12 &&
                (temp_v2 = FUN_00299064(*(unsigned short *)(temp_v2 + 0x24)), temp_v2 == 0)))) {
              temp_v9 = (short)temp_v10;
              goto LAB_0027bfb0;
            }
            temp_v10 = temp_v10 + 1;
          } while (temp_v10 < temp_v1);
        }
        temp_v9 = -1;
LAB_0027bfb0:
        temp_v4 = (unsigned int)*(char *)((int)puVar2 + 10);
        if ((temp_v13 != -1) && (temp_v4 == 3 || temp_v4 == 0xb)) {
          FUN_00248358(temp_v13);
          temp_v4 = 0x10;
        }
        temp_v1 = FUN_002eafe4();
        temp_v6 = FUN_002e00f0((int)(short)temp_v4);
        temp_v7 = FUN_002eabf4((int)*(char *)((int)puVar2 + 10));
        VectorSignedToFloat((int)*(short *)((int)puVar2 + 0x16),(unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat((int)(short)puVar2[6],(unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat((int)*(short *)((int)puVar2 + 0x1a),(unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat((int)(short)puVar2[7],(unsigned char)(in_fpscr >> 0x16) & 3);
        puVar13 = temp_v26;
        FUN_002eae80((int)*(char *)((int)puVar2 + 0x1e),temp_v27);
        temp_v10 = (int)*(char *)((int)puVar2 + 0x1f);
        temp_v2 = (int)*(char *)((int)puVar2 + 0x11);
        if (temp_v1 != 1) {
          if (temp_v1 == 0) {
            temp_v1 = (int)(short)puVar2[5];
            temp_v25 = *(unsigned char *)((int)puVar2 + 0x13);
            temp_v3 = (unsigned int)*(unsigned char *)((int)puVar2 + 0x12);
            temp_v24 = (unsigned char)puVar2[4];
            temp_v23 = *(unsigned char *)((int)puVar2 + 0xf);
            temp_v21 = *(unsigned char *)((int)puVar2 + 0xd);
            temp_v22 = *(unsigned char *)((int)puVar2 + 0xe);
            temp_v20 = (unsigned char)puVar2[3];
            puVar13 = (unsigned char *)0x27c3e0;
            temp_v18 = *(unsigned char *)((int)puVar2 + 0xb);
            temp_v11 = temp_v12;
            temp_v8 = temp_v28;
            temp_v17 = temp_v14;
            FUN_00263ee4(temp_v11,temp_v8,puVar13,temp_v4,temp_v7,temp_v17,temp_v18,temp_v20,temp_v21,temp_v22,
                         temp_v23,temp_v24,temp_v19,temp_v2,temp_v6,temp_v3,temp_v25,temp_v1,temp_v10);
          }
        }
        else {
          puVar13 = &LAB_0027c3d4;
          FUN_0024f460(temp_v12,temp_v28,&LAB_0027c3d4,temp_v4,temp_v7,temp_v14,
                       *(unsigned char *)((int)puVar2 + 0xb),(char)puVar2[3],
                       *(unsigned char *)((int)puVar2 + 0xd),*(unsigned char *)((int)puVar2 + 0xe),
                       *(unsigned char *)((int)puVar2 + 0xf),(char)puVar2[4],temp_v19,temp_v2,temp_v6,
                       *(unsigned char *)((int)puVar2 + 0x12),*(unsigned char *)((int)puVar2 + 0x13),
                       (int)(short)puVar2[5],temp_v10);
          if (temp_v4 == 2) {
            temp_v3 = (unsigned int)*(char *)((int)puVar2 + 0x1e);
LAB_0027c124:
            if (temp_v4 == 2) {
              if (temp_v3 == 0) {
                temp_v3 = 0xc;
              }
              else if (temp_v3 == 3) {
                temp_v3 = 0xe;
              }
              else if (temp_v3 == 4) {
                temp_v3 = 0x10;
              }
              else {
                temp_v3 = 10;
              }
            }
            goto LAB_0027c160;
          }
          if ((int)temp_v4 < 2) {
            if (temp_v4 < 2) {
LAB_0027c118:
              temp_v3 = (unsigned int)*(char *)((int)puVar2 + 0x1e);
              if (temp_v4 != 1) goto LAB_0027c124;
              if (temp_v3 == 0) {
                temp_v3 = 0xd;
              }
              else if (temp_v3 != 3) {
                if (temp_v3 == 4) {
                  temp_v3 = 0x11;
                }
                else if (temp_v3 == 9) {
                  temp_v3 = 0xf;
                }
                else {
                  temp_v3 = 0xb;
                }
              }
              else {
                temp_v3 = 0xf;
              }
LAB_0027c160:
              temp_v8 = 0;
              temp_v25 = 0;
              temp_v1 = 0;
              temp_v10 = 0;
              temp_v6 = 0;
              temp_v19 = 0;
              temp_v2 = 0;
              temp_v22 = 0;
              temp_v24 = 0;
              temp_v20 = 0;
              temp_v21 = 0;
              temp_v23 = 0;
              temp_v7 = 0;
              temp_v17 = 0xffffffff;
              temp_v18 = 0;
              temp_v4 = 0x39;
              puVar13 = (unsigned char *)0x27c3dc;
              temp_v11 = 3;
              FUN_00263ee4(temp_v11,temp_v8,puVar13,temp_v4,temp_v7,temp_v17,temp_v18,temp_v20,temp_v21,temp_v22,
                           temp_v23,temp_v24,temp_v19,temp_v2,temp_v6,temp_v3,temp_v25,temp_v1,temp_v10);
            }
          }
          else if (temp_v4 == 10 || temp_v4 == 0x2a) goto LAB_0027c118;
        }
        if (temp_v34 != -1) {
          piVar11 = (int *)FUN_00308c98();
          temp_v1 = 0;
          if (temp_v1 < DAT_00447a2c) {
            do {
              puVar13 = *(unsigned char **)(temp_v1 * 0x178 + 0x4a1390);
              if (puVar13 == (unsigned char *)*piVar11) {
                *(int *)(temp_v1 * 0x178 + 0x4a1398) = (int)*(short *)((int)piVar11 + 10);
                FUN_002bf86c(temp_v1 * 0x178 + 0x4a139c,piVar11 + 3);
                break;
              }
              temp_v1 = temp_v1 + 1;
            } while (temp_v1 < DAT_00447a2c);
          }
          temp_v1 = piVar11[2];
          if (0 < DAT_00447a2c) {
            puVar13 = &DAT_004a1264;
          }
          temp_v10 = 0;
          if (temp_v10 < DAT_00447a2c) {
            do {
              if (*(int *)(puVar13 + temp_v10 * 0x178 + 300) == *piVar11) {
                *(unsigned short *)(puVar13 + temp_v10 * 0x178 + 0x160) =
                     *(unsigned short *)((int)piVar11 + 6);
                *(short *)(puVar13 + temp_v10 * 0x178 + 0x162) = (short)temp_v1;
                puVar13[temp_v10 * 0x178 + 0x164] = 0;
                break;
              }
              temp_v10 = temp_v10 + 1;
            } while (temp_v10 < DAT_00447a2c);
          }
        }
        if (temp_v13 != -1) {
          piVar11 = (int *)FUN_00248358(temp_v13);
          if ((short)piVar11[2] != 0) {
            temp_v1 = 0;
            if (temp_v1 < DAT_00447a2c) {
              do {
                if (*(int *)(temp_v1 * 0x178 + 0x4a1390) == *piVar11) {
                  *(short *)(temp_v1 * 0x178 + 0x4a13c0) = (short)piVar11[2];
                  break;
                }
                temp_v1 = temp_v1 + 1;
              } while (temp_v1 < DAT_00447a2c);
            }
          }
          else {
            temp_v1 = 0;
            if (temp_v1 < DAT_00447a2c) {
              do {
                if (*(int *)(temp_v1 * 0x178 + 0x4a1390) == *piVar11) {
                  *(int *)(temp_v1 * 0x178 + 0x4a1398) = (int)*(short *)((int)piVar11 + 10);
                  FUN_002bf86c(temp_v1 * 0x178 + 0x4a139c,piVar11 + 3);
                  break;
                }
                temp_v1 = temp_v1 + 1;
              } while (temp_v1 < DAT_00447a2c);
            }
          }
          temp_v0 = *(unsigned short *)((int)piVar11 + 6);
          temp_v1 = 0;
          if (temp_v1 < DAT_00447a2c) {
            do {
              if (*(int *)(temp_v1 * 0x178 + 0x4a1390) == *piVar11) {
                temp_v1 = temp_v1 * 0x178;
                *(short *)(temp_v1 + 0x4a13c4) = (short)piVar11[1];
                *(unsigned short *)(temp_v1 + 0x4a13c6) = temp_v0;
                *(unsigned char *)(temp_v1 + 0x4a13c8) = 0;
                break;
              }
              temp_v1 = temp_v1 + 1;
            } while (temp_v1 < DAT_00447a2c);
          }
        }
        if (temp_v29 != 0) {
          temp_v1 = 0;
          if (temp_v1 < DAT_00447a2c) {
            do {
              if (*(unsigned int *)(temp_v1 * 0x178 + 0x4a1390) == temp_v12) {
                *(short *)(temp_v1 * 0x178 + 0x4a13ca) = (short)temp_v29;
                *(short *)(temp_v1 * 0x178 + 0x4a13cc) = (short)temp_v33;
                break;
              }
              temp_v1 = temp_v1 + 1;
            } while (temp_v1 < DAT_00447a2c);
          }
          if (temp_v29 == 5) {
            FUN_002dfd94(temp_v12);
          }
        }
        if ((temp_v31 != 0) && (temp_v1 = 0, 0 < DAT_00447a2c)) {
          do {
            if (*(unsigned int *)(temp_v1 * 0x178 + 0x4a1390) == temp_v12) {
              FUN_002a7fc4(temp_v1 * 0x178 + 0x4a13d2,&DAT_00447a30);
              break;
            }
            temp_v1 = temp_v1 + 1;
          } while (temp_v1 < DAT_00447a2c);
        }
        if ((temp_v9 != -1) && (temp_v1 = 0, 0 < DAT_00447a2c)) {
          do {
            if (*(unsigned int *)(temp_v1 * 0x178 + 0x4a1390) == temp_v12) {
              *(short *)(temp_v1 * 0x178 + 0x4a13c2) = temp_v9;
              break;
            }
            temp_v1 = temp_v1 + 1;
          } while (temp_v1 < DAT_00447a2c);
        }
      }
LAB_0027c620:
      temp_v14 = temp_v14 + 1;
    } while ((int)temp_v14 < temp_v32);
  }
  return;
}
