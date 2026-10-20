/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a9104` (_code @ 0x1a9104, 0x408 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0028784c(int, int);
int FUN_00295a18(int, int);
int FUN_002e8598(...);
int FUN_002e87ac(...);

/* stack frame of void: 9 slot(s), 34 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned short sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
} void_stack;

extern signed char DAT_0049f9c8; /* 0x49f9c8 */
extern int DAT_0049f9cc; /* 0x49f9cc */

extern int FUN_00287800(void);
/* Supplied declaration required: FUN_0028784c. */
extern int FUN_00287874(unsigned short);
extern int FUN_00287894(unsigned short);
extern int FUN_002878a8(int);
extern int FUN_0028f1bc(unsigned short);
/* Supplied declaration required: FUN_00295a18. */
extern int FUN_00298dc8(unsigned short);
extern int FUN_00298e40(unsigned short, int, unsigned int *);
extern int FUN_002c2950(void);
/* Supplied declaration required: FUN_002e8598. */
/* Supplied declaration required: FUN_002e87ac. */


int FUN_001a9104(void)

{
/* irregular: 4 native warning(s); review required */
  unsigned short temp_v0;
  unsigned short temp_v1;
  unsigned short temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  int temp_v8;
  int temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  unsigned int temp_v12;
  unsigned short temp_v13;
  int temp_v14;
  unsigned int temp_v15;
  int temp_v16;
  unsigned int temp_v17;
  unsigned int temp_v18;
  unsigned int temp_v19;
  unsigned int temp_v20;
  
  temp_v16 = 0;
  temp_v14 = FUN_002c2950();
  temp_v17 = 0;
  if (DAT_0049f9c8 != '\0') {
    temp_v3 = FUN_002878a8((int)*(short *)(temp_v14 + 0x2a));
    DAT_0049f9cc = (int)*(short *)(temp_v3 + 0x12);
    FUN_00295a18(DAT_0049f9cc,1);
    DAT_0049f9c8 = 0;
    return 4;
  }
  temp_v14 = temp_v14 + 0x1000;
  temp_v2 = 100;
  do {
    temp_v3 = FUN_00298dc8(temp_v2);
    if (temp_v3 != 0) {
      temp_v3 = FUN_00287894(temp_v2);
      if (temp_v3 != 1) {
        if (temp_v3 == 0) {
          temp_v11 = 0;
          temp_v7 = 0;
          temp_v9 = 0;
          temp_v10 = 0;
          temp_v19 = 0;
          temp_v20 = 0;
          temp_v15 = 0;
          temp_v3 = FUN_00287874(temp_v2);
          if (temp_v3 != 0) {
            temp_v3 = FUN_0028f1bc(temp_v2);
            if (temp_v3 != 0) {
              temp_v8 = 0;
              temp_v3 = 0;
              temp_v1 = *(unsigned short *)(temp_v14 + 0x62);
              temp_v18 = (unsigned int)*(short *)(temp_v14 + 0x60);
              do {
                temp_v4 = FUN_00298e40(temp_v2,temp_v3,&temp_v12);
                if (temp_v4 != 0) {
                  temp_v7 = temp_v7 + 1;
                  temp_v5 = (unsigned int)temp_v13;
                  if ((int)temp_v12 >= 1) {
                    if (temp_v5 == temp_v18) {
                      temp_v11 = 1;
                      temp_v19 = temp_v12;
                      if (temp_v10 == 0) {
                        temp_v20 = temp_v12;
                        temp_v10 = temp_v5;
                      }
                    }
                    else {
                      temp_v20 = temp_v12;
                      temp_v10 = temp_v5;
                    }
                  }
                  else {
                    temp_v9 = temp_v9 + 1;
                    if (temp_v5 == (int)(short)temp_v1) {
                      temp_v11 = 1;
                    }
                  }
                  temp_v8 = temp_v8 + temp_v12;
                }
                temp_v3 = temp_v3 + 1;
              } while (temp_v3 < 6);
              if ((temp_v11 & ~temp_v15 & ~temp_v17) != 0) {
                if (temp_v7 >= 2) {
                  if (temp_v8 != 0) {
                    if ((int)(short)temp_v1 != 0) {
                      temp_v5 = temp_v7 - temp_v9;
                      temp_v11 = temp_v20;
                      if ((int)temp_v5 >= 2) {
                        temp_v10 = (unsigned int)temp_v1;
                        temp_v11 = temp_v5;
                      }
                      temp_v11 = temp_v11 & 0xffff;
                      if ((int)temp_v5 < 2) {
                        temp_v6 = 2;
                      }
                      else {
                        temp_v6 = 1;
                      }
                    }
                    else {
                      temp_v11 = temp_v19 & 0xffff;
                      temp_v10 = temp_v18 & 0xffff;
                      temp_v6 = 3;
                    }
                    FUN_002e87ac(temp_v6,temp_v10,temp_v11);
                  }
                  else {
                    temp_v6 = 0;
                    FUN_002e87ac(temp_v6,temp_v1,0);
                    temp_v16 = 2;
                  }
                }
                else if (temp_v8 != 0) {
                  temp_v11 = temp_v19 & 0xffff;
                  temp_v10 = temp_v18 & 0xffff;
                  temp_v6 = 5;
                  FUN_002e87ac(temp_v6,temp_v10,temp_v11);
                }
                else {
                  temp_v6 = 4;
                  FUN_002e87ac(temp_v6,temp_v1,0);
                  temp_v16 = 2;
                }
              }
            }
            FUN_0028784c(temp_v2,0);
          }
        }
      }
      else {
        temp_v10 = 0;
        temp_v18 = 0;
        temp_v7 = 0;
        temp_v9 = 0;
        temp_v19 = 0;
        temp_v20 = 0;
        temp_v15 = 0;
        temp_v3 = FUN_00287874(temp_v2);
        if (temp_v3 != 0) {
          temp_v8 = 0;
          temp_v3 = 0;
          temp_v1 = *(unsigned short *)(temp_v14 + 100);
          temp_v0 = *(unsigned short *)(temp_v14 + 0x66);
          do {
            temp_v4 = FUN_00298e40(temp_v2,temp_v3,&temp_v12);
            if (temp_v4 != 0) {
              temp_v7 = temp_v7 + 1;
              temp_v11 = (unsigned int)temp_v13;
              if ((int)temp_v12 >= 1) {
                if (temp_v11 == (int)(short)temp_v0) {
                  temp_v10 = 1;
                  temp_v18 = temp_v12;
                }
                else {
                  temp_v20 = temp_v12;
                  temp_v19 = temp_v11;
                }
              }
              else {
                temp_v9 = temp_v9 + 1;
                if (temp_v11 == (int)(short)temp_v1) {
                  temp_v10 = 1;
                }
              }
              temp_v8 = temp_v8 + temp_v12;
            }
            temp_v3 = temp_v3 + 1;
          } while (temp_v3 < 6);
          if ((temp_v10 & ~temp_v15) != 0) {
            if (temp_v7 >= 2) {
              if (temp_v8 != 0) {
                if ((int)(short)temp_v1 != 0) {
                  if (temp_v7 - temp_v9 >= 2) {
                    temp_v10 = (unsigned int)temp_v1;
                    temp_v6 = 7;
                  }
                  else {
                    temp_v10 = temp_v19 & 0xffff;
                    temp_v6 = 8;
                  }
                }
                else {
                  temp_v10 = (unsigned int)temp_v0;
                  temp_v6 = 9;
                }
                FUN_002e8598(temp_v6,temp_v10);
              }
              else {
                temp_v6 = 6;
                FUN_002e8598(temp_v6,temp_v1);
                temp_v16 = 1;
                temp_v17 = 1;
              }
            }
            else if (temp_v8 != 0) {
              temp_v10 = (unsigned int)temp_v0;
              temp_v6 = 0xb;
              FUN_002e8598(temp_v6,temp_v10);
            }
            else {
              temp_v6 = 10;
              FUN_002e8598(temp_v6,temp_v1);
              temp_v16 = 1;
              temp_v17 = 1;
            }
          }
          FUN_0028784c(temp_v2,0);
        }
      }
    }
    temp_v2 = temp_v2 + 1;
    if (temp_v2 >= 400) {
      if ((temp_v16 == 0) && (temp_v3 = FUN_00287800(), temp_v3 != 0)) {
        temp_v16 = 3;
      }
      *(unsigned short *)(temp_v14 + 100) = 0;
      *(unsigned short *)(temp_v14 + 0x66) = 0;
      *(unsigned short *)(temp_v14 + 0x62) = 0;
      *(unsigned short *)(temp_v14 + 0x60) = 0;
      return temp_v16;
    }
  } while( 1 );
}

} /* extern "C" */
