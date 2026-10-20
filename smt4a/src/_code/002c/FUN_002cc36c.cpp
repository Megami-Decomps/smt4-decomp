/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002cc36c` (_code @ 0x2cc36c, 0x5b0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0014aa78(void);
int FUN_00163aa4(int);
int FUN_00184518(int, int);
int FUN_001846d0(...);
int FUN_00184b80(int, unsigned int);
int FUN_00184c00(int, int, int);
int FUN_002a1850(unsigned int *, int, unsigned int);
int FUN_00358e94(...);
int FUN_00387240(...);
int FUN_004a9740(int, int, unsigned int);

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_1_stack;

extern int DAT_0057a9c8; /* 0x57a9c8 */

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: FUN_0014aa78. */
extern unsigned int FUN_00152f54(void);
/* Supplied declaration required: FUN_00163aa4. */
/* Supplied declaration required: FUN_00184518. */
/* Supplied declaration required: FUN_001846d0. */
/* Supplied declaration required: FUN_00184b80. */
/* Supplied declaration required: FUN_00184c00. */
/* Supplied declaration required: FUN_002a1850. */
/* Supplied declaration required: FUN_00358e94. */
/* Supplied declaration required: FUN_00387240. */
extern int FUN_003e8430(void);
/* Supplied declaration required: FUN_004a9740. */


void FUN_002cc36c(int param_1)

{
/* irregular: 3 goto(s); 10 native warning(s); review required */
  char temp_v0;
  char temp_v1;
  int temp_v2;
  int *piVar4;
  unsigned int temp_v3;
  int temp_v4;
  char *pcVar7;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  unsigned long long temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  int temp_v12;
  
  temp_v7 = 0;
  do {
    temp_v5 = param_1 + temp_v7 * 0x400;
    if (*(char *)(temp_v5 + 0x7994) != '\0') {
      temp_v2 = *(int *)(temp_v5 + 0x79ac);
      if (temp_v2 >= 10000) {
        temp_v2 = 5;
      }
      else if (temp_v2 >= 1000) {
        temp_v2 = 4;
      }
      else if (temp_v2 >= 100) {
        temp_v2 = 3;
      }
      else if (temp_v2 < 10) {
        temp_v2 = 1;
      }
      else {
        temp_v2 = 2;
      }
      if (*(char *)(param_1 + temp_v7 + 0xf054) < *(char *)(param_1 + temp_v7 + 0xf064)) {
        if (*(int *)(temp_v5 + 0x7998) >= 11) {
          *(unsigned char *)(temp_v5 + 0x7994) = 0;
        }
      }
      else if (*(int *)(temp_v5 + 0x7998) >= 0x12) {
        if (*(short *)(temp_v5 + 0x78cc) != 0xc) {
          temp_v4 = 0;
          if (temp_v4 < temp_v2) {
            do {
              FUN_00184c00(temp_v5 + temp_v4 * 0x8c + 0x75b4,0xc,0);
              temp_v4 = temp_v4 + 1;
            } while (temp_v4 < temp_v2);
          }
          FUN_00184c00(temp_v5 + 0x7870,0xc,0);
          FUN_00184c00(temp_v5 + 0x78fc,0xc,0);
        }
        else if (*(char *)(temp_v5 + 0x763e) != '\0') {
          *(unsigned char *)(temp_v5 + 0x7994) = 0;
        }
        if (((*(short *)(temp_v5 + 0x7610) == 0xc) && (*(int *)(temp_v5 + 0x760c) != 0)) &&
           ((int)(*(unsigned short *)(*(int *)(temp_v5 + 0x760c) + 8) - 4) <= (int)*(short *)(temp_v5 + 0x7612))
           ) {
          *(unsigned char *)(temp_v5 + 0x79b0) = 1;
        }
      }
      temp_v4 = 0;
      if (temp_v4 < temp_v2) {
        do {
          FUN_00163aa4(temp_v5 + temp_v4 * 0x8c + 0x75b4);
          piVar4 = (int *)(temp_v5 + temp_v4 * 4 + 0x7998);
          temp_v4 = temp_v4 + 1;
          *piVar4 = *piVar4 + 1;
        } while (temp_v4 < temp_v2);
      }
      FUN_00163aa4(temp_v5 + 0x7870);
      FUN_00163aa4(temp_v5 + 0x78fc);
      if (*(char *)(temp_v5 + 0x7994) == '\0') goto LAB_002cc580;
    }
    else {
LAB_002cc580:
      temp_v5 = param_1 + temp_v7;
      if ((int)*(char *)(temp_v5 + 0xf054) < (int)*(char *)(temp_v5 + 0xf064)) {
        temp_v2 = param_1 + temp_v7 * 0x300 + *(char *)(temp_v5 + 0xf054) * 0x18;
        if (*(short *)(temp_v2 + 0xc068) >= 1) {
          *(short *)(temp_v2 + 0xc068) = *(short *)(temp_v2 + 0xc068) - 1;
        }
        else {
          temp_v12 = (int)*(char *)(temp_v2 + 0xc061);
          temp_v11 = (unsigned int)*(unsigned char *)(temp_v2 + 0xc06b);
          temp_v10 = (unsigned int)*(unsigned char *)(temp_v2 + 0xc06a);
          FUN_004a9740(param_1,temp_v7,*(unsigned int *)(temp_v2 + 0xc064));
          *(unsigned char *)(temp_v2 + 0xc060) = 0;
          *(char *)(temp_v5 + 0xf054) = *(char *)(temp_v5 + 0xf054) + '\x01';
        }
      }
      else {
        *(unsigned char *)(temp_v5 + 0xf054) = 0;
        *(unsigned char *)(temp_v5 + 0xf064) = 0;
      }
    }
    temp_v5 = param_1 + temp_v7 * 0xa0;
    if (*(char *)(temp_v5 + 0xb64c) != '\0') {
      if (*(char *)(param_1 + temp_v7 + 0x11874) < *(char *)(param_1 + temp_v7 + 0x11884)) {
        if (*(int *)(temp_v5 + 0xb650) >= 11) {
          *(unsigned char *)(temp_v5 + 0xb64c) = 0;
        }
        if (*(int *)(temp_v5 + 0xb650) >= 3) {
          FUN_00163aa4(temp_v5 + 0xb5b4);
        }
      }
      else {
        FUN_0014aa78();
        temp_v2 = FUN_003e8430();
        if (temp_v2 != 0) {
          if (*(int *)(temp_v5 + 0xb650) >= 0xc) {
LAB_002cc6b0:
            if (*(short *)(temp_v5 + 0xb610) != 0xc) {
              FUN_00184c00(temp_v5 + 0xb5b4,0xc,0);
              if (*(int *)(temp_v5 + 0xb650) >= 3) {
                FUN_00163aa4(temp_v5 + 0xb5b4);
              }
            }
            else if (*(char *)(temp_v5 + 0xb63e) != '\0') {
              *(unsigned int *)(temp_v5 + 0xb650) = 0;
              *(unsigned char *)(temp_v5 + 0xb64c) = 0;
            }
            else if (*(int *)(temp_v5 + 0xb650) >= 3) {
              FUN_00163aa4(temp_v5 + 0xb5b4);
            }
          }
          else if (*(int *)(temp_v5 + 0xb650) >= 3) {
            FUN_00163aa4(temp_v5 + 0xb5b4);
          }
        }
        else {
          if (*(int *)(temp_v5 + 0xb650) >= 0x12) goto LAB_002cc6b0;
          if (*(int *)(temp_v5 + 0xb650) >= 3) {
            FUN_00163aa4(temp_v5 + 0xb5b4);
          }
        }
      }
      *(int *)(temp_v5 + 0xb650) = *(int *)(temp_v5 + 0xb650) + 1;
      if (*(char *)(temp_v5 + 0xb64c) == '\0') goto LAB_002cc760;
    }
    else {
LAB_002cc760:
      temp_v5 = DAT_0057a9c8;
      temp_v2 = param_1 + temp_v7;
      if ((int)*(char *)(temp_v2 + 0x11874) < (int)*(char *)(temp_v2 + 0x11884)) {
        temp_v4 = param_1 + temp_v7 * 0x280 + *(char *)(temp_v2 + 0x11874) * 0x14;
        temp_v1 = *(char *)(temp_v4 + 0xf082);
        temp_v0 = *(char *)(temp_v4 + 0xf081);
        temp_v8 = *(unsigned int *)(temp_v4 + 0xf078);
        temp_v9 = romwright_piece_4_4(*(unsigned int *)(temp_v4 + 0xf074),*(unsigned int *)(temp_v4 + 0xf07c));
        temp_v3 = 0;
        if (temp_v1 != '\0') {
          if (temp_v1 == '\x01') {
            temp_v3 = 0x3ef;
          }
          else if (temp_v1 == '\x02') {
            temp_v3 = 0x3f0;
          }
          else if (temp_v1 == '\x03') {
            temp_v3 = 0x3f1;
          }
          FUN_00184b80(DAT_0057a9c8 + temp_v7 * 0xa0 + 0xb5b4,temp_v3);
        }
        else {
          FUN_00184518(DAT_0057a9c8 + temp_v7 * 0xa0 + 0xb5b4,0xf);
        }
        temp_v10 = (unsigned int)((unsigned long long)temp_v9 >> 0x20);
        temp_v12 = (int)temp_v9;
        temp_v11 = temp_v8;
        if (temp_v0 != '\0') {
          temp_v3 = FUN_00152f54();
          FUN_002a1850(&temp_v10,0,temp_v3);
        }
        temp_v5 = temp_v5 + temp_v7 * 0xa0;
        *(unsigned char *)(temp_v5 + 0xb64c) = 1;
        *(char *)(temp_v5 + 0xb64d) = temp_v0;
        *(unsigned int *)(temp_v5 + 0xb650) = 0;
        *(unsigned int *)(temp_v5 + 0xb640) = temp_v10;
        temp_v6 = temp_v5 + 0xb5b4;
        *(unsigned int *)(temp_v5 + 0xb644) = temp_v11;
        *(int *)(temp_v5 + 0xb648) = temp_v12;
        FUN_00387240(temp_v6,0xd,0x416);
        FUN_00358e94(temp_v6,(int)(short)(int)*(float *)(temp_v5 + 0xb640),
                     (int)(short)(int)*(float *)(temp_v5 + 0xb644));
        FUN_001846d0(temp_v6,9);
        *(unsigned char *)(temp_v4 + 0xf080) = 0;
        pcVar7 = (char *)(temp_v2 + 0x11874);
        temp_v1 = *(char *)(temp_v2 + 0x11874) + '\x01';
      }
      else {
        temp_v1 = '\0';
        pcVar7 = (char *)(temp_v2 + 0x11884);
        *(unsigned char *)(temp_v2 + 0x11874) = 0;
      }
      *pcVar7 = temp_v1;
    }
    temp_v7 = temp_v7 + 1;
    if (temp_v7 >= 0x10) {
      return;
    }
  } while( 1 );
}

} /* extern "C" */
