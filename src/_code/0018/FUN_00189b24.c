/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00189b24` (_code @ 0x189b24, 0x4d0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} void_stack;

extern int FUN_001e15ec(); /* 0x1e15ec */
extern int DAT_0043dd50; /* 0x43dd50 */

/* Supplied declaration required: FUN_00299000. */
/* Supplied declaration required: FUN_00299034. */
extern int FUN_00299064(unsigned short);
extern int FUN_00299084(unsigned int);
extern int FUN_0029909c(unsigned int);
extern int FUN_002990bc(unsigned int);
extern int FUN_002990dc(unsigned int, int, int *);
extern int FUN_00299224(unsigned int);
extern int FUN_0029923c(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0029d8c0. */
extern int FUN_0029d8e4(int);
/* Supplied declaration required: FUN_0029edfc. */
extern int FUN_0029f0f4(int);
/* Supplied declaration required: FUN_0029fae8. */
/* Supplied declaration required: FUN_002b6700. */
/* Supplied declaration required: FUN_002b7f0a. */
extern int FUN_002c0ba8(unsigned int);
/* Supplied declaration required: FUN_002c3b48. */
/* Supplied declaration required: FUN_002c4b30. */
/* Supplied declaration required: FUN_0032acb8. */


void FUN_00189b24(void)

{
/* irregular: 7 goto(s); 11 native warning(s); review required */
  char temp_v0;
  short temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  int *piVar7;
  unsigned int *puVar8;
  int temp_v6;
  unsigned int temp_v7;
  int temp_v8;
  int temp_v9;
  unsigned char temp_v10;
  int temp_v11 [3];
  int temp_v12;
  
  temp_v2 = DAT_0043dd50;
  temp_v9 = 0;
  temp_v8 = 0;
  temp_v12 = DAT_0043dd50 + 0x6c4;
  FUN_002c4b30(temp_v12,0xc6);
  FUN_002c3b48(temp_v2 + 0x78a,500);
  temp_v7 = 0;
  do {
    temp_v3 = FUN_0029923c(temp_v7,0);
    if (temp_v3 == 0) goto LAB_00189d6c;
    do {
      if ((0x15d >= temp_v7) ||
         ((temp_v4 = temp_v7, FUN_002b6700(), temp_v4 != 0 &&
          ((temp_v3 = FUN_002c0ba8(7), temp_v3 == 0 || (temp_v3 = FUN_002c0ba8(0x214), temp_v3 != 0)))))) {
        temp_v3 = FUN_00299224(temp_v7);
        if (temp_v3 != 0) {
          temp_v3 = temp_v9 * 2;
          temp_v9 = temp_v9 + 1;
          *(short *)(temp_v2 + temp_v3 + 0x6c4) = (short)temp_v7;
        }
        else {
          temp_v10 = 1;
          if (*(char *)(temp_v2 + 0x5f1) != '\0') {
            temp_v4 = temp_v7;
            FUN_002b6700();
            if ((temp_v4 != 0) && (*(char *)(temp_v4 + 6) == '\0')) {
              temp_v3 = 0;
              do {
                temp_v6 = FUN_002990dc(temp_v7,temp_v3,temp_v11);
                if ((temp_v6 != 0) &&
                   (((temp_v6 = FUN_002990bc(temp_v7), temp_v6 != 0 &&
                     (temp_v6 = FUN_0029909c(temp_v7), temp_v6 == 0)) || (0 < temp_v11[0]))))
                goto LAB_00189d6c;
                temp_v3 = temp_v3 + 1;
              } while (temp_v3 < 6);
              temp_v3 = FUN_00299084(temp_v7);
              if (temp_v3 != 0) goto LAB_00189d54;
              if (*(short *)(temp_v4 + 0x19c) != 0) {
                switch(*(unsigned char *)(temp_v2 + 0x5f8)) {
                case 0:
                  break;
                case 1:
                  temp_v1 = *(short *)(temp_v4 + 0x19c);
                  if (temp_v1 == 1) {
                    if (temp_v10) {
                      temp_v3 = temp_v8 * 2;
                      temp_v8 = temp_v8 + 1;
                      *(short *)(temp_v2 + temp_v3 + 0x78a) = (short)temp_v7;
                    }
                  }
                  break;
                default:
                  temp_v10 = *(short *)(temp_v4 + 0x19c) != 1;
                  if (*(short *)(temp_v4 + 0x1ae) != 0) break;
                  goto LAB_00189d54;
                case 9:
                  temp_v1 = *(short *)(temp_v4 + 0x1ae);
                  if (temp_v1 == 1) {
LAB_00189d54:
                    if (temp_v10) {
                      temp_v3 = temp_v8 * 2;
                      temp_v8 = temp_v8 + 1;
                      *(short *)(temp_v2 + temp_v3 + 0x78a) = (short)temp_v7;
                    }
                  }
                  break;
                case 10:
                case 0xb:
                case 0xc:
                case 0xd:
                  if (*(short *)(temp_v4 + 0x1ae) == 2) goto LAB_00189d54;
                }
              }
            }
          }
          else {
            temp_v3 = temp_v8 * 2;
            temp_v8 = temp_v8 + 1;
            *(short *)(temp_v2 + temp_v3 + 0x78a) = (short)temp_v7;
          }
        }
      }
LAB_00189d6c:
      temp_v7 = (temp_v7 + 1) & 0xffff;
      if (temp_v7 >= 400) {
        FUN_002b7f0a(temp_v12,temp_v9,2,FUN_001e15ec);
        temp_v3 = temp_v2 + 0x5fc;
        temp_v11[0] = 1;
        temp_v11[1] = 1;
        FUN_0029fae8(temp_v3,temp_v9,10,1);
        temp_v11[0] = 1;
        temp_v11[1] = 1;
        FUN_0029fae8(temp_v2 + 0x660,temp_v8,10,1);
        FUN_0032acb8(0);
        temp_v6 = 0;
        if (0 < temp_v9) goto LAB_00189dec;
        goto LAB_00189e2c;
      }
    } while (temp_v7 >= 0x15e);
  } while( 1 );
  while (temp_v6 = temp_v6 + 1, temp_v6 < temp_v9) {
LAB_00189dec:
    temp_v5 = FUN_00299064(*(unsigned short *)(temp_v2 + temp_v6 * 2 + 0x6c4));
    if (temp_v5 != 0) {
      FUN_0029edfc(temp_v3,temp_v6);
      break;
    }
  }
LAB_00189e2c:
  temp_v9 = 0;
  if (0 < temp_v8) {
    do {
      temp_v6 = temp_v2 + temp_v9 * 2;
      temp_v5 = FUN_00299064(*(unsigned short *)(temp_v6 + 0x78a));
      if (temp_v5 != 0) {
        temp_v7 = (unsigned int)*(unsigned short *)(temp_v6 + 0x78a);
        FUN_002b6700();
        temp_v0 = '\0';
        if (temp_v7 != 0) {
          temp_v0 = *(char *)(temp_v7 + 6);
        }
        if (temp_v7 != 0 && temp_v0 != '\0') {
          FUN_0029edfc(temp_v2 + 0x660,temp_v9);
          break;
        }
      }
      temp_v9 = temp_v9 + 1;
    } while (temp_v9 < temp_v8);
  }
  if (*(char *)(temp_v2 + 0x5f1) != '\0') {
    return;
  }
  temp_v8 = FUN_00299034(0);
  temp_v8 = *(int *)(temp_v8 + 4);
  piVar7 = (int *)FUN_00299034(0);
  if (*(short *)(temp_v2 + (*piVar7 + temp_v8) * 2 + 0x6c4) != 0) {
    temp_v8 = FUN_00299034(0);
    temp_v6 = *(int *)(temp_v8 + 4);
    temp_v8 = FUN_0029d8e4(temp_v3);
    temp_v9 = FUN_0029f0f4(temp_v3);
    if (temp_v9 < temp_v6 + temp_v8) {
      temp_v8 = FUN_00299034(0);
      *(unsigned int *)(temp_v8 + 4) = 0;
      puVar8 = (unsigned int *)FUN_00299034(0);
      *puVar8 = 0;
    }
  }
  else {
    temp_v8 = FUN_00299034(0);
    *(unsigned int *)(temp_v8 + 4) = 0;
    puVar8 = (unsigned int *)FUN_00299034(0);
    *puVar8 = 0;
  }
  temp_v8 = FUN_00299034(0);
  FUN_00299000(temp_v3,*(unsigned int *)(temp_v8 + 4));
  puVar8 = (unsigned int *)FUN_00299034(0);
  FUN_0029d8c0(temp_v3,*puVar8);
  temp_v8 = FUN_00299034(1);
  temp_v8 = *(int *)(temp_v8 + 4);
  piVar7 = (int *)FUN_00299034(1);
  if (*(short *)(temp_v2 + (*piVar7 + temp_v8) * 2 + 0x78a) != 0) {
    temp_v8 = FUN_00299034(1);
    temp_v3 = *(int *)(temp_v8 + 4);
    temp_v8 = FUN_0029d8e4(temp_v2 + 0x660);
    temp_v9 = FUN_0029f0f4(temp_v2 + 0x660);
    if (temp_v3 + temp_v8 <= temp_v9) {
      temp_v8 = FUN_00299034(1);
      FUN_00299000(temp_v2 + 0x660,*(unsigned int *)(temp_v8 + 4));
      puVar8 = (unsigned int *)FUN_00299034(1);
      FUN_0029d8c0(temp_v2 + 0x660,*puVar8);
      return;
    }
  }
  temp_v8 = FUN_00299034(1);
  *(unsigned int *)(temp_v8 + 4) = 0;
  puVar8 = (unsigned int *)FUN_00299034(1);
  *puVar8 = 0;
  temp_v8 = FUN_00299034(1);
  FUN_00299000(temp_v2 + 0x660,*(unsigned int *)(temp_v8 + 4));
  puVar8 = (unsigned int *)FUN_00299034(1);
  FUN_0029d8c0(temp_v2 + 0x660,*puVar8);
  return;
}
