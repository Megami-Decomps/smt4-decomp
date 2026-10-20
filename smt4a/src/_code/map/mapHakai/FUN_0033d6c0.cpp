/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0033d6c0` (_code @ 0x33d6c0, 0x814 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0027461c(void);
int FUN_0040aa90(...);
int FUN_0040ace8(...);
int VectorSignedToFloat(...);

int FUN_00178b04(...);
int FUN_00356470(void);
int FUN_0040a908(...);
int FUN_0040a918(...);
int FUN_0040aa6c(void);
int FUN_0040aad4(...);

/* stack frame of void: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} void_stack;

extern unsigned char LAB_0033dc04; /* 0x33dc04 */
extern unsigned int DAT_0056fcc0; /* 0x56fcc0 */
extern int DAT_00581038; /* 0x581038 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00178b04. */
extern int FUN_0018719c(void);
/* Supplied declaration required: FUN_0027461c. */
extern int FUN_00352ca0(int);
/* Supplied declaration required: FUN_00356470. */
extern int FUN_003a3270(void);
/* Supplied declaration required: FUN_0040a908. */
/* Supplied declaration required: FUN_0040a918. */
/* Supplied declaration required: FUN_0040aa6c. */
/* Supplied declaration required: FUN_0040aa90. */
/* Supplied declaration required: FUN_0040aad4. */
extern unsigned int FUN_0040ac08(void);
/* Supplied declaration required: FUN_0040ace8. */


unsigned int FUN_0033d6c0(void)

{
/* irregular: 1 goto(s); irregular input(s): in_fpscr; 10 native warning(s); review required */
  short temp_v0;
  short *psVar2;
  int temp_v1;
  int temp_v2;
  short *psVar5;
  int temp_v3;
  unsigned int in_fpscr;
  unsigned int temp_v4;
  int temp_v5 [7];
  
  temp_v1 = DAT_00581038;
  temp_v0 = *(short *)(DAT_00581038 + 8);
  if (temp_v0 != 0) {
    if (temp_v0 != 1) {
      if (temp_v0 != 2) {
        if (temp_v0 != 99) {
          return 0;
        }
        return 1;
      }
    }
    else {
      if (*(int *)(DAT_00581038 + 0x59c) != 0) {
        temp_v1 = 0x20;
        FUN_00178b04(0x20,&LAB_0033dc04,0xf5);
        temp_v4 = 0;
        if (temp_v1 != 0) {
          temp_v4 = FUN_0040ac08();
        }
        *(unsigned int *)(DAT_00581038 + *(short *)(DAT_00581038 + 10) * 0x20 + 0x20) = temp_v4;
        FUN_0040aa6c();
        FUN_0040a908(*(unsigned int *)(DAT_00581038 + *(short *)(DAT_00581038 + 10) * 0x20 + 0x20),
                     0x10000);
        FUN_0040a918(*(unsigned int *)(DAT_00581038 + *(short *)(DAT_00581038 + 10) * 0x20 + 0x20),
                     0x20000);
        FUN_0040aad4(*(unsigned int *)(DAT_00581038 + *(short *)(DAT_00581038 + 10) * 0x20 + 0x20),0);
      }
      if (*(int *)(DAT_00581038 + 0x5a0) != 0) {
        temp_v1 = 0x20;
        FUN_00178b04(0x20,&LAB_0033dc04,0xff);
        temp_v4 = 0;
        if (temp_v1 != 0) {
          temp_v4 = FUN_0040ac08();
        }
        *(unsigned int *)(DAT_00581038 + *(short *)(DAT_00581038 + 10) * 0x20 + 0x24) = temp_v4;
        FUN_0040aa6c();
        FUN_0040a908(*(unsigned int *)(DAT_00581038 + *(short *)(DAT_00581038 + 10) * 0x20 + 0x24),
                     0x10000);
        FUN_0040a918(*(unsigned int *)(DAT_00581038 + *(short *)(DAT_00581038 + 10) * 0x20 + 0x24),
                     0x20000);
        FUN_0040aad4(*(unsigned int *)(DAT_00581038 + *(short *)(DAT_00581038 + 10) * 0x20 + 0x24),0);
      }
      if (*(int *)(DAT_00581038 + 0x5a4) != 0) {
        temp_v1 = 0x20;
        FUN_00178b04(0x20,&LAB_0033dc04,0x109);
        temp_v4 = 0;
        if (temp_v1 != 0) {
          temp_v4 = FUN_0040ac08();
        }
        *(unsigned int *)(DAT_00581038 + *(short *)(DAT_00581038 + 10) * 0x20 + 0x28) = temp_v4;
        FUN_0040aa6c();
        FUN_0040a908(*(unsigned int *)(DAT_00581038 + *(short *)(DAT_00581038 + 10) * 0x20 + 0x28),
                     0x10000);
        FUN_0040a918(*(unsigned int *)(DAT_00581038 + *(short *)(DAT_00581038 + 10) * 0x20 + 0x28),
                     0x20000);
        FUN_0040aad4(*(unsigned int *)(DAT_00581038 + *(short *)(DAT_00581038 + 10) * 0x20 + 0x28),0);
      }
      if (*(int *)(DAT_00581038 + 0x5a8) != 0) {
        temp_v1 = 0x20;
        FUN_00178b04(0x20,&LAB_0033dc04,0x113);
        temp_v4 = 0;
        if (temp_v1 != 0) {
          temp_v4 = FUN_0040ac08();
        }
        *(unsigned int *)(DAT_00581038 + *(short *)(DAT_00581038 + 10) * 0x20 + 0x2c) = temp_v4;
        FUN_0040aa6c();
        FUN_0040a908(*(unsigned int *)(DAT_00581038 + *(short *)(DAT_00581038 + 10) * 0x20 + 0x2c),
                     0x10000);
        FUN_0040a918(*(unsigned int *)(DAT_00581038 + *(short *)(DAT_00581038 + 10) * 0x20 + 0x2c),
                     0x20000);
        FUN_0040aad4(*(unsigned int *)(DAT_00581038 + *(short *)(DAT_00581038 + 10) * 0x20 + 0x2c),0);
      }
      if (*(int *)(DAT_00581038 + 0x5b0) != 0) {
        temp_v1 = 0x20;
        FUN_00178b04(0x20,&LAB_0033dc04,0x122);
        temp_v4 = 0;
        if (temp_v1 != 0) {
          temp_v4 = FUN_0040ac08();
        }
        *(unsigned int *)(DAT_00581038 + *(short *)(DAT_00581038 + 10) * 0x20 + 0x34) = temp_v4;
        FUN_0040aa6c();
        FUN_0040a908(*(unsigned int *)(DAT_00581038 + *(short *)(DAT_00581038 + 10) * 0x20 + 0x34),
                     0x10000);
        FUN_0040a918(*(unsigned int *)(DAT_00581038 + *(short *)(DAT_00581038 + 10) * 0x20 + 0x34),
                     0x20000);
        FUN_0040aad4(*(unsigned int *)(DAT_00581038 + *(short *)(DAT_00581038 + 10) * 0x20 + 0x34),0);
      }
      if (*(int *)(DAT_00581038 + 0x5b4) != 0) {
        temp_v1 = 0x20;
        FUN_00178b04(0x20,&LAB_0033dc04,299);
        temp_v4 = 0;
        if (temp_v1 != 0) {
          temp_v4 = FUN_0040ac08();
        }
        *(unsigned int *)(DAT_00581038 + *(short *)(DAT_00581038 + 10) * 0x20 + 0x38) = temp_v4;
        FUN_0040aa6c();
        FUN_0040aad4(*(unsigned int *)(DAT_00581038 + *(short *)(DAT_00581038 + 10) * 0x20 + 0x38),0);
      }
      *(short *)(DAT_00581038 + 8) = *(short *)(DAT_00581038 + 8) + 1;
    }
    temp_v5[0] = 0;
    temp_v5[1] = 0;
    psVar5 = (short *)0x0;
    temp_v5[2] = 0;
    temp_v5[3] = 0;
    temp_v5[4] = 0;
    temp_v5[5] = 0;
    temp_v5[6] = 0;
    temp_v1 = FUN_003a3270();
    if (0 < temp_v1) {
      do {
        psVar2 = psVar5;
        FUN_00356470();
        if ((((*psVar2 != -1) && ((psVar2[0x18] == 0 || (temp_v1 = FUN_0018719c(), temp_v1 != 0)))) &&
            ((psVar2[0x19] == 0 || (temp_v1 = FUN_0018719c(), temp_v1 == 0)))) &&
           (((*psVar2 == *(short *)(DAT_00581038 + 4) && (psVar2[1] == *(short *)(DAT_00581038 + 6))
             ) && (temp_v2 = FUN_00352ca0((int)(short)(int)psVar5), temp_v1 = DAT_00581038, temp_v2 == 0)))) {
          temp_v2 = 0;
          do {
            if (*(char *)(DAT_00581038 + temp_v2 * 0x54 + 0x5c) == '\0') goto LAB_0033dd20;
            temp_v2 = temp_v2 + 1;
          } while (temp_v2 < 0x10);
          temp_v2 = -1;
LAB_0033dd20:
          *(short *)(DAT_00581038 + 0xc) = (short)temp_v2;
          temp_v2 = temp_v1 + (short)temp_v2 * 0x54;
          *(int *)(temp_v1 + 0x10) = *(int *)(temp_v1 + 0x10) + 1;
          *(unsigned char *)(temp_v2 + 0x5c) = 1;
          *(unsigned int *)(temp_v2 + 0x60) = 1;
          *(unsigned int *)(temp_v2 + 100) = 0;
          temp_v4 = VectorSignedToFloat((int)psVar2[2],(unsigned char)(in_fpscr >> 0x16) & 3);
          *(unsigned int *)(temp_v2 + 0x68) = temp_v4;
          temp_v4 = VectorSignedToFloat((int)psVar2[3],(unsigned char)(in_fpscr >> 0x16) & 3);
          *(unsigned int *)(temp_v2 + 0x6c) = temp_v4;
          temp_v4 = VectorSignedToFloat((int)psVar2[4],(unsigned char)(in_fpscr >> 0x16) & 3);
          *(unsigned int *)(temp_v2 + 0x70) = temp_v4;
          temp_v4 = VectorSignedToFloat((int)psVar2[5],(unsigned char)(in_fpscr >> 0x16) & 3);
          *(unsigned int *)(temp_v2 + 0x74) = temp_v4;
          *(unsigned int *)(temp_v2 + 0x78) = 0;
          *(unsigned char *)(temp_v2 + 0x7c) = 1;
          *(short **)(temp_v2 + 0x94) = psVar5 + 0xa80;
          *(short *)(temp_v2 + 0xac) = psVar2[6];
          *(int *)(temp_v2 + 0xa8) = (int)psVar2[7];
          *(unsigned int *)(temp_v2 + 0x98) = *(unsigned int *)(psVar2 + 8);
          *(unsigned int *)(temp_v2 + 0xa0) = *(unsigned int *)(psVar2 + 10);
          *(unsigned int *)(temp_v2 + 0x9c) = *(unsigned int *)(psVar2 + 0xc);
          *(unsigned int *)(temp_v2 + 0xa4) = *(unsigned int *)(psVar2 + 0xe);
          *(short **)(temp_v2 + 0x80) = psVar5;
          if (temp_v5[*(short *)(temp_v2 + 0xac)] != 0) {
            temp_v1 = 0x20;
            FUN_00178b04(0x20,&LAB_0033dc04,0x1bb);
            if (temp_v1 == 0) {
              temp_v4 = 0;
            }
            else {
              temp_v4 = FUN_0040ac08();
            }
            *(unsigned int *)(temp_v2 + 0x88) = temp_v4;
            FUN_0040aa90(temp_v4,*(unsigned int *)
                                (DAT_00581038 + *(int *)(temp_v2 + 0x90) * 0x20 +
                                 *(short *)(temp_v2 + 0xac) * 4 + 0x20),0);
            FUN_0040ace8(DAT_0056fcc0,*(unsigned int *)(*(int *)(temp_v2 + 0x88) + 4));
            *(unsigned char *)(temp_v2 + 0x84) = 1;
            *(unsigned char *)(temp_v2 + 0x8c) = 1;
            *(unsigned int *)(temp_v2 + 0x90) = 0;
          }
          else {
            *(unsigned char *)(temp_v2 + 0x84) = 0;
            *(unsigned int *)(temp_v2 + 0x88) = 0;
            *(unsigned char *)(temp_v2 + 0x8c) = 0;
            temp_v1 = DAT_00581038;
            temp_v0 = *(short *)(DAT_00581038 + 10);
            *(int *)(temp_v2 + 0x90) = (int)temp_v0;
            FUN_0040ace8(DAT_0056fcc0,
                         *(unsigned int *)
                          (*(int *)(temp_v1 + temp_v0 * 0x20 + *(short *)(temp_v2 + 0xac) * 4 + 0x20) + 4)
                        );
          }
          temp_v5[*(short *)(temp_v2 + 0xac)] = temp_v5[*(short *)(temp_v2 + 0xac)] + 1;
        }
        psVar5 = (short *)((int)psVar5 + 1);
        temp_v1 = FUN_003a3270();
      } while ((int)psVar5 < temp_v1);
    }
    FUN_0027461c();
    temp_v1 = DAT_00581038;
    *(short *)(DAT_00581038 + 10) = *(short *)(DAT_00581038 + 10) + 1;
    *(unsigned short *)(temp_v1 + 8) = 99;
    return 1;
  }
  *(unsigned int *)(DAT_00581038 + 0x59c) = 0;
  *(unsigned int *)(temp_v1 + 0x5a0) = 0;
  *(unsigned int *)(temp_v1 + 0x5a4) = 0;
  *(unsigned int *)(temp_v1 + 0x5a8) = 0;
  temp_v3 = 0;
  *(unsigned int *)(temp_v1 + 0x5ac) = 0;
  *(unsigned int *)(temp_v1 + 0x5b0) = 0;
  temp_v2 = 0;
  psVar5 = (short *)0x0;
  *(unsigned int *)(temp_v1 + 0x5b4) = 0;
  temp_v1 = FUN_003a3270();
  if (0 < temp_v1) {
    do {
      psVar2 = psVar5;
      FUN_00356470();
      if (((*psVar2 != -1) && ((psVar2[0x18] == 0 || (temp_v1 = FUN_0018719c(), temp_v1 != 0)))) &&
         (((psVar2[0x19] == 0 || (temp_v1 = FUN_0018719c(), temp_v1 == 0)) &&
          (((*psVar2 == *(short *)(DAT_00581038 + 4) && (psVar2[1] == *(short *)(DAT_00581038 + 6)))
           && (temp_v1 = FUN_00352ca0((int)(short)(int)psVar5), temp_v1 == 0)))))) {
        temp_v2 = temp_v2 + 1;
        temp_v3 = temp_v3 + 1;
        temp_v1 = DAT_00581038 + psVar2[6] * 4;
        *(int *)(temp_v1 + 0x59c) = *(int *)(temp_v1 + 0x59c) + 1;
      }
      psVar5 = (short *)((int)psVar5 + 1);
      temp_v1 = FUN_003a3270();
    } while ((int)psVar5 < temp_v1);
    if (temp_v2 != 0) {
      if (temp_v2 == 1) {
        *(unsigned int *)(DAT_00581038 + 0x1c) = 1;
      }
      else {
        *(unsigned int *)(DAT_00581038 + 0x1c) = 2;
      }
      temp_v1 = DAT_00581038;
      if (temp_v3 != 0) {
        *(unsigned short *)(DAT_00581038 + 10) = 0;
        *(short *)(temp_v1 + 8) = *(short *)(temp_v1 + 8) + 1;
        return 0;
      }
      *(unsigned short *)(DAT_00581038 + 8) = 99;
      return 1;
    }
  }
  *(unsigned int *)(DAT_00581038 + 0x1c) = 0;
  temp_v1 = DAT_00581038;
  if (temp_v3 != 0) {
    *(unsigned short *)(DAT_00581038 + 10) = 0;
    *(short *)(temp_v1 + 8) = *(short *)(temp_v1 + 8) + 1;
    return 0;
  }
  *(unsigned short *)(DAT_00581038 + 8) = 99;
  return 1;
}

} /* extern "C" */
