/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001abb98` (_code @ 0x1abb98, 0x1228 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00284838(void);
int FUN_002849a4(...);
int FUN_0028527c(int);
int FUN_0028529c(int, int, int, int, int, int);
int FUN_002852f0(int);
int asdMdlManagerCreateLoaded(unsigned char *, int);
int FUN_002a0428(unsigned int, int);
int FUN_002be624(unsigned char [64], unsigned char *, int);
int FUN_002c09f4(...);
int FUN_002c2950(void);
int FUN_002ce4e4(void);
int FUN_002e0274(...);
int FUN_002e29c0(void);
int VectorSignedToFloat(...);

/* stack frame of void: 16 slot(s), 64 byte(s) */
typedef struct {
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int spB8; /* 0xb8: local_b8 */
    unsigned int spBC; /* 0xbc: local_bc */
    unsigned int spC0; /* 0xc0: local_c0 */
    unsigned int spC4; /* 0xc4: local_c4 */
    unsigned int spC8; /* 0xc8: local_c8 */
    unsigned int spCC; /* 0xcc: local_cc */
    unsigned int spD0; /* 0xd0: local_d0 */
    unsigned int spD4; /* 0xd4: local_d4 */
    unsigned int spD8; /* 0xd8: local_d8 */
    unsigned int spDC; /* 0xdc: local_dc */
    unsigned int spE0; /* 0xe0: local_e0 */
    unsigned int spE4; /* 0xe4: local_e4 */
    unsigned int spE8; /* 0xe8: local_e8 */
} void_stack;

extern unsigned char LAB_001aca08; /* 0x1aca08 */
extern unsigned char LAB_001acdc0; /* 0x1acdc0 */
extern int DAT_0049f924; /* 0x49f924 */
extern unsigned char DAT_004bce8c; /* 0x4bce8c */
extern unsigned char DAT_004bce8d; /* 0x4bce8d */
extern int DAT_004bcf8c; /* 0x4bcf8c */
extern unsigned int *DAT_004bcf90; /* 0x4bcf90 */
extern unsigned char DAT_004bd04c; /* 0x4bd04c */
extern int DAT_004bd0cc; /* 0x4bd0cc */
extern int DAT_004bd0d0; /* 0x4bd0d0 */
extern unsigned char DAT_004bd0d4; /* 0x4bd0d4 */
extern unsigned char DAT_004bd0d5; /* 0x4bd0d5 */
extern unsigned char DAT_004bd0d6; /* 0x4bd0d6 */
extern unsigned char DAT_004bd0d7; /* 0x4bd0d7 */
extern int DAT_004bd0d8; /* 0x4bd0d8 */
extern unsigned char DAT_004bd0dc; /* 0x4bd0dc */
extern int DAT_004bd0e0; /* 0x4bd0e0 */
extern int DAT_004bd0e4; /* 0x4bd0e4 */
extern unsigned int DAT_004bd0e8; /* 0x4bd0e8 */
extern int DAT_004bd0ec; /* 0x4bd0ec */
extern int DAT_004bd0f0; /* 0x4bd0f0 */
extern int DAT_004bd0f4; /* 0x4bd0f4 */
extern unsigned char *puRam004bd108; /* 0x4bd108 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00284838. */
/* Supplied declaration required: FUN_002849a4. */
extern unsigned int asdMdlManagerClone(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0028527c. */
/* Supplied declaration required: FUN_0028529c. */
/* Supplied declaration required: FUN_002852f0. */
extern int FUN_00285574(void);
/* Supplied declaration required: asdMdlManagerCreateLoaded. */
/* Supplied declaration required: FUN_002a0428. */
/* Supplied declaration required: FUN_002be624. */
extern int FUN_002c09d0(unsigned int);
/* Supplied declaration required: FUN_002c09f4. */
/* Supplied declaration required: FUN_002c2950. */
/* Supplied declaration required: FUN_002ce4e4. */
/* Supplied declaration required: FUN_002e0274. */
/* Supplied declaration required: FUN_002e29c0. */
extern int FUN_00316ce4(void);


void FUN_001abb98(void)

{
/* irregular: 6 goto(s); irregular input(s): in_fpscr; 14 native warning(s); review required */
  short temp_v0;
  char temp_v1;
  unsigned char temp_v2;
  char temp_v3;
  char temp_v4;
  unsigned int *puVar6;
  short temp_v5;
  unsigned int *puVar8;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  unsigned char *pbVar12;
  unsigned int temp_v9;
  unsigned int temp_v10;
  unsigned char *puVar15;
  unsigned int temp_v11;
  char *pcVar17;
  int *piVar18;
  int temp_v12;
  int temp_v13;
  int temp_v14;
  unsigned char *puVar22;
  unsigned int *puVar23;
  int *piVar24;
  int temp_v15;
  int *piVar26;
  unsigned char temp_v16;
  unsigned int in_fpscr;
  unsigned int temp_v17;
  unsigned int temp_v18;
  float temp_v19;
  float temp_v20;
  unsigned long long temp_v21;
  float temp_v22;
  int temp_v23 [12];
  unsigned char temp_v24 [64];
  int temp_v25;
  int temp_v26;
  int temp_v27;
  
  puVar8 = (unsigned int *)FUN_002c2950();
  temp_v23[7] = 1;
  temp_v6 = FUN_002c09f4(4);
  temp_v23[6] = 0;
  temp_v23[2] = (temp_v6 + 1U) & 0xff;
  temp_v23[3] = 0;
  temp_v6 = FUN_00285574();
  temp_v7 = FUN_00316ce4();
  if (!(temp_v7 == 1 && temp_v6 == 0)) {
    FUN_002852f0(0);
    DAT_004bd0d8 = 0;
    if (temp_v6 != 0) {
      temp_v7 = temp_v6 * 0x44;
      temp_v6 = *(int *)(temp_v6 * 0x44 + 0x447f40);
      *(unsigned char *)(puVar8 + 0x374) = *(unsigned char *)(temp_v7 + 0x447f46);
      *(unsigned char *)((int)puVar8 + 0xdd1) = *(unsigned char *)(temp_v7 + 0x447f47);
      FUN_002852f0(1);
      temp_v15 = 0;
      if (*(char *)((int)puVar8 + 0x791) != -1) {
        *(unsigned char *)((int)puVar8 + 0x791) = 0xff;
      }
      if ('\0' < *(char *)((int)puVar8 + 0xdd1)) {
        do {
          temp_v8 = 0;
          if ('\0' < *(char *)(puVar8 + 0x374)) {
            do {
              temp_v13 = temp_v15 * 0xf + temp_v8;
              if (*(char *)(temp_v6 + temp_v13) != '\x01') {
                *(unsigned char *)(puVar8 + temp_v15 * 0x1e + temp_v8 * 2 + 0xf) = 2;
              }
              else {
                *(unsigned char *)(puVar8 + temp_v15 * 0x1e + temp_v8 * 2 + 0xf) = 1;
              }
              temp_v1 = *(char *)(temp_v6 + temp_v13);
              if (temp_v1 != '\x02') {
                temp_v13 = temp_v8 * 8 + temp_v15 * 0x78;
                if (temp_v1 != '\x03') {
                  *(unsigned char *)((int)puVar8 + temp_v13 + 0x43) = 0;
                }
                else {
                  *(unsigned char *)((int)puVar8 + temp_v13 + 0x43) = 2;
                  *(char *)(puVar8 + 0x375) = *(char *)(puVar8 + 0x375) + '\x01';
                }
              }
              else {
                *(unsigned char *)((int)puVar8 + temp_v8 * 8 + temp_v15 * 0x78 + 0x43) = 1;
                *(char *)(puVar8 + 0x375) = *(char *)(puVar8 + 0x375) + '\x01';
              }
              temp_v8 = temp_v8 + 1;
            } while (temp_v8 < *(char *)(puVar8 + 0x374));
          }
          temp_v15 = temp_v15 + 1;
        } while (temp_v15 < *(char *)((int)puVar8 + 0xdd1));
      }
      temp_v15 = (int)*(char *)(temp_v7 + 0x447f4c);
      *(char *)(puVar8 + 0x373) = *(char *)(temp_v7 + 0x447f4c);
      temp_v1 = *(char *)(temp_v7 + 0x447f4d);
      *(char *)((int)puVar8 + 0xdcd) = temp_v1;
      temp_v6 = temp_v15;
      if (0 < temp_v15) {
        temp_v6 = (int)temp_v1;
      }
      *(unsigned char *)((int)puVar8 + 0xdce) = *(unsigned char *)(temp_v7 + 0x447f4e);
      *(unsigned char *)((int)puVar8 + 0xdcf) = *(unsigned char *)(temp_v7 + 0x447f4f);
      if (0 < temp_v6) {
        *(unsigned char *)((int)puVar8 + temp_v15 * 8 + temp_v1 * 0x78 + 0x3e) = 1;
      }
      *(unsigned char *)
       ((int)puVar8 +
       *(char *)((int)puVar8 + 0xdce) * 8 + *(char *)((int)puVar8 + 0xdcf) * 0x78 + 0x3f) = 1;
      if (*(short *)(temp_v7 + 0x447f50) != 0) {
        *(char *)((int)puVar8 + 0x3a) = (char)*(short *)(temp_v7 + 0x447f50);
        *(char *)((int)puVar8 + 0x3b) = (char)*(unsigned short *)(temp_v7 + 0x447f52);
      }
      DAT_0049f924 = (unsigned int)*(short *)(temp_v7 + 0x447f44);
      FUN_0028529c(DAT_0049f924 & 0xff,0,0,0,0,0);
    }
    else {
      temp_v1 = *(char *)((int)puVar8 + 0x791);
      if ('\0' < temp_v1) {
        *(char *)(puVar8 + 0x374) = temp_v1;
        *(char *)((int)puVar8 + 0xdd1) = temp_v1;
        FUN_002852f0(1);
      }
      *(unsigned char *)((int)puVar8 + 0x791) = 0xff;
      do {
        temp_v6 = FUN_002c09f4(0x17);
        if ((unsigned int)*(unsigned char *)(temp_v6 * 4 + 0x447ec0) == temp_v23[2]) {
          temp_v6 = FUN_002c09f4();
        }
        DAT_004bd0d4 = *(unsigned char *)(temp_v6 * 4 + 0x447ec0);
        temp_v6 = temp_v6 * 4;
        temp_v7 = 0;
        DAT_004bd0d5 = *(unsigned char *)(temp_v6 + 0x447ec1);
        temp_v15 = 0;
        DAT_004bd0d6 = *(unsigned char *)(temp_v6 + 0x447ec2);
        DAT_004bd0d7 = *(unsigned char *)(temp_v6 + 0x447ec3);
        do {
          temp_v8 = (int)*(char *)((int)puVar8 + 0xdd2);
          temp_v1 = (&DAT_004bd0d4)[temp_v7];
          temp_v13 = (int)*(char *)((int)puVar8 + 0xdd3);
          temp_v6 = FUN_002c2950();
          if (temp_v1 != '\x01') {
            if (temp_v1 != '\x02') {
              if (temp_v1 != '\x03') {
                if (temp_v1 == '\x04') {
                  temp_v10 = temp_v6 + temp_v13 * 0x78 + temp_v8 * 8;
                  temp_v16 = *(char *)(temp_v10 + 0xb4) == '\0';
                  if (temp_v16) {
                    temp_v10 = (unsigned int)*(unsigned char *)(temp_v10 + 300);
                  }
                  if (temp_v16 && temp_v10 == 0) {
                    temp_v15 = temp_v15 + 1;
                  }
                }
              }
              else {
                temp_v10 = temp_v6 + temp_v13 * 0x78 + temp_v8 * 8;
                temp_v16 = *(char *)(temp_v10 - 0x3c) == '\0';
                if (temp_v16) {
                  temp_v10 = (unsigned int)*(unsigned char *)(temp_v10 - 0xb4);
                }
                if (temp_v16 && temp_v10 == 0) {
                  temp_v15 = temp_v15 + 1;
                }
              }
            }
            else {
              temp_v10 = temp_v6 + temp_v13 * 0x78 + temp_v8 * 8;
              temp_v16 = *(char *)(temp_v10 + 0x44) == '\0';
              if (temp_v16) {
                temp_v10 = (unsigned int)*(unsigned char *)(temp_v10 + 0x4c);
              }
              if (temp_v16 && temp_v10 == 0) {
                temp_v15 = temp_v15 + 1;
              }
            }
          }
          else {
            temp_v10 = temp_v6 + temp_v13 * 0x78 + temp_v8 * 8;
            temp_v16 = *(char *)(temp_v10 + 0x34) == '\0';
            if (temp_v16) {
              temp_v10 = (unsigned int)*(unsigned char *)(temp_v10 + 0x2c);
            }
            if (temp_v16 && temp_v10 == 0) {
              temp_v15 = temp_v15 + 1;
            }
          }
          temp_v7 = temp_v7 + 1;
        } while (temp_v7 < 4);
        if (1 < temp_v15) {
          temp_v10 = FUN_002c09f4(99);
          if (temp_v10 < 0x3c) {
            temp_v23[6] = 1;
          }
          else {
            temp_v23[6] = 2;
          }
        }
        temp_v6 = 0;
        temp_v7 = 0;
        do {
          temp_v8 = (int)*(char *)((int)puVar8 + 0xdd2);
          temp_v1 = (&DAT_004bd0d4)[temp_v6];
          temp_v13 = (int)*(char *)((int)puVar8 + 0xdd3);
          temp_v15 = FUN_002c2950();
          if (temp_v1 != '\x01') {
            if (temp_v1 != '\x02') {
              if (temp_v1 != '\x03') {
                if (temp_v1 == '\x04') {
                  temp_v10 = temp_v15 + temp_v13 * 0x78 + temp_v8 * 8;
                  temp_v16 = *(char *)(temp_v10 + 0xb4) == '\0';
                  if (temp_v16) {
                    temp_v10 = (unsigned int)*(unsigned char *)(temp_v10 + 300);
                  }
                  if (temp_v16 && temp_v10 == 0) goto LAB_001abfec;
                }
              }
              else {
                temp_v10 = temp_v15 + temp_v13 * 0x78 + temp_v8 * 8;
                temp_v16 = *(char *)(temp_v10 - 0x3c) == '\0';
                if (temp_v16) {
                  temp_v10 = (unsigned int)*(unsigned char *)(temp_v10 - 0xb4);
                }
                if (temp_v16 && temp_v10 == 0) goto LAB_001abfec;
              }
            }
            else {
              temp_v10 = temp_v15 + temp_v13 * 0x78 + temp_v8 * 8;
              temp_v16 = *(char *)(temp_v10 + 0x44) == '\0';
              if (temp_v16) {
                temp_v10 = (unsigned int)*(unsigned char *)(temp_v10 + 0x4c);
              }
              if (temp_v16 && temp_v10 == 0) goto LAB_001abfec;
            }
          }
          else {
            temp_v10 = temp_v15 + temp_v13 * 0x78 + temp_v8 * 8;
            temp_v16 = *(char *)(temp_v10 + 0x34) == '\0';
            if (temp_v16) {
              temp_v10 = (unsigned int)*(unsigned char *)(temp_v10 + 0x2c);
            }
            if (temp_v16 && temp_v10 == 0) {
LAB_001abfec:
              temp_v4 = *(char *)((int)puVar8 + 0xdd2);
              temp_v15 = (int)temp_v4;
              temp_v3 = *(char *)((int)puVar8 + 0xdd3);
              temp_v8 = (int)temp_v3;
              temp_v1 = (&DAT_004bd0d4)[temp_v6];
              temp_v7 = FUN_002c2950();
              (&DAT_004bce8c)[DAT_004bd0d0 * 2] = temp_v4;
              (&DAT_004bce8d)[DAT_004bd0d0 * 2] = temp_v3;
              DAT_004bd0d0 = DAT_004bd0d0 + 1;
              if (temp_v1 != '\x01') {
                if (temp_v1 != '\x02') {
                  if (temp_v1 != '\x03') {
                    if (temp_v1 == '\x04') {
                      temp_v15 = temp_v7 + temp_v8 * 0x78 + temp_v15 * 8;
                      *(unsigned char *)(temp_v15 + 0x3c) = 2;
                      *(unsigned char *)(temp_v15 + 0xb4) = 2;
                      *(unsigned char *)(temp_v15 + 300) = 2;
                      *(char *)(temp_v7 + 0xdd2) = temp_v4;
                      *(char *)(temp_v7 + 0xdd3) = temp_v3 + '\x02';
                    }
                  }
                  else {
                    temp_v15 = temp_v7 + temp_v8 * 0x78 + temp_v15 * 8;
                    *(unsigned char *)(temp_v15 + 0x3c) = 2;
                    *(unsigned char *)(temp_v15 - 0x3c) = 2;
                    *(unsigned char *)(temp_v15 - 0xb4) = 2;
                    *(char *)(temp_v7 + 0xdd2) = temp_v4;
                    *(char *)(temp_v7 + 0xdd3) = temp_v3 - '\x02';
                  }
                }
                else {
                  temp_v15 = temp_v7 + temp_v8 * 0x78 + temp_v15 * 8;
                  *(unsigned char *)(temp_v15 + 0x3c) = 2;
                  *(unsigned char *)(temp_v15 + 0x44) = 2;
                  *(unsigned char *)(temp_v15 + 0x4c) = 2;
                  *(char *)(temp_v7 + 0xdd2) = temp_v4 + '\x02';
                  *(char *)(temp_v7 + 0xdd3) = temp_v3;
                }
              }
              else {
                temp_v15 = temp_v7 + temp_v8 * 0x78 + temp_v15 * 8;
                *(unsigned char *)(temp_v15 + 0x3c) = 2;
                *(unsigned char *)(temp_v15 + 0x34) = 2;
                *(unsigned char *)(temp_v15 + 0x2c) = 2;
                *(char *)(temp_v7 + 0xdd2) = temp_v4 - '\x02';
                *(char *)(temp_v7 + 0xdd3) = temp_v3;
              }
              temp_v23[6] = temp_v23[6] - 1;
              temp_v7 = 1;
              temp_v23[3] = 1;
              temp_v23[2] = (int)(unsigned char)(&DAT_004bd0d4)[temp_v6];
              if (temp_v23[6] < 1) goto LAB_001ac248;
              *(unsigned char *)(DAT_004bd0d0 * 2 + 0x4bce8a) = *(unsigned char *)((int)puVar8 + 0xdd2);
              *(unsigned char *)(DAT_004bd0d0 * 2 + 0x4bce8b) = *(unsigned char *)((int)puVar8 + 0xdd3);
              *(char *)((int)puVar8 + 0xdd2) = temp_v4;
              *(char *)((int)puVar8 + 0xdd3) = temp_v3;
            }
          }
          temp_v6 = temp_v6 + 1;
        } while (temp_v6 < 4);
        if (temp_v7 == 0) {
          if (temp_v23[3] != 0) {
            temp_v1 = *(char *)((int)puVar8 + 0xdd3);
            if (DAT_004bd0d8 < 0x10) {
              (&DAT_004bcf8c)[DAT_004bd0d8 * 3] = (int)*(char *)((int)puVar8 + 0xdd2);
              (&DAT_004bcf90)[DAT_004bd0d8 * 3] = (unsigned int *)(int)temp_v1;
              *(unsigned int *)(DAT_004bd0d8 * 0xc + 0x4bcf94) = 0;
              DAT_004bd0d8 = DAT_004bd0d8 + 1;
            }
            temp_v23[3] = 0;
          }
          if (DAT_004bd0d0 == 0) break;
          temp_v6 = FUN_002c2950();
          temp_v7 = FUN_002c09f4((DAT_004bd0d0 - 1U) & 0xffff);
          temp_v8 = 0;
          temp_v13 = DAT_004bd0d0 - 1;
          temp_v15 = 0;
          DAT_004bd0d0 = temp_v13;
          *(unsigned char *)(temp_v6 + 0xdd2) = (&DAT_004bce8c)[temp_v7 * 2];
          *(unsigned char *)(temp_v6 + 0xdd3) = (&DAT_004bce8d)[temp_v7 * 2];
          if (0 < temp_v13) {
            do {
              if (temp_v15 == temp_v7) {
                temp_v8 = temp_v8 + 1;
              }
              temp_v6 = temp_v15 * 2;
              temp_v13 = temp_v8 * 2;
              temp_v15 = temp_v15 + 1;
              temp_v8 = temp_v8 + 1;
              *(unsigned short *)(&DAT_004bce8c + temp_v6) = *(unsigned short *)(&DAT_004bce8c + temp_v13);
            } while (temp_v15 < DAT_004bd0d0);
          }
        }
LAB_001ac248:;
      } while (temp_v23[7] != 0);
      temp_v6 = 0;
      if ('\0' < *(char *)((int)puVar8 + 0xdd1)) {
        do {
          temp_v7 = (int)*(char *)(puVar8 + 0x374);
          if (0 < temp_v7) {
            temp_v15 = 0;
            do {
              temp_v1 = *(char *)(puVar8 + temp_v6 * 0x1e + temp_v15 * 2 + 0xf);
              *(unsigned char *)((int)puVar8 + temp_v15 * 8 + temp_v6 * 0x78 + 0x43) = 0;
              if (temp_v1 == '\0') {
                *(unsigned char *)(puVar8 + temp_v6 * 0x1e + temp_v15 * 2 + 0xf) = 1;
              }
              temp_v7 = temp_v7 - 1;
              temp_v15 = temp_v15 + 1;
            } while (temp_v7 != 0);
          }
          temp_v6 = temp_v6 + 1;
        } while (temp_v6 < *(char *)((int)puVar8 + 0xdd1));
      }
      temp_v15 = FUN_002c2950();
      *(unsigned char *)(temp_v15 + 0xdd5) = 0;
      *(unsigned char *)(temp_v15 + 0xdd6) = 0;
      *(unsigned char *)(temp_v15 + 0xdd7) = 0;
      puVar6 = DAT_004bcf90;
      temp_v6 = DAT_004bcf8c;
      temp_v8 = 0;
      puVar22 = (unsigned char *)0x0;
      temp_v7 = 0;
      puVar23 = (unsigned int *)0x0;
      if (1 < DAT_004bd0d8) {
        temp_v7 = DAT_004bd0d8 - 1;
        if (0 < temp_v7) {
          piVar24 = (int *)0x4bcf98;
          piVar18 = (int *)0x4bcf9c;
          piVar26 = (int *)0x4bcfa0;
          do {
            temp_v8 = *piVar24;
            piVar24 = piVar24 + 3;
            temp_v8 = temp_v6 - temp_v8;
            temp_v13 = (int)puVar6 - *piVar18;
            if (temp_v8 < 0) {
              temp_v8 = -temp_v8;
            }
            if (temp_v13 < 0) {
              temp_v13 = -temp_v13;
            }
            temp_v7 = temp_v7 - 1;
            piVar18 = piVar18 + 3;
            *piVar26 = temp_v8 + temp_v13;
            piVar26 = piVar26 + 3;
          } while (temp_v7 != 0);
        }
        temp_v7 = 1;
        if (1 < DAT_004bd0d8 - 1) {
          do {
            temp_v8 = temp_v7 + 1;
            if (temp_v8 < DAT_004bd0d8) {
              do {
                temp_v13 = *(int *)(temp_v7 * 0xc + 0x4bcf94);
                temp_v14 = *(int *)(temp_v8 * 0xc + 0x4bcf94);
                if (temp_v14 < temp_v13) {
                  temp_v17 = (&DAT_004bcf8c)[temp_v7 * 3];
                  puVar8 = (unsigned int *)(&DAT_004bcf8c + temp_v7 * 3);
                  temp_v18 = (unsigned int)(&DAT_004bcf90)[temp_v8 * 3];
                  temp_v9 = (unsigned int)(&DAT_004bcf90)[temp_v7 * 3];
                  *puVar8 = (&DAT_004bcf8c)[temp_v8 * 3];
                  (&DAT_004bcf90)[temp_v7 * 3] = (unsigned int *)temp_v18;
                  *(int *)(temp_v7 * 0xc + 0x4bcf94) = temp_v14;
                  (&DAT_004bcf8c)[temp_v8 * 3] = temp_v17;
                  (&DAT_004bcf90)[temp_v8 * 3] = (unsigned int *)temp_v9;
                  *(int *)(temp_v8 * 0xc + 0x4bcf94) = temp_v13;
                }
                temp_v8 = temp_v8 + 1;
              } while (temp_v8 < DAT_004bd0d8);
            }
            temp_v7 = temp_v7 + 1;
          } while (temp_v7 < DAT_004bd0d8 - 1);
        }
        if (DAT_004bd0d8 / 2 >= 2) {
          temp_v7 = FUN_002c09f4((DAT_004bd0d8 / 2 - 1U) & 0xffff);
          temp_v7 = (DAT_004bd0d8 - temp_v7) - 1;
          if (*(int *)(temp_v7 * 0xc + 0x4bcf94) < 5) {
            temp_v7 = DAT_004bd0d8 - 1;
          }
        }
        else {
          temp_v7 = DAT_004bd0d8 - 1;
        }
        temp_v8 = (&DAT_004bcf8c)[temp_v7 * 3];
        puVar22 = (unsigned char *)(&DAT_004bcf90)[temp_v7 * 3];
        *(char *)(temp_v15 + 0xdcc) = (char)temp_v6;
        *(char *)(temp_v15 + 0xdcd) = (char)(int)puVar6;
        *(char *)(temp_v15 + 0xdce) = (char)temp_v8;
        *(char *)(temp_v15 + 0xdcf) = (char)(int)puVar22;
        *(unsigned char *)(temp_v15 + (int)puVar6 * 0x78 + temp_v6 * 8 + 0x3e) = 1;
        *(unsigned char *)(temp_v15 + (int)puVar22 * 0x78 + temp_v8 * 8 + 0x3f) = 1;
        temp_v7 = temp_v6;
        puVar23 = puVar6;
      }
      if (2 < DAT_004bd0d8) {
        temp_v6 = FUN_002c09f4((DAT_004bd0d8 - 3U) & 0xffff);
        temp_v14 = 0;
        temp_v13 = 0;
        if (0 < DAT_004bd0d8) {
          do {
            puVar15 = &DAT_004bce8c + temp_v13 * 0xc;
            temp_v12 = (&DAT_004bcf8c)[temp_v13 * 3];
            if (temp_v12 == temp_v7) {
              puVar8 = (&DAT_004bcf90)[temp_v13 * 3];
            }
            if (temp_v12 != temp_v7 || puVar8 != puVar23) {
              if (temp_v12 == temp_v8) {
                puVar15 = (unsigned char *)(&DAT_004bcf90)[temp_v13 * 3];
              }
              if (temp_v12 != temp_v8 || puVar15 != puVar22) {
                if (temp_v6 == temp_v14) {
                  if (temp_v13 != -1) {
                    *(unsigned char *)(temp_v15 + 0xdd5) = 1;
                    *(char *)(temp_v15 + 0xdd6) = (char)(&DAT_004bcf8c)[temp_v13 * 3];
                    *(char *)(temp_v15 + 0xdd7) = (char)(int)(&DAT_004bcf90)[temp_v13 * 3];
                    temp_v6 = FUN_002c09d0(0x648);
                    if (temp_v6 != 0) {
                      temp_v5 = FUN_002c09f4(4);
                      *(short *)(temp_v15 + 0xdb0) = temp_v5 + 0x1c2;
                    }
                    else {
                      temp_v6 = FUN_002c09d0(0x6d2);
                      if (temp_v6 != 0) {
                        temp_v5 = FUN_002c09f4(3);
                        *(short *)(temp_v15 + 0xdb0) = temp_v5 + 0x1c2;
                      }
                      else {
                        temp_v5 = FUN_002c09f4(2);
                        *(short *)(temp_v15 + 0xdb0) = temp_v5 + 0x1c2;
                      }
                    }
                  }
                  break;
                }
                temp_v14 = temp_v14 + 1;
              }
            }
            temp_v13 = temp_v13 + 1;
          } while (temp_v13 < DAT_004bd0d8);
        }
      }
    }
    temp_v6 = FUN_002c2950();
    temp_v7 = 1;
    if (1 < *(char *)(temp_v6 + 0xdd1) - 1) {
      do {
        temp_v15 = 1;
        if (1 < *(char *)(temp_v6 + 0xdd0) - 1) {
          do {
            temp_v8 = temp_v6 + temp_v7 * 0x78 + temp_v15 * 8;
            if (*(char *)(temp_v8 + 0x3c) != '\x02') {
              *(unsigned char *)(temp_v8 + 0x41) = 0;
            }
            else {
              temp_v10 = (unsigned int)(*(char *)(temp_v8 + 0x34) == '\x01');
              if (*(char *)(temp_v8 + 0x44) == '\x01') {
                temp_v10 = temp_v10 | 2;
              }
              if (*(char *)(temp_v8 - 0x3c) == '\x01') {
                temp_v10 = temp_v10 | 4;
              }
              if (*(char *)(temp_v8 + 0xb4) == '\x01') {
                temp_v10 = temp_v10 | 8;
              }
              *(unsigned char *)(temp_v8 + 0x41) = *(unsigned char *)(temp_v10 + 0x447f20);
              *(unsigned char *)(temp_v8 + 0x40) = *(unsigned char *)(temp_v10 + 0x447f30);
            }
            temp_v15 = temp_v15 + 1;
          } while (temp_v15 < *(char *)(temp_v6 + 0xdd0) - 1);
        }
        temp_v7 = temp_v7 + 1;
      } while (temp_v7 < *(char *)(temp_v6 + 0xdd1) - 1);
    }
    FUN_0028527c(1);
  }
  temp_v6 = FUN_002c2950();
  temp_v25 = temp_v6 + 0xd00;
  temp_v10 = 0;
  do {
    temp_v7 = 0;
    temp_v8 = 1;
    temp_v15 = *(char *)(temp_v6 + 0xdd1) - 1;
    if (1 < temp_v15) {
      temp_v13 = *(char *)(temp_v6 + 0xdd0) - 2;
      do {
        if (0 < temp_v13) {
          pbVar12 = (unsigned char *)(temp_v6 + temp_v8 * 0x78 + 0x49);
          temp_v14 = temp_v13;
          do {
            temp_v2 = *pbVar12;
            pbVar12 = pbVar12 + 8;
            if (temp_v10 == temp_v2 >> 4) {
              temp_v7 = temp_v7 + 1;
            }
            temp_v14 = temp_v14 - 1;
          } while (temp_v14 != 0);
        }
        temp_v8 = temp_v8 + 1;
      } while (temp_v8 < temp_v15);
    }
    temp_v11 = temp_v10 + 1;
    (&DAT_004bd0e0)[temp_v10] = temp_v7;
    temp_v10 = temp_v11;
  } while ((int)temp_v11 < 5);
  temp_v7 = 0;
  temp_v27 = 1;
  temp_v21 = 0x43fa0000437a0000;
  temp_v15 = 0;
  temp_v23[8] = 0;
  temp_v23[9] = 0;
  temp_v23[10] = 0;
  if (1 < *(char *)(temp_v6 + 0xdd1) - 1) {
    do {
      temp_v26 = 1;
      if (1 < *(char *)(temp_v25 + 0xd0) - 1) {
        do {
          temp_v8 = 0;
          do {
            VectorSignedToFloat(temp_v26,(unsigned char)(in_fpscr >> 0x16) & 3);
            VectorSignedToFloat(temp_v27,(unsigned char)(in_fpscr >> 0x16) & 3);
            FUN_002e29c0();
            temp_v23[0] = 0;
            temp_v13 = 0;
            temp_v23[1] = 0;
            temp_v23[2] = 0;
            temp_v23[3] = 0;
            temp_v23[4] = 0;
            temp_v23[5] = 0;
            temp_v1 = *(char *)(temp_v25 + 0xd1);
            if (0 < temp_v1) {
              temp_v4 = *(char *)(temp_v25 + 0xd0);
              do {
                if (0 < temp_v4) {
                  temp_v14 = temp_v6 + temp_v13 * 0x78;
                  pcVar17 = (char *)(temp_v14 + 0x42);
                  pbVar12 = (unsigned char *)(temp_v14 + 0x41);
                  temp_v14 = (int)temp_v4;
                  do {
                    if (*pcVar17 == '\x01') {
                      temp_v23[*pbVar12 >> 4] = temp_v23[*pbVar12 >> 4] + 1;
                    }
                    temp_v14 = temp_v14 - 1;
                    pcVar17 = pcVar17 + 8;
                    pbVar12 = pbVar12 + 8;
                  } while (temp_v14 != 0);
                }
                temp_v13 = temp_v13 + 1;
              } while (temp_v13 < temp_v1);
            }
            temp_v8 = temp_v8 + 1;
            if (temp_v7 <= temp_v23[0]) {
              temp_v7 = temp_v23[0];
            }
            if (temp_v15 <= temp_v23[1]) {
              temp_v15 = temp_v23[1];
            }
            temp_v10 = temp_v23[2];
            if (temp_v23[2] < temp_v23[8]) {
              temp_v10 = temp_v23[8];
            }
            if (temp_v23[9] <= temp_v23[3]) {
              temp_v23[9] = temp_v23[3];
            }
            if (temp_v23[10] <= temp_v23[4]) {
              temp_v23[10] = temp_v23[4];
            }
            temp_v23[8] = temp_v10;
          } while (temp_v8 < 8);
          temp_v26 = temp_v26 + 1;
        } while (temp_v26 < *(char *)(temp_v25 + 0xd0) - 1);
      }
      temp_v27 = temp_v27 + 1;
    } while (temp_v27 < *(char *)(temp_v25 + 0xd1) - 1);
  }
  DAT_004bd0f4 = 2;
  DAT_004bd0e8 = temp_v23[8];
  DAT_004bd0ec = temp_v23[9];
  DAT_004bd0f0 = temp_v23[10];
  temp_v6 = 0;
  DAT_004bd0e0 = temp_v7;
  DAT_004bd0e4 = temp_v15;
  if (0 < *(char *)(temp_v25 + 0xd4)) {
    DAT_004bd0f4 = *(char *)(temp_v25 + 0xd4) + 2;
  }
  do {
    temp_v7 = temp_v6 * 4;
    if (0 < (&DAT_004bd0e0)[temp_v6]) {
      temp_v15 = FUN_00285574();
      if (temp_v15 != 0) {
        FUN_002be624(temp_v24,&LAB_001aca08,temp_v6 + 1);
      }
      else {
        FUN_002be624(temp_v24,&LAB_001acdc0,temp_v6 + 1);
      }
      if (!((temp_v6 == 1 || temp_v6 == 2) || temp_v6 == 3)) {
        puVar22 = temp_v24;
        if (temp_v6 != 4) {
          asdMdlManagerCreateLoaded(puVar22,7);
          *(unsigned char **)(temp_v7 + 0x4bd0f8) = puVar22;
        }
        else {
          asdMdlManagerCreateLoaded(puVar22,7);
          puRam004bd108 = puVar22;
        }
      }
      else {
        puVar22 = temp_v24;
        asdMdlManagerCreateLoaded(puVar22,0x38);
        *(unsigned char **)(temp_v7 + 0x4bd0f8) = puVar22;
      }
      FUN_002a0428(*(unsigned int *)(temp_v7 + 0x4bd0f8),1);
      temp_v15 = 0;
      if (0 < (&DAT_004bd0e0)[temp_v6]) {
        do {
          *(unsigned int *)(temp_v6 * 0x100 + 0x4bd110) = *(unsigned int *)(temp_v7 + 0x4bd0f8);
          while( 1 ) {
            temp_v15 = temp_v15 + 1;
            if ((&DAT_004bd0e0)[temp_v6] <= temp_v15) goto LAB_001aca98;
            if (temp_v15 == 0) break;
            temp_v9 = asdMdlManagerClone(*(unsigned int *)(temp_v7 + 0x4bd0f8),1);
            *(unsigned int *)(temp_v6 * 0x100 + temp_v15 * 4 + 0x4bd110) = temp_v9;
            FUN_002a0428(temp_v9,1);
          }
        } while( 1 );
      }
    }
LAB_001aca98:
    temp_v6 = temp_v6 + 1;
    if (5 < temp_v6) {
      FUN_002ce4e4();
      FUN_002849a4(0);
      temp_v6 = FUN_002c2950();
      if (*(char *)(temp_v6 + 0xdd5) != '\0') {
        temp_v15 = *(char *)(temp_v6 + 0xdd7) * 500 + 0xfa;
        temp_v7 = *(char *)(temp_v6 + 0xdd6) * 500 + 0xfa;
        VectorSignedToFloat(temp_v15,(unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat(temp_v7,(unsigned char)(in_fpscr >> 0x16) & 3);
        FUN_002e0274((int)*(short *)(temp_v6 + 0xdb0),temp_v7,temp_v15);
        FUN_00284838();
      }
      temp_v6 = FUN_002c2950();
      temp_v7 = FUN_00285574();
      if (temp_v7 != 8) {
        DAT_004bd0cc = 0;
        temp_v23[7] = 0;
        temp_v7 = temp_v6;
        do {
          temp_v15 = 1;
          if (1 < *(char *)(temp_v6 + 0xdd1) - 1) {
            do {
              temp_v8 = 1;
              if (1 < *(char *)(temp_v6 + 0xdd0) - 1) {
                temp_v13 = temp_v7 + temp_v15 * 0x78;
                do {
                  temp_v14 = temp_v13 + temp_v8 * 8;
                  temp_v16 = *(char *)(temp_v14 + 0x3e) != '\x01';
                  temp_v1 = '\x01';
                  if (temp_v16) {
                    temp_v1 = *(char *)(temp_v14 + 0x3f);
                  }
                  if (((temp_v16 && temp_v1 != '\x01') && (*(char *)(temp_v14 + 0x3c) == '\x02')) &&
                     (temp_v10 = FUN_002c09f4(100), temp_v10 < 0x28)) {
                    temp_v19 = (float)VectorSignedToFloat(temp_v8,(unsigned char)(in_fpscr >> 0x16) & 3);
                    temp_v20 = (float)VectorSignedToFloat(temp_v15,(unsigned char)(in_fpscr >> 0x16) & 3);
                    temp_v14 = DAT_004bd0cc * 8;
                    (&DAT_004bd04c)[temp_v14] = 0x18;
                    *(unsigned char *)(temp_v14 + 0x4bd04d) = 0;
                    temp_v22 = (float)((unsigned long long)temp_v21 >> 0x20);
                    temp_v5 = (short)(int)((float)temp_v21 + temp_v19 * temp_v22);
                    *(short *)(temp_v14 + 0x4bd04e) = temp_v5;
                    temp_v0 = (short)(int)((float)temp_v21 + temp_v20 * temp_v22);
                    *(unsigned short *)(temp_v14 + 0x4bd050) = 0;
                    *(short *)(temp_v14 + 0x4bd052) = temp_v0;
                    temp_v14 = 0;
                    if (0 < DAT_004bd0cc) {
                      do {
                        temp_v12 = temp_v14 * 8;
                        puVar22 = &DAT_004bd04c + temp_v12;
                        temp_v16 = *(short *)(temp_v12 + 0x4bd04e) == temp_v5;
                        if (temp_v16) {
                          puVar22 = (unsigned char *)(int)*(short *)(temp_v12 + 0x4bd052);
                        }
                        if (temp_v16 && puVar22 == (unsigned char *)(int)temp_v0) goto LAB_001acd64;
                        temp_v14 = temp_v14 + 1;
                      } while (temp_v14 < DAT_004bd0cc);
                    }
                    DAT_004bd0cc = DAT_004bd0cc + 1;
                    if (0xf < DAT_004bd0cc) {
                      DAT_004bd0dc = 1;
                      return;
                    }
                  }
LAB_001acd64:
                  temp_v8 = temp_v8 + 2;
                } while (temp_v8 < *(char *)(temp_v6 + 0xdd0) - 1);
              }
              temp_v15 = temp_v15 + 2;
            } while (temp_v15 < *(char *)(temp_v6 + 0xdd1) - 1);
          }
        } while ((DAT_004bd0cc < 5) && (temp_v23[7] = temp_v23[7] + 1, temp_v23[7] < 3));
      }
      else {
        DAT_004bd0cc = 0;
        temp_v15 = 1;
        temp_v7 = temp_v6;
        if (1 < *(char *)(temp_v6 + 0xdd1) - 1) {
          do {
            temp_v8 = 2;
            if (2 < *(char *)(temp_v6 + 0xdd0) - 1) {
              temp_v13 = temp_v7 + temp_v15 * 0x78;
              do {
                temp_v14 = temp_v13 + temp_v8 * 8;
                temp_v16 = *(char *)(temp_v14 + 0x3e) != '\x01';
                temp_v1 = '\x01';
                if (temp_v16) {
                  temp_v1 = *(char *)(temp_v14 + 0x3f);
                }
                if (((temp_v16 && temp_v1 != '\x01') && (*(char *)(temp_v14 + 0x3c) == '\x02')) &&
                   (temp_v10 = FUN_002c09f4(100), temp_v10 < 0x28)) {
                  temp_v19 = (float)VectorSignedToFloat(temp_v8,(unsigned char)(in_fpscr >> 0x16) & 3);
                  temp_v20 = (float)VectorSignedToFloat(temp_v15,(unsigned char)(in_fpscr >> 0x16) & 3);
                  temp_v14 = DAT_004bd0cc * 8;
                  (&DAT_004bd04c)[temp_v14] = 0x18;
                  *(unsigned char *)(temp_v14 + 0x4bd04d) = 0;
                  temp_v22 = (float)((unsigned long long)temp_v21 >> 0x20);
                  *(short *)(temp_v14 + 0x4bd04e) = (short)(int)((float)temp_v21 + temp_v19 * temp_v22);
                  *(unsigned short *)(temp_v14 + 0x4bd050) = 0;
                  *(short *)(temp_v14 + 0x4bd052) = (short)(int)((float)temp_v21 + temp_v20 * temp_v22);
                  DAT_004bd0cc = DAT_004bd0cc + 1;
                  if (0xf < DAT_004bd0cc) {
                    DAT_004bd0dc = 1;
                    return;
                  }
                }
                temp_v8 = temp_v8 + 2;
              } while (temp_v8 < *(char *)(temp_v6 + 0xdd0) - 1);
            }
            temp_v15 = temp_v15 + 2;
          } while (temp_v15 < *(char *)(temp_v6 + 0xdd1) - 1);
        }
      }
      DAT_004bd0dc = 1;
      return;
    }
  } while( 1 );
}

} /* extern "C" */
