/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0019a3ec` (_code @ 0x19a3ec, 0x3230 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 14 slot(s), 50 byte(s) */
typedef struct {
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned char sp64; /* 0x64: local_64 */
    unsigned char sp68; /* 0x68: local_68 */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
} param_3_stack;

extern signed char DAT_00435de0; /* 0x435de0 */
extern signed char DAT_00435de1; /* 0x435de1 */
extern unsigned int DAT_00435de4; /* 0x435de4 */
extern int DAT_00435de8; /* 0x435de8 */
extern int DAT_00435dec; /* 0x435dec */

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_001909b0. */
/* Supplied declaration required: FUN_00198fcc. */
/* Supplied declaration required: FUN_0019931c. */
/* Supplied declaration required: FUN_0028ccb0. */
/* Supplied declaration required: FUN_0028cd04. */
extern unsigned int FUN_0028cd5c(void);
extern int FUN_0028cd78(void);
/* Supplied declaration required: FUN_0028cd9c. */
/* Supplied declaration required: FUN_0028cde4. */
/* Supplied declaration required: FUN_0028d090. */
/* Supplied declaration required: FUN_0028d1d4. */
extern int FUN_0028d260(int);
/* Supplied declaration required: FUN_0028d27c. */
extern unsigned long long FUN_0028d498(unsigned short);
extern unsigned int FUN_0028d4f0(void);
extern unsigned int FUN_0028d58c(unsigned int, int);
/* Supplied declaration required: FUN_0028d5b4. */
/* Supplied declaration required: FUN_0028d5c4. */
extern int FUN_0028d838(void);
/* Supplied declaration required: FUN_0028d850. */
/* Supplied declaration required: FUN_0028dce4. */
extern int FUN_0028de4c(unsigned int);
extern int FUN_0028ec44(unsigned int);
extern int FUN_0028ec78(unsigned int);
/* Supplied declaration required: FUN_0028ec90. */
/* Supplied declaration required: FUN_00292eb0. */
/* Supplied declaration required: FUN_00293074. */
/* Supplied declaration required: FUN_002931cc. */
/* Supplied declaration required: FUN_002931f0. */
/* Supplied declaration required: FUN_00293c98. */
/* Supplied declaration required: FUN_00294568. */
extern int FUN_002958bc(void);
/* Supplied declaration required: FUN_00295b9c. */
/* Supplied declaration required: FUN_00297e30. */
/* Supplied declaration required: FUN_00297f40. */
/* Supplied declaration required: FUN_002983dc. */
/* Supplied declaration required: FUN_00298a74. */
extern int FUN_0029abc0(unsigned int);
extern int FUN_0029ac70(unsigned int, unsigned int);
extern int FUN_0029c68c(void);
/* Supplied declaration required: FUN_0029ccf8. */
/* Supplied declaration required: FUN_0029cee4. */
extern int FUN_0029d8e4(char *);
extern int FUN_0029d8fc(int);
extern int FUN_0029e3d0(void);
/* Supplied declaration required: FUN_0029e41c. */
extern int FUN_0029e468(void);
/* Supplied declaration required: FUN_0029e48c. */
/* Supplied declaration required: FUN_0029e5c8. */
/* Supplied declaration required: FUN_0029e63c. */
/* Supplied declaration required: FUN_0029eb58. */
/* Supplied declaration required: FUN_0029eba8. */
extern int FUN_0029ebf8(int);
/* Supplied declaration required: FUN_0029edfc. */
extern int FUN_0029ee4c(unsigned int *, unsigned int);
/* Supplied declaration required: FUN_0029f10c. */
/* Supplied declaration required: FUN_0029f248. */
/* Supplied declaration required: FUN_0029f260. */
/* Supplied declaration required: FUN_0029f278. */
/* Supplied declaration required: FUN_0029f878. */
/* Supplied declaration required: FUN_0029fae8. */
/* Supplied declaration required: FUN_002a89e4. */
/* Supplied declaration required: FUN_002a8a08. */
/* Supplied declaration required: FUN_002ae3f0. */
/* Supplied declaration required: FUN_002af854. */
/* Supplied declaration required: FUN_002b4854. */
/* Supplied declaration required: FUN_002b66ec. */
extern int FUN_002b6e10(void);
/* Supplied declaration required: FUN_002b8b78. */
extern int FUN_002b9094(void);
extern int FUN_002b90a8(void);
/* Supplied declaration required: FUN_002b9220. */
/* Supplied declaration required: FUN_002bc200. */
/* Supplied declaration required: FUN_002bdac0. */
extern short FUN_002bef70(int);
extern short FUN_002bef7c(int);
/* Supplied declaration required: FUN_002bf030. */
/* Supplied declaration required: FUN_002bf6d0. */
/* Supplied declaration required: FUN_002bf9e8. */
/* Supplied declaration required: FUN_002bf9f0. */
extern int FUN_002c0ba8(unsigned int);
extern int FUN_002c1830(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c615c. */
/* Supplied declaration required: FUN_00338e08. */
/* Supplied declaration required: FUN_00338e6c. */


void FUN_0019a3ec(int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 19 goto(s); irregular input(s): in_fpscr; 62 native warning(s); review required */
  char temp_v0;
  unsigned short temp_v1;
  unsigned short temp_v2;
  short temp_v3;
  short temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  short *psVar8;
  int temp_v7;
  int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  unsigned int *puVar13;
  int *piVar14;
  int temp_v12;
  unsigned int temp_v13;
  unsigned short temp_v14;
  unsigned char temp_v15;
  int temp_v16;
  int temp_v17;
  int temp_v18;
  unsigned char temp_v19;
  unsigned char temp_v20;
  unsigned char temp_v21;
  unsigned int in_fpscr;
  float temp_v22;
  float temp_v23;
  float temp_v24;
  float temp_v25;
  float temp_v26;
  float temp_v27;
  float temp_v28;
  unsigned long long temp_v29;
  unsigned long long temp_v30;
  unsigned int *temp_v31;
  unsigned int temp_v32;
  char *temp_v33;
  unsigned int temp_v34;
  unsigned char *temp_v35;
  char temp_v36 [4];
  char temp_v37 [4];
  int temp_v38;
  int temp_v39;
  int temp_v40;
  int temp_v41;
  unsigned char *temp_v42;
  int temp_v43;
  unsigned int *temp_v44;
  
  temp_v17 = 0;
  temp_v36[0] = '\0';
  temp_v37[0] = '\0';
  temp_v5 = FUN_00293c98();
  temp_v33 = (char *)(param_1 + 0x3218);
  if ((*(unsigned int *)(temp_v5 + 0x44a8) & 0x40) != 0) {
    if (DAT_00435de0 == '\0') {
      if ((*(int *)(param_1 + 0x305c) == 0) && (temp_v5 = FUN_002c0ba8(0x410), temp_v5 != 0)) {
        temp_v6 = FUN_002b66ec();
        temp_v19 = *(short *)(temp_v6 + 2) != 0;
        if (temp_v19) {
          temp_v6 = (unsigned int)*(unsigned short *)(temp_v6 + 4);
        }
        if (temp_v19 && temp_v6 != 0) {
          param_3 = 6;
          temp_v31 = (unsigned int *)0x1;
          temp_v32 = 1;
          FUN_0029fae8(temp_v33,0x191);
          FUN_0029edfc(temp_v33,DAT_00435de8 + 2);
          goto LAB_0019a4d8;
        }
      }
      param_3 = 6;
      temp_v31 = (unsigned int *)0x1;
      temp_v32 = 1;
      FUN_0029fae8(temp_v33,400,6,1);
      FUN_0029edfc(temp_v33,DAT_00435de8 + 1);
    }
LAB_0019a4d8:
    DAT_00435de0 = 1;
  }
  else {
    if (DAT_00435de0 != '\0') {
      if (*(int *)(param_1 + 0x305c) != 0) {
        temp_v7 = param_1 + *(int *)(param_1 + 0x305c) * 0x10;
        temp_v5 = 1;
        temp_v3 = *(short *)(temp_v7 + 0x341e);
        if (*(short *)(temp_v7 + 0x341c) != 0) {
          temp_v5 = 2;
        }
        temp_v16 = 0;
        temp_v8 = 3;
        psVar8 = (short *)(temp_v7 + 0x341c);
        do {
          if (temp_v3 != 0) {
            temp_v5 = temp_v5 + 1;
          }
          temp_v3 = psVar8[3];
          if (psVar8[2] != 0) {
            temp_v16 = temp_v16 + 1;
          }
          temp_v8 = temp_v8 - 1;
          psVar8 = psVar8 + 2;
        } while (temp_v8 != 0);
        temp_v5 = temp_v5 + temp_v16;
        temp_v3 = *(short *)(temp_v7 + 0x342a);
      }
      else {
        temp_v5 = 2;
        temp_v7 = FUN_002c0ba8(0x410);
        if (temp_v7 != 0) {
          temp_v6 = FUN_002b66ec();
          temp_v19 = *(short *)(temp_v6 + 2) != 0;
          if (temp_v19) {
            temp_v6 = (unsigned int)*(unsigned short *)(temp_v6 + 4);
          }
          if (!temp_v19 || temp_v6 == 0) {
            temp_v5 = 1;
          }
        }
        else {
          temp_v5 = 1;
        }
        temp_v7 = 0;
        temp_v3 = *(short *)(param_1 + 0x341e);
        if (*(short *)(param_1 + 0x341c) != 0) {
          temp_v5 = temp_v5 + 1;
        }
        temp_v16 = 3;
        psVar8 = (short *)(param_1 + 0x341c);
        do {
          if (temp_v3 != 0) {
            temp_v5 = temp_v5 + 1;
          }
          temp_v3 = psVar8[3];
          if (psVar8[2] != 0) {
            temp_v7 = temp_v7 + 1;
          }
          temp_v16 = temp_v16 - 1;
          psVar8 = psVar8 + 2;
        } while (temp_v16 != 0);
        temp_v5 = temp_v5 + temp_v7;
        temp_v3 = *(short *)(param_1 + 0x342a);
      }
      if (temp_v3 != 0) {
        temp_v5 = temp_v5 + 1;
      }
      temp_v31 = (unsigned int *)0x0;
      temp_v32 = 1;
      param_3 = 6;
      FUN_0029fae8(temp_v33,temp_v5,6,1);
    }
    DAT_00435de0 = 0;
  }
  temp_v5 = FUN_00293c98();
  temp_v34 = param_1 + 0x3344;
  if ((*(unsigned int *)(temp_v5 + 0x44a8) & 0x1000) != 0) {
    if (DAT_00435de1 == '\0') {
      param_3 = 6;
      temp_v31 = (unsigned int *)0x0;
      temp_v32 = 1;
      FUN_0029fae8(temp_v34,6,6,1);
      DAT_00435de1 = '\x01';
    }
  }
  else if (DAT_00435de1 != '\0') {
    temp_v7 = 0;
    temp_v5 = temp_v7;
    do {
      temp_v16 = FUN_002931cc(temp_v7 + 0x2e);
      if (temp_v16 != 0) {
        temp_v5 = temp_v5 + 1;
      }
      temp_v7 = temp_v7 + 1;
    } while (temp_v7 < 6);
    temp_v31 = (unsigned int *)0x0;
    temp_v32 = 1;
    param_3 = 6;
    FUN_0029fae8(temp_v34,temp_v5,6,1);
    DAT_00435de1 = '\0';
  }
  FUN_002bf9f0(param_1 + 0xac);
  FUN_002bf9f0(param_1 + 0x598);
  FUN_002bf9f0(param_1 + 0x624);
  FUN_002bf9f0(param_1 + 0x6b0);
  FUN_002bf9f0(param_1 + 0x122c);
  temp_v39 = FUN_002a8a08();
  temp_v5 = 0;
  do {
    temp_v7 = FUN_002b90a8();
    if (temp_v7 == *(short *)(param_1 + temp_v5 * 2 + 0x5716)) goto LAB_0019a724;
    temp_v5 = temp_v5 + 1;
  } while (temp_v5 < 0x20);
  temp_v5 = -1;
LAB_0019a724:
  temp_v7 = 0;
  *(unsigned char *)(param_1 + 0x3060) = 0x20;
  do {
    if (temp_v7 <= *(int *)(param_1 + 0x3044)) {
      FUN_002bf9f0(param_1 + temp_v7 * 0x8c + 0xe58);
    }
    temp_v7 = temp_v7 + 1;
  } while (temp_v7 < 6);
  switch(*(unsigned int *)(param_1 + 0x3048)) {
  case 1:
    if ((*(int *)(param_1 + 0x59bc) == 0) || (*(char *)(param_1 + 0x307c) != '\0')) break;
    temp_v5 = FUN_0029eba8(param_1 + *(int *)(param_1 + 0x305c) * 100 + 0x3088);
    temp_v33 = temp_v37;
    temp_v32 = 0xffffffff;
    temp_v34 = 1;
    temp_v31 = (unsigned int *)0xffffffff;
    temp_v35 = (unsigned char *)0x1;
    temp_v17 = param_1 + *(int *)(param_1 + 0x305c) * 100 + 0x3088;
    FUN_0029f878(temp_v17,0,param_1 + 0x5716,0xffffffff);
    if (temp_v17 != 0) {
      temp_v9 = FUN_00297f40(param_1,1);
      FUN_00297e30(param_1,temp_v9,*(unsigned int *)(param_1 + 0x305c));
      if (temp_v5 == 0) {
        temp_v5 = FUN_0029eba8(param_1 + *(int *)(param_1 + 0x305c) * 100 + 0x3088);
        goto joined_r0x0019a92c;
      }
      temp_v5 = FUN_0029eba8(param_1 + *(int *)(param_1 + 0x305c) * 100 + 0x3088);
      if (temp_v5 != 0) break;
      temp_v9 = 1;
      FUN_00293074(temp_v9);
      break;
    }
    temp_v17 = param_1 + *(int *)(param_1 + 0x305c) * 100 + 0x3088;
    FUN_0029f278(temp_v17,1);
    if (temp_v17 != 0) {
      temp_v9 = FUN_00297f40(param_1,1);
      FUN_00297e30(param_1,temp_v9,*(unsigned int *)(param_1 + 0x305c));
      temp_v17 = param_1 + *(int *)(param_1 + 0x305c) * 100 + 0x3088;
      if (temp_v5 != 0) {
        temp_v5 = FUN_0029eba8(temp_v17);
        if (temp_v5 == 0) {
          FUN_00293074(1);
        }
        break;
      }
      temp_v5 = FUN_0029eba8(temp_v17);
joined_r0x0019a92c:
      if (temp_v5 == 0) break;
      temp_v9 = 0;
      FUN_00293074(temp_v9);
      break;
    }
    temp_v5 = FUN_002c1830(0,1);
    if (temp_v5 != 0) {
      *(unsigned char *)(param_1 + 0x3060) = 0;
    }
    if (temp_v5 == 0 && temp_v37[0] == '\0') {
      temp_v5 = FUN_002c1830(1,1);
      if (temp_v5 != 0) {
        *(unsigned char *)(param_1 + 0x3060) = 1;
        if (*(char *)(param_1 + 0x3082) != '\0') {
          *(unsigned char *)(param_1 + 0x3083) = 1;
          FUN_002983dc(param_1,0x2d,1);
          temp_v9 = 0x100016e;
          FUN_002bc200(temp_v9);
          break;
        }
        temp_v5 = FUN_0029eba8(param_1 + *(int *)(param_1 + 0x305c) * 100 + 0x3088);
        if (temp_v5 < 1) break;
        FUN_0029eb58(param_1 + *(int *)(param_1 + 0x305c) * 100 + 0x3088,0);
        temp_v9 = FUN_00297f40(param_1,1);
        FUN_00297e30(param_1,temp_v9,*(unsigned int *)(param_1 + 0x305c));
        FUN_00293074(1);
        temp_v9 = 0x100016e;
        FUN_002bc200(temp_v9);
        break;
      }
      temp_v5 = FUN_002c1830(9,1);
      if (temp_v5 != 0) {
        *(unsigned char *)(param_1 + 0x3060) = 9;
        FUN_002983dc(param_1,2,1);
        temp_v9 = 0x100016d;
        FUN_002bc200(temp_v9);
        break;
      }
      temp_v5 = FUN_002931cc(0x7f);
      if ((temp_v5 == 0) || (temp_v5 = FUN_002c1830(10,1), temp_v5 == 0)) break;
      *(unsigned char *)(param_1 + 0x3060) = 10;
      FUN_002983dc(param_1,3,1);
      temp_v9 = 0x100016d;
      FUN_002bc200(temp_v9);
      break;
    }
    temp_v5 = FUN_001909b0(param_1);
    if (temp_v5 != 0) {
      temp_v9 = 0x100016d;
      FUN_002bc200(temp_v9);
      break;
    }
    temp_v9 = 0x100016e;
    FUN_002bc200(temp_v9);
    break;
  case 3:
    FUN_002983dc(param_1,4,0);
    FUN_0029e63c(0xffffffff,1);
    FUN_0029e5c8(10);
    FUN_0029e5c8(9);
    FUN_0029e48c();
    break;
  case 4:
    temp_v5 = FUN_0029e468();
    if (temp_v5 == 0) {
      temp_v5 = FUN_0029e3d0();
      if (temp_v5 != 9) {
        if (temp_v5 == 10) {
          FUN_0028d850();
          FUN_0029e41c();
          FUN_002983dc(param_1,5,0);
        }
      }
      else {
        *(unsigned int *)(param_1 + 0x3050) = *(unsigned int *)(param_1 + 0x304c);
        FUN_002983dc(param_1,7,0);
        FUN_0028d850();
        FUN_0029e41c();
      }
      break;
    }
    FUN_0029e41c();
    if (*(int *)(param_1 + 0x304c) - 8U < 6) {
      FUN_002931f0(param_1);
    }
    else {
      temp_v9 = FUN_00297f40(param_1,0);
      FUN_00297e30(param_1,temp_v9,*(unsigned int *)(param_1 + 0x305c));
    }
    FUN_002983dc(param_1,*(unsigned int *)(param_1 + 0x304c),0);
    break;
  case 5:
    FUN_002bf030(param_1 + 0x11a0,0);
    *(unsigned int *)(param_1 + 0x5918) = 1;
    FUN_002983dc(param_1,6,0);
    temp_v9 = 0x33;
    FUN_002b8b78(temp_v9);
    break;
  case 8:
    goto LAB_0019acdc;
  case 9:
    param_3 = 1;
    FUN_002983dc(param_1,8);
    FUN_002931f0(param_1);
LAB_0019acdc:
    temp_v5 = FUN_0028d838();
    if (temp_v5 == 0) {
      FUN_002931f0(param_1);
    }
    if (*(char *)(param_1 + 0x307c) != '\0') break;
    temp_v5 = FUN_002c0ba8(0x525);
    FUN_00297f40(param_1,1);
    if (temp_v5 == 0) {
      temp_v9 = FUN_002bf6d0(0x15,200);
      temp_v32 = (unsigned int)*(short *)(param_1 + 0x572a);
      temp_v33 = temp_v36;
      temp_v34 = 0;
      temp_v35 = (unsigned char *)0x1;
      temp_v31 = (unsigned int *)(int)*(short *)(param_1 + 0x5728);
      temp_v17 = *(int *)(param_1 + 0x340c);
      param_3 = param_1 + 0x572c;
      FUN_0029f878(temp_v17,temp_v9,param_3,(int)*(short *)(param_1 + 0x5726));
      if (temp_v17 == 0) {
        temp_v17 = *(int *)(param_1 + 0x340c);
        FUN_0029f278(temp_v17,1);
        if (temp_v17 == 0) goto LAB_0019adb4;
      }
      FUN_002931f0(param_1);
      break;
    }
    temp_v17 = FUN_0029d8fc((int)*(short *)(param_1 + 0x572c));
    if (temp_v17 == 6) {
      temp_v36[0] = '\x01';
    }
LAB_0019adb4:
    temp_v17 = FUN_002c1830(0,1);
    if (temp_v17 != 0) {
      *(unsigned char *)(param_1 + 0x3060) = 0;
    }
    if (!(temp_v17 == 0 && temp_v36[0] == '\0')) {
      temp_v20 = 0;
      temp_v31 = (unsigned int *)(param_1 + 0x340c);
      temp_v33 = (char *)0x0;
      temp_v19 = 0;
      temp_v5 = FUN_0029f260(*temp_v31);
      temp_v17 = FUN_0029f248(*temp_v31);
      temp_v5 = temp_v5 + temp_v17;
      temp_v17 = FUN_00297f40(param_1,1);
      if (temp_v17 == 1) {
        if (*(int *)(param_1 + 0x305c) != 0) {
          if (temp_v5 != 0) {
            temp_v17 = FUN_00293c98();
            if ((*(unsigned int *)(temp_v17 + 0x44a8) & 0x40) != 0) {
              DAT_00435de8 = temp_v5 - 1;
              *(int *)(param_1 + 0x3068) = temp_v5;
              temp_v6 = *(unsigned int *)(param_1 + 0x3068);
            }
            else {
              temp_v6 = (unsigned int)*(unsigned short *)
                             (param_1 + *(int *)(param_1 + 0x305c) * 0x10 + temp_v5 * 2 + 0x341a);
              *(unsigned int *)(param_1 + 0x3068) = temp_v6;
            }
            FUN_002ae3f0();
            temp_v5 = FUN_002a8a08();
            if (-1 < *(char *)(*(int *)(param_1 + 0x305c) + temp_v5 + 0x9107)) {
              temp_v5 = FUN_002a8a08();
              temp_v9 = *(unsigned int *)(param_1 + 0x3068);
              temp_v5 = FUN_00298a74((int)*(char *)(*(int *)(param_1 + 0x305c) + temp_v5 + 0x9107),
                                   temp_v9);
              if ((temp_v5 == 0) || (temp_v5 = FUN_0028d5c4(temp_v9), temp_v5 != 0)) {
                temp_v20 = 0;
              }
              else {
                temp_v20 = 1;
              }
            }
            piVar14 = (int *)(param_1 + 0x3504);
            *piVar14 = 0;
            temp_v5 = FUN_0029abc0(*(unsigned int *)(param_1 + 0x3068));
            param_3 = *(unsigned int *)(param_1 + 0x305c);
            *(int *)(param_1 + param_3 * 4 + 0x3470) = -temp_v5;
            temp_v5 = FUN_002a8a08();
            temp_v5 = FUN_002a89e4((int)*(char *)(*(int *)(param_1 + 0x305c) + temp_v5 + 0x9107));
            if ((*(unsigned int *)(temp_v6 + 0x38) & 0x200) != 0) {
              *piVar14 = -(int)*(short *)(temp_v5 + 0x2a);
            }
            temp_v10 = *(unsigned int *)(temp_v6 + 0x38);
            if ((temp_v10 & 0x400) != 0) {
              *piVar14 = -(*(short *)(temp_v5 + 0x2a) - 1);
            }
            goto LAB_0019b1a8;
          }
          *(unsigned int *)(param_1 + 0x3068) = 0;
        }
        else {
          if (temp_v5 != 0) {
            if ((temp_v5 == 1) && (temp_v17 = FUN_002c0ba8(0x410), temp_v17 != 0)) {
              temp_v6 = FUN_002b66ec();
              temp_v20 = *(short *)(temp_v6 + 2) != 0;
              if (temp_v20) {
                temp_v6 = (unsigned int)*(unsigned short *)(temp_v6 + 4);
              }
              if (temp_v20 && temp_v6 != 0) {
                *(unsigned int *)(param_1 + 0x3068) = 2;
                FUN_002bf030(param_1 + 0x11a0,0);
                FUN_002983dc(param_1,0x12,1);
                temp_v9 = 0x100016d;
                FUN_002bc200(temp_v9);
                break;
              }
            }
            temp_v7 = 2;
            temp_v17 = FUN_002c0ba8(0x410);
            if (temp_v17 != 0) {
              temp_v6 = FUN_002b66ec();
              temp_v20 = *(short *)(temp_v6 + 2) != 0;
              if (temp_v20) {
                temp_v6 = (unsigned int)*(unsigned short *)(temp_v6 + 4);
              }
              if (!temp_v20 || temp_v6 == 0) {
                temp_v7 = 1;
              }
            }
            else {
              temp_v7 = 1;
            }
            temp_v17 = FUN_00293c98();
            if ((*(unsigned int *)(temp_v17 + 0x44a8) & 0x40) != 0) {
              DAT_00435de8 = temp_v5 - temp_v7;
              *(int *)(param_1 + 0x3068) = DAT_00435de8 + 1;
              temp_v6 = *(unsigned int *)(param_1 + 0x3068);
            }
            else {
              temp_v6 = (unsigned int)*(unsigned short *)
                             (param_1 + *(int *)(param_1 + 0x305c) * 0x10 + (temp_v5 - temp_v7) * 2 +
                             0x341c);
              *(unsigned int *)(param_1 + 0x3068) = temp_v6;
            }
            FUN_002ae3f0();
            temp_v9 = *(unsigned int *)(param_1 + 0x3068);
            temp_v5 = FUN_00298a74(0xffffffff,temp_v9);
            if ((temp_v5 == 0) || (temp_v5 = FUN_0028d5c4(temp_v9), temp_v5 != 0)) {
              temp_v20 = 0;
            }
            else {
              temp_v20 = 1;
            }
            piVar14 = (int *)(param_1 + 0x3504);
            *piVar14 = 0;
            temp_v5 = FUN_0029ac70(*(unsigned int *)(param_1 + 0x3068),1);
            param_3 = *(unsigned int *)(param_1 + 0x305c);
            temp_v10 = -temp_v5;
            *(unsigned int *)(param_1 + param_3 * 4 + 0x3470) = temp_v10;
            if ((*(unsigned int *)(temp_v6 + 0x38) & 0x200) != 0) {
              temp_v30 = FUN_0028d5b4();
              temp_v10 = (unsigned int)((unsigned long long)temp_v30 >> 0x20);
              *piVar14 = -(int)temp_v30;
            }
            if ((*(unsigned int *)(temp_v6 + 0x38) & 0x400) != 0) {
              temp_v30 = FUN_0028d5b4();
              temp_v10 = (unsigned int)((unsigned long long)temp_v30 >> 0x20);
              *piVar14 = -((int)temp_v30 - 1);
            }
            goto LAB_0019b1a8;
          }
          *(unsigned int *)(param_1 + 0x3068) = 1;
        }
        FUN_002bf030(param_1 + 0x11a0,0);
        FUN_002983dc(param_1,0x12,1);
        temp_v9 = 0x100016d;
        FUN_002bc200(temp_v9);
        break;
      }
      temp_v17 = FUN_00297f40(param_1,1);
      if (temp_v17 == 2) {
        temp_v17 = FUN_00293c98();
        if ((*(unsigned int *)(temp_v17 + 0x44a8) & 0x40) != 0) {
          temp_v9 = FUN_00293c98();
          temp_v9 = FUN_0028d58c(temp_v9,temp_v5);
          *(unsigned int *)(param_1 + 0x3068) = temp_v9;
          temp_v6 = *(unsigned int *)(param_1 + 0x3068);
          DAT_00435dec = temp_v5;
        }
        else {
          FUN_00293c98();
          temp_v6 = FUN_0028d4f0();
          *(unsigned int *)(param_1 + 0x3068) = temp_v6;
        }
        FUN_002ae3f0();
        temp_v5 = FUN_00293c98();
        if ((*(unsigned int *)(temp_v5 + 0x44a8) & 0x40) == 0) {
          piVar14 = (int *)FUN_002a8a08();
          temp_v5 = *piVar14;
          temp_v30 = FUN_0028d498(*(unsigned short *)(temp_v6 + 0x20));
          temp_v10 = (unsigned int)((unsigned long long)temp_v30 >> 0x20);
          if (temp_v5 < (int)temp_v30) goto LAB_0019b1a8;
        }
        temp_v20 = 1;
        temp_v30 = FUN_0028d5c4(*(unsigned int *)(param_1 + 0x3068));
        temp_v10 = (unsigned int)((unsigned long long)temp_v30 >> 0x20);
        if ((int)temp_v30 != 0) {
          temp_v20 = 0;
        }
LAB_0019b1a8:
        if (temp_v6 != 0) {
          temp_v6 = *(unsigned int *)(temp_v6 + 0x28);
          temp_v19 = (temp_v6 & 0x1e0) != 0;
          if (temp_v19) {
            temp_v10 = temp_v6 << 0x17;
          }
          temp_v21 = temp_v10 >> 0x1c != 1;
          if (temp_v19 && temp_v21) {
            param_3 = 6;
          }
          temp_v19 = (!temp_v19 || !temp_v21) || param_3 == temp_v10 >> 0x1c;
          if ((temp_v6 & 0x1e0) == 0xa0) {
            temp_v33 = (char *)0x1;
          }
        }
        if (temp_v20) {
          if (temp_v19) {
            FUN_002bf030(param_1 + 0x11a0,0);
            FUN_002983dc(param_1,0x12,1);
          }
          else if (temp_v33 != (char *)0x0) {
            temp_v5 = 0;
            *(unsigned int *)(param_1 + 0x345c) = 0x1010101;
            do {
              temp_v17 = FUN_002a8a08();
              if (*(char *)(temp_v17 + temp_v5 + 0x9108) < '\0') {
                *(unsigned char *)(param_1 + temp_v5 + 0x345d) = 0;
              }
              temp_v5 = temp_v5 + 1;
            } while (temp_v5 < 3);
            FUN_002983dc(param_1,0x16,1);
            FUN_002b8b78(0x38);
          }
          else {
            FUN_002983dc(param_1,0x14,1);
          }
          temp_v9 = 0x100016d;
          FUN_002bc200(temp_v9);
          break;
        }
      }
      temp_v9 = 0x100016e;
    }
    else {
      if (temp_v5 != 0) break;
      temp_v5 = FUN_002c1830(1,1);
      if (temp_v5 != 0) {
        *(unsigned char *)(param_1 + 0x3060) = 1;
        *(unsigned int *)(param_1 + 0x3504) = 0;
        *(unsigned int *)(param_1 + *(int *)(param_1 + 0x305c) * 4 + 0x3460) = 0;
        *(unsigned int *)(param_1 + *(int *)(param_1 + 0x305c) * 4 + 0x3470) = 0;
        temp_v9 = FUN_00297f40(param_1,1);
        FUN_00297e30(param_1,temp_v9,*(unsigned int *)(param_1 + 0x305c));
        FUN_002983dc(param_1,1);
        FUN_00297f40(param_1,1);
        temp_v9 = 0x100016e;
        FUN_002bc200(temp_v9);
        break;
      }
      temp_v5 = FUN_002c1830(9,1);
      if (temp_v5 == 0) {
        temp_v5 = FUN_002931cc(0x7f);
        if ((temp_v5 != 0) && (temp_v5 = FUN_002c1830(10,1), temp_v5 != 0)) {
          *(unsigned char *)(param_1 + 0x3060) = 10;
          FUN_002983dc(param_1,3,1);
          temp_v9 = 0x100016d;
          FUN_002bc200(temp_v9);
          break;
        }
        temp_v5 = FUN_0029eba8(param_1 + *(int *)(param_1 + 0x305c) * 100 + 0x3088);
        temp_v33 = temp_v37;
        temp_v32 = 0xffffffff;
        temp_v34 = 1;
        temp_v31 = (unsigned int *)0xffffffff;
        temp_v35 = (unsigned char *)0x1;
        temp_v17 = param_1 + *(int *)(param_1 + 0x305c) * 100 + 0x3088;
        FUN_0029f878(temp_v17,0,param_1 + 0x5716,0xffffffff);
        temp_v7 = param_1 + *(int *)(param_1 + 0x305c) * 100 + 0x3088;
        if (temp_v17 != 0) {
          temp_v17 = FUN_0029eba8();
          if (temp_v17 != temp_v5) {
LAB_0019b484:
            *(unsigned int *)(param_1 + *(int *)(param_1 + 0x305c) * 4 + 0x3470) = 0;
            *(unsigned int *)(param_1 + *(int *)(param_1 + 0x305c) * 4 + 0x3460) = 0;
            *(unsigned int *)(param_1 + 0x3504) = 0;
            FUN_002983dc(param_1,1);
            temp_v9 = FUN_00297f40(param_1,1);
            FUN_00297e30(param_1,temp_v9,*(unsigned int *)(param_1 + 0x305c));
            temp_v5 = FUN_00297f40(param_1,1);
            if ((temp_v5 == 1 || temp_v5 == 2) || (temp_v5 == 7 || temp_v5 == 3)) {
              FUN_001909b0(param_1);
            }
            break;
          }
        }
        else {
          FUN_0029f278(temp_v7,1);
          if (temp_v7 != 0) goto LAB_0019b484;
        }
        temp_v5 = FUN_0029f260(*(unsigned int *)(param_1 + 0x340c));
        temp_v17 = FUN_0029f248(*(unsigned int *)(param_1 + 0x340c));
        piVar14 = (int *)(param_1 + 0x3504);
        temp_v6 = temp_v5 + temp_v17;
        *(unsigned int *)(param_1 + *(int *)(param_1 + 0x305c) * 4 + 0x3470) = 0;
        *(unsigned int *)(param_1 + *(int *)(param_1 + 0x305c) * 4 + 0x3460) = 0;
        *piVar14 = 0;
        temp_v5 = FUN_00297f40(param_1,1);
        if (temp_v5 != 1) break;
        if (*(int *)(param_1 + 0x305c) != 0) {
          if (temp_v6 != 0) {
            temp_v5 = FUN_00293c98();
            if ((*(unsigned int *)(temp_v5 + 0x44a8) & 0x40) == 0) {
              temp_v6 = (unsigned int)*(unsigned short *)
                             (param_1 + *(int *)(param_1 + 0x305c) * 0x10 + temp_v6 * 2 + 0x341a);
            }
            temp_v10 = temp_v6;
            FUN_002ae3f0();
            temp_v5 = FUN_002a8a08();
            if (-1 < *(char *)(*(int *)(param_1 + 0x305c) + temp_v5 + 0x9107)) {
              temp_v5 = FUN_002a8a08();
              temp_v5 = FUN_00298a74((int)*(char *)(*(int *)(param_1 + 0x305c) + temp_v5 + 0x9107),temp_v6
                                  );
              if (temp_v5 != 0) {
                FUN_0028d5c4(temp_v6);
              }
            }
            temp_v5 = FUN_0029abc0(temp_v6);
            *(int *)(param_1 + *(int *)(param_1 + 0x305c) * 4 + 0x3470) = -temp_v5;
            temp_v5 = FUN_002a8a08();
            temp_v5 = FUN_002a89e4((int)*(char *)(*(int *)(param_1 + 0x305c) + temp_v5 + 0x9107));
            if ((*(unsigned int *)(temp_v10 + 0x38) & 0x200) != 0) {
              temp_v3 = *(short *)(temp_v5 + 0x2a);
              *piVar14 = -(int)temp_v3;
              *(int *)(param_1 + *(int *)(param_1 + 0x305c) * 4 + 0x3460) = -(int)temp_v3;
            }
            if ((*(unsigned int *)(temp_v10 + 0x38) & 0x400) != 0) {
              temp_v5 = -(*(short *)(temp_v5 + 0x2a) - 1);
              *piVar14 = temp_v5;
              *(int *)(param_1 + *(int *)(param_1 + 0x305c) * 4 + 0x3460) = temp_v5;
            }
          }
          break;
        }
        if (temp_v6 == 0) break;
        if ((temp_v6 == 1) && (temp_v5 = FUN_002c0ba8(0x410), temp_v5 != 0)) {
          temp_v10 = FUN_002b66ec();
          temp_v19 = *(short *)(temp_v10 + 2) != 0;
          if (temp_v19) {
            temp_v10 = (unsigned int)*(unsigned short *)(temp_v10 + 4);
          }
          if (temp_v19 && temp_v10 != 0) break;
        }
        temp_v17 = 2;
        temp_v5 = FUN_002c0ba8(0x410);
        if (temp_v5 != 0) {
          temp_v10 = FUN_002b66ec();
          temp_v19 = *(short *)(temp_v10 + 2) != 0;
          if (temp_v19) {
            temp_v10 = (unsigned int)*(unsigned short *)(temp_v10 + 4);
          }
          if (!temp_v19 || temp_v10 == 0) {
            temp_v17 = 1;
          }
        }
        else {
          temp_v17 = 1;
        }
        temp_v5 = FUN_00293c98();
        if ((*(unsigned int *)(temp_v5 + 0x44a8) & 0x40) != 0) {
          temp_v6 = (temp_v6 - temp_v17) + 1;
        }
        else {
          temp_v6 = (unsigned int)*(unsigned short *)
                         (param_1 + *(int *)(param_1 + 0x305c) * 0x10 + (temp_v6 - temp_v17) * 2 +
                         0x341c);
        }
        temp_v10 = temp_v6;
        FUN_002ae3f0();
        temp_v5 = FUN_00298a74(0xffffffff,temp_v6);
        if (temp_v5 != 0) {
          FUN_0028d5c4(temp_v6);
        }
        temp_v5 = FUN_0029ac70(temp_v6,1);
        *(int *)(param_1 + *(int *)(param_1 + 0x305c) * 4 + 0x3470) = -temp_v5;
        if ((*(unsigned int *)(temp_v10 + 0x38) & 0x200) != 0) {
          temp_v5 = FUN_0028d5b4();
          *piVar14 = -temp_v5;
          *(int *)(param_1 + *(int *)(param_1 + 0x305c) * 4 + 0x3460) = -temp_v5;
        }
        if ((*(unsigned int *)(temp_v10 + 0x38) & 0x400) != 0) {
          temp_v5 = FUN_0028d5b4();
          *piVar14 = -(temp_v5 - 1);
          *(int *)(param_1 + *(int *)(param_1 + 0x305c) * 4 + 0x3460) = -(temp_v5 - 1);
        }
        break;
      }
      *(unsigned char *)(param_1 + 0x3060) = 9;
      FUN_002983dc(param_1,2,1);
      temp_v9 = 0x100016d;
    }
    FUN_002bc200(temp_v9);
    break;
  case 10:
    goto LAB_0019b81c;
  case 0xb:
    FUN_002983dc(param_1,10,1);
    FUN_002931f0(param_1);
LAB_0019b81c:
    temp_v17 = FUN_0028d838();
    if (temp_v17 == 0) {
      FUN_002931f0(param_1);
    }
    if (*(char *)(param_1 + 0x307c) != '\0') break;
    temp_v9 = FUN_002bf6d0(0x15,200);
    temp_v32 = (unsigned int)*(short *)(param_1 + 0x572a);
    temp_v33 = temp_v36;
    temp_v34 = 0;
    temp_v35 = (unsigned char *)0x1;
    piVar14 = (int *)(param_1 + 0x340c);
    temp_v31 = (unsigned int *)(int)*(short *)(param_1 + 0x5728);
    temp_v17 = *piVar14;
    FUN_0029f878(temp_v17,temp_v9,param_1 + 0x572c,(int)*(short *)(param_1 + 0x5726));
    if (temp_v17 != 0) {
      FUN_002931f0(param_1);
      break;
    }
    temp_v17 = *piVar14;
    FUN_0029f278(temp_v17,1);
    if (temp_v17 != 0) {
      FUN_002931f0(param_1);
      break;
    }
    temp_v17 = FUN_002c1830(0,1);
    if (temp_v17 != 0) {
      *(unsigned char *)(param_1 + 0x3060) = 0;
    }
    temp_v19 = temp_v17 != 0;
    temp_v20 = temp_v36[0] != '\0';
    if (temp_v19 || temp_v20) {
      temp_v5 = 0;
    }
    temp_v6 = (unsigned int)(temp_v19 || temp_v20);
    if (temp_v19 || temp_v20) {
      do {
        temp_v17 = FUN_0028ec78(temp_v6);
        if ((temp_v17 != 0) && (temp_v17 = FUN_0028ec44(temp_v6), temp_v17 != 0)) {
          temp_v5 = temp_v5 + 1;
        }
        temp_v6 = temp_v6 + 1;
      } while (temp_v6 < 0x3d);
      if (temp_v5 < 1) {
        FUN_002983dc(param_1,1);
        temp_v9 = 0x100016d;
        FUN_002bc200(temp_v9);
        break;
      }
      temp_v5 = FUN_0029f260(*piVar14);
      temp_v17 = FUN_0029f248(*piVar14);
      temp_v10 = (unsigned int)*(unsigned short *)(param_1 + (temp_v17 + temp_v5) * 2 + 0x3480);
      temp_v6 = temp_v10;
      FUN_0028d27c();
      if (temp_v6 == 0) {
        FUN_002b4854();
        temp_v6 = (unsigned int)*(unsigned short *)(temp_v10 + 0x62);
        if (temp_v6 == 0) {
          FUN_002983dc(param_1,0x15,1);
          temp_v9 = 0x100016d;
          FUN_002bc200(temp_v9);
          break;
        }
        FUN_002ae3f0();
        temp_v6 = *(unsigned int *)(temp_v6 + 0x28);
        temp_v19 = (temp_v6 & 0x1e0) != 0;
        if (temp_v19) {
          temp_v6 = temp_v6 << 0x17;
        }
        temp_v20 = temp_v6 >> 0x1c != 1;
        temp_v10 = temp_v11;
        if (temp_v19 && temp_v20) {
          temp_v10 = 6;
        }
        if ((temp_v19 && temp_v20) && temp_v10 != temp_v6 >> 0x1c) {
          FUN_002983dc(param_1,0x15,1);
          temp_v9 = 0x100016d;
          FUN_002bc200(temp_v9);
          break;
        }
        FUN_002bf030(param_1 + 0x11a0,0);
        FUN_002983dc(param_1,0x12,1);
        temp_v9 = 0x100016d;
        FUN_002bc200(temp_v9);
        break;
      }
      temp_v9 = 0x100016e;
      FUN_002bc200(temp_v9);
      break;
    }
    temp_v5 = FUN_002c1830(1,1);
    if (temp_v5 == 0) {
      temp_v5 = FUN_002c1830(9,1);
      if (temp_v5 != 0) {
        *(unsigned char *)(param_1 + 0x3060) = 9;
        FUN_002983dc(param_1,2,1);
        FUN_002bc200(0x100016d);
        break;
      }
      temp_v5 = FUN_002931cc(0x7f);
      if ((temp_v5 != 0) && (temp_v5 = FUN_002c1830(10,1), temp_v5 != 0)) {
        *(unsigned char *)(param_1 + 0x3060) = 10;
        FUN_002983dc(param_1,3,1);
        FUN_002bc200(0x100016d);
        break;
      }
      temp_v5 = FUN_0029eba8(param_1 + *(int *)(param_1 + 0x305c) * 100 + 0x3088);
      temp_v33 = temp_v37;
      temp_v32 = 0xffffffff;
      temp_v34 = 1;
      temp_v31 = (unsigned int *)0xffffffff;
      temp_v35 = (unsigned char *)0x1;
      temp_v17 = param_1 + *(int *)(param_1 + 0x305c) * 100 + 0x3088;
      FUN_0029f878(temp_v17,0,param_1 + 0x5716,0xffffffff);
      if (temp_v17 != 0) {
        temp_v17 = FUN_0029eba8(param_1 + *(int *)(param_1 + 0x305c) * 100 + 0x3088);
        if (temp_v17 == temp_v5) break;
      }
      else {
        temp_v5 = param_1 + *(int *)(param_1 + 0x305c) * 100 + 0x3088;
        FUN_0029f278(temp_v5,1);
        if (temp_v5 == 0) break;
      }
      FUN_002983dc(param_1,1);
      temp_v9 = FUN_00297f40(param_1,1);
      FUN_00297e30(param_1,temp_v9,*(unsigned int *)(param_1 + 0x305c));
      temp_v5 = FUN_00297f40(param_1,1);
      if ((temp_v5 != 1 && temp_v5 != 2) && (temp_v5 != 7 && temp_v5 != 3)) break;
      FUN_001909b0(param_1);
      break;
    }
    *(unsigned char *)(param_1 + 0x3060) = 1;
    temp_v9 = FUN_00297f40(param_1,1);
    FUN_00297e30(param_1,temp_v9,*(unsigned int *)(param_1 + 0x305c));
    FUN_002983dc(param_1,1);
    temp_v9 = 0x100016e;
    FUN_002bc200(temp_v9);
    break;
  case 0xc:
    goto LAB_0019bbd8;
  case 0xd:
    FUN_002983dc(param_1,0xc,1);
    FUN_002931f0(param_1);
LAB_0019bbd8:
    if (*(char *)(param_1 + 0x307c) != '\0') break;
    temp_v9 = FUN_002bf6d0(0x15,200);
    temp_v32 = (unsigned int)*(short *)(param_1 + 0x572a);
    temp_v33 = temp_v36;
    temp_v34 = 0;
    temp_v35 = (unsigned char *)0x1;
    temp_v31 = (unsigned int *)(int)*(short *)(param_1 + 0x5728);
    temp_v5 = *(int *)(param_1 + 0x340c);
    FUN_0029f878(temp_v5,temp_v9,param_1 + 0x572c,(int)*(short *)(param_1 + 0x5726));
    if (temp_v5 != 0) {
      FUN_002931f0(param_1);
      break;
    }
    temp_v5 = *(int *)(param_1 + 0x340c);
    FUN_0029f278(temp_v5,1);
    if (temp_v5 != 0) {
      FUN_002931f0(param_1);
      break;
    }
    temp_v5 = FUN_002c1830(0,1);
    if (temp_v5 != 0) {
      *(unsigned char *)(param_1 + 0x3060) = 0;
    }
    if (temp_v5 != 0 || temp_v36[0] != '\0') {
      FUN_002bf030(param_1 + 0x11a0,0);
      FUN_002983dc(param_1,0x12,1);
      FUN_002bc200(0x100016d);
      break;
    }
    temp_v5 = FUN_002c1830(1,1);
    if (temp_v5 == 0) {
      temp_v5 = FUN_002c1830(9,1);
      if (temp_v5 != 0) {
        *(unsigned char *)(param_1 + 0x3060) = 9;
        FUN_002983dc(param_1,2,1);
        temp_v9 = 0x100016d;
        FUN_002bc200(temp_v9);
        break;
      }
      temp_v5 = FUN_002931cc(0x7f);
      if ((temp_v5 != 0) && (temp_v5 = FUN_002c1830(10,1), temp_v5 != 0)) {
        *(unsigned char *)(param_1 + 0x3060) = 10;
        FUN_002983dc(param_1,3,1);
        FUN_002bc200(0x100016d);
        break;
      }
      temp_v5 = FUN_0029eba8(param_1 + *(int *)(param_1 + 0x305c) * 100 + 0x3088);
      temp_v33 = temp_v37;
      temp_v32 = 0xffffffff;
      temp_v34 = 1;
      temp_v31 = (unsigned int *)0xffffffff;
      temp_v35 = (unsigned char *)0x1;
      temp_v17 = param_1 + *(int *)(param_1 + 0x305c) * 100 + 0x3088;
      FUN_0029f878(temp_v17,0,param_1 + 0x5716,0xffffffff);
      temp_v7 = param_1 + *(int *)(param_1 + 0x305c) * 100 + 0x3088;
      if (temp_v17 != 0) {
        temp_v17 = FUN_0029eba8();
        if (temp_v17 == temp_v5) break;
      }
      else {
        FUN_0029f278(temp_v7,1);
        if (temp_v7 == 0) break;
      }
      FUN_002983dc(param_1,1);
      temp_v9 = FUN_00297f40(param_1,1);
      FUN_00297e30(param_1,temp_v9,*(unsigned int *)(param_1 + 0x305c));
      temp_v5 = FUN_00297f40(param_1,1);
      if ((temp_v5 != 1 && temp_v5 != 2) && (temp_v5 != 7 && temp_v5 != 3)) break;
      FUN_001909b0(param_1);
      break;
    }
    *(unsigned char *)(param_1 + 0x3060) = 1;
    temp_v9 = FUN_00297f40(param_1,1);
    FUN_00297e30(param_1,temp_v9,*(unsigned int *)(param_1 + 0x305c));
    FUN_002983dc(param_1,1);
    temp_v9 = 0x100016e;
    FUN_002bc200(temp_v9);
    break;
  case 0xe:
    temp_v5 = FUN_0028de4c(*(unsigned int *)(param_1 + 0x3040));
    if ((temp_v5 != 0) && (temp_v5 = FUN_002b6e10(), temp_v5 != 0)) {
      if (((*(int *)(param_1 + 0x3044) >= 0x18) &&
          (temp_v17 = FUN_002bf9f0(param_1 + 0x96c), *(int *)(param_1 + 0x3044) == 0x18)) &&
         ((*(unsigned int *)(*(int *)(param_1 + 0x3040) + 0x44a0) & 0x2000000) == 0)) {
        FUN_00338e6c();
      }
    }
    else {
      temp_v17 = 1;
    }
    temp_v5 = 0;
    do {
      if ((temp_v5 * 3 <= *(int *)(param_1 + 0x3044)) &&
         (FUN_002b9220(param_1 + temp_v5 * 0x8c + 0x73c,0), temp_v5 == 3)) {
        if ((*(char *)(param_1 + 0x96a) != '\0') && (temp_v17 != 0)) {
          FUN_002983dc(param_1,0xf,1);
          puVar13 = (unsigned int *)(*(int *)(param_1 + 0x3040) + 0x44a0);
          *puVar13 = *puVar13 & 0xfdffffff;
        }
        break;
      }
      temp_v5 = temp_v5 + 1;
    } while (temp_v5 < 4);
    break;
  case 0xf:
    if (*(char *)(param_1 + 0x307f) == '\0') {
      FUN_002983dc(param_1,0x1e,1);
    }
    break;
  case 0x10:
    FUN_002b9220(param_1 + 0x20,0);
    temp_v5 = FUN_0028d260(param_1 + *(int *)(param_1 + 0x305c) * 100 + 0x3088);
    temp_v17 = FUN_0029d8e4(temp_v33);
    temp_v7 = 0;
    do {
      if ((temp_v5 <= temp_v7) || (temp_v7 <= *(int *)(param_1 + 0x3044) - 1)) {
        FUN_002b9220(param_1 + temp_v7 * 0x8c + 0x138,0);
      }
      temp_v7 = temp_v7 + 1;
    } while (temp_v7 < 8);
    if ((((*(int *)(param_1 + 0x3044) >= 6) && (temp_v5 <= *(int *)(param_1 + 0x3044) - 1)) &&
        (*(char *)(param_1 + temp_v5 * 0x8c + 0x136) != '\0')) &&
       ((temp_v17 <= *(int *)(param_1 + 0x3044) - 1 &&
        (*(char *)(param_1 + temp_v17 * 0x8c + 0xe56) != '\0')))) {
      FUN_002983dc(param_1,*(unsigned int *)(param_1 + 0x3054),0);
    }
    break;
  case 0x11:
    if (*(char *)(param_1 + 0x307d) != '\0') {
      FUN_0028d1d4(param_1,*(unsigned int *)(param_1 + 0x305c),(int)*(char *)(param_1 + 0x307e));
    }
    break;
  case 0x12:
    FUN_00198fcc(param_1);
    temp_v5 = FUN_002b9220(param_1 + 0x11a0,0);
    if (temp_v5 == 0) break;
    FUN_002983dc(param_1,0x13,0);
    temp_v9 = 0x38;
    FUN_002b8b78(temp_v9);
    break;
  case 0x13:
    *(unsigned char *)(param_1 + 0x575d) = 0;
    if (*(char *)(param_1 + 0x307c) != '\0') break;
    if (-1 < temp_v5) {
      temp_v17 = FUN_002b9094();
      if ((temp_v17 == 1) || (temp_v17 = FUN_002b9094(), temp_v17 == 2)) {
        if (temp_v5 == 0x11) {
          *(unsigned char *)(param_1 + 0x3060) = 1;
        }
        else if (*(char *)(param_1 + 0x575c) == '\0') {
          temp_v6 = *(unsigned int *)(param_1 + 0x5758);
          if (0 < (int)temp_v6) {
            temp_v10 = temp_v6 & 1;
            if (temp_v10 == 1) {
              *(unsigned char *)(param_1 + 0x5788) = 0;
            }
            temp_v13 = (unsigned int)(temp_v10 == 1);
            if ((int)temp_v10 < (int)temp_v6) {
              do {
                temp_v17 = temp_v13 + 1;
                *(unsigned char *)(param_1 + temp_v13 * 0x2c + 0x5788) = 0;
                temp_v13 = temp_v13 + 2;
                *(unsigned char *)(param_1 + temp_v17 * 0x2c + 0x5788) = 0;
                temp_v10 = temp_v10 + 2;
              } while ((int)temp_v10 < (int)*(unsigned int *)(param_1 + 0x5758));
            }
          }
          temp_v5 = param_1 + temp_v5 * 0x2c;
          if (*(char *)(temp_v5 + 0x5460) != '\0') {
            *(unsigned char *)(temp_v5 + 0x5470) = 1;
            *(unsigned char *)(param_1 + 0x575d) = 1;
          }
        }
        break;
      }
      temp_v17 = FUN_002b9094();
      if (temp_v17 == 6) {
        if (temp_v5 != 0x11) {
          *(unsigned char *)(param_1 + 0x3060) = 0;
        }
        break;
      }
    }
    temp_v15 = 0;
    temp_v5 = FUN_002c1830(0,1);
    if (temp_v5 == 0) {
      temp_v5 = FUN_002c1830(1,1);
      goto joined_r0x0019c2c0;
    }
    *(unsigned char *)(param_1 + 0x3060) = temp_v15;
    break;
  case 0x16:
    temp_v15 = 0;
    temp_v5 = FUN_002c1830(0,1);
    if (temp_v5 == 0) {
      temp_v5 = FUN_002c1830(1,1);
joined_r0x0019c2c0:
      temp_v15 = 1;
      if (temp_v5 == 0) break;
    }
    *(unsigned char *)(param_1 + 0x3060) = temp_v15;
    break;
  case 0x18:
    if (*(int *)(param_1 + 0x3044) >= 9) {
      FUN_002983dc(param_1,*(unsigned int *)(param_1 + 0x3054),1);
    }
    break;
  case 0x1c:
    if (*(int *)(param_1 + 0x3044) >= 9) {
      FUN_0029f10c(0,0x323232ff);
      FUN_002983dc(param_1,0x1d,0);
    }
    break;
  case 0x1f:
    if (*(char *)(param_1 + 0x3081) == '\0') {
      if (*(int *)(param_1 + 0x3044) < 0x26) {
        FUN_002b9220(param_1 + 0x1344,0);
        break;
      }
      if (*(int *)(param_1 + 0x3044) == 0x26) {
        FUN_002bf030(param_1 + 0x1344,10);
        break;
      }
      temp_v5 = FUN_002bf9f0(param_1 + 0x1344);
      if (temp_v5 == 0) break;
    }
    FUN_002983dc(param_1,0x20,1);
    break;
  case 0x22:
    temp_v5 = FUN_00293c98();
    if ((temp_v5 != 0) && (*(short *)(temp_v5 + 0x1fc4) < 4)) {
      temp_v10 = 0;
      temp_v6 = 0xffffffff;
      do {
        temp_v13 = *(unsigned int *)(*(int *)(temp_v5 + 0x1fc0) + temp_v10 * 0x288);
        if (((temp_v13 & 1) != 0) && ((temp_v13 & 0x40) == 0)) {
          temp_v6 = temp_v10;
        }
        temp_v10 = temp_v10 + 1;
      } while ((int)temp_v10 < 4);
      if (temp_v6 < 3) {
        *(unsigned int *)(param_1 + 0x33f8) = temp_v6 + 1;
        *(unsigned int *)(param_1 + 0x33ec) = temp_v6 + 1;
      }
    }
    temp_v17 = param_1 + 0x33a8;
    temp_v7 = FUN_0029eba8();
    temp_v33 = temp_v36;
    temp_v32 = 0xffffffff;
    temp_v34 = 1;
    temp_v31 = (unsigned int *)0xffffffff;
    temp_v35 = (unsigned char *)0x1;
    temp_v5 = temp_v17;
    FUN_0029f878(temp_v17,0,param_1 + 0x574e,0xffffffff);
    if (temp_v5 != 0) {
      temp_v5 = FUN_0029eba8(temp_v17);
      if (temp_v5 != temp_v7) {
        FUN_002bf030(param_1 + 0xac,1);
        temp_v5 = FUN_00297f40(param_1,1);
        *(unsigned int *)(param_1 + 0x3460) = 0;
        *(unsigned int *)(param_1 + 0x3464) = 0;
        *(unsigned int *)(param_1 + 0x3468) = 0;
        *(unsigned int *)(param_1 + 0x346c) = 0;
        if (temp_v5 != 7) {
          FUN_0028d090(param_1);
        }
        else {
          *(unsigned int *)(param_1 + 0x3470) = 0;
          *(unsigned int *)(param_1 + 0x3474) = 0;
          *(unsigned int *)(param_1 + 0x3478) = 0;
          *(unsigned int *)(param_1 + 0x347c) = 0;
          temp_v34 = temp_v34 & 0xffff0000;
          temp_v31 = (unsigned int *)((unsigned int)temp_v31 & 0xffff0000);
          FUN_0028cde4(param_1,&temp_v34,&temp_v31);
          temp_v5 = FUN_0029eba8(temp_v17);
          if (temp_v5 != 0) {
            temp_v17 = FUN_002a8a08();
            temp_v7 = param_1 + temp_v5 * 4;
            FUN_0028cd9c((int)*(char *)(temp_v17 + temp_v5 + 0x9107),(int)(short)temp_v31,temp_v7 + 0x3460
                         ,temp_v7 + 0x3470);
            temp_v17 = FUN_002a8a08();
            if (*(char *)(temp_v17 + temp_v5 + 0x9107) < '\0') {
              FUN_002b4854((int)(short)temp_v31);
            }
          }
          else {
            FUN_0028cd9c(0xffffffff,(int)(short)temp_v31,param_1 + 0x3460,param_1 + 0x3470);
          }
        }
      }
      break;
    }
    temp_v5 = FUN_002c1830(0,1);
    if (temp_v5 != 0) {
      *(unsigned char *)(param_1 + 0x3060) = 0;
    }
    if (temp_v5 == 0 && temp_v36[0] == '\0') {
      temp_v5 = FUN_002c1830(1,1);
      if (temp_v5 == 0) {
        temp_v5 = temp_v17;
        FUN_0029f278(temp_v17,1);
        if (temp_v5 != 0) {
          do {
            FUN_002bf030(param_1 + 0xac,1);
            temp_v5 = FUN_00297f40(param_1,1);
            *(unsigned int *)(param_1 + 0x3460) = 0;
            *(unsigned int *)(param_1 + 0x3464) = 0;
            *(unsigned int *)(param_1 + 0x3468) = 0;
            *(unsigned int *)(param_1 + 0x346c) = 0;
            if (temp_v5 != 7) {
              temp_v5 = param_1;
              FUN_0028d090();
              if (temp_v5 != 0) break;
            }
            else {
              *(unsigned int *)(param_1 + 0x3470) = 0;
              *(unsigned int *)(param_1 + 0x3474) = 0;
              *(unsigned int *)(param_1 + 0x3478) = 0;
              *(unsigned int *)(param_1 + 0x347c) = 0;
              temp_v33 = (char *)((unsigned int)temp_v33 & 0xffff0000);
              temp_v32 = temp_v32 & 0xffff0000;
              FUN_0028cde4(param_1,&temp_v33,&temp_v32);
              temp_v5 = FUN_0029eba8(temp_v17);
              if (temp_v5 == 0) {
                FUN_0028cd9c(0xffffffff,(int)(short)temp_v32,param_1 + 0x3460,param_1 + 0x3470);
                break;
              }
              temp_v7 = FUN_002a8a08();
              temp_v16 = param_1 + temp_v5 * 4;
              FUN_0028cd9c((int)*(char *)(temp_v7 + temp_v5 + 0x9107),(int)(short)temp_v32,
                           temp_v16 + 0x3460,temp_v16 + 0x3470);
              temp_v7 = FUN_002a8a08();
              if (-1 < *(char *)(temp_v7 + temp_v5 + 0x9107)) break;
              temp_v5 = (int)(short)temp_v32;
              FUN_002b4854();
              if ((((temp_v5 == 0) || ((*(unsigned char *)(temp_v5 + 0x6a) & 0x80) != 0)) ||
                  (*(short *)(temp_v5 + 0x62) != 0)) || ((*(unsigned char *)(temp_v5 + 0x6a) & 0x7f) == 1))
              break;
            }
            FUN_0029f278(temp_v17,0);
          } while( 1 );
        }
        break;
      }
      *(unsigned char *)(param_1 + 0x3060) = 1;
      *(unsigned int *)(param_1 + 0x3460) = 0;
      *(unsigned int *)(param_1 + 0x3464) = 0;
      *(unsigned int *)(param_1 + 0x3468) = 0;
      *(unsigned int *)(param_1 + 0x346c) = 0;
      *(unsigned int *)(param_1 + 0x3470) = 0;
      *(unsigned int *)(param_1 + 0x3474) = 0;
      *(unsigned int *)(param_1 + 0x3478) = 0;
      *(unsigned int *)(param_1 + 0x347c) = 0;
      FUN_002983dc(param_1,*(unsigned int *)(param_1 + 0x304c),1);
      temp_v9 = 0x100016e;
      FUN_002bc200(temp_v9);
      break;
    }
    temp_v5 = FUN_0029eba8(temp_v17);
    if (*(char *)(temp_v5 + param_1 + 0x345c) == '\0') break;
    temp_v9 = FUN_0029eba8(temp_v17);
    *(unsigned int *)(param_1 + 0x3064) = temp_v9;
    temp_v5 = FUN_00297f40(param_1,1);
    if (temp_v5 == 2) goto LAB_0019c8b0;
    FUN_002983dc(param_1,0x26,1);
LAB_0019c60c:
    *(unsigned int *)(param_1 + 0x3460) = 0;
    *(unsigned int *)(param_1 + 0x3464) = 0;
    *(unsigned int *)(param_1 + 0x3468) = 0;
    *(unsigned int *)(param_1 + 0x346c) = 0;
    *(unsigned int *)(param_1 + 0x3470) = 0;
    *(unsigned int *)(param_1 + 0x3474) = 0;
    *(unsigned int *)(param_1 + 0x3478) = 0;
    *(unsigned int *)(param_1 + 0x347c) = 0;
    temp_v9 = 0x100016d;
    FUN_002bc200(temp_v9);
    break;
  case 0x23:
    temp_v17 = 0;
    temp_v5 = FUN_0029ebf8(param_1 + 0x33a8);
    if (0 < temp_v5) {
      do {
        temp_v5 = FUN_0029d8fc((int)*(short *)(param_1 + temp_v17 * 2 + 0x574e));
        if (temp_v5 == 6) {
          temp_v36[0] = '\x01';
          break;
        }
        temp_v17 = temp_v17 + 1;
        temp_v5 = FUN_0029ebf8(param_1 + 0x33a8);
      } while (temp_v17 < temp_v5);
    }
    temp_v5 = FUN_002c1830(0,1);
    if (temp_v5 != 0) {
      *(unsigned char *)(param_1 + 0x3060) = 0;
    }
    if (temp_v5 != 0 || temp_v36[0] != '\0') {
      *(unsigned int *)(param_1 + 0x3064) = 9999;
      temp_v5 = FUN_00297f40(param_1,1);
      if (temp_v5 != 2) {
        FUN_002983dc(param_1,0x26,1);
      }
      else {
LAB_0019c8b0:
        FUN_002983dc(param_1,0x25,1);
      }
      goto LAB_0019c60c;
    }
    temp_v5 = FUN_002c1830(1,1);
    if (temp_v5 == 0) break;
    *(unsigned char *)(param_1 + 0x3060) = 1;
    *(unsigned int *)(param_1 + 0x3460) = 0;
    *(unsigned int *)(param_1 + 0x3464) = 0;
    *(unsigned int *)(param_1 + 0x3468) = 0;
    *(unsigned int *)(param_1 + 0x346c) = 0;
    *(unsigned int *)(param_1 + 0x3470) = 0;
    *(unsigned int *)(param_1 + 0x3474) = 0;
    *(unsigned int *)(param_1 + 0x3478) = 0;
    *(unsigned int *)(param_1 + 0x347c) = 0;
    FUN_002983dc(param_1,*(unsigned int *)(param_1 + 0x304c),1);
    temp_v9 = 0x100016e;
    FUN_002bc200(temp_v9);
    break;
  case 0x24:
    temp_v5 = FUN_0029d8fc((int)*(short *)(param_1 + *(int *)(param_1 + 0x305c) * 2 + 0x574e));
    if (temp_v5 == 6) {
      temp_v36[0] = '\x01';
    }
    temp_v5 = FUN_002c1830(0,1);
    if (temp_v5 != 0) {
      *(unsigned char *)(param_1 + 0x3060) = 0;
    }
    if (temp_v5 == 0 && temp_v36[0] == '\0') {
      temp_v5 = FUN_002c1830(1,1);
      if (temp_v5 == 0) break;
      *(unsigned char *)(param_1 + 0x3060) = 1;
      FUN_002983dc(param_1,*(unsigned int *)(param_1 + 0x304c),1);
      temp_v9 = 0x100016e;
      FUN_002bc200(temp_v9);
      break;
    }
    temp_v9 = FUN_0029eba8(param_1 + 0x33a8);
    *(unsigned int *)(param_1 + 0x3064) = temp_v9;
    temp_v5 = FUN_00297f40(param_1,1);
    if (temp_v5 != 2) {
      FUN_002983dc(param_1,0x26,1);
    }
    else {
      FUN_002983dc(param_1,0x25,1);
    }
    temp_v9 = 0x100016d;
    FUN_002bc200(temp_v9);
    break;
  case 0x25:
    temp_v5 = FUN_0029c68c();
    if (temp_v5 == 1) {
      FUN_0029cee4(1);
      FUN_002983dc(param_1,0x26,0);
    }
    break;
  case 0x27:
    temp_v5 = FUN_002bf9f0(param_1 + 0x12b8);
    if (temp_v5 == 0) break;
    FUN_002983dc(param_1,*(unsigned int *)(param_1 + 0x304c),0);
    break;
  case 0x2a:
    if (*(char *)(param_1 + 0x3080) == '\0') {
      FUN_002bf030(param_1 + 0x20,0);
      temp_v5 = 0;
      do {
        FUN_002bf030(param_1 + temp_v5 * 0x8c + 0x138,0);
        temp_v5 = temp_v5 + 1;
      } while (temp_v5 < 8);
      temp_v5 = 0;
      do {
        FUN_002af854(param_1 + temp_v5 * 0x8c + 0xe58,0);
        temp_v5 = temp_v5 + 1;
      } while (temp_v5 < 6);
      *(unsigned int *)(param_1 + 0x3054) = 0x11;
      FUN_002983dc(param_1,0x10,1);
    }
    break;
  case 0x2b:
    FUN_002bf9f0(param_1 + 0x12b8);
    temp_v5 = FUN_0028cd78();
    if (temp_v5 != 0) {
      temp_v6 = FUN_0028cd5c();
      if (temp_v6 != 0) {
        FUN_0028cd04(temp_v6 & 0xffff);
      }
      FUN_0028ccb0(DAT_00435de4 & 0xffff);
      DAT_00435de4 = DAT_00435de4 + 1;
      FUN_0029ccf8();
      FUN_002983dc(param_1,0x2c,1);
    }
    break;
  case 0x2c:
    temp_v5 = FUN_002958bc();
    if (temp_v5 != 0) {
      FUN_00292eb0();
      FUN_002bdac0(param_1 + 0x12b8,0);
      FUN_002983dc(param_1,1);
    }
    break;
  case 0x2d:
    temp_v17 = param_1 + 0x33a8;
    temp_v7 = FUN_0029eba8();
    temp_v33 = temp_v36;
    temp_v32 = 0xffffffff;
    temp_v34 = 1;
    temp_v31 = (unsigned int *)0xffffffff;
    temp_v35 = (unsigned char *)0x1;
    temp_v5 = temp_v17;
    FUN_0029f878(temp_v17,0,param_1 + 0x574e,0xffffffff);
    if (temp_v5 != 0) {
      temp_v5 = FUN_0029eba8(temp_v17);
      if (temp_v5 == temp_v7) break;
    }
    else {
      temp_v5 = temp_v17;
      FUN_0029f278(temp_v17,1);
      if (temp_v5 == 0) {
        temp_v5 = FUN_002c1830(0,1);
        if (temp_v5 != 0) {
          *(unsigned char *)(param_1 + 0x3060) = 0;
        }
        if (temp_v5 == 0 && temp_v36[0] == '\0') break;
        temp_v5 = FUN_0029eba8(temp_v17);
        if (temp_v5 != 0) {
          temp_v17 = FUN_002a8a08();
          if (*(char *)(temp_v17 + temp_v5 + 0x9108) < '\0') break;
          temp_v0 = *(char *)(param_1 + temp_v5 + 0x38cc);
        }
        else {
          temp_v0 = *(char *)(param_1 + 0x38cc);
        }
        if (temp_v0 != '\0') break;
        *(int *)(param_1 + 0x305c) = temp_v5;
        *(unsigned char *)(param_1 + 0x3083) = 0;
        FUN_0019931c(param_1);
        temp_v5 = 0;
        do {
          FUN_002af854(param_1 + temp_v5 * 0x8c + 0xe58,0);
          temp_v5 = temp_v5 + 1;
        } while (temp_v5 < 6);
        FUN_0028d1d4(param_1,*(unsigned int *)(param_1 + 0x305c),1);
        temp_v9 = 0x100016d;
        FUN_002bc200(temp_v9);
        break;
      }
    }
    FUN_002bf030(param_1 + 0xac,1);
    temp_v9 = FUN_0029eba8(temp_v17);
    *(unsigned int *)(param_1 + 0x305c) = temp_v9;
    FUN_0028ec90(param_1);
  }
  temp_v35 = (unsigned char *)(param_1 + 0x38cc);
  temp_v42 = (unsigned char *)(param_1 + 0x38d1);
  temp_v30 = 0x3f8000003e20d97c;
  temp_v29 = 0x3dcccccd;
  temp_v38 = param_1 + 0x9f8;
  temp_v5 = 0;
  do {
    temp_v17 = param_1 + temp_v5;
    if (*(char *)(temp_v17 + 0x37bc) != '\0') {
      temp_v7 = param_1 + temp_v5 * 4;
      piVar14 = (int *)(temp_v7 + 0x37f0);
      if (*piVar14 < 0x14) {
        *piVar14 = *piVar14 + 1;
      }
      else {
        *(unsigned char *)(temp_v17 + 0x37bc) = 0;
        *(unsigned int *)(temp_v7 + 0x37c8) = 0;
        *(unsigned int *)(temp_v7 + 0x37dc) = 0;
        *piVar14 = 0;
      }
      if (*(char *)(temp_v17 + 0x37bc) == '\0') goto LAB_0019cdc0;
    }
    else {
LAB_0019cdc0:
      temp_v0 = *(char *)(temp_v17 + 0x38cc);
      temp_v19 = temp_v0 == '\0';
      if (temp_v19) {
        temp_v0 = *(char *)(temp_v17 + 0x38d1);
      }
      if (temp_v19 && temp_v0 == '\0') {
        if (temp_v5 != 0) {
          if (temp_v5 == 4) goto LAB_0019ce84;
          if (((*(char *)(temp_v39 + temp_v5 + 0x9107) < '\0') || (temp_v7 = FUN_002a89e4(), temp_v7 == 0)
              ) || ((*(unsigned short *)(temp_v7 + 0x44) & 2) != 0)) {
            *(unsigned char *)(temp_v17 + 0x38cc) = 1;
            FUN_002bf9e8(0x1000188);
          }
        }
        else {
          temp_v7 = FUN_002b66ec();
          if ((*(unsigned short *)(temp_v7 + 0x72) & 2) != 0) {
            *temp_v35 = 1;
          }
        }
        if (*(char *)(temp_v17 + 0x38cc) != '\0') {
          if (temp_v5 != 0) {
            temp_v7 = param_1 + temp_v5 * 0x8c;
            FUN_002af854(temp_v7 + 0x9f8,8,0);
            FUN_002bf030(temp_v7 + 0xc28,6);
          }
          else {
            FUN_002af854(temp_v38,9,0);
          }
          FUN_0028dce4(param_1,temp_v5,0);
        }
      }
    }
LAB_0019ce84:
    temp_v16 = param_1 + temp_v5 * 4;
    temp_v7 = *(int *)(temp_v16 + 0x385c);
    if (0 < temp_v7) {
      *(int *)(temp_v16 + 0x385c) = temp_v7 - 1;
    }
    temp_v40 = temp_v17 + 0x3800;
    if ((*(char *)(temp_v17 + 0x389c) != '\0') &&
       (temp_v7 = *(int *)(temp_v16 + 0x38a4) + 1, *(int *)(temp_v16 + 0x38a4) = temp_v7, temp_v7 >= 0x15)) {
      *(unsigned char *)(temp_v17 + 0x389c) = 0;
    }
    temp_v7 = param_1 + temp_v5 * 2;
    temp_v41 = temp_v7;
    switch(*(unsigned short *)(temp_v7 + 0x5950)) {
    case 1:
      temp_v8 = FUN_002bf9f0(param_1 + temp_v5 * 0x8c + 0x13d0);
      if (temp_v8 != 0) {
        temp_v1 = 2;
        *(unsigned short *)(temp_v7 + 0x5950) = temp_v1;
      }
      break;
    case 2:
      temp_v8 = FUN_002bf9f0(param_1 + temp_v5 * 0x8c + 0x1600);
      if (temp_v8 != 0) {
        temp_v1 = 3;
        *(unsigned short *)(temp_v7 + 0x5950) = temp_v1;
      }
      break;
    case 3:
      *(float *)(temp_v16 + 0x5964) = *(float *)(temp_v16 + 0x5964) + (float)temp_v30;
      temp_v43 = param_1 + temp_v5 * 0x8c;
      if (*(char *)(temp_v43 + 0x18ba) != '\0') {
        temp_v2 = *(short *)(temp_v7 + 0x595a) + 1;
        *(unsigned short *)(temp_v7 + 0x595a) = temp_v2;
        if (temp_v2 >= 2) {
          *(unsigned short *)(temp_v7 + 0x595a) = 0;
          temp_v3 = FUN_002bef7c(temp_v43 + 0x1600);
          *(short *)(temp_v7 + 0x597e) = *(short *)(temp_v43 + 0x1618) + temp_v3;
          temp_v4 = FUN_002bef70(temp_v43 + 0x1600);
          temp_v3 = *(short *)(temp_v43 + 0x161a);
          *(unsigned short *)(temp_v7 + 0x5950) = 4;
          *(short *)(temp_v7 + 0x5988) = temp_v3 + temp_v4;
          FUN_002bf030(temp_v43 + 0x13d0,0xc);
          FUN_002bf030(temp_v43 + 0x1600,0xf);
        }
      }
      else {
        FUN_002bf9f0(temp_v43 + 0x1830);
      }
      break;
    case 4:
      if (*(unsigned short *)(temp_v7 + 0x595a) < 6) {
        temp_v8 = FUN_002bf6d0(0x15,0xbba);
        temp_v18 = param_1 + temp_v5 * 0x8c;
        temp_v14 = *(short *)(temp_v7 + 0x595a) + 1;
        temp_v25 = *(float *)(temp_v18 + 0x1628);
        temp_v23 = *(float *)(temp_v18 + 0x162c);
        temp_v6 = (unsigned int)temp_v14;
        temp_v28 = (float)((unsigned long long)temp_v30 >> 0x20);
        temp_v22 = (float)VectorUnsignedToFloat
                                  ((*(unsigned short *)(temp_v8 + 4) & 0xffff7fff) >> 1,
                                   (unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v2 = *(unsigned short *)(temp_v8 + 6);
        *(unsigned short *)(temp_v7 + 0x595a) = temp_v14;
        temp_v24 = (float)VectorUnsignedToFloat
                                  ((temp_v2 & 0xffff7fff) >> 1,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v27 = (float)VectorUnsignedToFloat(temp_v6,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v26 = (float)VectorUnsignedToFloat(temp_v6,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v22 = (float)VectorSignedToFloat((int)(short)(int)(temp_v22 * (temp_v28 - temp_v25)) +
                                            ((int)*(short *)(temp_v7 + 0x5992) -
                                            (int)*(short *)(temp_v7 + 0x597e)),
                                            (unsigned char)(in_fpscr >> 0x16) & 3);
        *(short *)(temp_v7 + 0x59a6) = (short)(int)(temp_v22 * temp_v27 * (float)temp_v29);
        temp_v22 = (float)VectorSignedToFloat(((int)*(short *)(temp_v7 + 0x599c) -
                                            (int)*(short *)(temp_v7 + 0x5988)) -
                                            (int)(short)(int)(temp_v24 * (temp_v28 - temp_v23)),
                                            (unsigned char)(in_fpscr >> 0x16) & 3);
        *(short *)(temp_v7 + 0x59b0) = (short)(int)(temp_v22 * temp_v26 * (float)temp_v29);
        if (temp_v6 >= 4) {
          *(unsigned char *)(temp_v17 + 0x5978) = 1;
        }
      }
      temp_v8 = param_1 + temp_v5 * 0x8c;
      temp_v31 = (unsigned int *)(temp_v8 + 0x13d0);
      FUN_002bf9f0();
      FUN_002bf9f0(temp_v8 + 0x1600);
      if ((*(char *)((int)temp_v31 + 0x8a) != '\0') && (*(char *)(temp_v8 + 0x168a) != '\0')) {
        *(unsigned short *)(temp_v7 + 0x595a) = 0;
        *(unsigned short *)(temp_v7 + 0x5950) = 5;
      }
      break;
    case 5:
      *(short *)(temp_v7 + 0x595a) = *(short *)(temp_v7 + 0x595a) + 1;
    }
    if (*(char *)(temp_v40 + 0xcc) != '\0') {
      if (temp_v5 != 0) {
        temp_v18 = param_1 + temp_v5 * 0x8c;
        temp_v8 = FUN_002bf9f0(temp_v18 + 0x9f8);
        if ((temp_v8 != 0) && (temp_v8 = FUN_002bf9f0(temp_v18 + 0xc28), temp_v8 != 0)) {
          temp_v8 = *(int *)(temp_v16 + 0x340c);
          if (0 < temp_v8) {
            FUN_00295b9c((int)(short)temp_v8,1);
            *(int *)(temp_v16 + 0x340c) = 0;
          }
          *(unsigned char *)(temp_v17 + 0x38cc) = 0;
          *(unsigned char *)(temp_v17 + 0x38d1) = 1;
        }
        goto LAB_0019d2dc;
      }
      temp_v7 = FUN_002bf9f0(temp_v38);
      if (temp_v7 != 0) {
        *temp_v35 = 0;
        *temp_v42 = 1;
      }
    }
    else {
LAB_0019d2dc:
      if ((0 < temp_v5) && (temp_v43 = temp_v17 + 0x5900, *(char *)(temp_v17 + 0x5925) != '\0')) {
        piVar14 = (int *)(temp_v16 + 0x592c);
        temp_v8 = *piVar14;
        *piVar14 = temp_v8 + 1;
        if (*(short *)(temp_v7 + 0x5940) >= 0) {
          temp_v31 = (unsigned int *)FUN_002a89e4((int)*(short *)(temp_v7 + 0x5940));
          if (*piVar14 == 8) {
            temp_v44 = (unsigned int *)(temp_v16 + 0x340c);
            temp_v6 = *temp_v44;
            if (temp_v6 == *(unsigned short *)((int)temp_v31 + 0x46)) goto LAB_0019d4d0;
            if (0 < (int)temp_v6) {
              FUN_00295b9c((int)(short)temp_v6,1);
            }
            FUN_00294568((int)*(short *)((int)temp_v31 + 0x46),1);
            *temp_v44 = (unsigned int)*(unsigned short *)((int)temp_v31 + 0x46);
            *(unsigned short *)(temp_v41 + 0x38f4) = *(unsigned short *)(temp_v7 + 0x5940);
            *(unsigned short *)(temp_v41 + 0x38d6) = *(unsigned short *)((int)temp_v31 + 0x2a);
            *(unsigned short *)(temp_v41 + 0x38e0) = *(unsigned short *)(temp_v31 + 0xb);
            *(unsigned short *)(temp_v41 + 0x38ea) = (unsigned short)*(unsigned char *)(temp_v31 + 0x12);
            *(unsigned char *)(temp_v17 + 0x38d1) = 0;
          }
          if (*piVar14 == 0x14) {
            if (*(char *)(temp_v43 + 0x4a) == '\0') goto LAB_0019d4d0;
            temp_v9 = FUN_00293c98();
            FUN_00338e08(temp_v9,(int)(short)temp_v5);
          }
          if (*piVar14 >= 0x2a) {
            *(unsigned char *)(temp_v17 + 0x5925) = 0;
            *piVar14 = 0;
            temp_v8 = FUN_0029ee4c(temp_v31,4);
            if (temp_v8 != 0) {
              *(unsigned char *)(temp_v17 + 0x5978) = 1;
              *(unsigned short *)(temp_v7 + 0x595a) = 0;
              *(unsigned short *)(temp_v7 + 0x5950) = 5;
            }
          }
        }
        else if (temp_v8 + 1 >= 8) {
          temp_v7 = *(int *)(temp_v16 + 0x340c);
          if (0 < temp_v7) {
            FUN_00295b9c((int)(short)temp_v7,1);
            *(int *)(temp_v16 + 0x340c) = 0;
          }
          *(unsigned char *)(temp_v17 + 0x5925) = 0;
          *piVar14 = 0;
          *(unsigned short *)(temp_v41 + 0x38f4) = 0xffff;
          *(unsigned char *)(temp_v17 + 0x38d1) = 1;
        }
      }
    }
LAB_0019d4d0:
    if (*(char *)(temp_v17 + 0x37bc) == '\0') {
      temp_v6 = temp_v17 + 0x3500;
      temp_v19 = *(char *)(temp_v17 + 0x3530) == '\0';
      if (temp_v19) {
        temp_v6 = (unsigned int)*(unsigned char *)(temp_v17 + 0x3535);
      }
      if (((temp_v19 && temp_v6 == 0) && (*(char *)(temp_v40 + 0xcc) == '\0')) &&
         (*(char *)(temp_v17 + 0x5925) == '\0')) {
        FUN_0028dce4(param_1,temp_v5,1);
      }
    }
    temp_v17 = 0;
    temp_v6 = 0;
    if (temp_v5 != 0) {
      if ((temp_v5 != 4) && (temp_v7 = FUN_002a8a08(), -1 < *(char *)(temp_v7 + temp_v5 + 0x9107))) {
        temp_v7 = FUN_002a8a08();
        temp_v7 = FUN_002a89e4((int)*(char *)(temp_v7 + temp_v5 + 0x9107));
        temp_v6 = (unsigned int)*(unsigned short *)(temp_v7 + 0x44);
      }
    }
    else {
      temp_v7 = FUN_002b66ec();
      temp_v6 = (unsigned int)*(unsigned short *)(temp_v7 + 0x72);
    }
    temp_v10 = 1;
    temp_v7 = 0;
    temp_v8 = 5;
    do {
      if ((temp_v6 & (1 << (temp_v10 & 0xff))) != 0) {
        temp_v17 = temp_v17 + 1;
      }
      if ((temp_v6 & (1 << ((temp_v10 + 1) & 0xff))) != 0) {
        temp_v7 = temp_v7 + 1;
      }
      temp_v8 = temp_v8 - 1;
      temp_v10 = temp_v10 + 2;
    } while (temp_v8 != 0);
    if (0 < temp_v7 + temp_v17) {
      piVar14 = (int *)(temp_v16 + 0x3508);
      temp_v17 = *piVar14;
      *piVar14 = temp_v17 + 1;
      if (temp_v17 + 1 >= 0x18) {
        FUN_002c615c(*(int *)(temp_v16 + 0x351c) + 1);
        *(int *)(temp_v16 + 0x351c) = temp_v12;
        *piVar14 = 0;
      }
    }
    temp_v5 = temp_v5 + 1;
    if (temp_v5 >= 5) {
      *(int *)(param_1 + 0x3044) = *(int *)(param_1 + 0x3044) + 1;
      return;
    }
  } while( 1 );
}
