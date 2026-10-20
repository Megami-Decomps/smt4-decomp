/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004c9d04` (_code @ 0x4c9d04, 0x744 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00184310(...);
int FUN_001b4a90(...);
int FUN_002e3328(...);
int sysMemClear(...);
int FUN_003e8704(...);
int FUN_003e8794(...);
int FUN_003eacb4(...);
int FUN_003ef978(...);
int FUN_003f01a4(...);
int FUN_00409d8c(...);
int FUN_0041a7dc(...);
int FUN_0047f288(...);
int FUN_004a9c24(...);
int FUN_004bd354(...);
int FUN_004bd400(...);
int FUN_004d88cc(...);
int FUN_004fb43c(...);

typedef struct fn_004c9d04_arg0 fn_004c9d04_arg0;
struct fn_004c9d04_arg0 {
    unsigned char pad_0x0[0x1ed4];
    void *field_0x1ed4; /* +0x1ed4 */
    unsigned char pad_0x1ed8[0x124];
    undefined4 field_0x1ffc; /* +0x1ffc */
    unsigned char pad_0x2000[0x2554];
    undefined4 field_0x4554; /* +0x4554 */
    void *field_0x4558; /* +0x4558 */
};

/* stack frame of param_4: 11 slot(s), 44 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
} param_4_stack;

extern unsigned int DAT_0057a9c8; /* 0x57a9c8 */
extern unsigned int DAT_0057aa30; /* 0x57aa30 */
extern unsigned int DAT_0057aa34; /* 0x57aa34 */
extern unsigned int DAT_0057aa38; /* 0x57aa38 */
extern unsigned int DAT_0057aa3c; /* 0x57aa3c */
extern unsigned int DAT_0057aa40; /* 0x57aa40 */
extern unsigned int DAT_0057aa44; /* 0x57aa44 */
extern unsigned int DAT_0057aa48; /* 0x57aa48 */
extern unsigned int DAT_0057aa4c; /* 0x57aa4c */
extern unsigned int DAT_0057aa50; /* 0x57aa50 */
extern unsigned int DAT_0057aa54; /* 0x57aa54 */
extern unsigned int DAT_0057aa58; /* 0x57aa58 */
extern unsigned int DAT_0057aa5c; /* 0x57aa5c */
extern unsigned int DAT_0057aa70; /* 0x57aa70 */
extern unsigned int DAT_0057aa74; /* 0x57aa74 */
extern unsigned int DAT_0057aa78; /* 0x57aa78 */
extern unsigned int DAT_0057aa7c; /* 0x57aa7c */

extern int btlGetMainState(void);
/* Supplied declaration required: FUN_00184310. */
extern int FUN_001ab888(void);
/* Supplied declaration required: FUN_001b4a90. */
/* Supplied declaration required: FUN_002e3328. */
/* Supplied declaration required: sysMemClear. */
/* Supplied declaration required: FUN_003e8704. */
/* Supplied declaration required: FUN_003e8794. */
/* Supplied declaration required: FUN_003eacb4. */
/* Supplied declaration required: FUN_003ef978. */
/* Supplied declaration required: FUN_003f01a4. */
/* Supplied declaration required: FUN_00409d8c. */
/* Supplied declaration required: FUN_0041a7dc. */
/* Supplied declaration required: FUN_0047f288. */
/* Supplied declaration required: FUN_004a9c24. */
extern int FUN_004bd340(unsigned int, unsigned int);
/* Supplied declaration required: FUN_004bd354. */
/* Supplied declaration required: FUN_004bd400. */
/* Supplied declaration required: FUN_004d88cc. */
/* Supplied declaration required: FUN_004fb43c. */


void FUN_004c9d04(fn_004c9d04_arg0 *param_1,unsigned int param_2,unsigned int param_3,int param_4)

{
/* irregular: 17 native warning(s); review required */
  char temp_v0;
  char temp_v1;
  unsigned char temp_v2;
  unsigned char temp_v3;
  unsigned char temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  unsigned char *puVar8;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  int temp_v10;
  unsigned int *puVar13;
  int temp_v11;
  int temp_v12;
  unsigned int temp_v13;
  unsigned char temp_v14;
  unsigned char temp_v15;
  
  temp_v5 = btlGetMainState();
  puVar13 = (unsigned int *)(*(int *)(temp_v5 + 0x1ffc) + (int)param_1 * 0x408);
  temp_v6 = *puVar13;
  temp_v7 = puVar13[1];
  if ((DAT_0057aa70 & temp_v6) != 0 || (DAT_0057aa74 & temp_v7) != 0) {
    FUN_003eacb4(temp_v5);
    return;
  }
  if ((temp_v7 & DAT_0057aa34) != 0 || (temp_v6 & DAT_0057aa30) != 0) {
    temp_v6 = temp_v6 & ~DAT_0057aa30;
    temp_v7 = temp_v7 & ~DAT_0057aa34;
    *puVar13 = temp_v6;
    puVar13[1] = temp_v7;
    temp_v2 = (temp_v7 & DAT_0057aa3c) != 0;
    temp_v3 = (temp_v6 & DAT_0057aa38) != 0;
    temp_v13 = temp_v6 & DAT_0057aa78;
    temp_v9 = temp_v7 & DAT_0057aa7c;
    temp_v0 = *(char *)((int)puVar13 + 0x23b);
    temp_v11 = (int)temp_v0;
    temp_v15 = (temp_v6 & DAT_0057aa58) == 0;
    temp_v4 = (temp_v7 & DAT_0057aa5c) == 0;
    temp_v14 = temp_v15 && temp_v4;
    if (temp_v15 && temp_v4) {
      temp_v14 = temp_v13 == 0 && temp_v9 == 0;
    }
    temp_v15 = 0;
    if (temp_v14) {
      temp_v12 = 0;
      do {
        if (*(short *)(*(int *)(temp_v5 + 0x1ed4) + temp_v12 * 0x1d0 + 0x68) ==
            *(short *)((int)puVar13 + 0x6e)) {
          temp_v10 = *(int *)(temp_v5 + 0x1ed4) + temp_v12 * 0x1d0;
          if (((*(unsigned int *)(temp_v10 + 0x50) & 0x200000) != 0) && (*(int *)(temp_v10 + 0x1bc) != 0)) {
            FUN_004d88cc();
            FUN_002e3328();
            *(unsigned int *)(temp_v10 + 0x1bc) = 0;
          }
          *(unsigned int *)(temp_v10 + 0x50) = 0;
          *(unsigned int *)(temp_v10 + 0x58) = 0;
          *(unsigned int *)(temp_v10 + 0x5c) = 0;
          *(unsigned short *)(temp_v10 + 0x60) = 0;
          *(unsigned int *)(temp_v10 + 0x48) = 0;
          if ((((DAT_0057aa44 & puVar13[1]) == 0 && (*puVar13 & DAT_0057aa40) == 0) || (temp_v11 != 0)
              ) && (!temp_v2 && !temp_v3)) {
            *(unsigned short *)(temp_v10 + 0x68) = 0xffff;
          }
          *(unsigned int *)(temp_v10 + 100) = 0;
          *(unsigned int *)(temp_v10 + 0x6c) = 0;
          *(unsigned int *)(temp_v10 + 0x70) = 0;
          *(unsigned int *)(temp_v10 + 0x74) = 0;
          *(unsigned int *)(temp_v10 + 0x78) = 0;
          *(unsigned int *)(temp_v10 + 0x7c) = 0;
          *(unsigned int *)(temp_v10 + 0x80) = 0;
          *(unsigned int *)(temp_v10 + 0x84) = 0;
          *(unsigned int *)(temp_v10 + 0x88) = 0;
          *(unsigned int *)(temp_v10 + 0x8c) = 0;
          *(unsigned int *)(temp_v10 + 0x90) = 0;
          *(unsigned int *)(temp_v10 + 0x94) = 0;
          *(unsigned int *)(temp_v10 + 0x98) = 0;
          *(unsigned int *)(temp_v10 + 0x104) = 0xffffffff;
          *(unsigned int *)(temp_v10 + 0x9c) = 0;
          *(unsigned int *)(temp_v10 + 0x108) = 0xffffffff;
          *(unsigned int *)(temp_v10 + 0x10c) = 0;
          *(unsigned int *)(temp_v10 + 0x110) = 0;
          *(unsigned int *)(temp_v10 + 0x114) = 0;
          *(unsigned int *)(temp_v10 + 0x118) = 0;
          *(unsigned int *)(temp_v10 + 0x11c) = 0;
          *(unsigned int *)(temp_v10 + 0x120) = 0;
          *(unsigned int *)(temp_v10 + 0x124) = 0;
          FUN_0041a7dc(temp_v10 + 0x128);
          *(unsigned char *)(temp_v10 + 0xa0) = 0;
          FUN_003ef978(temp_v5,temp_v10,(int)(short)puVar13[2]);
        }
        temp_v12 = temp_v12 + 1;
      } while (temp_v12 < 0x6d);
      temp_v6 = puVar13[1] | DAT_0057aa5c;
      *puVar13 = *puVar13 | DAT_0057aa58;
      puVar13[1] = temp_v6;
    }
    temp_v6 = *puVar13;
    temp_v7 = puVar13[1];
    if (!((DAT_0057aa4c & temp_v7) == 0 && (DAT_0057aa48 & temp_v6) == 0)) {
      temp_v6 = 0;
      if (param_3 != 0) {
        temp_v6 = puVar13[0x101];
      }
      if (param_3 != 0 && temp_v6 != 0) {
        if (0 < (int)puVar13[0xec]) {
          FUN_003e8794(temp_v5);
        }
        temp_v6 = puVar13[0xeb];
        do {
          if (puVar13[temp_v6 + 0xe5] != 0) {
            FUN_003e8704(temp_v5,puVar13[temp_v6 + 0xe5],1);
            puVar13[temp_v6 + 0xe5] = 0;
          }
          temp_v6 = temp_v6 - 1;
          if ((int)temp_v6 < 0) {
            temp_v6 = 5;
          }
        } while (puVar13[0xeb] != temp_v6);
        FUN_00409d8c(1);
        temp_v6 = (unsigned int)*(unsigned short *)puVar13[0x101];
        FUN_00184310();
        if ((temp_v6 != 0) && (*(char *)(temp_v6 + 2) == '\'')) {
          FUN_00409d8c(2,1);
        }
        puVar13[0x101] = 0;
        puVar13[0xec] = 0;
        puVar13[0xeb] = 0;
      }
      *(short *)(temp_v5 + 0x2002) = *(short *)(temp_v5 + 0x2002) - 1;
    }
    else {
      temp_v8 = (DAT_0057aa50 & temp_v6) | (DAT_0057aa54 & temp_v7);
      if (temp_v8 != 0) {
        temp_v6 = puVar13[0x100];
        if (temp_v6 != 0) {
          temp_v8 = param_3;
        }
        if (temp_v6 != 0 && temp_v8 != 0) {
          *(unsigned short *)(temp_v6 + 0x60) = 2;
          *(unsigned short *)(puVar13[0x100] + 0x2a) = 0;
          FUN_003f01a4(temp_v5);
        }
        *(unsigned char *)(temp_v5 + 0x4cd0) = 0;
      }
      else {
        if ((temp_v6 & DAT_0057aa40) != 0 || (temp_v7 & DAT_0057aa44) != 0) {
          if (param_4 != 0) {
            temp_v6 = puVar13[0xff];
            if (temp_v6 != 0) {
              *(unsigned short *)(temp_v6 + 0x60) = *(unsigned short *)(temp_v6 + 0x60) & 0xffef;
              if (0 < (int)puVar13[0x96]) {
                FUN_004bd354(puVar13[0xff],(int)(short)puVar13[0x96]);
              }
              puVar13[0xff] = 0;
            }
          }
          else {
            temp_v12 = FUN_001ab888();
            puVar8 = (unsigned char *)((int)&param_1[-1].field_0x4558 + 3);
            if ((int)puVar8 >= 0) {
              temp_v1 = puVar8[temp_v12 + 0x1ca0];
              if (-1 < temp_v1) {
                puVar8[temp_v12 + 0x1ca0] = -1;
                if (param_3 != 0) {
                  temp_v15 = *(char *)((int)puVar13 + 0x23b) == '\0';
                  if (temp_v15) {
                    puVar8[temp_v12 + 0x1ca0] = temp_v1;
                  }
                }
                else {
                  FUN_004a9c24(DAT_0057a9c8,param_1,0xffffffff,1);
                  FUN_004fb43c(0,0,0x1000213,0,0,0,0);
                }
              }
            }
            else if (*(char *)((int)puVar13 + 0x23b) == '\0') {
              temp_v15 = 1;
            }
            temp_v6 = puVar13[0xff];
            if (temp_v6 != 0) {
              *(unsigned short *)(temp_v6 + 0x60) = *(unsigned short *)(temp_v6 + 0x60) & 0xffef;
              if (0 < (int)puVar13[0x96]) {
                FUN_004bd354(puVar13[0xff],(int)(short)puVar13[0x96]);
              }
            }
          }
        }
        if (param_3 != 0) {
          if (puVar13[0xfe] != 0) {
            *(unsigned short *)(puVar13[0xfe] + 0x5e) = 2;
            *(unsigned short *)(puVar13[0xfe] + 0x2a) = 0;
            *(unsigned short *)(puVar13 + 0x9d) = 2;
            puVar13[0x96] = 0;
            puVar13[0x97] = (int)*(short *)(puVar13[0xfe] + 0x1c);
            FUN_0047f288();
          }
          if (puVar13[0xff] != 0) {
            temp_v6 = puVar13[0x9d];
            *(unsigned short *)(puVar13[0xff] + 0x60) = 2;
            *(unsigned short *)(puVar13[0xff] + 0x2a) = 0;
            if (temp_v15) {
              *(unsigned short *)(puVar13 + 0x9d) = 2;
            }
            if ((temp_v6 & 4) != 0) {
              *(unsigned short *)(puVar13[0xff] + 0x60) = *(unsigned short *)(puVar13[0xff] + 0x60) | 4;
            }
          }
        }
        else if (puVar13[0xff] != 0) {
          temp_v12 = FUN_004bd340(puVar13[0xff],10);
          if (temp_v12 != 0) {
            FUN_004bd400(puVar13[0xff],0x10);
            FUN_004bd400(puVar13[0xff],0x20);
            FUN_004bd400(puVar13[0xff],0x40);
            FUN_004bd400(puVar13[0xff],0x80);
            FUN_004bd400(puVar13[0xff],0x100);
            FUN_004bd400(puVar13[0xff],0x200);
            FUN_004bd400(puVar13[0xff],8);
            FUN_004bd400(puVar13[0xff],0x800);
            FUN_004bd400(puVar13[0xff],0x1000);
            FUN_004bd400(puVar13[0xff],0x2000);
          }
          if (((unsigned short)puVar13[0x9d] & 0x400) != 0) {
            *(unsigned short *)(puVar13 + 0x9d) = (unsigned short)puVar13[0x9d] & 0xc407;
          }
          if ((0 < (int)puVar13[0x96]) &&
             (*(short *)(puVar13[0xff] + 0x62) == *(short *)((int)puVar13 + 0x166))) {
            FUN_004bd354(puVar13[0xff],(int)(short)puVar13[0x96]);
          }
        }
        *(short *)(temp_v5 + 0x2000) = *(short *)(temp_v5 + 0x2000) - 1;
      }
    }
    *puVar13 = 0;
    puVar13[1] = 0;
    temp_v6 = DAT_0057aa38;
    temp_v7 = 0;
    if (temp_v2 || temp_v3) {
      puVar13[1] = DAT_0057aa3c;
      *puVar13 = temp_v6;
      temp_v7 = temp_v6;
    }
    if (temp_v13 != 0 || temp_v9 != 0) {
      temp_v7 = temp_v7 | DAT_0057aa48 | DAT_0057aa30;
      puVar13[1] = DAT_0057aa34 | DAT_0057aa4c | puVar13[1];
      *puVar13 = temp_v7;
    }
    if (temp_v15) {
      temp_v6 = DAT_0057aa44 | puVar13[1];
      *puVar13 = temp_v7 | DAT_0057aa40;
      puVar13[1] = temp_v6;
    }
    if (((temp_v13 == 0 && temp_v9 == 0) && (!temp_v2 && !temp_v3)) && !temp_v15) {
      FUN_001b4a90(puVar13 + 2,100,0xffffffff);
      *(unsigned short *)(puVar13 + 2) = 0;
      sysMemClear(puVar13 + 0x59,0x230);
    }
    *(unsigned short *)(puVar13 + 0x1b) = 0xffff;
    sysMemClear(puVar13 + 0x1d,100);
    sysMemClear(puVar13 + 0x4f,0x12);
    *(char *)((int)puVar13 + 0x23b) = temp_v0;
    puVar13[0x54] = 0;
    puVar13[0xeb] = 0;
    puVar13[0xec] = 0;
    puVar13[0xe5] = 0;
    puVar13[0xe6] = 0;
    puVar13[0xe7] = 0;
    puVar13[0xe8] = 0;
    if (!temp_v15) {
      temp_v11 = 0x16c;
    }
    puVar13[0xe9] = 0;
    puVar13[0xea] = 0;
    if (!temp_v15) {
      *(unsigned short *)(temp_v11 + (int)puVar13) = 0xffff;
    }
  }
  return;
}

} /* extern "C" */
