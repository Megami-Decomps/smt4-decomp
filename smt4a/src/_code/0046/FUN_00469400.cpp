/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00469400` (_code @ 0x469400, 0x84c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00100388(int *, unsigned char *, int, unsigned int);
int FUN_0010063a(int, unsigned int, int, unsigned char *);
int FUN_0018719c(...);
int FUN_003fe388(...);
int FUN_0046bc1c(void);
int rt_memcpy(int *, int);

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int spA0; /* 0xa0: local_a0 */
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned int spA8; /* 0xa8: local_a8 */
} param_1_stack;

extern unsigned char LAB_00467de8; /* 0x467de8 */
extern unsigned char LAB_00469948; /* 0x469948 */
extern unsigned char LAB_00469960; /* 0x469960 */
extern unsigned char LAB_00469984; /* 0x469984 */
extern unsigned char LAB_0046999c; /* 0x46999c */
extern unsigned char LAB_004699b4; /* 0x4699b4 */
extern unsigned char LAB_004699d0; /* 0x4699d0 */
extern unsigned char LAB_004699ec; /* 0x4699ec */
extern unsigned char LAB_00469a04; /* 0x469a04 */
extern unsigned char LAB_00469a1c; /* 0x469a1c */
extern unsigned char LAB_00469a38; /* 0x469a38 */
extern unsigned char LAB_00469a54; /* 0x469a54 */
extern unsigned char LAB_00469a6c; /* 0x469a6c */
extern unsigned char LAB_00469a84; /* 0x469a84 */
extern unsigned char LAB_00469aa0; /* 0x469aa0 */
extern unsigned char LAB_00469c4c; /* 0x469c4c */
extern unsigned char LAB_00469c64; /* 0x469c64 */
extern unsigned char LAB_00469c7c; /* 0x469c7c */
extern unsigned char LAB_00469c98; /* 0x469c98 */
extern unsigned char LAB_00469cb4; /* 0x469cb4 */
extern unsigned char LAB_00469ccc; /* 0x469ccc */
extern unsigned char LAB_00469ce4; /* 0x469ce4 */
extern unsigned char LAB_00469d00; /* 0x469d00 */

/* Supplied declaration required: FUN_00100388. */
/* Supplied declaration required: FUN_0010063a. */
extern unsigned int FUN_00184964(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0018719c. */
extern int FUN_003f86c0(int);
/* Supplied declaration required: FUN_003fe388. */
extern int FUN_0046bbd8(int, unsigned int);
/* Supplied declaration required: FUN_0046bc1c. */
extern int FUN_0046bc34(int);
/* Supplied declaration required: rt_memcpy. */


void FUN_00469400(int param_1)

{
/* irregular: 4 goto(s); 6 native warning(s); review required */
  short temp_v0;
  unsigned char temp_v1;
  unsigned char temp_v2;
  unsigned char temp_v3;
  unsigned char temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  int temp_v11;
  unsigned int temp_v12;
  int *piVar14;
  unsigned char temp_v13;
  char cStack_a9;
  int temp_v14;
  unsigned int temp_v15;
  unsigned int temp_v16;
  
  temp_v5 = FUN_003f86c0(param_1 + 0x19);
  if (temp_v5 == 0) {
    return;
  }
  temp_v5 = FUN_0046bc34(param_1 + 0x19);
  if (temp_v5 == 0) {
    return;
  }
  temp_v5 = FUN_0046bbd8(param_1 + 0x19,0);
  temp_v11 = 0;
  temp_v6 = param_1 + 0x19;
  FUN_0046bc1c();
  piVar14 = (int *)(param_1 + 0xab8);
  if (0 < temp_v6) {
    do {
      temp_v6 = temp_v5 + temp_v11 * 0x88;
      if ((((unsigned int)*(unsigned short *)(temp_v6 + 0x60) == (int)*(char *)(param_1 + 0x10)) &&
          ((rt_memcpy(&temp_v14,temp_v6), *(short *)(temp_v6 + 0x66) == 0 ||
           (temp_v7 = FUN_0018719c(), temp_v7 != 0)))) &&
         ((*(short *)(temp_v6 + 0x68) == 0 || (temp_v7 = FUN_0018719c(), temp_v7 == 0)))) {
        temp_v8 = *(int *)(param_1 + 0xab8);
        temp_v7 = 0;
        if (temp_v7 < temp_v8) {
          do {
            if (*(unsigned int *)(param_1 + temp_v7 * 8 + 0xa74) == (unsigned int)*(unsigned short *)(temp_v6 + 0x62))
            goto LAB_00469530;
            temp_v7 = temp_v7 + 1;
          } while (temp_v7 < temp_v8);
        }
        *(int *)(param_1 + temp_v8 * 8 + 0xa70) = temp_v11;
        *(unsigned int *)(param_1 + *piVar14 * 8 + 0xa74) = (unsigned int)*(unsigned short *)(temp_v6 + 0x62);
        *(unsigned short *)(param_1 + *piVar14 * 10 + 0xe48) = *(unsigned short *)(temp_v6 + 0x62);
        temp_v6 = *piVar14;
        *piVar14 = temp_v6 + 1;
        if (*(int *)(param_1 + 0xabc) <= temp_v6 + 1) break;
      }
LAB_00469530:
      temp_v11 = temp_v11 + 1;
      temp_v6 = param_1 + 0x19;
      FUN_0046bc1c();
    } while (temp_v11 < temp_v6);
  }
  FUN_0010063a(param_1 + 0xa70,*(unsigned int *)(param_1 + 0xab8),8,&LAB_00467de8);
  if (*(char *)(param_1 + 0x18) != '\x01') {
    if ((*(char *)(param_1 + 0x18) == '\0') && (temp_v5 = FUN_0018719c(0x4d6), temp_v5 != 0)) {
      temp_v14 = 0;
      temp_v15 = 0;
      temp_v16 = 0;
      temp_v5 = *(int *)(param_1 + 0xa74);
      temp_v6 = 4;
      piVar14 = (int *)(param_1 + 0xa6c);
      do {
        temp_v11 = piVar14[4];
        if (temp_v5 != 0) {
          (&cStack_a9)[temp_v5] = '\x01';
        }
        temp_v7 = 0;
        if (temp_v11 != 0) {
          temp_v7 = (int)&temp_v14 + temp_v11;
        }
        temp_v5 = piVar14[6];
        if (temp_v11 != 0) {
          *(unsigned char *)(temp_v7 - 1) = 1;
        }
        temp_v6 = temp_v6 - 1;
        piVar14 = piVar14 + 4;
      } while (temp_v6 != 0);
      if (*(int *)(param_1 + 0xab4) != 0) {
        (&cStack_a9)[*(int *)(param_1 + 0xab4)] = '\x01';
      }
      temp_v5 = 0;
      if (temp_v5 < *(int *)(param_1 + 0xabc)) {
        do {
          if (*(char *)((int)&temp_v14 + temp_v5) == '\0') {
            temp_v11 = param_1 + temp_v5 * 4;
            temp_v6 = *(int *)(*(int *)(temp_v11 + 0xa10) + 4);
            temp_v9 = *(unsigned int *)(temp_v6 + 4);
            if ((temp_v9 & 1) == 0) {
              *(unsigned int *)(temp_v6 + 4) = temp_v9 | 1;
            }
            temp_v6 = *(int *)(*(int *)(temp_v11 + 0xa34) + 4);
            temp_v9 = *(unsigned int *)(temp_v6 + 4);
            if ((temp_v9 & 1) == 0) {
              *(unsigned int *)(temp_v6 + 4) = temp_v9 | 1;
            }
          }
          temp_v5 = temp_v5 + 1;
        } while (temp_v5 < *(int *)(param_1 + 0xabc));
      }
    }
  }
  else {
    temp_v5 = 0;
    if (temp_v5 < *(int *)(param_1 + 0xabc)) {
      do {
        temp_v9 = 0;
        temp_v6 = 0;
        if (temp_v6 < *(int *)(param_1 + 0xab8)) {
          do {
            if (*(int *)(param_1 + temp_v6 * 8 + 0xa74) == temp_v5 + 1) {
              temp_v6 = FUN_0046bbd8(param_1 + 0x19,*(unsigned int *)(param_1 + temp_v6 * 8 + 0xa70));
              temp_v0 = *(short *)(temp_v6 + 100);
              if ((temp_v0 == 1) || (temp_v9 = (unsigned int)(temp_v0 == 2), temp_v0 != 2)) {
                temp_v9 = 2;
              }
              goto LAB_00469668;
            }
            temp_v6 = temp_v6 + 1;
          } while (temp_v6 < *(int *)(param_1 + 0xab8));
        }
        temp_v6 = FUN_0018719c(0x4d6);
        if ((temp_v6 != 0) && (!(*(char *)(param_1 + 0x10) == '\x0e' && temp_v5 == 6))) {
          temp_v11 = param_1 + temp_v5 * 4;
          temp_v6 = *(int *)(*(int *)(temp_v11 + 0xa10) + 4);
          temp_v10 = *(unsigned int *)(temp_v6 + 4);
          if ((temp_v10 & 1) == 0) {
            *(unsigned int *)(temp_v6 + 4) = temp_v10 | 1;
          }
          temp_v6 = *(int *)(*(int *)(temp_v11 + 0xa34) + 4);
          temp_v10 = *(unsigned int *)(temp_v6 + 4);
          if ((temp_v10 & 1) == 0) {
            *(unsigned int *)(temp_v6 + 4) = temp_v10 | 1;
          }
        }
        else {
          temp_v9 = FUN_00184964(1,2);
        }
LAB_00469668:
        FUN_00100388(&temp_v14,&LAB_00469948,temp_v5 + 1,temp_v9);
        temp_v6 = param_1 + temp_v5 * 4;
        FUN_003fe388(*(unsigned int *)(*(int *)(temp_v6 + 0xa10) + 4),&temp_v14,0);
        FUN_00100388(&temp_v14,&LAB_00469960,temp_v5 + 1,temp_v9);
        FUN_003fe388(*(unsigned int *)(*(int *)(temp_v6 + 0xa34) + 4),&temp_v14,0);
        temp_v5 = temp_v5 + 1;
      } while (temp_v5 < *(int *)(param_1 + 0xabc));
    }
    temp_v5 = *(int *)(param_1 + 0xa74);
    temp_v4 = 0;
    temp_v2 = 0;
    if (temp_v5 == 7) {
      temp_v4 = 1;
      temp_v2 = 0;
    }
    else if (temp_v5 == 8) {
      temp_v4 = 0;
      temp_v2 = 1;
    }
    temp_v13 = temp_v5 == 9;
    piVar14 = (int *)(param_1 + 0xa74);
    temp_v5 = 4;
    do {
      temp_v6 = piVar14[2];
      if (temp_v6 == 7) {
        temp_v4 = 1;
      }
      else if (temp_v6 != 8) {
        if (temp_v6 == 9) {
          temp_v3 = 0;
          temp_v1 = 1;
          temp_v13 = 0;
          temp_v2 = (unsigned char)(temp_v2 | temp_v3);
          temp_v13 = (unsigned char)(temp_v13 | temp_v1);
        }
      }
      else {
        temp_v2 = 0;
        temp_v3 = 1;
        temp_v1 = 0;
        temp_v2 = (unsigned char)(temp_v2 | temp_v3);
        temp_v13 = (unsigned char)(temp_v13 | temp_v1);
      }
      if (piVar14[4] == 7) {
        temp_v4 = 1;
      }
      else if (piVar14[4] == 8) {
        temp_v2 = 1;
      }
      piVar14 = piVar14 + 4;
      if (*piVar14 == 9) {
        temp_v13 = 1;
      }
      temp_v5 = temp_v5 - 1;
    } while (temp_v5 != 0);
    if (temp_v2) {
      if (*(char *)(param_1 + 0x10) == '\x0e') goto LAB_00469818;
LAB_004697f0:
      if (!temp_v4) {
        temp_v12 = *(unsigned int *)(*(int *)(param_1 + 0xa28) + 4);
        FUN_003fe388(temp_v12,&LAB_00469984,0);
        FUN_003fe388(temp_v12,&LAB_0046999c,0);
        temp_v12 = *(unsigned int *)(*(int *)(param_1 + 0xa4c) + 4);
        FUN_003fe388(temp_v12,&LAB_004699b4,0);
        FUN_003fe388(temp_v12,&LAB_004699d0,0);
      }
    }
    else {
      if (*(char *)(param_1 + 0x10) != '\x0e') goto LAB_004697f0;
      temp_v2 = 1;
LAB_00469818:
      temp_v5 = FUN_0018719c(0x491);
      if (temp_v5 != 0) {
        temp_v12 = *(unsigned int *)(*(int *)(param_1 + 0xa28) + 4);
        FUN_003fe388(temp_v12,&LAB_00469984,0);
        FUN_003fe388(temp_v12,&LAB_0046999c,0);
        temp_v12 = *(unsigned int *)(*(int *)(param_1 + 0xa4c) + 4);
        FUN_003fe388(temp_v12,&LAB_004699b4,0);
        FUN_003fe388(temp_v12,&LAB_004699d0,0);
      }
    }
    if (temp_v2) {
      temp_v12 = *(unsigned int *)(*(int *)(param_1 + 0xa20) + 4);
      FUN_003fe388(temp_v12,&LAB_004699ec,0);
      FUN_003fe388(temp_v12,&LAB_00469a04,0);
      temp_v12 = *(unsigned int *)(*(int *)(param_1 + 0xa44) + 4);
      FUN_003fe388(temp_v12,&LAB_00469a1c,0);
      FUN_003fe388(temp_v12,&LAB_00469a38,0);
    }
    else {
      temp_v12 = *(unsigned int *)(*(int *)(param_1 + 0xa2c) + 4);
      FUN_003fe388(temp_v12,&LAB_00469c4c,0);
      FUN_003fe388(temp_v12,&LAB_00469c64,0);
      temp_v12 = *(unsigned int *)(*(int *)(param_1 + 0xa50) + 4);
      FUN_003fe388(temp_v12,&LAB_00469c7c,0);
      FUN_003fe388(temp_v12,&LAB_00469c98,0);
    }
    if (temp_v13) {
      temp_v12 = *(unsigned int *)(*(int *)(param_1 + 0xa1c) + 4);
      FUN_003fe388(temp_v12,&LAB_00469a54,0);
      FUN_003fe388(temp_v12,&LAB_00469a6c,0);
      temp_v12 = *(unsigned int *)(*(int *)(param_1 + 0xa40) + 4);
      FUN_003fe388(temp_v12,&LAB_00469a84,0);
      FUN_003fe388(temp_v12,&LAB_00469aa0,0);
    }
    else {
      temp_v12 = *(unsigned int *)(*(int *)(param_1 + 0xa30) + 4);
      FUN_003fe388(temp_v12,&LAB_00469cb4,0);
      FUN_003fe388(temp_v12,&LAB_00469ccc,0);
      temp_v12 = *(unsigned int *)(*(int *)(param_1 + 0xa54) + 4);
      FUN_003fe388(temp_v12,&LAB_00469ce4,0);
      FUN_003fe388(temp_v12,&LAB_00469d00,0);
    }
  }
  *(unsigned int *)(param_1 + 4) = 2;
  *(unsigned int *)(param_1 + 8) = 0;
  return;
}

} /* extern "C" */
