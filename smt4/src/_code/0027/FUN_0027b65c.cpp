/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0027b65c` (_code @ 0x27b65c, 0xd74 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002a7c80(...);

int FUN_002481e8(...);
int FUN_0024f24c(...);
int dataTable2fSub0GetCount(void);
int FUN_0025b670(void);
int FUN_00263cb8(...);
int FUN_00298dc8(int);
int FUN_002bf694(...);
int FUN_002c09d0(void);
int FUN_002dfe08(...);
int FUN_002eaec0(int, unsigned char [20]);
int FUN_00308cd4(...);
int dataTable2fSub1GetCount(void);
int dataTable2fSub2GetCount(void);
int VectorSignedToFloat(int, int);

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

extern unsigned char LAB_0027c164; /* 0x27c164 */
extern int DAT_00447a2c; /* 0x447a2c */
extern unsigned char DAT_00447a30; /* 0x447a30 */
extern unsigned char DAT_00447a31; /* 0x447a31 */
extern unsigned char DAT_00447a32; /* 0x447a32 */
extern unsigned char DAT_00447a33; /* 0x447a33 */
extern unsigned char DAT_00447a34; /* 0x447a34 */
extern unsigned char DAT_004a1264; /* 0x4a1264 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern int FUN_002481b0(void);
/* Supplied declaration required: FUN_002481e8. */
extern unsigned int *FUN_00248248(unsigned int);
extern int FUN_002482a8(void);
/* Supplied declaration required: FUN_0024f24c. */
/* Supplied declaration required: dataTable2fSub0GetCount. */
/* Supplied declaration required: FUN_0025b670. */
/* Supplied declaration required: FUN_00263cb8. */
extern unsigned int FUN_00276060(int);
extern unsigned int *dataTable2fSub0GetRecord(int);
extern int FUN_00276264(int);
extern int FUN_0027d968(void);
extern unsigned int *dataTable2fSub1GetRecord(int);
/* Supplied declaration required: FUN_00298dc8. */
/* Supplied declaration required: FUN_002a7c80. */
/* Supplied declaration required: FUN_002bf694. */
/* Supplied declaration required: FUN_002c09d0. */
extern unsigned int FUN_002df80c(int);
/* Supplied declaration required: FUN_002dfe08. */
extern unsigned int FUN_002e0164(int);
extern unsigned int FUN_002eac34(int);
/* Supplied declaration required: FUN_002eaec0. */
extern int FUN_002eb024(void);
extern int FUN_002f3614(int);
/* Supplied declaration required: FUN_00308cd4. */
extern int FUN_0030f6cc(void);
extern unsigned int *dataTable2fSub2GetRecord(int);
extern unsigned int FUN_0031b7b0(void);
extern int FUN_003218b4(void);
/* Supplied declaration required: dataTable2fSub1GetCount. */
/* Supplied declaration required: dataTable2fSub2GetCount. */


void FUN_0027b65c(int param_1,int param_2)

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
  temp_v32 = FUN_002482a8();
  temp_v14 = 0;
  if ((int)temp_v14 < temp_v32) {
    do {
      puVar2 = (unsigned int *)FUN_00248248(temp_v14);
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
            temp_v1 = FUN_003218b4();
            temp_v10 = 0;
            if (0 < temp_v1) {
              do {
                puVar4 = (unsigned int *)FUN_00308cd4(temp_v10);
                if (*puVar4 == 0xffffffff) break;
                temp_v2 = FUN_00298dc8((short)puVar4[1]);
                if ((((temp_v2 != 0) && (*puVar4 == temp_v12)) &&
                    ((*(short *)((int)puVar4 + 6) == 0 || (temp_v2 = FUN_002c09d0(), temp_v2 != 0)))) &&
                   (((short)puVar4[2] == 0 || (temp_v2 = FUN_002c09d0(), temp_v2 == 0)))) {
                  temp_v34 = temp_v10;
                  if (temp_v10 != -1) goto LAB_0027bc48;
                  goto LAB_0027b7d0;
                }
                temp_v10 = temp_v10 + 1;
              } while (temp_v10 < temp_v1);
              temp_v34 = -1;
            }
LAB_0027b7d0:
            temp_v11 = *puVar2;
            temp_v3 = FUN_0031b7b0();
            temp_v13 = 0;
            temp_v4 = temp_v3;
            if (0 < (int)temp_v3) {
              do {
                puVar4 = (unsigned int *)FUN_002481e8(temp_v13);
                temp_v4 = *puVar4;
                if (temp_v4 == 0xffffffff) break;
                if (temp_v4 == temp_v11) {
                  if ((((short)puVar4[1] == 0) || (temp_v1 = FUN_002c09d0(), temp_v1 != 0)) &&
                     ((*(short *)((int)puVar4 + 6) == 0 || (temp_v1 = FUN_002c09d0(), temp_v1 == 0)))) {
                    temp_v4 = (unsigned int)*(short *)((int)puVar4 + 10);
                    if (temp_v4 != 0xffffffff) {
                      if (temp_v13 == -2) {
                        temp_v4 = 1;
                        temp_v13 = -1;
                        temp_v30 = 1;
                        goto LAB_0027b92c;
                      }
                      if (temp_v13 == -1) goto LAB_0027b92c;
                      piVar11 = (int *)FUN_002481e8(temp_v13);
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
                           (temp_v1 = FUN_0027d968(), temp_v1 != -1)) {
                          switch((char)piVar11[7]) {
                          case 0:
                          case 1:
                            goto LAB_0027c3b0;
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
                      goto LAB_0027bc88;
                    }
                    break;
                  }
                  temp_v4 = (unsigned int)*(short *)((int)puVar4 + 10);
                  if (temp_v4 == 0xffffffff) {
                    temp_v4 = 1;
                    temp_v13 = -1;
                    temp_v30 = 1;
                    goto LAB_0027b92c;
                  }
                }
                temp_v13 = temp_v13 + 1;
              } while (temp_v13 < (int)temp_v3);
            }
            temp_v13 = -1;
LAB_0027b92c:
            temp_v3 = *puVar2;
            temp_v1 = 0;
            dataTable2fSub0GetCount();
            if (0 < (int)temp_v4) {
              do {
                puVar4 = (unsigned int *)dataTable2fSub0GetRecord(temp_v1);
                temp_v4 = *puVar4;
                if (temp_v4 == 0xffffffff) break;
                if (temp_v4 == temp_v3) {
                  if ((short)puVar4[1] != 0) {
                    temp_v10 = FUN_002c09d0();
                    temp_v4 = 0;
                    if (temp_v10 == 0) goto LAB_0027b99c;
                  }
                  temp_v4 = 0;
                  if ((*(short *)((int)puVar4 + 6) == 0) || (temp_v4 = FUN_002c09d0(), temp_v4 == 0)) {
                    temp_v33 = temp_v1;
                    if (temp_v1 == -1) goto LAB_0027ba18;
                    temp_v29 = 1;
                    goto LAB_0027bc48;
                  }
                }
LAB_0027b99c:
                temp_v1 = temp_v1 + 1;
                dataTable2fSub0GetCount();
              } while (temp_v1 < (int)temp_v4);
            }
            temp_v33 = -1;
LAB_0027ba18:
            temp_v3 = *puVar2;
            temp_v1 = 0;
            dataTable2fSub1GetCount();
            if (0 < (int)temp_v4) {
              do {
                puVar4 = (unsigned int *)dataTable2fSub1GetRecord(temp_v1);
                temp_v4 = *puVar4;
                if (temp_v4 == 0xffffffff) break;
                if (temp_v4 == temp_v3) {
                  if (*(short *)((int)puVar4 + 6) != 0) {
                    temp_v10 = FUN_002c09d0();
                    temp_v4 = 0;
                    if (temp_v10 == 0) goto LAB_0027baf8;
                  }
                  if (((short)puVar4[2] == 0) || (temp_v4 = FUN_002c09d0(), temp_v4 == 0)) {
                    if ((short)puVar4[1] != 0) {
                      temp_v10 = FUN_00298dc8((short)puVar4[1]);
                      temp_v4 = 0;
                      if (temp_v10 == 0) goto LAB_0027baf8;
                    }
                    temp_v4 = FUN_00276060(temp_v1);
                    if ((0 < (int)temp_v4) && (temp_v4 = FUN_00276060(temp_v1), temp_v4 != 0xff))
                    goto LAB_0027bc38;
                    temp_v33 = temp_v1;
                    if (temp_v1 == -1) goto LAB_0027bb14;
                    if (temp_v1 == -2) goto LAB_0027bc38;
                    temp_v4 = 2;
                    temp_v29 = 2;
                    if (temp_v1 != -1) goto LAB_0027bc48;
                    goto LAB_0027bb14;
                  }
                }
LAB_0027baf8:
                temp_v1 = temp_v1 + 1;
                dataTable2fSub1GetCount();
              } while (temp_v1 < (int)temp_v4);
              temp_v33 = -1;
            }
LAB_0027bb14:
            temp_v3 = *puVar2;
            temp_v1 = 0;
            dataTable2fSub2GetCount();
            if (0 < (int)temp_v4) {
              do {
                puVar4 = (unsigned int *)dataTable2fSub2GetRecord(temp_v1);
                temp_v4 = *puVar4;
                if (temp_v4 == 0xffffffff) break;
                if (temp_v4 == temp_v3) {
                  if ((short)puVar4[1] != 0) {
                    temp_v10 = FUN_002c09d0();
                    temp_v4 = 0;
                    if (temp_v10 == 0) goto LAB_0027bbb0;
                  }
                  if (((*(short *)((int)puVar4 + 6) == 0) || (temp_v4 = FUN_002c09d0(), temp_v4 == 0))
                     && (temp_v4 = FUN_002df80c(temp_v1), (int)temp_v4 < 1)) {
                    temp_v33 = temp_v1;
                    if (temp_v1 == -1) goto LAB_0027bbcc;
                    temp_v29 = 3;
                    goto LAB_0027bc48;
                  }
                }
LAB_0027bbb0:
                temp_v1 = temp_v1 + 1;
                dataTable2fSub2GetCount();
              } while (temp_v1 < (int)temp_v4);
              temp_v33 = -1;
            }
LAB_0027bbcc:
            if (temp_v30 == 0) {
              temp_v4 = *puVar2;
              temp_v10 = 0;
              temp_v1 = FUN_002481b0();
              if (0 < temp_v1) {
                do {
                  temp_v1 = temp_v10;
                  FUN_0025b670();
                  if ((*(unsigned int *)(temp_v1 + 0x20) != 0xffffffff) && (*(unsigned int *)(temp_v1 + 0x20) == temp_v4))
                  {
                    temp_v1 = FUN_002f3614((int)*(short *)(temp_v1 + 0x24));
                    if (temp_v1 == 0) goto LAB_0027bc38;
                    temp_v33 = temp_v10;
                    if (temp_v10 != -1) {
                      if (temp_v10 != -2) {
                        temp_v29 = 4;
                      }
                      else {
LAB_0027bc38:
                        temp_v29 = 5;
                        temp_v33 = 0;
                      }
                    }
                    goto LAB_0027bc48;
                  }
                  temp_v10 = temp_v10 + 1;
                  temp_v1 = FUN_002481b0();
                } while (temp_v10 < temp_v1);
                temp_v33 = -1;
              }
              if (temp_v13 != -1) {
LAB_0027bc88:
                temp_v1 = FUN_002481e8(temp_v13);
                temp_v9 = *(short *)(temp_v1 + 8);
                temp_v16 = temp_v9 == 0;
                if (temp_v16) {
                  temp_v9 = *(short *)(temp_v1 + 10);
                }
                if ((temp_v16 && temp_v9 == 0) &&
                   (*(char *)(temp_v1 + 0xc) == '\0' || *(char *)(temp_v1 + 0xc) == '0')) {
                  temp_v13 = -1;
                }
                goto LAB_0027bccc;
              }
            }
LAB_0027bc48:
            if (((*(char *)((int)puVar2 + 10) != '\x12') && (temp_v33 == -1)) &&
               (temp_v34 == -1 && (temp_v12 & 0x80000000) == 0)) goto LAB_0027c3b0;
          }
        }
        else {
          temp_v12 = (temp_v1 << 0x10) | ((int)*(char *)((int)puVar2 + 9) << 8) | (temp_v14 & 0xff) |
                   0xff000000;
        }
LAB_0027bccc:
        temp_v1 = FUN_0030f6cc();
        temp_v10 = 0;
        if (temp_v10 < temp_v1) {
          do {
            temp_v2 = FUN_00276264(temp_v10);
            if (*(int *)(temp_v2 + 0x20) == -1) break;
            if (((*(short *)(temp_v2 + 0x26) == 0) || (temp_v5 = FUN_002c09d0(), temp_v5 == 0)) &&
               ((*(unsigned int *)(temp_v2 + 0x20) == temp_v12 &&
                (temp_v2 = FUN_00298dc8(*(unsigned short *)(temp_v2 + 0x24)), temp_v2 == 0)))) {
              temp_v9 = (short)temp_v10;
              goto LAB_0027bd40;
            }
            temp_v10 = temp_v10 + 1;
          } while (temp_v10 < temp_v1);
        }
        temp_v9 = -1;
LAB_0027bd40:
        temp_v4 = (unsigned int)*(char *)((int)puVar2 + 10);
        if ((temp_v13 != -1) && (temp_v4 == 3 || temp_v4 == 0xb)) {
          FUN_002481e8(temp_v13);
          temp_v4 = 0x10;
        }
        temp_v1 = FUN_002eb024();
        temp_v6 = FUN_002e0164((int)(short)temp_v4);
        temp_v7 = FUN_002eac34((int)*(char *)((int)puVar2 + 10));
        VectorSignedToFloat((int)*(short *)((int)puVar2 + 0x16),(unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat((int)(short)puVar2[6],(unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat((int)*(short *)((int)puVar2 + 0x1a),(unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat((int)(short)puVar2[7],(unsigned char)(in_fpscr >> 0x16) & 3);
        puVar13 = temp_v26;
        FUN_002eaec0((int)*(char *)((int)puVar2 + 0x1e),temp_v27);
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
            puVar13 = (unsigned char *)0x27c170;
            temp_v18 = *(unsigned char *)((int)puVar2 + 0xb);
            temp_v11 = temp_v12;
            temp_v8 = temp_v28;
            temp_v17 = temp_v14;
            FUN_00263cb8(temp_v11,temp_v8,puVar13,temp_v4,temp_v7,temp_v17,temp_v18,temp_v20,temp_v21,temp_v22,
                         temp_v23,temp_v24,temp_v19,temp_v2,temp_v6,temp_v3,temp_v25,temp_v1,temp_v10);
          }
        }
        else {
          puVar13 = &LAB_0027c164;
          FUN_0024f24c(temp_v12,temp_v28,&LAB_0027c164,temp_v4,temp_v7,temp_v14,
                       *(unsigned char *)((int)puVar2 + 0xb),(char)puVar2[3],
                       *(unsigned char *)((int)puVar2 + 0xd),*(unsigned char *)((int)puVar2 + 0xe),
                       *(unsigned char *)((int)puVar2 + 0xf),(char)puVar2[4],temp_v19,temp_v2,temp_v6,
                       *(unsigned char *)((int)puVar2 + 0x12),*(unsigned char *)((int)puVar2 + 0x13),
                       (int)(short)puVar2[5],temp_v10);
          if (temp_v4 == 2) {
            temp_v3 = (unsigned int)*(char *)((int)puVar2 + 0x1e);
LAB_0027beb4:
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
            goto LAB_0027bef0;
          }
          if ((int)temp_v4 < 2) {
            if (temp_v4 < 2) {
LAB_0027bea8:
              temp_v3 = (unsigned int)*(char *)((int)puVar2 + 0x1e);
              if (temp_v4 != 1) goto LAB_0027beb4;
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
LAB_0027bef0:
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
              puVar13 = (unsigned char *)0x27c16c;
              temp_v11 = 3;
              FUN_00263cb8(temp_v11,temp_v8,puVar13,temp_v4,temp_v7,temp_v17,temp_v18,temp_v20,temp_v21,temp_v22,
                           temp_v23,temp_v24,temp_v19,temp_v2,temp_v6,temp_v3,temp_v25,temp_v1,temp_v10);
            }
          }
          else if (temp_v4 == 10 || temp_v4 == 0x2a) goto LAB_0027bea8;
        }
        if (temp_v34 != -1) {
          piVar11 = (int *)FUN_00308cd4();
          temp_v1 = 0;
          if (temp_v1 < DAT_00447a2c) {
            do {
              puVar13 = *(unsigned char **)(temp_v1 * 0x178 + 0x4a1390);
              if (puVar13 == (unsigned char *)*piVar11) {
                *(int *)(temp_v1 * 0x178 + 0x4a1398) = (int)*(short *)((int)piVar11 + 10);
                FUN_002bf694(temp_v1 * 0x178 + 0x4a139c,piVar11 + 3);
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
          piVar11 = (int *)FUN_002481e8(temp_v13);
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
                  FUN_002bf694(temp_v1 * 0x178 + 0x4a139c,piVar11 + 3);
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
            FUN_002dfe08(temp_v12);
          }
        }
        if ((temp_v31 != 0) && (temp_v1 = 0, 0 < DAT_00447a2c)) {
          do {
            if (*(unsigned int *)(temp_v1 * 0x178 + 0x4a1390) == temp_v12) {
              FUN_002a7c80(temp_v1 * 0x178 + 0x4a13d2,&DAT_00447a30);
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
LAB_0027c3b0:
      temp_v14 = temp_v14 + 1;
    } while ((int)temp_v14 < temp_v32);
  }
  return;
}

} /* extern "C" */
