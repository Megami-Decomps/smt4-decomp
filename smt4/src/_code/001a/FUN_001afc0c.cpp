/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001afc0c` (_code @ 0x1afc0c, 0x7c8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00203460(...);
int FUN_002b63c0(void);
int FUN_002b8838(...);

int FUN_002540b8(...);
int FUN_0028ed3c(...);
int FUN_0028fe0c(unsigned int, int);
int FUN_002903f0(void);
int FUN_00290404(void);
int FUN_002905d0(void);
int FUN_0029e1ec(void);
int FUN_0029e328(...);
int FUN_0029e39c(...);
int FUN_0029ee6c(...);
int FUN_0029efc0(...);
int FUN_0029efd8(int, int);
int FUN_0029f5d8(int, unsigned int, int, int, int, int, char [8], int, int);
int FUN_002bc01c(...);
int timerStart(...);
int FUN_002c1658(...);
int asdMemFree(void);
int SBORROW4(...);

/* stack frame of void: 4 slot(s), 13 byte(s) */
typedef struct {
    unsigned char sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} void_stack;

extern int DAT_0043dd50; /* 0x43dd50 */

/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Supplied declaration required: FUN_00203460. */
/* Supplied declaration required: FUN_002540b8. */
/* Supplied declaration required: FUN_0028ed3c. */
extern int FUN_0028f304(void);
/* Supplied declaration required: FUN_0028fe0c. */
extern int FUN_0029022c(void);
/* Supplied declaration required: FUN_002903f0. */
/* Supplied declaration required: FUN_00290404. */
/* Supplied declaration required: FUN_002905d0. */
extern int FUN_00296f4c(unsigned int, unsigned int);
extern int FUN_00298e00(unsigned int);
extern int FUN_00298e20(unsigned int);
extern unsigned int FUN_0029e11c(int);
/* Supplied declaration required: FUN_0029e1ec. */
/* Supplied declaration required: FUN_0029e328. */
/* Supplied declaration required: FUN_0029e39c. */
extern int FUN_0029ee54(int);
/* Supplied declaration required: FUN_0029ee6c. */
extern int FUN_0029efa8(int);
/* Supplied declaration required: FUN_0029efc0. */
/* Supplied declaration required: FUN_0029efd8. */
/* Supplied declaration required: FUN_0029f5d8. */
extern int FUN_002b63ac(void);
/* Supplied declaration required: FUN_002b63c0. */
/* Supplied declaration required: FUN_002b8838. */
/* Supplied declaration required: FUN_002bc01c. */
/* Supplied declaration required: timerStart. */
extern unsigned int FUN_002bf4f8(unsigned int, unsigned int);
extern int FUN_002c09d0(unsigned int);
/* Supplied declaration required: FUN_002c1658. */
/* Supplied declaration required: asdMemFree. */
extern int FUN_00333aac(unsigned int);


/* WARNING: Type propagation algorithm not settling */

void FUN_001afc0c(void)

{
/* irregular: 5 goto(s); 22 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned short temp_v8;
  int temp_v9;
  unsigned int temp_v10;
  int temp_v11;
  unsigned char temp_v12;
  unsigned char temp_v13;
  char temp_v14 [8];
  
  temp_v1 = DAT_0043dd50;
  if (*(char *)(DAT_0043dd50 + 0x5c4) != '\0') {
    temp_v11 = DAT_0043dd50 + 0x5fc;
    temp_v9 = DAT_0043dd50 + 0x6c4;
  }
  else {
    temp_v11 = DAT_0043dd50 + 0x660;
    temp_v9 = DAT_0043dd50 + 0x78a;
  }
  temp_v2 = FUN_0029ee54(temp_v11);
  if (temp_v2 < 1) {
    temp_v11 = 1;
    FUN_002c1658();
    if (temp_v11 != 0) {
      timerStart(temp_v1 + 0x34,2,0);
      temp_v11 = DAT_0043dd50;
      temp_v6 = *(unsigned int *)(DAT_0043dd50 + 4);
      *(unsigned int *)(DAT_0043dd50 + 4) = 3;
      *(unsigned int *)(temp_v11 + 8) = temp_v6;
      *(unsigned int *)(temp_v11 + 0x10) = 0;
      FUN_002bc01c(0x100016e);
    }
  }
  else {
    temp_v2 = FUN_0029efc0(temp_v11);
    temp_v3 = FUN_0029efa8(temp_v11);
    temp_v0 = *(short *)(temp_v9 + (temp_v3 + temp_v2) * 2);
    temp_v14[0] = '\0';
    temp_v6 = FUN_002bf4f8(0x29,0xc1);
    temp_v2 = temp_v11;
    FUN_0029f5d8(temp_v11,temp_v6,temp_v1 + 0x9dc,(int)*(short *)(temp_v1 + 0x9f6),
                 (int)*(short *)(temp_v1 + 0x9f2),(int)*(short *)(temp_v1 + 0x9f4),temp_v14,0,1);
    if (temp_v2 != 0) {
      temp_v2 = FUN_0029efc0(temp_v11);
      temp_v3 = FUN_0029efa8(temp_v11);
      if (*(short *)(temp_v9 + (temp_v3 + temp_v2) * 2) != temp_v0) {
        temp_v2 = FUN_0029efc0(temp_v11);
        temp_v3 = FUN_0029efa8(temp_v11);
        temp_v8 = *(unsigned short *)(temp_v9 + (temp_v3 + temp_v2) * 2);
        temp_v10 = (unsigned int)temp_v8;
        if (*(int *)(temp_v1 + 0x5e0) != 0) {
          if (*(char *)(temp_v1 + 0x5f7) == '\0') {
            asdMemFree();
          }
          *(unsigned int *)(temp_v1 + 0x5e0) = 0;
        }
        FUN_0028fe0c(temp_v10,1);
        FUN_00290404();
        FUN_002905d0();
        temp_v4 = (unsigned int)*(unsigned short *)(temp_v1 + 0x982);
        temp_v13 = SBORROW4(temp_v4,temp_v10);
        temp_v9 = temp_v4 - temp_v10;
        temp_v12 = temp_v4 != temp_v10;
        if (temp_v12) {
          temp_v4 = (unsigned int)*(short *)(temp_v1 + 0x984);
          temp_v13 = SBORROW4(temp_v4,2);
          temp_v9 = temp_v4 - 2;
        }
        if ((temp_v12 && temp_v4 != 2) && temp_v9 < 0 == temp_v13) {
          FUN_002540b8(temp_v1);
        }
        *(unsigned short *)(temp_v1 + 0x982) = temp_v8;
        *(unsigned short *)(temp_v1 + 0x984) = 0;
      }
    }
    else {
      temp_v2 = temp_v11;
      FUN_0029efd8(temp_v11,1);
      if (temp_v2 != 0) {
        temp_v2 = FUN_0029efc0(temp_v11);
        temp_v3 = FUN_0029efa8(temp_v11);
        temp_v8 = *(unsigned short *)(temp_v9 + (temp_v3 + temp_v2) * 2);
        temp_v10 = (unsigned int)temp_v8;
        if (*(int *)(temp_v1 + 0x5e0) != 0) {
          if (*(char *)(temp_v1 + 0x5f7) == '\0') {
            asdMemFree();
          }
          *(unsigned int *)(temp_v1 + 0x5e0) = 0;
        }
        FUN_0028fe0c(temp_v10,1);
        FUN_00290404();
        FUN_002905d0();
        temp_v4 = (unsigned int)*(unsigned short *)(temp_v1 + 0x982);
        temp_v13 = SBORROW4(temp_v4,temp_v10);
        temp_v9 = temp_v4 - temp_v10;
        temp_v12 = temp_v4 != temp_v10;
        if (temp_v12) {
          temp_v4 = (unsigned int)*(short *)(temp_v1 + 0x984);
          temp_v13 = SBORROW4(temp_v4,2);
          temp_v9 = temp_v4 - 2;
        }
        if ((temp_v12 && temp_v4 != 2) && temp_v9 < 0 == temp_v13) {
          FUN_002540b8(temp_v1);
        }
        *(unsigned short *)(temp_v1 + 0x982) = temp_v8;
        *(unsigned short *)(temp_v1 + 0x984) = 0;
      }
      else {
        temp_v2 = 8;
        FUN_002c1658(8,0);
        if (temp_v2 != 0) {
          temp_v9 = *(int *)(temp_v1 + 0x5c8) - 1;
          *(int *)(temp_v1 + 0x5cc) = temp_v9;
          if (temp_v9 < 0) {
            temp_v9 = *(int *)(temp_v1 + 0x5d0) - 1;
            *(int *)(temp_v1 + 0x5cc) = temp_v9;
          }
          else {
            temp_v9 = *(int *)(temp_v1 + 0x5cc);
          }
          if (temp_v9 != *(int *)(temp_v1 + 0x5c8)) {
            timerStart(temp_v1 + 0x1d8,3,0);
            temp_v9 = DAT_0043dd50;
            temp_v6 = *(unsigned int *)(DAT_0043dd50 + 4);
            *(unsigned int *)(DAT_0043dd50 + 4) = 5;
            *(unsigned int *)(temp_v9 + 8) = temp_v6;
            *(unsigned int *)(temp_v9 + 0x10) = 0;
            FUN_002bc01c(0x100016f);
          }
        }
        else {
          temp_v2 = 7;
          FUN_002c1658(7,0);
          if (temp_v2 != 0) {
            temp_v9 = *(int *)(temp_v1 + 0x5c8) + 1;
            *(int *)(temp_v1 + 0x5cc) = temp_v9;
            if (*(int *)(temp_v1 + 0x5d0) <= temp_v9) {
              *(unsigned int *)(temp_v1 + 0x5cc) = 0;
            }
            if (*(int *)(temp_v1 + 0x5cc) != *(int *)(temp_v1 + 0x5c8)) {
              timerStart(temp_v1 + 0x1d8,2,0);
              temp_v9 = DAT_0043dd50;
              temp_v6 = *(unsigned int *)(DAT_0043dd50 + 4);
              *(unsigned int *)(DAT_0043dd50 + 4) = 5;
              *(unsigned int *)(temp_v9 + 8) = temp_v6;
              *(unsigned int *)(temp_v9 + 0x10) = 0;
              FUN_002bc01c(0x100016f);
            }
          }
          else {
            if (*(char *)(temp_v1 + 0x5c4) != '\0') goto LAB_001b02f8;
            temp_v2 = 9;
            FUN_002c1658(9,1);
            temp_v6 = 0x100016d;
            if (temp_v2 != 0) {
              FUN_002bc01c(0x100016d);
              FUN_0029ee6c(0,0x323232ff);
              FUN_0029e39c(0xe,0);
              FUN_0029e328(0x22);
              FUN_0029e328(0x21);
              FUN_0029e328(0x18);
              FUN_0029e328(0x19);
              FUN_0029e328(0x1a);
              FUN_0029e1ec();
              temp_v6 = 0x1e;
              temp_v9 = DAT_0043dd50;
              temp_v5 = *(unsigned int *)(DAT_0043dd50 + 4);
              *(unsigned int *)(DAT_0043dd50 + 4) = temp_v6;
              *(unsigned int *)(temp_v9 + 8) = temp_v5;
              *(unsigned int *)(temp_v9 + 0x10) = 0;
            }
            else if (*(char *)(temp_v1 + 0x5c4) == '\0') {
              if (*(char *)(temp_v1 + 0x5f1) == '\0') {
                temp_v2 = 10;
                FUN_002c1658(10,1);
                if (temp_v2 != 0) {
                  temp_v9 = FUN_002903f0();
                  if (temp_v9 != 0) {
                    temp_v6 = FUN_002903f0();
                    FUN_0028ed3c(temp_v6,0,1);
                    temp_v9 = FUN_00296f4c(*(unsigned int *)(temp_v1 + 0x5b4),1);
                    if (temp_v9 != 0) {
                      FUN_002b8838(0xe2);
                      FUN_002bc01c(0x100016d);
                      temp_v6 = 7;
                      temp_v9 = DAT_0043dd50;
                      temp_v5 = *(unsigned int *)(DAT_0043dd50 + 4);
                      *(unsigned int *)(DAT_0043dd50 + 4) = temp_v6;
                      *(unsigned int *)(temp_v9 + 8) = temp_v5;
                      *(unsigned int *)(temp_v9 + 0x10) = 0;
                    }
                  }
                  goto LAB_001b0368;
                }
                if (*(char *)(temp_v1 + 0x5c4) != '\0') goto LAB_001b02f8;
              }
              temp_v2 = 0;
              FUN_002c1658(0,1);
              if (temp_v2 == 0 && temp_v14[0] == '\0') goto LAB_001b02f8;
              temp_v2 = FUN_0029efc0(temp_v11);
              temp_v3 = FUN_0029efa8(temp_v11);
              temp_v10 = (unsigned int)*(unsigned short *)(temp_v9 + (temp_v3 + temp_v2) * 2);
              if (*(char *)(temp_v1 + 0x5f1) != '\0') {
                temp_v5 = 0xd;
                temp_v9 = DAT_0043dd50;
                temp_v7 = *(unsigned int *)(DAT_0043dd50 + 4);
                *(unsigned int *)(DAT_0043dd50 + 4) = temp_v5;
                *(unsigned int *)(temp_v9 + 8) = temp_v7;
                *(unsigned int *)(temp_v9 + 0x10) = 0;
              }
              else {
                temp_v4 = FUN_002903f0();
                if (temp_v4 == temp_v10) {
                  temp_v5 = FUN_002903f0();
                  FUN_0028ed3c(temp_v5,0,1);
                  temp_v9 = FUN_00296f4c(*(unsigned int *)(temp_v1 + 0x5b4),1);
                  if (temp_v9 == 0) goto LAB_001b0364;
                  FUN_002b8838(0xe2);
                  temp_v5 = 7;
                  temp_v9 = DAT_0043dd50;
                  temp_v7 = *(unsigned int *)(DAT_0043dd50 + 4);
                  *(unsigned int *)(DAT_0043dd50 + 4) = temp_v5;
                  *(unsigned int *)(temp_v9 + 8) = temp_v7;
                  *(unsigned int *)(temp_v9 + 0x10) = 0;
                }
                else {
                  temp_v4 = temp_v10;
                  FUN_002b63c0();
                  FUN_0028ed3c(temp_v10,0,1);
                  if (*(char *)(temp_v4 + 6) != '\0') {
                    temp_v9 = FUN_0028f304();
                    if (temp_v9 != 0) {
                      FUN_002b8838(0xe2);
                      if ((*(unsigned int *)(temp_v4 + 0x150) >= 3) &&
                         (temp_v9 = FUN_002b63ac(),
                         (unsigned int)((*(int *)(temp_v4 + 0x150) - 2) * 5) > (unsigned int)*(unsigned char *)(temp_v9 + 0x76))
                         ) {
                        temp_v9 = FUN_00296f4c(*(unsigned int *)(temp_v1 + 0x5b4),6);
                        if (temp_v9 != 0) {
                          temp_v5 = 0xb;
                          temp_v9 = DAT_0043dd50;
                          temp_v7 = *(unsigned int *)(DAT_0043dd50 + 4);
                          *(unsigned int *)(DAT_0043dd50 + 4) = temp_v5;
                          *(unsigned int *)(temp_v9 + 8) = temp_v7;
                          *(unsigned int *)(temp_v9 + 0x10) = 0;
                        }
                      }
                      else {
                        temp_v9 = FUN_0029022c();
                        if (temp_v9 != 0) {
                          temp_v9 = FUN_00296f4c(*(unsigned int *)(temp_v1 + 0x5b4),2);
                          if (temp_v9 != 0) {
                            temp_v5 = 8;
                            temp_v9 = DAT_0043dd50;
                            temp_v7 = *(unsigned int *)(DAT_0043dd50 + 4);
                            *(unsigned int *)(DAT_0043dd50 + 4) = temp_v5;
                            *(unsigned int *)(temp_v9 + 8) = temp_v7;
                            *(unsigned int *)(temp_v9 + 0x10) = 0;
                          }
                        }
                        else {
                          temp_v9 = FUN_00296f4c(*(unsigned int *)(temp_v1 + 0x5b4),0);
                          if (temp_v9 != 0) {
                            temp_v5 = 6;
                            temp_v9 = DAT_0043dd50;
                            temp_v7 = *(unsigned int *)(DAT_0043dd50 + 4);
                            *(unsigned int *)(DAT_0043dd50 + 4) = temp_v5;
                            *(unsigned int *)(temp_v9 + 8) = temp_v7;
                            *(unsigned int *)(temp_v9 + 0x10) = 0;
                          }
                        }
                      }
                    }
                    else {
                      temp_v9 = FUN_00333aac(temp_v10);
                      if (temp_v9 != 0) {
                        temp_v9 = FUN_00296f4c(*(unsigned int *)(temp_v1 + 0x5b4),4);
                      }
                      else {
                        temp_v9 = FUN_00298e20(temp_v10);
                        if (temp_v9 != 0) {
                          temp_v9 = FUN_00296f4c(*(unsigned int *)(temp_v1 + 0x5b4),8);
                        }
                        else {
                          temp_v9 = FUN_00296f4c(*(unsigned int *)(temp_v1 + 0x5b4),4);
                        }
                      }
                      if (temp_v9 != 0) {
                        FUN_002b8838(0xb0);
                        temp_v5 = 10;
                        temp_v9 = DAT_0043dd50;
                        temp_v7 = *(unsigned int *)(DAT_0043dd50 + 4);
                        *(unsigned int *)(DAT_0043dd50 + 4) = temp_v5;
                        *(unsigned int *)(temp_v9 + 8) = temp_v7;
                        *(unsigned int *)(temp_v9 + 0x10) = 0;
                      }
                    }
                  }
                  else {
                    temp_v9 = FUN_00298e20(temp_v10);
                    if (temp_v9 != 0) {
                      temp_v9 = FUN_00298e00(temp_v10);
                      if (temp_v9 != 0) {
                        temp_v9 = FUN_00296f4c(*(unsigned int *)(temp_v1 + 0x5b4),5);
                      }
                      else {
                        temp_v9 = FUN_00296f4c(*(unsigned int *)(temp_v1 + 0x5b4),8);
                      }
                    }
                    else {
                      temp_v9 = FUN_00296f4c(*(unsigned int *)(temp_v1 + 0x5b4),5);
                    }
                    if (temp_v9 != 0) {
                      FUN_002b8838(0xb0);
                      temp_v5 = 10;
                      temp_v9 = DAT_0043dd50;
                      temp_v7 = *(unsigned int *)(DAT_0043dd50 + 4);
                      *(unsigned int *)(DAT_0043dd50 + 4) = temp_v5;
                      *(unsigned int *)(temp_v9 + 8) = temp_v7;
                      *(unsigned int *)(temp_v9 + 0x10) = 0;
                    }
                  }
                }
              }
LAB_001b0364:
              FUN_002bc01c(temp_v6);
            }
            else {
LAB_001b02f8:
              temp_v9 = FUN_002c09d0(0x216);
              if (temp_v9 == 0) {
                temp_v9 = 1;
                FUN_002c1658();
                if (temp_v9 != 0) {
                  timerStart(temp_v1 + 0x34,2,0);
                  temp_v9 = DAT_0043dd50;
                  temp_v6 = *(unsigned int *)(DAT_0043dd50 + 4);
                  *(unsigned int *)(DAT_0043dd50 + 4) = 3;
                  *(unsigned int *)(temp_v9 + 8) = temp_v6;
                  *(unsigned int *)(temp_v9 + 0x10) = 0;
                  if (*(short *)(temp_v1 + 0x982) != 0) {
                    FUN_002540b8(temp_v1);
                    *(unsigned short *)(temp_v1 + 0x982) = 0;
                  }
                  temp_v6 = 0x100016e;
                  FUN_002bc01c(temp_v6);
                }
              }
            }
          }
        }
      }
    }
LAB_001b0368:
    temp_v13 = *(char *)(temp_v1 + 0x5c4) == '\0';
    if (!temp_v13) {
      temp_v6 = FUN_0029efc0(temp_v11);
      temp_v5 = FUN_0029e11c(temp_v11);
    }
    else {
      temp_v6 = FUN_0029efc0(temp_v11);
      temp_v5 = FUN_0029e11c(temp_v11);
    }
    FUN_00203460(temp_v13,temp_v5,temp_v6);
  }
  *(short *)(temp_v1 + 0x984) = *(short *)(temp_v1 + 0x984) + 1;
  return;
}

} /* extern "C" */
