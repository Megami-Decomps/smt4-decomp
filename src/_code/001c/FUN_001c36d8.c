/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001c36d8` (_code @ 0x1c36d8, 0x778 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 32 slot(s), 128 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int sp9C; /* 0x9c: local_9c */
    unsigned int spA0; /* 0xa0: local_a0 */
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned int spA8; /* 0xa8: local_a8 */
    unsigned int spAC; /* 0xac: local_ac */
    unsigned int spB0; /* 0xb0: local_b0 */
    unsigned int spB4; /* 0xb4: local_b4 */
} param_1_stack;

extern unsigned int DAT_00433158; /* 0x433158 */

extern int FUN_001ed60c(void);
/* Supplied declaration required: FUN_0026e324. */
/* Supplied declaration required: FUN_0026e420. */
/* Supplied declaration required: FUN_0026e5ec. */
/* Supplied declaration required: FUN_0026e61c. */
/* Supplied declaration required: FUN_0026e630. */
/* Supplied declaration required: FUN_0026f824. */
/* Supplied declaration required: FUN_00276218. */
/* Supplied declaration required: FUN_00287c34. */
/* Supplied declaration required: FUN_0028975c. */
extern int FUN_00292f28(unsigned int);
/* Supplied declaration required: FUN_00299370. */
/* Supplied declaration required: FUN_0029c1c8. */
/* Supplied declaration required: FUN_0029c6b0. */
extern int FUN_0029ebac(int, unsigned int);
extern int FUN_002a8740(unsigned int);
/* Supplied declaration required: FUN_002bcd68. */
extern int FUN_002c09bc(void);
/* Supplied declaration required: FUN_002c09d0. */
/* Supplied declaration required: FUN_00333edc. */
/* Supplied declaration required: FUN_0033f86c. */
/* Supplied declaration required: FUN_00394fd8. */


void FUN_001c36d8(int param_1)

{
/* irregular: 17 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  unsigned int temp_v12;
  unsigned int temp_v13;
  unsigned int temp_v14;
  unsigned int temp_v15;
  char temp_v16 [76];
  char temp_v17 [12];
  int temp_v18;
  int temp_v19;
  int temp_v20;
  int temp_v21;
  int temp_v22;
  int temp_v23;
  unsigned int *temp_v24;
  int temp_v25;
  int temp_v26;
  int temp_v27;
  int temp_v28;
  int temp_v29;
  
  temp_v7 = 0;
  temp_v5 = 0x426;
  temp_v16[0] = '\0';
  temp_v16[1] = '\0';
  temp_v16[2] = '\0';
  temp_v16[3] = '\0';
  temp_v16[4] = '\0';
  temp_v16[5] = '\0';
  temp_v16[6] = '\0';
  temp_v16[7] = '\0';
  temp_v16[8] = '\0';
  temp_v16[9] = '\0';
  temp_v16[10] = '\0';
  temp_v16[0xb] = '\0';
  temp_v16[0xc] = '\0';
  temp_v16[0xd] = '\0';
  temp_v16[0xe] = '\0';
  temp_v16[0xf] = '\0';
  temp_v16[0x10] = '\0';
  temp_v16[0x11] = '\0';
  temp_v16[0x12] = '\0';
  temp_v16[0x13] = '\0';
  temp_v16[0x14] = '\0';
  temp_v16[0x15] = '\0';
  temp_v16[0x16] = '\0';
  temp_v16[0x17] = '\0';
  temp_v16[0x18] = '\0';
  temp_v16[0x19] = '\0';
  temp_v16[0x1a] = '\0';
  temp_v16[0x1b] = '\0';
  temp_v16[0x1c] = '\0';
  temp_v16[0x1d] = '\0';
  temp_v16[0x1e] = '\0';
  temp_v16[0x1f] = '\0';
  temp_v16[0x20] = '\0';
  temp_v16[0x21] = '\0';
  temp_v16[0x22] = '\0';
  temp_v16[0x23] = '\0';
  temp_v16[0x24] = '\0';
  temp_v16[0x25] = '\0';
  temp_v16[0x26] = '\0';
  temp_v16[0x27] = '\0';
  temp_v16[0x28] = '\0';
  temp_v16[0x29] = '\0';
  temp_v16[0x2a] = '\0';
  temp_v16[0x2b] = '\0';
  temp_v16[0x2c] = '\0';
  temp_v16[0x2d] = '\0';
  temp_v16[0x2e] = '\0';
  temp_v16[0x2f] = '\0';
  temp_v16[0x30] = '\0';
  temp_v16[0x31] = '\0';
  temp_v16[0x32] = '\0';
  temp_v16[0x33] = '\0';
  temp_v16[0x34] = '\0';
  temp_v16[0x35] = '\0';
  temp_v16[0x36] = '\0';
  temp_v16[0x37] = '\0';
  temp_v29 = param_1;
  do {
    temp_v0 = FUN_002c09d0(temp_v5);
    if (temp_v0 != 0) {
      temp_v16[temp_v7] = '\x01';
    }
    do {
      temp_v5 = temp_v5 + 1;
      temp_v7 = temp_v7 + 1;
      if (temp_v5 >= 0x45c) {
        temp_v5 = 0x467;
        temp_v7 = 0;
        temp_v16[0x38] = '\0';
        temp_v16[0x39] = '\0';
        temp_v16[0x3a] = '\0';
        temp_v16[0x3b] = '\0';
        temp_v16[0x3c] = '\0';
        temp_v16[0x3d] = '\0';
        temp_v16[0x3e] = '\0';
        temp_v16[0x3f] = '\0';
        temp_v16[0x40] = '\0';
        temp_v16[0x41] = '\0';
        temp_v16[0x42] = '\0';
        temp_v16[0x43] = '\0';
        temp_v16[0x44] = '\0';
        temp_v16[0x45] = '\0';
        temp_v16[0x46] = '\0';
        temp_v16[0x47] = '\0';
        do {
          temp_v0 = FUN_002c09d0(temp_v5);
          if (temp_v0 != 0) {
            temp_v16[temp_v7 + 0x38] = '\x01';
          }
          do {
            temp_v5 = temp_v5 + 1;
            temp_v7 = temp_v7 + 1;
            if (temp_v5 >= 0x475) {
              temp_v7 = 0;
              temp_v5 = 0x77;
              temp_v17[0] = '\0';
              temp_v17[1] = '\0';
              temp_v17[2] = '\0';
              temp_v17[3] = '\0';
              temp_v17[4] = '\0';
              temp_v17[5] = '\0';
              temp_v17[6] = '\0';
              temp_v17[7] = '\0';
              do {
                temp_v0 = FUN_00292f28(temp_v5);
                if (temp_v0 != 0) {
                  temp_v17[temp_v7] = '\x01';
                }
                temp_v5 = temp_v5 + 1;
                temp_v7 = temp_v7 + 1;
              } while (temp_v5 < 0x7f);
              temp_v7 = FUN_002c09d0(0x556);
              temp_v0 = FUN_002c09d0(0x557);
              temp_v19 = FUN_002c09d0(0x555);
              temp_v20 = FUN_002c09d0(0x674);
              temp_v21 = FUN_002c09d0(0x675);
              temp_v22 = FUN_002c09d0(0x676);
              temp_v23 = FUN_002c09d0(0x677);
              temp_v24 = (unsigned int *)FUN_002c09d0(0x678);
              temp_v25 = FUN_002c09d0(0x679);
              temp_v26 = FUN_002c09d0(0x67a);
              temp_v27 = FUN_002c09d0(0x67b);
              temp_v28 = FUN_002c09d0(0x464);
              temp_v1 = FUN_002c09d0(0x551);
              FUN_00276218();
              FUN_0026f824(0);
              FUN_00287c34(0);
              temp_v2 = FUN_002c09bc();
              temp_v3 = FUN_001ed60c();
              *(unsigned int *)(temp_v2 + 0x1f458) = *(unsigned int *)(temp_v3 + 0x1f458);
              FUN_002bcd68(temp_v2 + 0x1f45c,temp_v3 + 0x1f45c,0x400);
              temp_v9 = *(unsigned int *)(temp_v3 + 0x1ec14);
              temp_v10 = *(unsigned int *)(temp_v3 + 0x1ec18);
              temp_v11 = *(unsigned int *)(temp_v3 + 0x1ec1c);
              temp_v12 = *(unsigned int *)(temp_v3 + 0x1ec20);
              temp_v13 = *(unsigned int *)(temp_v3 + 0x1ec24);
              temp_v14 = *(unsigned int *)(temp_v3 + 0x1ec28);
              temp_v15 = *(unsigned int *)(temp_v3 + 0x1ec2c);
              *(unsigned int *)(temp_v2 + 0x1ec10) = *(unsigned int *)(temp_v3 + 0x1ec10);
              *(unsigned int *)(temp_v2 + 0x1ec14) = temp_v9;
              *(unsigned int *)(temp_v2 + 0x1ec18) = temp_v10;
              *(unsigned int *)(temp_v2 + 0x1ec1c) = temp_v11;
              *(unsigned int *)(temp_v2 + 0x1ec20) = temp_v12;
              *(unsigned int *)(temp_v2 + 0x1ec24) = temp_v13;
              *(unsigned int *)(temp_v2 + 0x1ec28) = temp_v14;
              *(unsigned int *)(temp_v2 + 0x1ec2c) = temp_v15;
              temp_v6 = 0;
              temp_v9 = *(unsigned int *)(temp_v3 + 0x1ec34);
              temp_v10 = *(unsigned int *)(temp_v3 + 0x1ec38);
              temp_v11 = *(unsigned int *)(temp_v3 + 0x1ec3c);
              temp_v12 = *(unsigned int *)(temp_v3 + 0x1ec40);
              temp_v13 = *(unsigned int *)(temp_v3 + 0x1ec44);
              temp_v14 = *(unsigned int *)(temp_v3 + 0x1ec48);
              temp_v15 = *(unsigned int *)(temp_v3 + 0x1ec4c);
              *(unsigned int *)(temp_v2 + 0x1ec30) = *(unsigned int *)(temp_v3 + 0x1ec30);
              *(unsigned int *)(temp_v2 + 0x1ec34) = temp_v9;
              *(unsigned int *)(temp_v2 + 0x1ec38) = temp_v10;
              *(unsigned int *)(temp_v2 + 0x1ec3c) = temp_v11;
              *(unsigned int *)(temp_v2 + 0x1ec40) = temp_v12;
              *(unsigned int *)(temp_v2 + 0x1ec44) = temp_v13;
              *(unsigned int *)(temp_v2 + 0x1ec48) = temp_v14;
              *(unsigned int *)(temp_v2 + 0x1ec4c) = temp_v15;
              temp_v9 = *(unsigned int *)(temp_v3 + 0x24ba0);
              *(unsigned int *)(temp_v2 + 0x24b9c) = *(unsigned int *)(temp_v3 + 0x24b9c);
              *(unsigned int *)(temp_v2 + 0x24ba0) = temp_v9;
              do {
                if (temp_v16[temp_v6] != '\0') {
                  FUN_0028975c(temp_v6 + 0x426,1);
                }
                temp_v6 = temp_v6 + 1;
              } while (temp_v6 < 0x36);
              temp_v6 = 0;
              do {
                if (temp_v16[temp_v6 + 0x38] != '\0') {
                  FUN_0028975c(temp_v6 + 0x467,1);
                }
                temp_v6 = temp_v6 + 1;
              } while (temp_v6 < 0xe);
              FUN_0033f86c(temp_v2 + 0xb91c,temp_v3 + 0xb91c);
              if (temp_v7 != 0) {
                FUN_0028975c(0x556,1);
              }
              if (temp_v0 != 0) {
                FUN_0028975c(0x557,1);
              }
              if (temp_v19 != 0) {
                FUN_0028975c(0x555,1);
              }
              if (temp_v20 != 0) {
                FUN_0028975c(0x674,1);
              }
              if (temp_v21 != 0) {
                FUN_0028975c(0x675,1);
              }
              if (temp_v22 != 0) {
                FUN_0028975c(0x676,1);
              }
              if (temp_v23 != 0) {
                FUN_0028975c(0x677,1);
              }
              if (temp_v24 != (unsigned int *)0x0) {
                FUN_0028975c(0x678,1);
              }
              if (temp_v25 != 0) {
                FUN_0028975c(0x679,1);
              }
              if (temp_v26 != 0) {
                FUN_0028975c(0x67a,1);
              }
              if (temp_v27 != 0) {
                FUN_0028975c(0x67b,1);
              }
              if (temp_v28 != 0) {
                FUN_0028975c(0x464,1);
              }
              temp_v9 = *(unsigned int *)(temp_v3 + 0x24b1c);
              temp_v10 = *(unsigned int *)(temp_v3 + 0x24b20);
              *(unsigned int *)(temp_v2 + 0x24b24) = *(unsigned int *)(temp_v3 + 0x24b24);
              *(unsigned int *)(temp_v2 + 0x24b1c) = temp_v9;
              *(unsigned int *)(temp_v2 + 0x24b20) = temp_v10;
              FUN_002bcd68(temp_v2 + 0x2478c,temp_v3 + 0x2478c,0x390);
              FUN_002bcd68(temp_v2 + 0x54,temp_v3 + 0x54,0x12);
              temp_v7 = 0;
              temp_v22 = 0;
              temp_v21 = temp_v3 + 0x97ec;
              temp_v18 = temp_v2 + 0x97ec;
              temp_v20 = temp_v2 + 0xc1a4;
              temp_v19 = temp_v3 + 0xc1a4;
              temp_v24 = (unsigned int *)(temp_v3 + 0x97e4);
              do {
                if (*(char *)(temp_v29 + temp_v7) != '\0') {
                  switch(temp_v7) {
                  case 0:
                    *(unsigned char *)(temp_v2 + 0x7e) = *(unsigned char *)(temp_v3 + 0x7e);
                    *(unsigned int *)(temp_v2 + 0x16) = *(unsigned int *)(temp_v3 + 0x16);
                    *(unsigned int *)(temp_v2 + 0x1a) = *(unsigned int *)(temp_v3 + 0x1a);
                    *(unsigned int *)(temp_v2 + 0x1e) = *(unsigned int *)(temp_v3 + 0x1e);
                    *(unsigned short *)(temp_v2 + 0x22) = *(unsigned short *)(temp_v3 + 0x22);
                    *(unsigned int *)(temp_v2 + 0x38) = *(unsigned int *)(temp_v3 + 0x38);
                    FUN_002bcd68(temp_v2 + 8,temp_v3 + 8,0xe);
                    temp_v9 = *(unsigned int *)(temp_v3 + 0x40);
                    temp_v10 = *(unsigned int *)(temp_v3 + 0x44);
                    temp_v11 = *(unsigned int *)(temp_v3 + 0x48);
                    *(unsigned int *)(temp_v2 + 0x3c) = *(unsigned int *)(temp_v3 + 0x3c);
                    *(unsigned int *)(temp_v2 + 0x40) = temp_v9;
                    *(unsigned int *)(temp_v2 + 0x44) = temp_v10;
                    *(unsigned int *)(temp_v2 + 0x48) = temp_v11;
                    temp_v9 = *(unsigned int *)(temp_v3 + 0x50);
                    *(unsigned int *)(temp_v2 + 0x4c) = *(unsigned int *)(temp_v3 + 0x4c);
                    *(unsigned int *)(temp_v2 + 0x50) = temp_v9;
                    FUN_00299370(0);
                    FUN_00333edc();
                    temp_v22 = 1;
                    break;
                  case 1:
                    FUN_00394fd8(temp_v18,temp_v21,(int)*(char *)(temp_v29 + 3));
                    break;
                  case 2:
                    FUN_002bcd68(temp_v20,temp_v19,0x10400);
                    break;
                  case 4:
                    *(unsigned int *)(temp_v2 + 4) = *(unsigned int *)(temp_v3 + 4);
                    break;
                  case 5:
                    FUN_0026e630(*temp_v24);
                    break;
                  case 6:
                    temp_v0 = 0;
                    do {
                      temp_v6 = temp_v3 + temp_v0 * 0x604;
                      temp_v8 = temp_v6 + 0x94;
                      temp_v4 = FUN_0029ebac(temp_v8,2);
                      if (temp_v4 != 0) {
                        FUN_0029c1c8(0,*(unsigned short *)(temp_v6 + 0xda));
                        temp_v6 = FUN_002a8740(0);
                        FUN_002bcd68(temp_v6,temp_v8,0x604);
                        *(unsigned char *)(temp_v6 + 0x4a) = 0;
                        *(unsigned char *)(temp_v6 + 0x49) = 0;
                        *(unsigned char *)(temp_v6 + 0x4b) = 0;
                        *(unsigned char *)(temp_v6 + 0x600) = 0;
                        *(unsigned short *)(temp_v6 + 0x44) = 0;
                        FUN_0026e61c(temp_v6,2);
                        FUN_0029c6b0(temp_v6);
                        FUN_0026e5ec(0x20,1);
                        if (temp_v1 != 0) {
                          FUN_0028975c(0x551,1);
                        }
                      }
                      temp_v0 = temp_v0 + 1;
                    } while (temp_v0 < 0x18);
                    break;
                  case 7:
                    FUN_002bcd68(temp_v20,temp_v19,0x10400);
                    temp_v6 = 0;
                    temp_v0 = 0;
                    do {
                      temp_v4 = temp_v6 + 1;
                      *(unsigned short *)(temp_v2 + temp_v6 * 0x34 + 0xc1d0) = 0;
                      temp_v0 = temp_v0 + 2;
                      temp_v6 = temp_v6 + 2;
                      *(unsigned short *)(temp_v2 + temp_v4 * 0x34 + 0xc1d0) = 0;
                    } while (temp_v0 < 0x500);
                  }
                }
                temp_v7 = temp_v7 + 1;
              } while (temp_v7 < 8);
              temp_v5 = 0;
              do {
                if (temp_v17[temp_v5] != '\0') {
                  FUN_0026e420(temp_v5 + 0x77,1,0);
                }
                temp_v5 = temp_v5 + 1;
              } while (temp_v5 < 8);
              FUN_0028975c(0x565,1);
              if (temp_v22 != 0) {
                FUN_0028975c(0x466,1);
                FUN_0028975c(0x410,1);
              }
              FUN_0026e324(DAT_00433158);
              return;
            }
          } while (temp_v5 == 0x46f);
        } while( 1 );
      }
    } while ((temp_v5 == 0x452 || temp_v5 == 0x453) || temp_v5 == 0x454);
  } while( 1 );
}
