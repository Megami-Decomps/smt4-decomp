/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003d3dd4` (_code @ 0x3d3dd4, 0x1ae8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 34 slot(s), 123 byte(s) */
typedef struct {
    unsigned char sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned short sp482; /* 0x482: local_482 */
    unsigned short sp484; /* 0x484: local_484 */
    unsigned short sp486; /* 0x486: local_486 */
    unsigned short sp49A; /* 0x49a: local_49a */
    unsigned short sp49C; /* 0x49c: local_49c */
    unsigned int sp4A0; /* 0x4a0: local_4a0 */
    unsigned int sp4A4; /* 0x4a4: local_4a4 */
    unsigned int sp4A8; /* 0x4a8: local_4a8 */
    unsigned int sp4AC; /* 0x4ac: local_4ac */
    unsigned int sp4B0; /* 0x4b0: local_4b0 */
    unsigned int sp4B4; /* 0x4b4: local_4b4 */
    unsigned int sp4B8; /* 0x4b8: local_4b8 */
    unsigned int sp4BC; /* 0x4bc: local_4bc */
    unsigned int sp4C0; /* 0x4c0: local_4c0 */
    unsigned int sp4C4; /* 0x4c4: local_4c4 */
    unsigned int sp4C8; /* 0x4c8: local_4c8 */
    unsigned int sp4CC; /* 0x4cc: local_4cc */
    unsigned int sp4D0; /* 0x4d0: local_4d0 */
    unsigned int sp4D4; /* 0x4d4: local_4d4 */
    unsigned int sp4D8; /* 0x4d8: local_4d8 */
    unsigned int sp4DC; /* 0x4dc: local_4dc */
    unsigned int sp4E0; /* 0x4e0: local_4e0 */
    unsigned int sp4E4; /* 0x4e4: local_4e4 */
    unsigned int sp4E8; /* 0x4e8: local_4e8 */
    unsigned int sp4EC; /* 0x4ec: local_4ec */
    unsigned int sp4F0; /* 0x4f0: local_4f0 */
} param_2_stack;

extern int DAT_004342c8; /* 0x4342c8 */
extern int DAT_004342d4; /* 0x4342d4 */
extern unsigned int DAT_004342d8; /* 0x4342d8 */
extern int DAT_004342e0; /* 0x4342e0 */
extern int DAT_004342e4; /* 0x4342e4 */
extern int DAT_004342e8; /* 0x4342e8 */
extern int DAT_004342ec; /* 0x4342ec */
extern float DAT_00434318; /* 0x434318 */
extern int DAT_0043431c; /* 0x43431c */
extern float DAT_00434320; /* 0x434320 */
extern int DAT_00434324; /* 0x434324 */
extern unsigned int DAT_00434328; /* 0x434328 */
extern float DAT_0043432c; /* 0x43432c */
extern int DAT_00434330; /* 0x434330 */
extern unsigned int DAT_00434334; /* 0x434334 */
extern int DAT_00434338; /* 0x434338 */
extern unsigned int DAT_0043433c; /* 0x43433c */
extern int DAT_00434340; /* 0x434340 */
extern unsigned int DAT_00434344; /* 0x434344 */
extern int DAT_00434348; /* 0x434348 */
extern int DAT_0043434c; /* 0x43434c */
extern int DAT_00435d18; /* 0x435d18 */
extern unsigned int DAT_00439ca8; /* 0x439ca8 */

/* Supplied declaration required: FUN_002274c8. */
extern int FUN_002277c4(int);
/* Supplied declaration required: FUN_002277fc. */
extern int FUN_00227dc4(int, int);
extern int FUN_002282a0(int, unsigned int);
extern int FUN_00228338(int);
/* Supplied declaration required: FUN_002283b4. */
/* Supplied declaration required: FUN_00228ac4. */
/* Supplied declaration required: FUN_00229888. */
extern int FUN_00229aa8(unsigned int *, unsigned int *, int);
/* Supplied declaration required: FUN_00229bd0. */
/* Supplied declaration required: FUN_0022aa5c. */
/* Supplied declaration required: FUN_0023c22c. */
/* Supplied declaration required: FUN_0023c6c0. */
/* Supplied declaration required: FUN_0023c71c. */
extern int FUN_0023c7e0(unsigned int);
extern unsigned int FUN_0023de58(unsigned int);
extern int FUN_0023ec3c(unsigned int);
/* Supplied declaration required: FUN_0023f3d8. */
/* Supplied declaration required: FUN_002461ec. */
/* Supplied declaration required: FUN_002465c0. */
/* Supplied declaration required: FUN_002475e4. */
extern int FUN_00248728(void);
/* Supplied declaration required: FUN_002508c0. */
/* Supplied declaration required: FUN_00250960. */
/* Supplied declaration required: FUN_00250fc4. */
extern int FUN_00255398(int, unsigned int);
/* Supplied declaration required: FUN_002553c0. */
/* Supplied declaration required: FUN_002553ec. */
/* Supplied declaration required: FUN_00256ad8. */
/* Supplied declaration required: FUN_00256b04. */
/* Supplied declaration required: FUN_0026c120. */
/* Supplied declaration required: FUN_00282a90. */
/* Supplied declaration required: FUN_00282b94. */
extern int FUN_00282c0c(int);
/* Supplied declaration required: FUN_002840b8. */
/* Supplied declaration required: FUN_0029565c. */
extern unsigned int FUN_0029abc0(unsigned int);
extern unsigned int FUN_0029ac70(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0029cee4. */
/* Supplied declaration required: FUN_002ae3f0. */
/* Supplied declaration required: FUN_002b4854. */
/* Supplied declaration required: FUN_0033b570. */
/* Supplied declaration required: FUN_0039496c. */
/* Supplied declaration required: FUN_00394c9c. */
extern int FUN_003bce40(unsigned int);
/* Supplied declaration required: FUN_003cccd8. */
/* Supplied declaration required: FUN_003cf724. */
/* Supplied declaration required: FUN_003d1600. */
extern int FUN_003d9acc(int, int);
extern int FUN_003db880(int);
/* Supplied declaration required: FUN_003dce74. */
extern unsigned int FUN_003dd160(int);
/* Supplied declaration required: FUN_003ddc00. */
/* Supplied declaration required: FUN_003ddc4c. */
/* Supplied declaration required: FUN_003ddd14. */
/* Supplied declaration required: FUN_003ddf5c. */
/* Supplied declaration required: FUN_003de0d0. */
/* Supplied declaration required: FUN_003de838. */
/* Supplied declaration required: FUN_003deaa0. */
/* Supplied declaration required: FUN_003deba4. */
extern unsigned int FUN_003debdc(unsigned int, unsigned int *, unsigned int);


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_003d3dd4(unsigned int *param_1,unsigned int *param_2)

{
/* irregular: 1 goto(s); 45 native warning(s); review required */
  int *piVar1;
  char temp_v0;
  unsigned short temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int *puVar7;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  short *psVar12;
  short temp_v9;
  char temp_v10;
  unsigned int temp_v11;
  unsigned int temp_v12;
  int temp_v13;
  int temp_v14;
  unsigned int temp_v15;
  unsigned char temp_v16;
  float temp_v17;
  unsigned int temp_v18;
  unsigned int temp_v19;
  unsigned int temp_v20;
  int temp_v21;
  short temp_v22;
  short temp_v23;
  short temp_v24;
  short temp_v25;
  short temp_v26;
  short asStack_478 [266];
  short asStack_264 [266];
  unsigned int temp_v27;
  int temp_v28;
  unsigned int temp_v29;
  int temp_v30;
  unsigned int temp_v31;
  unsigned int temp_v32;
  int temp_v33;
  char temp_v34 [16];
  
  if (*(short *)(param_2[10] + 0x14c) == 2) {
    temp_v2 = (int)*(short *)(param_2[10] + 0x14e);
    FUN_002ae3f0();
    if ((temp_v2 != 0) && (*(char *)(temp_v2 + 0x45) != '\0')) {
      if ((*(unsigned int *)(*param_1 + 0x44a0) & 0x40) != 0) {
        temp_v3 = *param_2 | 0x80;
        *param_2 = temp_v3;
      }
      else if ((*(unsigned int *)(*param_1 + 0x44a0) & 0x100) != 0) {
        temp_v3 = *param_2 | 0x1000;
        *param_2 = temp_v3;
      }
    }
  }
  temp_v32 = 0;
  temp_v21 = 0;
  temp_v14 = 0;
  temp_v13 = *(int *)(DAT_00435d18 + 0x1cfc);
  param_2[4] = 0;
  param_2[6] = 0;
  *(unsigned int *)(*param_1 + 0x48b8) = 0;
  temp_v28 = (int)*(short *)(param_2[10] + 0x14c);
  FUN_002475e4(&temp_v22,*param_1,param_2[8]);
  temp_v27 = (unsigned int)temp_v24;
  temp_v29 = (unsigned int)temp_v26;
  temp_v2 = (int)temp_v22;
  temp_v16 = 0;
  temp_v30 = 0;
  temp_v31 = 0;
  if (((*param_2 & 0x1080) != 0) && (temp_v4 = FUN_00248728(), temp_v4 != 0)) {
    FUN_0029cee4(1);
  }
  FUN_003cf724(param_1,param_2,asStack_478);
  temp_v20 = 0;
  temp_v3 = FUN_002277fc(DAT_00435d18);
  param_2[7] = temp_v3;
  temp_v18 = 0;
  temp_v33 = 0;
  do {
    temp_v4 = temp_v33;
    temp_v3 = temp_v32;
    psVar12 = asStack_478 + temp_v33 * 2;
    if (*psVar12 < 0) break;
    temp_v20 = temp_v32;
    temp_v18 = *param_1;
    FUN_00282b94();
    temp_v34[0] = '\0';
    temp_v19 = temp_v27;
    FUN_002283b4(temp_v27,(int)temp_v25,(int)*(short *)(param_2[10] + 0x14c),
                 (int)*(short *)(param_2[9] + 0x62),(int)*psVar12,(*param_2 & 0x8000) >> 0xf,0,
                 temp_v34);
    temp_v12 = temp_v27;
    if ((param_2[0xc] != 4) || (!(temp_v19 == 1 || temp_v19 == 2))) {
      if ((temp_v19 == 0) && (temp_v34[0] != '\0')) {
        temp_v31 = 1;
      }
    }
    else {
      temp_v19 = 3;
    }
    switch(temp_v19) {
    case 0:
    case 1:
    case 2:
    case 3:
      FUN_003cccd8(param_1,param_2,temp_v19,temp_v27,(int)temp_v25,temp_v29,
                   (int)*(short *)(param_2[9] + 0x62),(int)*psVar12,(int)asStack_478[temp_v4 * 2 + 1],
                   temp_v3,temp_v14,&temp_v30);
      break;
    case 5:
      temp_v4 = (int)*(short *)(param_2[9] + 0x62);
      temp_v7 = (int)*psVar12;
      temp_v5 = FUN_002282a0(DAT_00435d18,1);
      temp_v6 = FUN_00282c0c(DAT_00435d18);
      temp_v6 = temp_v6 * temp_v14;
      if (param_2[0x166] == 1) {
        temp_v6 = FUN_00282c0c(DAT_00435d18);
        temp_v6 = temp_v6 + *(int *)(*(int *)(*param_1 + 0x1e98) + temp_v7 * 0x114 + 0x5c);
      }
      temp_v12 = temp_v3 + temp_v5 + temp_v6;
      FUN_002461ec(temp_v12,0,param_2,*(int *)(*param_1 + 0x1e98) + temp_v7 * 0x114,3);
      FUN_0022aa5c(*param_1,temp_v4,0);
      FUN_00229888(param_1,param_2,temp_v7,temp_v3 + temp_v5,10,0x14);
      FUN_00228ac4(param_1,temp_v7,1);
      temp_v4 = FUN_00227dc4(temp_v4,temp_v7);
      temp_v3 = param_2[4];
      if (temp_v4 != 0) {
        if ((int)temp_v3 < 0) {
          temp_v3 = 0;
        }
        param_2[4] = temp_v3;
        temp_v3 = param_2[7];
      }
      else {
        if ((int)temp_v3 < 5) {
          temp_v3 = 5;
        }
        param_2[4] = temp_v3;
        temp_v3 = param_2[7];
      }
      if ((int)temp_v12 <= (int)temp_v3) {
        temp_v12 = temp_v3;
      }
      param_2[7] = temp_v12;
      break;
    case 6:
      FUN_003d1600(param_1,param_2,temp_v27,(int)*(short *)(param_2[9] + 0x62),(int)*psVar12,temp_v3,
                   temp_v21);
      temp_v21 = (int)(char)((char)temp_v21 + '\x01');
      break;
    case 7:
      temp_v5 = (int)*psVar12;
      puVar7 = (unsigned int *)*param_1;
      FUN_00282b94(puVar7,temp_v5);
      temp_v4 = FUN_00228338(DAT_00435d18);
      if ((*puVar7 & 8) != 0) {
        if ((*puVar7 & 1) != 0) {
          FUN_002465c0(temp_v4 + temp_v21,param_2,puVar7);
        }
      }
      else {
        FUN_002461ec(temp_v4 + temp_v21,0,param_2,*(int *)(*param_1 + 0x1e98) + temp_v5 * 0x114,3);
        FUN_00228ac4(param_1,temp_v5,1);
        temp_v3 = param_2[4];
        if ((int)temp_v3 < 5) {
          temp_v3 = 5;
        }
        param_2[4] = temp_v3;
      }
      temp_v21 = (int)(char)((char)temp_v21 + '\x01');
      break;
    case 9:
      *(unsigned int *)(*param_1 + 0x88) = 4;
      *param_2 = *param_2 | 0x2000;
      FUN_00256ad8(1,param_2);
      FUN_00256b04(0,param_2);
      *(unsigned int *)(DAT_004342c8 + 0x760) = 0xffffffff;
      break;
    case 0xb:
      temp_v9 = *psVar12;
      temp_v12 = *param_1;
      FUN_00282b94(temp_v12,(int)temp_v9);
      FUN_002465c0(temp_v3 + 0x28,param_2,temp_v12);
      FUN_00229888(param_1,param_2,(int)temp_v9,temp_v3,0x1e,0x1e);
      break;
    case 0xc:
      temp_v3 = temp_v27;
      FUN_002ae3f0();
      if (temp_v3 != 0) {
        temp_v10 = *(char *)(temp_v3 + 0x56);
        if (temp_v10 == '\x02') {
          temp_v3 = 0x11;
        }
        else {
          if (temp_v10 != '\x03') {
            if (temp_v10 == '\x04') {
              param_2[6] = 0x13;
            }
            break;
          }
          temp_v3 = 0x12;
        }
        param_2[6] = temp_v3;
      }
      break;
    case 0xd:
      temp_v5 = (int)*psVar12;
      temp_v3 = FUN_002277fc(DAT_00435d18);
      temp_v4 = FUN_003bce40(temp_v12);
      FUN_003ddc4c(temp_v3,param_2,-temp_v4);
      FUN_00229888(param_1,param_2,temp_v5,temp_v3,10,0x14);
      if (temp_v4 != 0) {
        FUN_00228ac4(param_1,temp_v5,3);
      }
      else {
        FUN_00228ac4(param_1,temp_v5,2);
      }
      temp_v12 = param_2[4];
      if ((int)temp_v12 < 0) {
        temp_v12 = 0;
      }
      param_2[4] = temp_v12;
      if ((int)temp_v3 <= (int)param_2[7]) {
        temp_v3 = param_2[7];
      }
      param_2[7] = temp_v3;
      break;
    case 0xe:
      temp_v12 = param_2[4];
      if ((int)temp_v12 < 0) {
        temp_v12 = 0;
      }
      param_2[4] = temp_v12;
      if ((int)temp_v3 <= (int)param_2[7]) {
        temp_v3 = param_2[7];
      }
      param_2[7] = temp_v3;
      break;
    case 0xf:
      temp_v4 = FUN_002282a0(DAT_00435d18,1);
      temp_v12 = param_2[4];
      temp_v3 = temp_v4 + temp_v3;
      if ((int)temp_v12 < 0) {
        temp_v12 = 0;
      }
      param_2[4] = temp_v12;
      temp_v12 = param_2[7];
      if ((int)param_2[7] < (int)temp_v3) {
        temp_v12 = temp_v3;
      }
      param_2[7] = temp_v12;
      FUN_00229bd0(temp_v3,param_2,0,0x1d,0);
      temp_v16 = 1;
      break;
    case 0x10:
      temp_v9 = *(short *)(param_2[9] + 0x62);
      temp_v4 = FUN_002277c4(DAT_00435d18);
      temp_v12 = temp_v27;
      temp_v15 = *param_1;
      FUN_00282b94(temp_v15,(int)temp_v9);
      FUN_002ae3f0();
      temp_v10 = '\0';
      if ((temp_v12 != 0) && (temp_v0 = *(char *)(temp_v12 + 0x45), temp_v0 == '\x01' || temp_v0 == '\x02')) {
        temp_v10 = temp_v0;
      }
      FUN_003de0d0(temp_v3 + temp_v4,param_2,temp_v15,temp_v10);
    }
    if (temp_v13 != 0) {
      if (temp_v19 != 1 && temp_v19 != 2) {
        temp_v4 = 0;
        do {
          temp_v5 = FUN_002277fc(DAT_00435d18);
          if (-1 < temp_v5) {
            temp_v9 = *(short *)(temp_v13 + temp_v4 * 0x16 + 0x6a);
            temp_v5 = FUN_00282c0c(DAT_00435d18);
            switch(temp_v9) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
            case 0xc:
              if ((temp_v9 == 0xc) && (-1 < *psVar12)) {
                puVar7 = (unsigned int *)*param_1;
                FUN_00282b94();
                if ((puVar7 != (unsigned int *)0x0) && ((*puVar7 & 2) == 0)) break;
              }
              temp_v6 = temp_v13 + temp_v4 * 0x16;
              FUN_00282a90((int)*(short *)(temp_v6 + 0x68) + temp_v5 * temp_v14,param_2,
                           (int)*(short *)(param_2[9] + 0x62),(int)*psVar12,1,temp_v4,
                           *(unsigned short *)(temp_v6 + 0x6a),temp_v6 + 0x58);
            }
          }
          temp_v4 = temp_v4 + 1;
        } while (temp_v4 < 4);
        goto LAB_003d4678;
      }
    }
    else {
LAB_003d4678:
      if ((temp_v19 == 3) && ((temp_v23 == 6 || (temp_v23 == 7)))) {
        FUN_002553c0((int)*psVar12,0x14,0);
      }
    }
    psVar12 = asStack_478;
    temp_v10 = *(char *)(*param_1 + 0x80) - '\x01';
    *(char *)(*param_1 + 0x80) = temp_v10;
    if ('\0' < temp_v10) {
      temp_v10 = *(char *)(*param_1 + 0x81);
    }
    if (('\0' < temp_v10) && (param_2[0x15c] == 0)) {
      temp_v5 = 0;
      temp_v4 = temp_v33;
      do {
        if ((*(char *)((int)param_2 + temp_v5 + 0x38) != '\0') &&
           (((*(unsigned int *)(*(int *)(*param_1 + 0x1fc0) + temp_v5 * 0x288) & 0x40) != 0 ||
            (temp_v6 = FUN_00229aa8(param_1,param_2,temp_v5), temp_v6 != 0)))) {
          *(unsigned char *)((int)param_2 + temp_v5 + 0x38) = 0;
        }
        temp_v5 = temp_v5 + 1;
      } while (temp_v5 < 0x6d);
      temp_v9 = 0;
      temp_v6 = 0x85;
      temp_v5 = 0;
      puVar7 = param_2 + 0xe;
      do {
        temp_v7 = temp_v5;
        if ((char)*puVar7 != '\0') {
          temp_v7 = temp_v5 + 1;
          asStack_264[temp_v5 * 2] = temp_v9;
          asStack_264[temp_v5 * 2 + 1] = 0;
        }
        temp_v6 = temp_v6 - 1;
        temp_v9 = temp_v9 + 1;
        temp_v5 = temp_v7;
        puVar7 = (unsigned int *)((int)puVar7 + 1);
      } while (temp_v6 != 0);
      if (temp_v7 != 0) {
        temp_v5 = FUN_0023ec3c((temp_v7 - 1U) & 0xffff);
        temp_v9 = asStack_264[temp_v5 * 2];
        asStack_264[temp_v5 * 2 + 1] = asStack_264[temp_v5 * 2 + 1] + 1;
        psVar12[temp_v4 * 2 + 2] = temp_v9;
        psVar12[temp_v4 * 2 + 3] = 1;
      }
    }
    temp_v14 = temp_v14 + 1;
    temp_v33 = temp_v33 + 1;
  } while (temp_v33 < 0x85);
  temp_v3 = temp_v27;
  FUN_002ae3f0();
  if ((*param_2 & 0x200) == 0) {
    if (*(short *)(param_2[10] + 0x14c) != 1) {
      if (temp_v3 != 0) {
        if (*(char *)(temp_v3 + 0x23) != '\0') {
          if (*(char *)(temp_v3 + 0x23) == '\x01') {
            FUN_002553c0((int)*(short *)(param_2[9] + 0x62),0xf,0);
            temp_v8 = 0x11;
            temp_v9 = *(short *)(param_2[9] + 0x62);
            FUN_002553c0((int)temp_v9,temp_v8,0);
          }
        }
        else {
          FUN_002553c0((int)*(short *)(param_2[9] + 0x62),0xe,0);
          temp_v8 = 0x10;
          temp_v9 = *(short *)(param_2[9] + 0x62);
          FUN_002553c0((int)temp_v9,temp_v8,0);
        }
      }
    }
    else {
      FUN_002553c0((int)*(short *)(param_2[9] + 0x62),0xe,0);
      FUN_002553c0((int)*(short *)(param_2[9] + 0x62),0x10,0);
    }
  }
  if (temp_v13 != 0) {
    temp_v4 = 0;
    do {
      temp_v5 = FUN_002277fc(DAT_00435d18);
      if (-1 < temp_v5) {
        temp_v5 = temp_v13 + temp_v4 * 0x16;
        if (*(unsigned short *)(temp_v5 + 0x6a) - 6 < 6) {
          FUN_00282a90((int)*(short *)(temp_v5 + 0x68),param_2,(int)*(short *)(param_2[9] + 0x62),
                       0xffffffff,1,temp_v4,(unsigned int)*(unsigned short *)(temp_v5 + 0x6a),temp_v5 + 0x58);
        }
      }
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < 4);
  }
  if ((*param_2 & 0x1080) == 0) {
    if (temp_v28 == 2 || temp_v28 == 3) {
      FUN_0039496c(temp_v27 & 0xffff);
      FUN_00394c9c(temp_v27 & 0xffff,param_2,0);
      if ((*param_2 & 0x1080) != 0) {
        temp_v20 = 1;
      }
    }
  }
  else {
    temp_v20 = 1;
  }
  temp_v4 = param_2[7] + 5;
  if ((*(short *)(param_2[10] + 0x14c) != 10) && ((*param_2 & 0x2000) == 0)) {
    if (*(short *)(param_2[10] + 0x14c) != 9) {
      if (temp_v14 >= 1) {
        if (param_2[0xc] == 0) {
          FUN_0026c120(temp_v20 + temp_v4,param_2,param_2[4],param_2[9],1);
        }
      }
      else {
        FUN_0026c120(temp_v20 + temp_v4,param_2,0,param_2[9],1);
      }
      if (0 < (int)param_2[6]) {
        FUN_0026c120(temp_v20 + temp_v4 + 0x14,param_2,param_2[6],param_2[9],1);
      }
    }
    else {
      FUN_0026c120(temp_v20 + temp_v4,param_2,0xb,param_2[9],1);
    }
  }
  if ((*param_2 & 0x1080) == 0) {
    if (!(temp_v28 == 2 || temp_v28 == 3)) {
      if (temp_v28 != 1) {
        if ((temp_v28 == 8) && (!temp_v16)) {
          temp_v12 = temp_v29;
          FUN_002b4854();
          temp_v12 = (unsigned int)*(unsigned short *)(temp_v12 + 0x62);
          if (temp_v12 != 0) {
            temp_v4 = FUN_0023c7e0(temp_v12);
            temp_v14 = FUN_002277c4(DAT_00435d18);
            if (temp_v14 >= 1) {
              if (temp_v4 != 0) {
                FUN_003ddf5c(temp_v14,param_2,temp_v12);
              }
            }
            else if (temp_v4 != 0) {
              if ((*(unsigned int *)(temp_v4 + 8) & 0x10) != 0) {
                temp_v14 = temp_v20 + 0x1e;
              }
              else {
                temp_v14 = temp_v20 + 0x1e;
              }
              FUN_003ddf5c(temp_v14,param_2,temp_v12);
            }
          }
        }
      }
      else if (*(int *)(*param_1 + 0x48b8) != 0) {
        temp_v14 = FUN_00228338(DAT_00435d18);
        temp_v12 = 0;
        temp_v14 = temp_v14 + temp_v30;
        if (temp_v14 < 1) {
          temp_v14 = temp_v20 + 0x1e;
        }
        FUN_003ddf5c(temp_v14,param_2,temp_v12);
      }
    }
    else if (!temp_v16) {
      temp_v14 = FUN_0023c7e0(temp_v27);
      temp_v4 = FUN_002277c4(DAT_00435d18);
      if (temp_v4 >= 1) {
        if (temp_v14 != 0) {
          if ((*(unsigned int *)(temp_v14 + 8) & 0x10) == 0) {
            temp_v18 = param_2[8];
          }
          FUN_003ddf5c(temp_v4,param_2,temp_v27,temp_v18);
        }
      }
      else if (temp_v14 != 0) {
        if ((*(unsigned int *)(temp_v14 + 8) & 0x10) != 0) {
          temp_v4 = temp_v20 + 0x1e;
        }
        else {
          temp_v18 = param_2[8];
          temp_v4 = temp_v20 + 0x1e;
        }
        FUN_003ddf5c(temp_v4,param_2,temp_v27,temp_v18);
      }
      if (*(int *)(*param_1 + 0x48b8) != 0) {
        temp_v14 = FUN_00228338(DAT_00435d18);
        temp_v14 = temp_v14 + temp_v30;
        temp_v12 = temp_v27;
        if (temp_v14 < 1) {
          temp_v14 = temp_v20 + 0x1e;
        }
        FUN_003ddf5c(temp_v14,param_2,temp_v12);
      }
    }
  }
  if (temp_v13 != 0) {
    temp_v14 = 0;
    do {
      temp_v4 = FUN_003db880(DAT_00435d18);
      if (-1 < temp_v4) {
        temp_v4 = temp_v13 + temp_v14 * 0x16;
        FUN_00282a90((int)*(short *)(temp_v4 + 0x10),param_2,(int)*(short *)(param_2[9] + 0x62),0,0,
                     temp_v14,*(unsigned short *)(temp_v4 + 0x12),temp_v4);
      }
      temp_v14 = temp_v14 + 1;
    } while (temp_v14 < 4);
  }
  if (((char)param_2[0x167] == '\x01') && (temp_v13 != 0)) {
    temp_v14 = 0;
    do {
      temp_v4 = FUN_003dce74(DAT_00435d18);
      if (-1 < temp_v4) {
        temp_v5 = temp_v13 + temp_v14 * 0x16;
        temp_v4 = FUN_003d9acc(DAT_00435d18,temp_v5 + 0x108);
        if (temp_v4 != 0) {
          temp_v8 = FUN_003dce74(DAT_00435d18);
          FUN_003ddd14(temp_v8,param_2);
        }
        else if (param_2[0x165] != 0) {
          FUN_00282a90((int)*(short *)(temp_v5 + 0x118),param_2,(int)*(short *)(param_2[9] + 0x62),0,3
                       ,temp_v14,*(unsigned short *)(temp_v5 + 0x11a),temp_v5 + 0x108);
        }
      }
      temp_v14 = temp_v14 + 1;
    } while (temp_v14 < 4);
  }
  temp_v12 = 0;
  temp_v14 = 0;
  temp_v4 = 0x6d;
  temp_v5 = *(int *)(*param_1 + 0x1e98);
  psVar12 = (short *)(temp_v5 + 0x60);
  do {
    if (((-1 < *psVar12) && (*(char *)((int)param_2 + *psVar12 + 0x38) != '\0')) && (temp_v12 == 0)) {
      temp_v12 = temp_v5 + temp_v14 * 0x114;
    }
    temp_v4 = temp_v4 - 1;
    psVar12 = psVar12 + 0x8a;
    temp_v14 = temp_v14 + 1;
  } while (temp_v4 != 0);
  temp_v15 = 0;
  if ((*(unsigned int *)(DAT_004342c8 + 0x634) & 0x100) == 0) {
    temp_v14 = 0;
    do {
      if (*(int *)(DAT_00435d18 + 0x1cfc) != 0) {
        temp_v4 = temp_v13 + temp_v14 * 8;
        temp_v10 = *(char *)(temp_v4 + 0x160);
        if (temp_v10 != '\0') {
          if (temp_v10 != '\b') {
            if (temp_v10 != '\x13') {
              if (temp_v10 != '\x14') {
                if (temp_v10 == '\r' || temp_v10 == '\x0f') {
                  temp_v12 = param_2[9];
                }
                if ((*param_2 & 0x1080) == 0) {
                  temp_v15 = (unsigned int)*(unsigned char *)(temp_v4 + 0x161);
                  FUN_0023f3d8(temp_v15,param_2,*(unsigned char *)(temp_v4 + 0x162),temp_v10,temp_v12,
                               (int)*(short *)(temp_v4 + 0x164),(int)*(short *)(temp_v4 + 0x166),
                               *(unsigned char *)(temp_v4 + 0x163),temp_v2);
                }
              }
              else if ((*param_2 & 0x1080) == 0) {
                temp_v15 = (unsigned int)*(unsigned char *)(temp_v4 + 0x161);
                FUN_0023c6c0(temp_v15,param_2,*(unsigned char *)(temp_v4 + 0x162),0,1);
              }
            }
            else if ((*param_2 & 0x1080) == 0) {
              temp_v15 = (unsigned int)*(unsigned char *)(temp_v4 + 0x161);
              FUN_003deba4(temp_v15,param_2,*(unsigned char *)(temp_v4 + 0x162));
              *(unsigned int *)(DAT_004342c8 + 0x634) = *(unsigned int *)(DAT_004342c8 + 0x634) | 0x1000000;
            }
          }
          else if ((*param_2 & 0x1080) == 0) {
            temp_v15 = (unsigned int)*(unsigned char *)(temp_v4 + 0x161);
            FUN_0023c6c0(temp_v15,param_2,*(unsigned char *)(temp_v4 + 0x162),1,1);
          }
        }
      }
      temp_v14 = temp_v14 + 1;
    } while (temp_v14 < 6);
  }
  else {
    temp_v17 = 100.0f;
    if ((*(unsigned int *)(*param_1 + 0x44a0) & 4) != 0) {
      temp_v12 = param_2[9];
    }
    if ((-1 < DAT_0043431c) && (-1 < DAT_004342d4)) {
      FUN_0023f3d8(DAT_0043431c,param_2,DAT_004342d4,0x15,temp_v12,(int)(DAT_00434318 * 100.0f),0,
                   DAT_004342d8,temp_v2);
    }
    if ((-1 < DAT_00434324) && (-1 < DAT_004342e0)) {
      FUN_0023f3d8(DAT_00434324,param_2,DAT_004342e0,0x16,temp_v12,(int)(DAT_00434320 * temp_v17),0,
                   DAT_00434328,temp_v2);
    }
    if ((-1 < DAT_00434330) && (-1 < DAT_004342e4)) {
      FUN_0023f3d8(DAT_00434330,param_2,DAT_004342e4,0x17,temp_v12,(int)(DAT_0043432c * temp_v17),0,
                   DAT_00434334,temp_v2);
    }
    if ((-1 < DAT_00434338) && (-1 < DAT_004342e8)) {
      FUN_0023f3d8(DAT_00434338,param_2,DAT_004342e8,0x18,temp_v12,0,0,DAT_0043433c,temp_v2);
    }
    if ((-1 < DAT_00434340) && (-1 < DAT_004342ec)) {
      FUN_0023f3d8(DAT_00434340,param_2,DAT_004342ec,0x19,temp_v12,0,0,DAT_00434344,temp_v2);
    }
    if ((-1 < DAT_00434348) && (-1 < DAT_0043434c)) {
      FUN_0023c6c0(DAT_00434348,param_2,DAT_0043434c,1,1);
    }
  }
  temp_v11 = param_2[9];
  temp_v12 = *(unsigned int *)(temp_v11 + 0x50);
  if ((temp_v12 & 0x400) == 0) {
    temp_v2 = 0;
    temp_v11 = 0xffffffff;
    temp_v12 = 0;
    temp_v14 = 0x6d;
    puVar7 = param_2 + 0xe;
    do {
      if ((char)*puVar7 != '\0') {
        temp_v2 = temp_v2 + 1;
        temp_v11 = temp_v12;
      }
      temp_v14 = temp_v14 - 1;
      temp_v12 = temp_v12 + 1;
      puVar7 = (unsigned int *)((int)puVar7 + 1);
    } while (temp_v14 != 0);
    if ((temp_v2 == 1) && ((int)temp_v11 >= 0)) {
      temp_v12 = *param_1;
      piVar1 = (int *)(temp_v12 + 0x1fc0);
      if ((*(unsigned int *)(*piVar1 + temp_v11 * 0x288) & 0x10) != 0) {
        temp_v12 = *(unsigned int *)(temp_v12 + 0x1e98);
        temp_v11 = temp_v12 + *(short *)(*piVar1 + temp_v11 * 0x288 + 8) * 0x114;
        if ((temp_v11 != 0) && (temp_v12 = *param_2, (temp_v12 & 0x1080) == 0)) {
          temp_v12 = 0;
          FUN_003de838(0,param_2,5);
        }
      }
    }
  }
  else if ((temp_v11 != 0) && (temp_v12 = *param_2, (temp_v12 & 0x1080) == 0)) {
    temp_v12 = 0;
    FUN_003de838(0,param_2,5);
  }
  if ((temp_v13 != 0) && (temp_v12 = FUN_003dd160(DAT_00435d18), -1 < (int)temp_v12)) {
    temp_v12 = FUN_003debdc(temp_v12,param_2,5);
  }
  temp_v11 = 0;
  if (temp_v3 != 0) {
    temp_v11 = temp_v27;
    temp_v12 = temp_v27;
  }
  if ((temp_v3 != 0 && temp_v12 != 0) && -1 < (int)temp_v11) {
    FUN_0029565c();
  }
  temp_v2 = 0;
  if ((param_2[0x15c] == 0) && ((*(unsigned int *)(*param_1 + 0x44a8) & 0x400) == 0)) {
    if (temp_v15 == 0) {
      temp_v15 = 0x78;
    }
    temp_v9 = *(short *)(param_2[10] + 0x14c);
    if (temp_v9 != 2) {
      if (temp_v9 != 3) {
        if (temp_v9 == 8) {
          temp_v13 = (int)*(short *)(param_2[10] + 0x14e);
          temp_v2 = temp_v13;
          FUN_002b4854();
          if ((*(unsigned char *)(temp_v2 + 0x6e) & 1) == 0) {
            FUN_00250fc4(temp_v13,1);
          }
        }
      }
      else {
        FUN_0033b570(*param_1);
      }
    }
    else if (temp_v3 != 0) {
      if ((*(unsigned int *)(temp_v3 + 0x38) & 0x4000) != 0) {
        temp_v8 = FUN_0023de58(7);
        FUN_002553c0((int)*(short *)(param_2[9] + 0x62),7,temp_v8);
        temp_v8 = FUN_0023de58(8);
        FUN_002553c0((int)*(short *)(param_2[9] + 0x62),8,temp_v8);
        temp_v8 = FUN_0023de58(9);
        FUN_002553c0((int)*(short *)(param_2[9] + 0x62),9,temp_v8);
        temp_v8 = FUN_0023de58(10);
        FUN_002553c0((int)*(short *)(param_2[9] + 0x62),10,temp_v8);
        temp_v8 = FUN_0023de58(0xb);
        FUN_002553c0((int)*(short *)(param_2[9] + 0x62),0xb,temp_v8);
      }
      if ((*(unsigned int *)(temp_v3 + 0x38) & 0x400) != 0) {
        temp_v2 = *(short *)(param_2[10] + 0xe8) - 1;
        FUN_00250960(*param_1);
        FUN_002553ec(temp_v15,param_2,param_2[9],0,temp_v2,0xffffffff,0xffffffff,
                     (int)*(short *)(param_2[10] + 0xe8),(int)*(short *)(param_2[10] + 0xea),0,0,0);
      }
      if ((*(unsigned int *)(temp_v3 + 0x38) & 0x200) != 0) {
        temp_v2 = (int)*(short *)(param_2[10] + 0xea);
        FUN_00250960(*param_1);
        FUN_002553ec(temp_v15,param_2,param_2[9],0,temp_v2,0xffffffff,0xffffffff,
                     (int)*(short *)(param_2[10] + 0xe8),(int)*(short *)(param_2[10] + 0xea),0,0,0);
        FUN_002508c0(temp_v15 + 0x19,param_2,param_2[9],0);
      }
      FUN_0023c22c(param_1,param_2,(int)*(short *)(param_2[9] + 0x62),-temp_v2);
      temp_v3 = (unsigned int)*(unsigned char *)(temp_v3 + 0x22);
      if (temp_v3 != 0) {
        if ((*(unsigned int *)param_2[8] & 0x10) == 0) {
          if ((*(unsigned int *)param_2[8] & 2) != 0) {
            temp_v3 = FUN_0029ac70(temp_v27,1);
            temp_v2 = FUN_00255398((int)*(short *)(param_2[9] + 0x62),0x1b);
          }
          else {
            temp_v3 = FUN_0029abc0(temp_v27);
            temp_v2 = FUN_00255398((int)*(short *)(param_2[9] + 0x62),0x1b);
          }
          if (0 < temp_v2) {
            temp_v3 = 0;
          }
        }
        FUN_003deaa0(1,0,param_2,param_2[9],temp_v3,0,1);
        FUN_003ddc00(1,param_2,param_2[9],-temp_v3,1);
      }
    }
  }
  if ((*param_2 & 0x1080) == 0) {
    switch(temp_v28) {
    case 1:
      temp_v2 = *(int *)(param_2[8] + 0xc0);
      FUN_002840b8();
      if (temp_v2 != 0) {
        FUN_002274c8(DAT_00439ca8,2,*(unsigned int *)(param_2[8] + 0xc0) & 0xffff,
                     *(unsigned int *)(param_2[8] + 0x278),0,0);
      }
      else {
        temp_v3 = param_2[10];
        temp_v16 = -1 < *(short *)(temp_v3 + 4);
        if (!temp_v16) {
          temp_v1 = *(unsigned short *)(temp_v3 + 2);
        }
        else {
          temp_v1 = *(unsigned short *)(temp_v3 + 4);
        }
        FUN_002274c8(DAT_00439ca8,temp_v28,0,*(unsigned int *)(param_2[8] + 0x278),temp_v1,temp_v16);
      }
      break;
    case 2:
    case 3:
      FUN_002274c8(DAT_00439ca8,temp_v28,temp_v27 & 0xffff,*(unsigned int *)(param_2[8] + 0x278),0,0);
      break;
    case 8:
      FUN_002274c8(DAT_00439ca8,temp_v28,temp_v29 & 0xffff,0,0,0);
      break;
    case 9:
    case 0xb:
    case 0xc:
      if ((*param_2 & 0x2000000) == 0) {
        FUN_002274c8(DAT_00439ca8,temp_v28,1,0,0,0);
      }
      else {
        FUN_002274c8(DAT_00439ca8,temp_v28,0,0,0,0);
      }
      break;
    case 10:
      temp_v2 = 0;
      do {
        if (*(char *)((int)param_2 + temp_v2 + 0x38) != '\0') {
          FUN_002274c8(DAT_00439ca8,temp_v28,0,0,0,0);
          break;
        }
        temp_v2 = temp_v2 + 1;
      } while (temp_v2 < 0x6d);
    }
  }
  if ((temp_v31 & *(unsigned int *)(*param_1 + 0x48b8)) != 0) {
    FUN_00228ac4(param_1,(int)*(short *)(param_2[8] + 0x6e),5);
  }
  if (((*param_2 & 0x1080) != 0) && ((*(unsigned int *)(*param_1 + 0x44a4) & 2) != 0)) {
    FUN_0023c71c(3,param_2);
  }
  return;
}
