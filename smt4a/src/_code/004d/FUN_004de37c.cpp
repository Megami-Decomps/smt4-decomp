/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004de37c` (_code @ 0x4de37c, 0x418 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00192550(void);
int FUN_001aba54(void);
int FUN_003e8bb0(unsigned char [4], int, unsigned int);
int FUN_003f0e94(int, unsigned int);
int FUN_004a92b8(unsigned int);
int FUN_004ab80c(unsigned int, char [4], unsigned int *, int *);
int FUN_004e980c(int *, unsigned int *);
int FUN_004eb838(int *, unsigned int *);

/* stack frame of param_2: 7 slot(s), 18 byte(s) */
typedef struct {
    unsigned short sp3E; /* 0x3e: local_3e */
    unsigned char sp45; /* 0x45: local_45 */
    unsigned short sp54; /* 0x54: local_54 */
    unsigned char sp5C; /* 0x5c: local_5c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
} param_2_stack;

extern int DAT_0057113c; /* 0x57113c */
extern unsigned int DAT_00571160; /* 0x571160 */
extern unsigned int DAT_00571164; /* 0x571164 */
extern unsigned int DAT_00571218; /* 0x571218 */
extern unsigned int DAT_0057121c; /* 0x57121c */
extern unsigned int DAT_00571228; /* 0x571228 */
extern unsigned int DAT_0057122c; /* 0x57122c */
extern unsigned int DAT_0057a9c8; /* 0x57a9c8 */

/* Supplied declaration required: FUN_00192550. */
/* Supplied declaration required: FUN_001aba54. */
extern int FUN_003e0044(unsigned int);
/* Supplied declaration required: FUN_003e8bb0. */
/* Supplied declaration required: FUN_003f0e94. */
/* Supplied declaration required: FUN_004a92b8. */
/* Supplied declaration required: FUN_004ab80c. */
extern int FUN_004aba9c(unsigned int);
/* Supplied declaration required: FUN_004e980c. */
/* Supplied declaration required: FUN_004eb838. */


unsigned int FUN_004de37c(int *param_1,unsigned int *param_2)

{
/* irregular: 6 goto(s); 8 native warning(s); review required */
  char temp_v0;
  unsigned char temp_v1;
  short temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  int temp_v8;
  unsigned int uStack_6c;
  char temp_v9 [4];
  unsigned char temp_v10 [4];
  short temp_v11;
  char temp_v12;
  short temp_v13;
  
  temp_v3 = *(unsigned int *)(*param_1 + 0x45a0);
  temp_v5 = *(unsigned int *)(*param_1 + 0x45a4);
  if (!((DAT_00571218 & temp_v3) == 0 && (DAT_0057121c & temp_v5) == 0)) {
    if ((*param_2 & 0x80) == 0) {
      *param_2 = *param_2 | 0x880;
      *(unsigned char *)(DAT_0057113c + *(int *)(*param_1 + 0xa4) * 0x1254 + 9) = 1;
      return 1;
    }
  }
  else if (((temp_v3 & DAT_00571228) != 0 || (temp_v5 & DAT_0057122c) != 0) &&
          ((*param_2 & 0x1000) == 0)) {
    *param_2 = *param_2 | 0x1800;
    *(unsigned char *)(DAT_0057113c + *(int *)(*param_1 + 0xa4) * 0x1254 + 9) = 1;
    return 1;
  }
  temp_v4 = FUN_004aba9c(DAT_0057a9c8);
  if (temp_v4 == 0) {
    return 0;
  }
  temp_v9[0] = '\0';
  temp_v6 = 0;
  temp_v7 = 0;
  temp_v8 = 0;
  uStack_6c = 0;
  FUN_004ab80c(DAT_0057a9c8,temp_v9,&temp_v6,&temp_v8);
  temp_v3 = param_2[10];
  if (temp_v9[0] == '\0') {
    if (*(short *)(temp_v3 + 0x1be) != 10) {
      *param_2 = *param_2 | 0x800;
      *(unsigned char *)(DAT_0057113c + *(int *)(*param_1 + 0xa4) * 0x1254 + 9) = 1;
      return 1;
    }
    *(unsigned char *)(DAT_0057113c + *(int *)(*param_1 + 0xa4) * 0x1254 + 9) = 0x1d;
    return 1;
  }
  temp_v2 = *(short *)(temp_v3 + 0x1be);
  if (temp_v2 != 9) {
    if (temp_v2 == 10) {
      if (temp_v7 == 0 && temp_v6 == 0) {
        *(unsigned char *)(DAT_0057113c + *(int *)(*param_1 + 0xa4) * 0x1254 + 9) = 0x1d;
        return 1;
      }
      goto LAB_004de56c;
    }
    if (temp_v2 == 0xd) goto LAB_004de56c;
    if (temp_v2 != 2 && temp_v2 != 3) {
      if (temp_v2 == 8) {
        temp_v4 = (int)*(short *)(temp_v3 + 0x1c0);
        FUN_00192550();
        temp_v3 = (unsigned int)*(unsigned short *)(temp_v4 + 0x32);
        if ((temp_v3 != 0) && (FUN_001aba54(), temp_v3 != 0)) {
          temp_v0 = *(char *)(temp_v3 + 0x23);
          temp_v1 = *(unsigned char *)(temp_v3 + 0x38);
          goto LAB_004de5cc;
        }
      }
LAB_004de6b0:
      temp_v3 = 0;
LAB_004de6b4:
      do {
        temp_v5 = 1 << (temp_v3 & 0xff);
        if ((temp_v7 & ((int)temp_v5 >> 0x1f)) != 0 || (temp_v6 & temp_v5) != 0) {
          if (temp_v3 != 0) {
            temp_v4 = *param_1;
            FUN_003f0e94(temp_v4,temp_v3 - 1);
            if (temp_v4 < 0) {
              temp_v4 = temp_v3 + 0x6c;
            }
            *(unsigned char *)((int)param_2 + temp_v4 + 0x38) = 1;
          }
          else {
            *(unsigned char *)(param_2 + 0xe) = 1;
            temp_v4 = FUN_003e0044(1);
            if (temp_v4 != 0) {
              FUN_003e8bb0(temp_v10,*param_1,param_2[8]);
              if (temp_v11 == 3) {
                if (!((temp_v12 == '\x18' || temp_v12 == '\x1b') || temp_v12 == '\x01')) {
                  temp_v4 = (int)temp_v13;
                  FUN_00192550();
                  if ((temp_v4 != 0) && ((*(unsigned int *)(temp_v4 + 0x68) & 4) != 0)) {
                    temp_v3 = 1;
                    goto LAB_004de6b4;
                  }
                  *(unsigned char *)(param_2 + 0xe) = 0;
                }
              }
              else {
                *(unsigned char *)(param_2 + 0xe) = 0;
              }
            }
          }
        }
        temp_v3 = temp_v3 + 1;
      } while ((int)temp_v3 < 0x40);
      FUN_004a92b8(DAT_0057a9c8);
      FUN_004eb838(param_1,param_2);
      return 1;
    }
    temp_v4 = (int)*(short *)(temp_v3 + 0x1c0);
    FUN_001aba54();
    if (temp_v4 == 0) goto LAB_004de6b0;
    temp_v0 = *(char *)(temp_v4 + 0x23);
    temp_v1 = *(unsigned char *)(temp_v4 + 0x38);
LAB_004de5cc:
    if (temp_v0 != '\a') goto LAB_004de6b0;
    if ((temp_v1 & 4) != 0) {
      FUN_004e980c(param_1,param_2);
      temp_v3 = *param_2;
      *param_2 = temp_v3 | 0x4000;
      if ((((unsigned int *)param_2[8])[1] & DAT_00571164) != 0 || (*(unsigned int *)param_2[8] & DAT_00571160) != 0
         ) {
        *param_2 = temp_v3 | 0x4004;
      }
      FUN_004a92b8(DAT_0057a9c8);
      FUN_004eb838(param_1,param_2);
      return 1;
    }
    temp_v3 = 0;
    temp_v4 = 0x40;
    do {
      temp_v5 = 1 << (temp_v3 & 0xff);
      if ((temp_v5 & temp_v6) != 0 || (((int)temp_v5 >> 0x1f) & temp_v7) != 0) {
        *(unsigned char *)((int)param_2 + temp_v3 + 0x38) = 1;
      }
      temp_v3 = temp_v3 + 1;
      temp_v4 = temp_v4 - 1;
    } while (temp_v4 != 0);
  }
  else {
LAB_004de56c:
    temp_v3 = 0;
    temp_v4 = 0x40;
    do {
      temp_v5 = 1 << (temp_v3 & 0xff);
      if ((temp_v5 & temp_v6) != 0 || (((int)temp_v5 >> 0x1f) & temp_v7) != 0) {
        *(unsigned char *)((int)param_2 + temp_v3 + 0x38) = 1;
      }
      temp_v3 = temp_v3 + 1;
      temp_v4 = temp_v4 - 1;
    } while (temp_v4 != 0);
  }
  temp_v4 = *param_1;
  *(unsigned int *)(temp_v4 + 0x2008) = temp_v8;
  *(unsigned int *)(temp_v4 + 0x200c) = uStack_6c;
  FUN_004a92b8(DAT_0057a9c8);
  FUN_004eb838(param_1,param_2);
  return 1;
}

} /* extern "C" */
