/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a321c` (_code @ 0x1a321c, 0x3b10 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of void: 19 slot(s), 76 byte(s) */
typedef struct {
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned int spA8; /* 0xa8: local_a8 */
    unsigned int spAC; /* 0xac: local_ac */
    unsigned int spB0; /* 0xb0: local_b0 */
    unsigned int spB4; /* 0xb4: local_b4 */
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
} void_stack;

extern unsigned char LAB_001a35ec; /* 0x1a35ec */
extern unsigned char LAB_001a35fc; /* 0x1a35fc */
extern unsigned char LAB_001a3604; /* 0x1a3604 */
extern unsigned char LAB_001a360c; /* 0x1a360c */
extern unsigned char LAB_001a3614; /* 0x1a3614 */
extern unsigned char LAB_001a43d4; /* 0x1a43d4 */
extern unsigned char LAB_001a43e0; /* 0x1a43e0 */
extern unsigned char LAB_001a43e4; /* 0x1a43e4 */
extern unsigned char LAB_001a43f4; /* 0x1a43f4 */
extern unsigned char LAB_001a48a0; /* 0x1a48a0 */
extern unsigned char LAB_001a48a4; /* 0x1a48a4 */
extern unsigned char LAB_001a48ac; /* 0x1a48ac */
extern unsigned char LAB_001a48b0; /* 0x1a48b0 */
extern unsigned char LAB_001a4c74; /* 0x1a4c74 */
extern unsigned char LAB_001a4c78; /* 0x1a4c78 */
extern unsigned char LAB_001a500c; /* 0x1a500c */
extern unsigned char LAB_001a5010; /* 0x1a5010 */
extern unsigned char LAB_001a5514; /* 0x1a5514 */
extern unsigned char LAB_001a5518; /* 0x1a5518 */
extern unsigned char LAB_001a551c; /* 0x1a551c */
extern unsigned char LAB_001a6434; /* 0x1a6434 */
extern unsigned char LAB_001a6438; /* 0x1a6438 */
extern unsigned char LAB_001a6444; /* 0x1a6444 */
extern unsigned char LAB_001a6450; /* 0x1a6450 */
extern unsigned char LAB_001a6d40; /* 0x1a6d40 */
extern int DAT_0044e144; /* 0x44e144 */
extern int DAT_0044ea00; /* 0x44ea00 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_001b0b98. */
/* Supplied declaration required: FUN_001ee4e4. */
/* Supplied declaration required: FUN_00288790. */
/* Supplied declaration required: FUN_00288844. */
/* Supplied declaration required: FUN_0028886c. */
/* Supplied declaration required: FUN_002888a8. */
extern int FUN_00288da8(int, int);
extern unsigned int FUN_00288ddc(int, int);
/* Supplied declaration required: FUN_00288e68. */
/* Supplied declaration required: FUN_00288ef0. */
/* Supplied declaration required: FUN_00293ac0. */
extern int FUN_0029e9cc(unsigned short);
/* Supplied declaration required: FUN_002b0750. */
/* Supplied declaration required: FUN_002b64b8. */
/* Supplied declaration required: FUN_002b659c. */
/* Supplied declaration required: FUN_002b6c34. */
/* Supplied declaration required: FUN_002b6dd8. */
/* Supplied declaration required: FUN_002b9024. */
/* Supplied declaration required: FUN_002ba12c. */
extern unsigned int FUN_002bce00(unsigned int);
extern unsigned int FUN_002bce30(unsigned short, unsigned int);
extern unsigned int FUN_002bd068(unsigned short);
extern unsigned int FUN_002bd1fc(void);
/* Supplied declaration required: FUN_002bdf94. */
/* Supplied declaration required: FUN_002be304. */
/* Supplied declaration required: FUN_002be370. */
/* Supplied declaration required: FUN_002be5a4. */
/* Supplied declaration required: FUN_002be624. */
extern int FUN_002be650(short, unsigned int);
/* Supplied declaration required: FUN_002be90c. */
/* Supplied declaration required: FUN_002bed3c. */
extern int FUN_002bed98(int);
extern int FUN_002beda4(int);
/* Supplied declaration required: FUN_002bf288. */
/* Supplied declaration required: FUN_002bf380. */
/* Supplied declaration required: FUN_002bf4f8. */
/* Supplied declaration required: FUN_002bf538. */
/* Supplied declaration required: FUN_002c09bc. */
extern int FUN_002c09d0(unsigned int);
/* Supplied declaration required: FUN_002c18e4. */
/* Supplied declaration required: FUN_002c198c. */
/* Supplied declaration required: FUN_002c39a4. */
extern int FUN_002c5d80(unsigned int, unsigned int);
extern int FUN_002c5da8(unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002d8514. */
/* Supplied declaration required: FUN_0033d3f8. */
extern int aeabi_idivmod(int, unsigned int);


unsigned char FUN_001a321c(void)

{
/* irregular: 5 goto(s); irregular input(s): in_fpscr; 35 native warning(s); review required */
  char temp_v0;
  unsigned char temp_v1;
  short temp_v2;
  short temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned char *puVar8;
  unsigned int temp_v7;
  short *psVar10;
  short *psVar11;
  int temp_v8;
  int temp_v9;
  int temp_v10;
  int temp_v11;
  int *piVar16;
  unsigned short *puVar17;
  unsigned int *puVar18;
  short temp_v12;
  int temp_v13;
  char *pcVar21;
  unsigned short *puVar22;
  unsigned short temp_v14;
  short *psVar24;
  unsigned char temp_v15;
  unsigned int in_fpscr;
  float temp_v16;
  float temp_v17;
  unsigned long long temp_v18;
  unsigned long long temp_v19;
  float temp_v20;
  unsigned int temp_v21;
  short *temp_v22;
  short *temp_v23;
  short *temp_v24;
  float temp_v25;
  unsigned int temp_v26;
  int temp_v27;
  short *temp_v28;
  short *temp_v29;
  float temp_v30;
  int temp_v31;
  int temp_v32;
  short *temp_v33;
  int temp_v34;
  unsigned char temp_v35 [64];
  int temp_v36;
  int *temp_v37;
  char *temp_v38;
  
  temp_v4 = DAT_0044e144;
  temp_v34 = DAT_0044e144;
  temp_v13 = 0;
  temp_v28 = (short *)0x0;
  temp_v30 = 0.0f;
  if (*(char *)(DAT_0044e144 + 0x1e61) == '\0') {
    return 0;
  }
  FUN_002c39a4(DAT_0044ea00);
  temp_v6 = DAT_0044ea00;
  temp_v5 = FUN_002c5d80(1,0);
  piVar16 = (int *)(temp_v6 + 0x124c);
  temp_v9 = *piVar16;
  temp_v10 = piVar16[temp_v9 + 2];
  *piVar16 = temp_v9 + 1;
  piVar16[temp_v9 + 3] = temp_v5;
  if (*(char *)(temp_v6 + 0x1264) != '\0' || temp_v10 != temp_v5) {
    (**(romwright_code **)(temp_v6 + 0x1268))();
    *(unsigned char *)(temp_v6 + 0x1264) = 0;
  }
  temp_v38 = (char *)(temp_v34 + 0x1e67);
  temp_v18 = 0;
  if (*temp_v38 != '\x03' && *temp_v38 != '\t') {
    FUN_00288ef0(&temp_v28,&temp_v30,9);
    FUN_002bf538();
    FUN_002bf288(2,0x1a,0,temp_v28,temp_v30,0x81);
    FUN_002bf538();
    FUN_00288ef0(&temp_v28,&temp_v30,7);
    FUN_002bf538();
    FUN_002bf288(2,0x1a,1,temp_v28,temp_v30,0x81);
    temp_v6 = temp_v34;
    if (-1 < *(char *)(temp_v34 + 0x12ef)) {
      FUN_002bf288(2,0x1a,0xb5,temp_v28,temp_v30,0x81);
      FUN_00288ef0(&temp_v28,&temp_v30,8);
      if (*(char *)(temp_v6 + 0x12f4) != '\0') {
        FUN_002bf288(2,0x1a,0xb6,temp_v28,temp_v30,0x83);
        FUN_002bf288(2,0x1a,0xb7,temp_v28,temp_v30,0x83);
      }
      if (*(char *)(temp_v6 + 0x12ef) == '\0') {
        FUN_002be624(temp_v35,&LAB_001a35ec);
      }
      if (*(char *)(temp_v6 + 0x12ef) == '\x01') {
        FUN_002be624(temp_v35,&LAB_001a35fc);
      }
      if (*(char *)(temp_v6 + 0x12ef) == '\x02') {
        FUN_002be624(temp_v35,&LAB_001a3604);
      }
      if (*(char *)(temp_v6 + 0x12ef) == '\x03') {
        FUN_002be624(temp_v35,&LAB_001a360c);
      }
      if (*(char *)(temp_v6 + 0x12ef) == '\x04') {
        FUN_002be624(temp_v35,&LAB_001a3614);
      }
      temp_v6 = FUN_002bf4f8(0x1a,0xba);
      puVar8 = temp_v35;
      FUN_002b6dd8(puVar8,2);
      VectorSignedToFloat((unsigned char *)
                          ((int)temp_v28 +
                          (int)*(short *)(temp_v6 + 8) +
                          ((int)**(short **)(temp_v6 + 0xc) - (int)puVar8) / 2),
                          (unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat((int)temp_v30 + (int)*(short *)(temp_v6 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_002be5a4(2,0xff,temp_v35,temp_v28);
    }
    FUN_002bf538();
    FUN_00288ef0(&temp_v28,&temp_v30,8);
    FUN_002bf538();
    FUN_002bf288(2,0x1a,2,temp_v28,temp_v30,0x81);
  }
  temp_v17 = (float)temp_v18;
  if ((*(char *)(temp_v4 + 0x1e60) != '\0') && (psVar24 = (short *)(temp_v34 + 0x1300), *psVar24 != 0)
     ) {
    temp_v6 = FUN_00293ac0();
    temp_v17 = (float)temp_v18;
    if (temp_v6 >= 2) {
      FUN_00288ef0(&temp_v28,&temp_v30,8);
      FUN_002bf538();
      FUN_002bf288(2,0x1a,3,temp_v28,temp_v30,0x81);
      FUN_002bf288(2,0x1a,4,temp_v28,temp_v30,0x81);
      FUN_002bf288(2,0x1a,5,temp_v28,temp_v30,0x81);
      FUN_002bf288(2,0x1a,6,temp_v28,temp_v30,0x81);
      temp_v7 = FUN_00293ac0();
      temp_v6 = temp_v34;
      temp_v17 = (float)temp_v18;
      if ((temp_v7 & 1) != 0) {
        temp_v5 = 0;
        if (temp_v5 < (int)temp_v7) {
          do {
            temp_v9 = temp_v5 + (int)(5 - temp_v7) / 2;
            temp_v13 = temp_v9 + 0x13;
            if (*(int *)(temp_v6 + 0x12e4) == temp_v5) {
              temp_v13 = temp_v9 + 0x18;
            }
            FUN_002bf288(2,0x1a,temp_v13,temp_v28,temp_v30,0x81);
            temp_v17 = (float)temp_v18;
            temp_v5 = temp_v5 + 1;
          } while (temp_v5 < (int)temp_v7);
        }
      }
      else {
        temp_v5 = 0;
        if (temp_v5 < (int)temp_v7) {
          do {
            temp_v9 = temp_v5 + (int)(6 - temp_v7) / 2;
            temp_v13 = temp_v9 + 7;
            if (*(int *)(temp_v6 + 0x12e4) == temp_v5) {
              temp_v13 = temp_v9 + 0xd;
            }
            FUN_002bf288(2,0x1a,temp_v13,temp_v28,temp_v30,0x81);
            temp_v17 = (float)temp_v18;
            temp_v5 = temp_v5 + 1;
          } while (temp_v5 < (int)temp_v7);
        }
      }
    }
    if (*(int *)(temp_v34 + 0x12dc) >= 7) {
      FUN_00288ef0(&temp_v28,&temp_v30,6);
      pcVar21 = (char *)(temp_v34 + 0x1e66);
      temp_v7 = *(unsigned int *)(temp_v34 + 0x1898);
      if (*pcVar21 == '\f' || *pcVar21 == '\n') {
        temp_v7 = 0x5a5a5aff;
        FUN_002bf538();
      }
      if (*pcVar21 == '\r') {
        temp_v7 = 0xff;
        FUN_002bf538();
      }
      temp_v6 = temp_v34;
      if (*temp_v38 != '\x03' && *temp_v38 != '\t') {
        if (*(short *)(temp_v34 + 0x12fc) != 0) {
          if ((*(char *)(temp_v34 + 0x12ed) != '\0') && (-1 >= *psVar24)) {
            FUN_002be304(temp_v7);
            FUN_002bf288(2,0x1a,2000,temp_v28,temp_v30,0x83);
          }
          else {
            FUN_002be304(temp_v7);
            FUN_001ee4e4((int)*(short *)(temp_v6 + 0x12fc),temp_v28,temp_v30,0x83,1);
          }
          FUN_002bed3c();
        }
        else if (0 < *(short *)(temp_v34 + 0x12fe)) {
          temp_v16 = (float)VectorSignedToFloat(temp_v28,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v20 = (float)VectorSignedToFloat(temp_v30,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v23 = (short *)(temp_v20 + 48.0f);
          temp_v20 = (float)VectorSignedToFloat((int)*(short *)(*(int *)(*(int *)(temp_v34 + 0x1e74) +
                                                                      0x10) + 0x12),
                                              (unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v22 = (short *)((temp_v16 + 300.0f) - temp_v20);
          VectorUnsignedToFloat(*(unsigned int *)(temp_v34 + 0x1e78),(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v24 = (short *)temp_v17;
          FUN_0033d3f8(*(int *)(temp_v34 + 0x1e74),0,&temp_v22,temp_v7 | 0xff,0);
        }
      }
      FUN_002bf538();
      if (*pcVar21 == '\r') {
        FUN_002bf380(2,0x1a,0x1a,temp_v28,temp_v30,0x8d);
      }
    }
  }
  temp_v19 = (unsigned long long)(unsigned int)temp_v17;
  temp_v20 = 0.305f;
  if ((*temp_v38 == '\b') || (*(short *)(temp_v34 + 0x1300) == 0)) goto LAB_001a3ea8;
  if ((*(char *)(temp_v4 + 0x1e60) != '\0') || (*temp_v38 != '\t')) {
    FUN_00288ef0(&temp_v28,&temp_v30,0xe);
    if ((*(int *)(temp_v34 + 0x12dc) >= 7) && (*temp_v38 == '\x05' || *temp_v38 == '\x06')) {
      FUN_00288ef0(&temp_v28,&temp_v30,0xb);
      FUN_002bf288(2,0x1a,0xbb,temp_v28,temp_v30,0xc9);
      FUN_00288ef0(&temp_v28,&temp_v30,0xc);
      FUN_002bf288(2,0x1a,0xbc,temp_v28,temp_v30,0xce);
      temp_v6 = DAT_0044ea00;
      if ((*(char *)(temp_v34 + 0x759) != '\0') && (*(char *)(temp_v34 + 0x75e) != '\0')) {
        temp_v5 = FUN_002c5da8(6,1,0);
        piVar16 = (int *)(temp_v6 + 0x12ac);
        temp_v9 = piVar16[*piVar16 + 2];
        piVar16[*piVar16 + 2] = temp_v5;
        if (*(char *)(temp_v6 + 0x12c4) != '\0' || temp_v9 != temp_v5) {
          (**(romwright_code **)(temp_v6 + 0x12c8))();
          *(unsigned char *)(temp_v6 + 0x12c4) = 0;
        }
        if ((*(char *)(temp_v34 + 0x7e5) != '\0') && (*(char *)(temp_v34 + 0x7ea) != '\0')) {
          FUN_00288ef0(&temp_v28,&temp_v30,0xd);
          temp_v6 = FUN_002beda4(temp_v34 + 0x1e8);
          temp_v5 = FUN_002bed98(temp_v34 + 0x1e8);
          FUN_002bf288(2,0x1a,0xbd,(unsigned char *)((int)temp_v28 + temp_v6),temp_v5 + (int)temp_v30,0xd3)
          ;
        }
        else {
          FUN_002bf538();
          FUN_00288ef0(&temp_v28,&temp_v30,0xd);
          FUN_002bf288(2,0x1a,0xbe,temp_v28,temp_v30,0xd3);
          FUN_002bf288(2,0x1a,0xbe,temp_v28,temp_v30,0xd4);
          FUN_002bf538();
        }
        temp_v6 = DAT_0044ea00;
        temp_v5 = FUN_002c5da8(6,7,0);
        piVar16 = (int *)(temp_v6 + 0x12ac);
        temp_v9 = piVar16[*piVar16 + 2];
        piVar16[*piVar16 + 2] = temp_v5;
        if (*(char *)(temp_v6 + 0x12c4) != '\0' || temp_v9 != temp_v5) {
          (**(romwright_code **)(temp_v6 + 0x12c8))();
          *(unsigned char *)(temp_v6 + 0x12c4) = 0;
        }
      }
    }
    FUN_00288ef0(&temp_v28,&temp_v30,0xf);
    FUN_002bf288(2,0x1a,0x1f,temp_v28,temp_v30,0xd8);
    pcVar21 = (char *)(temp_v34 + 0x1e66);
    temp_v0 = *pcVar21;
    if (temp_v0 != '\r' && temp_v0 != '\x06') {
      FUN_00288ef0(&temp_v28,&temp_v30,0xf);
      FUN_002bf380(2,0x1a,0,temp_v28,temp_v30,0xd8);
    }
    FUN_00288ef0(&temp_v28,&temp_v30,0x10);
    FUN_002bf288(2,0x1a,0x2d,temp_v28,temp_v30,0xd8);
    FUN_002bf288(2,0x1a,0x2e,temp_v28,temp_v30,0xd8);
    FUN_002bf288(2,0x1a,0x38,temp_v28,temp_v30,0xd8);
    FUN_002bf288(2,0x1a,0x39,temp_v28,temp_v30,0xd8);
    FUN_00288ef0(&temp_v28,&temp_v30,0x11);
    FUN_002bf288(2,0x1a,0x4a,temp_v28,temp_v30,0xd8);
    temp_v6 = 0;
    do {
      FUN_00288ef0(&temp_v28,&temp_v30,temp_v6 + 0x12);
      temp_v5 = FUN_002bf4f8(0x1a,temp_v6 + 0x7b);
      FUN_002bf288(2,0x1a,0x68,temp_v28,(int)*(short *)(temp_v5 + 10) + (int)temp_v30,0xd8);
      FUN_002bf288(2,0x1a,temp_v6 + 0x69,temp_v28,(int)temp_v30 + (int)*(short *)(temp_v5 + 10),0xdd);
      if (*(char *)(temp_v4 + 0x1e62) != '\0') {
        temp_v5 = FUN_002bf4f8(0x1a,temp_v6 + 0x85);
        FUN_002bf288(2,0x1a,0x80,(unsigned char *)((int)*(short *)(temp_v5 + 8) + (int)temp_v28),
                     (int)*(short *)(temp_v5 + 10) + (int)temp_v30,0xd8);
      }
      temp_v17 = (float)temp_v19;
      temp_v6 = temp_v6 + 1;
    } while (temp_v6 < 5);
    FUN_00288ef0(&temp_v28,&temp_v30,0x17);
    if (*(char *)(temp_v4 + 0x1e60) != '\0') {
      if (*pcVar21 == '\0') {
        FUN_002bf288(2,0x1a,0x8a,temp_v28,temp_v30,0xd8);
        if (*temp_v38 != '\t') {
          temp_v6 = FUN_002c09d0(0x410);
          if (temp_v6 != 0) {
            FUN_002bf288(2,0x1a,0x8e,temp_v28,temp_v30,0xd8);
          }
        }
        else if (*(char *)(temp_v4 + 0x1eb9) == '\x01') {
          FUN_002bf288(2,0x1a,0x8e,temp_v28,temp_v30,0xd8);
        }
LAB_001a3ea8:
        if (*(char *)(temp_v4 + 0x1e60) == '\0') goto LAB_001a6a8c;
      }
      temp_v6 = temp_v34;
      puVar22 = (unsigned short *)(temp_v34 + 0x1300);
      if (*puVar22 != 0) {
        puVar17 = (unsigned short *)0x0;
        pcVar21 = (char *)(temp_v34 + 0x1e66);
        if (*pcVar21 != '\0') {
          puVar17 = (unsigned short *)(unsigned int)*puVar22;
          FUN_002b9024();
        }
        temp_v5 = temp_v34;
        if (*temp_v38 != '\b') {
          if (*(char *)(temp_v34 + 0x12f3) == '\0') {
            FUN_00288ef0(&temp_v28,&temp_v30,0xe);
            if (*pcVar21 != '\0') {
              if (*pcVar21 != '\r') {
                temp_v21 = FUN_002bd068(*puVar17);
                FUN_002be624(temp_v35,&LAB_001a43d4,temp_v21);
              }
              else {
                FUN_002be624(temp_v35,&LAB_001a43e0);
              }
            }
            else if (*temp_v38 != '\t') {
              temp_v21 = FUN_002bd1fc();
              FUN_002be624(temp_v35,&LAB_001a43d4,temp_v21);
            }
            else {
              FUN_002be624(temp_v35,&LAB_001a43d4,temp_v34 + 0x189c);
            }
            temp_v21 = 0xffffffff;
            if ((*(unsigned short *)(temp_v6 + 0x1314) & 2) != 0) {
              temp_v21 = 0xdc0f14ff;
            }
            temp_v9 = FUN_002bf4f8(0x1a,0x1e);
            VectorSignedToFloat((int)temp_v30 + (int)*(short *)(temp_v9 + 10),
                                (unsigned char)(in_fpscr >> 0x16) & 3);
            VectorSignedToFloat((unsigned char *)((int)temp_v28 + (int)*(short *)(temp_v9 + 8)),
                                (unsigned char)(in_fpscr >> 0x16) & 3);
            FUN_002be5a4(3,temp_v21,temp_v35);
            if (*pcVar21 != '\0') {
              temp_v21 = FUN_002bce30(*puVar17,0);
              FUN_002be624(temp_v35,&LAB_001a43d4,temp_v21);
            }
            else {
              FUN_002be624(temp_v35,&LAB_001a43e4);
            }
            temp_v9 = FUN_002bf4f8(0x1a,0x1d);
            VectorSignedToFloat((int)temp_v30 + (int)*(short *)(temp_v9 + 10),
                                (unsigned char)(in_fpscr >> 0x16) & 3);
            VectorSignedToFloat((unsigned char *)((int)temp_v28 + (int)*(short *)(temp_v9 + 8)),
                                (unsigned char)(in_fpscr >> 0x16) & 3);
            FUN_002be5a4(3,0xffffffff,temp_v35);
          }
          FUN_00288ef0(&temp_v28,&temp_v30,0xf);
          psVar24 = (short *)(unsigned int)*(unsigned short *)(temp_v6 + 0x1302);
          FUN_002be304(0xff);
          if (*(char *)(temp_v4 + 0x1e62) != '\0') {
            psVar24 = (short *)(unsigned int)*(unsigned short *)(temp_v34 + 0x18b2);
            psVar10 = (short *)(unsigned int)*(unsigned short *)(temp_v6 + 0x1302);
            psVar11 = psVar10;
            if (psVar24 < psVar10) {
              psVar11 = (short *)0xdc0f14ff;
            }
            if (psVar10 < psVar24) {
              psVar11 = (short *)0x72e027ff;
            }
            if (psVar24 != psVar10) {
              FUN_002be304(psVar11);
            }
            else {
              FUN_002be304(0xff);
            }
          }
          temp_v9 = FUN_002bf4f8(0x1a,0x21);
          temp_v22 = psVar24;
          FUN_002bdf94(6,(unsigned char *)((int)temp_v28 + (int)*(short *)(temp_v9 + 8)),
                       (int)temp_v30 + (int)*(short *)(temp_v9 + 10),1,2,0xdd,&LAB_001a43f4);
          FUN_002bed3c();
          FUN_00288ef0(&temp_v28,&temp_v30,0xf);
          temp_v9 = temp_v34;
          if (*pcVar21 != '\r' && *pcVar21 != '\x06') {
            psVar24 = *(short **)(temp_v34 + 0x1304);
            FUN_002be304(0x676767ff);
            if (*(char *)(temp_v4 + 0x1e62) != '\0') {
              puVar18 = (unsigned int *)(temp_v34 + 0x18b4);
              psVar24 = (short *)*puVar18;
              temp_v10 = FUN_001b0b98(*(unsigned short *)(temp_v34 + 0x18b2),
                                    *(unsigned short *)(temp_v6 + 0x1302),0);
              if ((temp_v10 == 0) &&
                 (temp_v9 = FUN_001b0b98(*(unsigned int *)(temp_v9 + 0x1304),*puVar18,0), temp_v9 == 0))
              {
                FUN_002be304(0x676767ff);
              }
            }
            temp_v9 = FUN_002bf4f8(0x1a,0x2c);
            temp_v22 = psVar24;
            FUN_002bdf94(0,(unsigned char *)((int)temp_v28 + (int)*(short *)(temp_v9 + 8)),
                         (int)temp_v30 + (int)*(short *)(temp_v9 + 10),1,8,0xdd,&LAB_001a43f4);
            FUN_002bed3c();
          }
          FUN_002c09bc();
          FUN_00288ef0(&temp_v28,&temp_v30,0x10);
          temp_v12 = *(short *)(temp_v6 + 0x1308);
          temp_v2 = *(short *)(temp_v6 + 0x130c);
          psVar24 = (short *)(int)temp_v2;
          if ((*pcVar21 == '\r') ||
             ((psVar11 = (short *)(int)temp_v12, *pcVar21 == '\x06' &&
              (temp_v9 = FUN_0029e9cc(*puVar22), temp_v9 == 0)))) {
            psVar11 = psVar24;
          }
          temp_v25 = 0.0f;
          if ((*pcVar21 == '\0' || *pcVar21 == '\x02') && (*temp_v38 != '\t')) {
            temp_v25 = (float)FUN_00288ddc((int)temp_v2,(int)(short)*puVar22);
          }
          if (*(char *)(temp_v4 + 0x1e62) != '\0') {
            psVar24 = (short *)(int)*(short *)(temp_v34 + 0x18bc);
            temp_v12 = *(short *)(temp_v34 + 0x18b8);
            psVar10 = (short *)(int)*(short *)(temp_v6 + 0x130c);
            psVar11 = psVar10;
            if ((int)psVar24 < (int)psVar10) {
              psVar11 = (short *)0xdc0f14ff;
            }
            if (psVar24 == psVar10) {
              psVar11 = (short *)0xffffffff;
            }
            if ((int)psVar10 < (int)psVar24) {
              FUN_002be304(0x72e027ff);
            }
            else {
              FUN_002be304(psVar11);
            }
            temp_v0 = *pcVar21;
            if ((temp_v0 == '\b' || temp_v0 == '\t') ||
               (psVar11 = (short *)(int)temp_v12, (temp_v0 == '\n' || temp_v0 == '\a') || temp_v0 == '\x03')
               ) {
              psVar11 = psVar24;
            }
          }
          else if (temp_v25 != 0.0f) {
            FUN_002be304(0x6ef0ffff);
          }
          temp_v9 = FUN_00288da8((int)(short)psVar11,(int)(short)psVar24);
          if (temp_v9 != 0) {
            FUN_002be304(0xdc0f14ff);
          }
          temp_v36 = FUN_002bf4f8(0x1a,0x37);
          if ((*pcVar21 != '\r') &&
             ((*pcVar21 != '\x06' || (temp_v9 = FUN_0029e9cc(*puVar22), temp_v9 != 0)))) {
            temp_v0 = *temp_v38;
            temp_v15 = temp_v0 == '\x04';
            if (temp_v15) {
              temp_v0 = *pcVar21;
            }
            if (!(temp_v15 && temp_v0 == '\x06')) {
              temp_v22 = psVar11;
              FUN_002bdf94(0,(unsigned char *)((int)temp_v28 + (int)*(short *)(temp_v36 + 8)),
                           (int)temp_v30 + (int)*(short *)(temp_v36 + 10),1,4,0xdd,&LAB_001a43f4);
            }
            else {
              FUN_002bdf94(0,(unsigned char *)((int)temp_v28 + (int)*(short *)(temp_v36 + 8)),
                           (int)temp_v30 + (int)*(short *)(temp_v36 + 10),1,4,0xdd,&LAB_001a48a0);
            }
          }
          else {
            FUN_002bdf94(0,(unsigned char *)((int)temp_v28 + (int)*(short *)(temp_v36 + 8)),
                         (int)temp_v30 + (int)*(short *)(temp_v36 + 10),1,4,0xdd,&LAB_001a48a0);
          }
          FUN_002bed3c();
          if (*(char *)(temp_v4 + 0x1e62) != '\0') {
            temp_v11 = (int)*(short *)(temp_v6 + 0x130c);
            temp_v10 = (int)*(short *)(temp_v34 + 0x18bc);
            temp_v9 = temp_v10;
            if (temp_v10 == temp_v11) {
              temp_v9 = -1;
            }
            if (temp_v10 < temp_v11) {
              temp_v9 = -0x23f0eb01;
            }
            if (temp_v11 < temp_v10) {
              temp_v9 = 0x72e027ff;
            }
            FUN_002be304(temp_v9);
          }
          else if (temp_v25 != 0.0f) {
            temp_v9 = 0x6ef0ffff;
            FUN_002be304(temp_v9);
          }
          temp_v36 = FUN_002bf4f8(0x1a,0x32);
          if ((*pcVar21 != '\r') &&
             ((*pcVar21 != '\x06' || (temp_v9 = FUN_0029e9cc(*puVar22), temp_v9 != 0)))) {
            temp_v22 = psVar24;
            FUN_002bdf94(0,(unsigned char *)((int)temp_v28 + (int)*(short *)(temp_v36 + 8)),
                         (int)temp_v30 + (int)*(short *)(temp_v36 + 10),1,4,0xdd,&LAB_001a43f4);
          }
          else {
            FUN_002bdf94(0,(unsigned char *)((int)*(short *)(temp_v36 + 8) + (int)temp_v28),
                         (int)temp_v30 + (int)*(short *)(temp_v36 + 10),1,4,0xdd,&LAB_001a48a0);
          }
          FUN_002bed3c();
          temp_v9 = FUN_002bf4f8(0x1a,0x33);
          FUN_002bdf94(0,(unsigned char *)((int)temp_v28 + (int)*(short *)(temp_v9 + 8)),
                       (int)temp_v30 + (int)*(short *)(temp_v9 + 10),0,1,0xdd,&LAB_001a48a4);
          temp_v27 = 0;
          temp_v24 = temp_v28;
          temp_v25 = temp_v30;
          temp_v26 = 0xdd;
          temp_v23 = (short *)0x46;
          temp_v22 = (short *)0x44;
          piVar16 = (int *)(temp_v34 + 0x1e68);
          temp_v37 = piVar16;
          FUN_002be90c(psVar11,psVar24,*piVar16,0,0x1a,0x43,0x45);
          if (*piVar16 != 0) {
            FUN_002bf538();
            temp_v24 = temp_v28;
            temp_v25 = temp_v30;
            temp_v26 = 0xde;
            temp_v27 = 1;
            temp_v23 = (short *)0x46;
            temp_v22 = (short *)0x44;
            FUN_002be90c(psVar11,psVar24,*temp_v37,0,0x1a,0x43,0x45);
            FUN_002bf538();
          }
          if ((*(char *)(temp_v4 + 0x1e62) != '\0') &&
             (temp_v9 = (int)*(short *)(temp_v34 + 0x18bc) - (int)*(short *)(temp_v6 + 0x130c),
             temp_v9 != 0)) {
            temp_v11 = FUN_002bf4f8(0x1a,0xce);
            temp_v10 = temp_v9;
            if (temp_v9 < 0) {
              temp_v10 = -temp_v9;
            }
            if (temp_v10 - 10U < 0x5a) {
              temp_v11 = FUN_002bf4f8(0x1a,0xcf);
            }
            else if (temp_v10 - 100U < 900) {
              temp_v11 = FUN_002bf4f8(0x1a,0xd0);
            }
            else if (temp_v10 >= 1000) {
              temp_v11 = FUN_002bf4f8(0x1a,0xd1);
            }
            if (temp_v9 < 0) {
              FUN_002be304(0xfa282d00);
              temp_v22 = (short *)&LAB_001a48ac;
              temp_v23 = (short *)temp_v10;
              FUN_002bdf94(2,(unsigned char *)((int)temp_v28 + (int)*(short *)(temp_v11 + 8)),
                           (int)temp_v30 + (int)*(short *)(temp_v11 + 10),0,3,0xdd,&LAB_001a48b0);
            }
            else {
              FUN_002be304(0x72e02700);
              temp_v22 = (short *)&LAB_001a4c74;
              temp_v23 = (short *)temp_v10;
              FUN_002bdf94(2,(unsigned char *)((int)temp_v28 + (int)*(short *)(temp_v11 + 8)),
                           (int)temp_v30 + (int)*(short *)(temp_v11 + 10),0,3,0xdd,&LAB_001a48b0);
            }
          }
          temp_v33 = (short *)(int)*(short *)(temp_v6 + 0x130a);
          temp_v29 = (short *)(int)*(short *)(temp_v6 + 0x130e);
          if ((*pcVar21 == '\r') ||
             ((*pcVar21 == '\x06' && (temp_v9 = FUN_0029e9cc(*puVar22), temp_v9 == 0)))) {
            temp_v33 = temp_v29;
          }
          if (*(char *)(temp_v4 + 0x1e62) != '\0') {
            temp_v29 = (short *)(int)*(short *)(temp_v34 + 0x18be);
            temp_v33 = (short *)(int)*(short *)(temp_v34 + 0x18ba);
            psVar11 = (short *)(int)*(short *)(temp_v6 + 0x130e);
            psVar24 = temp_v29;
            if ((int)temp_v29 < (int)psVar11) {
              psVar24 = (short *)0xdc0f14ff;
            }
            if (temp_v29 == psVar11) {
              psVar24 = (short *)0xffffffff;
            }
            if ((int)psVar11 < (int)temp_v29) {
              FUN_002be304(0x72e027ff);
            }
            else {
              FUN_002be304(psVar24);
            }
            temp_v0 = *pcVar21;
            if ((temp_v0 == '\b' || temp_v0 == '\t') ||
               ((temp_v0 == '\n' || temp_v0 == '\a') || temp_v0 == '\x03')) {
              temp_v33 = temp_v29;
            }
          }
          temp_v9 = FUN_002bf4f8(0x1a,0x42);
          if ((*pcVar21 != '\r') &&
             ((*pcVar21 != '\x06' || (temp_v10 = FUN_0029e9cc(*puVar22), temp_v10 != 0)))) {
            temp_v0 = *temp_v38;
            temp_v15 = temp_v0 == '\x04';
            if (temp_v15) {
              temp_v0 = *pcVar21;
            }
            if (!(temp_v15 && temp_v0 == '\x06')) {
              temp_v22 = temp_v33;
              FUN_002bdf94(0,(unsigned char *)((int)*(short *)(temp_v9 + 8) + (int)temp_v28),
                           (int)temp_v30 + (int)*(short *)(temp_v9 + 10),1,4,0xdd,&LAB_001a4c78);
            }
            else {
              FUN_002bdf94(0,(unsigned char *)((int)*(short *)(temp_v9 + 8) + (int)temp_v28),
                           (int)temp_v30 + (int)*(short *)(temp_v9 + 10),1,4,0xdd,&LAB_001a48a0);
            }
          }
          else {
            FUN_002bdf94(0,(unsigned char *)((int)*(short *)(temp_v9 + 8) + (int)temp_v28),
                         (int)temp_v30 + (int)*(short *)(temp_v9 + 10),1,4,0xdd,&LAB_001a48a0);
          }
          temp_v9 = FUN_002bf4f8(0x1a,0x3d);
          if ((*pcVar21 != '\r') &&
             ((*pcVar21 != '\x06' || (temp_v10 = FUN_0029e9cc(*puVar22), temp_v10 != 0)))) {
            temp_v22 = temp_v29;
            FUN_002bdf94(0,(unsigned char *)((int)*(short *)(temp_v9 + 8) + (int)temp_v28),
                         (int)temp_v30 + (int)*(short *)(temp_v9 + 10),1,4,0xdd,&LAB_001a4c78);
          }
          else {
            FUN_002bdf94(0,(unsigned char *)((int)*(short *)(temp_v9 + 8) + (int)temp_v28),
                         (int)temp_v30 + (int)*(short *)(temp_v9 + 10),1,4,0xdd,&LAB_001a48a0);
          }
          FUN_002bed3c();
          temp_v9 = FUN_002bf4f8(0x1a,0x3e);
          FUN_002bdf94(0,(unsigned char *)((int)temp_v28 + (int)*(short *)(temp_v9 + 8)),
                       (int)temp_v30 + (int)*(short *)(temp_v9 + 10),0,1,0xdd,&LAB_001a48a4);
          temp_v26 = 0;
          temp_v24 = (short *)temp_v30;
          temp_v25 = 3.09687e-43f;
          temp_v22 = (short *)0x48;
          temp_v23 = temp_v28;
          piVar16 = (int *)(temp_v34 + 0x1e6c);
          FUN_002888a8(temp_v33,temp_v29,*piVar16,0,0x1a,0x47,0x49);
          if (*piVar16 != 0) {
            FUN_002bf538();
            temp_v23 = temp_v28;
            temp_v24 = (short *)temp_v30;
            temp_v26 = 1;
            temp_v25 = 3.11088e-43f;
            temp_v22 = (short *)0x48;
            FUN_002888a8(temp_v33,temp_v29,*piVar16,0,0x1a,0x47,0x49);
            FUN_002bf538();
          }
          if ((*(char *)(temp_v4 + 0x1e62) != '\0') &&
             (psVar24 = (short *)((int)*(short *)(temp_v34 + 0x18be) -
                                 (int)*(short *)(temp_v6 + 0x130e)), psVar24 != (short *)0x0)) {
            temp_v9 = FUN_002bf4f8(0x1a,0xd4);
            psVar11 = psVar24;
            if ((int)psVar24 < 0) {
              psVar11 = (short *)-(int)psVar24;
            }
            if (psVar11 + -5 < (short *)0x5a) {
              temp_v9 = FUN_002bf4f8(0x1a,0xd5);
            }
            else if (psVar11 + -0x32 < (short *)0x384) {
              temp_v9 = FUN_002bf4f8(0x1a,0xd6);
            }
            else if ((int)psVar11 >= 1000) {
              temp_v9 = FUN_002bf4f8(0x1a,0xd7);
            }
            if ((int)psVar24 < 0) {
              FUN_002be304(0xfa282d00);
              temp_v22 = (short *)&LAB_001a500c;
              temp_v23 = psVar11;
              FUN_002bdf94(2,(unsigned char *)((int)*(short *)(temp_v9 + 8) + (int)temp_v28),
                           (int)temp_v30 + (int)*(short *)(temp_v9 + 10),0,3,0xdd,&LAB_001a5010);
            }
            else {
              FUN_002be304(0x72e02700);
              temp_v22 = (short *)&LAB_001a4c74;
              temp_v23 = psVar11;
              FUN_002bdf94(2,(unsigned char *)((int)*(short *)(temp_v9 + 8) + (int)temp_v28),
                           (int)temp_v30 + (int)*(short *)(temp_v9 + 10),0,3,0xdd,&LAB_001a5010);
            }
          }
          temp_v19 = (unsigned long long)(unsigned int)temp_v17;
          FUN_00288ef0(&temp_v28,&temp_v30,0x11);
          FUN_002bed3c();
          temp_v9 = 0;
          do {
            temp_v11 = temp_v34 + temp_v9;
            temp_v10 = temp_v11 + 0x1000;
            temp_v1 = *(unsigned char *)(temp_v11 + 0x1332);
            if (*(char *)(temp_v4 + 0x1e62) != '\0') {
              temp_v1 = *(unsigned char *)(temp_v11 + 0x18e2);
            }
            psVar24 = (short *)(unsigned int)temp_v1;
            if (psVar24 == (short *)0x0) {
              temp_v13 = 0x50;
            }
            else if (psVar24 == (short *)0x1) {
              temp_v13 = 0x4b;
            }
            else if (psVar24 == (short *)0x2) {
              temp_v13 = 0x4f;
            }
            else if (psVar24 == (short *)0x3) {
              temp_v13 = 0x4c;
            }
            else if (psVar24 == (short *)0x4) {
              temp_v13 = 0x4d;
            }
            else if (psVar24 == (short *)0x5) {
              temp_v13 = 0x4e;
            }
            if ((*pcVar21 == '\r') ||
               ((*pcVar21 == '\x06' && (temp_v8 = FUN_0029e9cc(*puVar22), temp_v8 == 0)))) {
              temp_v13 = 0x51;
            }
            if ((*(char *)(temp_v4 + 0x1e62) != '\0') &&
               (temp_v7 = (unsigned int)*(unsigned char *)(temp_v11 + 0x18e2), temp_v7 != *(unsigned char *)(temp_v10 + 0x332))) {
              FUN_0028886c();
              if (0 < (int)temp_v7) {
                temp_v13 = temp_v13 + 7;
              }
              if ((int)temp_v7 < 0) {
                temp_v13 = temp_v13 + 0xe;
              }
            }
            temp_v10 = FUN_002bf4f8(0x1a,temp_v9 + 0x60);
            FUN_002bf288(2,0x1a,temp_v13,(unsigned char *)((int)*(short *)(temp_v10 + 8) + (int)temp_v28),
                         (int)*(short *)(temp_v10 + 10) + (int)temp_v30,0xdd);
            temp_v10 = temp_v34;
            temp_v9 = temp_v9 + 1;
          } while (temp_v9 < 8);
          temp_v13 = 0;
          do {
            psVar11 = (short *)0x0;
            FUN_002be304(0xff);
            FUN_00288ef0(&temp_v28,&temp_v30,temp_v13 + 0x12);
            temp_v36 = FUN_002bf4f8(0x1a,temp_v13 + 0x7b);
            temp_v23 = (short *)FUN_002bf4f8(0x1a,0x7a);
            if (temp_v13 != 0) {
              if (temp_v13 != 1) {
                if (temp_v13 != 2) {
                  if (temp_v13 != 3) {
                    if (temp_v13 == 4) {
                      psVar10 = (short *)(int)*(short *)(temp_v6 + 0x1322);
                      temp_v33 = (short *)(int)*(short *)(temp_v6 + 0x1330);
                      psVar24 = psVar10;
                      if (*(char *)(temp_v4 + 0x1e62) != '\0') {
                        psVar24 = (short *)(int)*(short *)(temp_v10 + 0x18d2);
                        temp_v33 = (short *)(int)*(short *)(temp_v10 + 0x18e0);
                        psVar11 = temp_v33;
                        if (psVar24 == psVar10) {
                          psVar11 = (short *)0xff;
                        }
                        if ((int)psVar24 < (int)psVar10) {
                          psVar11 = (short *)0xdc0f14ff;
                        }
                        if ((int)psVar10 < (int)psVar24) {
                          FUN_002be304(0x72e027ff);
                        }
                        else {
                          FUN_002be304(psVar11);
                        }
                        psVar11 = (short *)((int)*(short *)(temp_v10 + 0x18d2) -
                                           (int)*(short *)(temp_v6 + 0x1322));
                      }
                    }
                  }
                  else {
                    psVar24 = (short *)(int)*(short *)(temp_v6 + 0x1320);
                    temp_v33 = (short *)(int)*(short *)(temp_v6 + 0x132e);
                    if (*(char *)(temp_v4 + 0x1e62) != '\0') {
                      psVar10 = (short *)(int)*(short *)(temp_v10 + 0x18d0);
                      temp_v33 = (short *)(int)*(short *)(temp_v10 + 0x18de);
                      psVar11 = temp_v33;
                      if ((int)psVar10 < (int)psVar24) {
                        psVar11 = (short *)0xdc0f14ff;
                      }
                      if (psVar10 == psVar24) {
                        psVar11 = (short *)0xff;
                      }
                      if ((int)psVar24 < (int)psVar10) {
                        FUN_002be304(0x72e027ff);
                      }
                      else {
                        FUN_002be304(psVar11);
                      }
                      temp_v9 = (int)*(short *)(temp_v10 + 0x18d0);
                      temp_v11 = (int)*(short *)(temp_v6 + 0x1320);
                      psVar24 = psVar10;
                      psVar11 = (short *)(temp_v9 - temp_v11);
                    }
                  }
                }
                else {
                  psVar24 = (short *)(int)*(short *)(temp_v6 + 0x131e);
                  temp_v33 = (short *)(int)*(short *)(temp_v6 + 0x132c);
                  if (*(char *)(temp_v4 + 0x1e62) != '\0') {
                    psVar10 = (short *)(int)*(short *)(temp_v10 + 0x18ce);
                    temp_v33 = (short *)(int)*(short *)(temp_v10 + 0x18dc);
                    psVar11 = temp_v33;
                    if ((int)psVar10 < (int)psVar24) {
                      psVar11 = (short *)0xdc0f14ff;
                    }
                    if (psVar10 == psVar24) {
                      psVar11 = (short *)0xff;
                    }
                    if ((int)psVar24 < (int)psVar10) {
                      FUN_002be304(0x72e027ff);
                    }
                    else {
                      FUN_002be304(psVar11);
                    }
                    temp_v9 = (int)*(short *)(temp_v10 + 0x18ce);
                    temp_v11 = (int)*(short *)(temp_v6 + 0x131e);
                    psVar24 = psVar10;
                    psVar11 = (short *)(temp_v9 - temp_v11);
                  }
                }
              }
              else {
                psVar24 = (short *)(int)*(short *)(temp_v6 + 0x131c);
                temp_v33 = (short *)(int)*(short *)(temp_v6 + 0x132a);
                if (*(char *)(temp_v4 + 0x1e62) != '\0') {
                  psVar10 = (short *)(int)*(short *)(temp_v10 + 0x18cc);
                  temp_v33 = (short *)(int)*(short *)(temp_v10 + 0x18da);
                  psVar11 = temp_v33;
                  if ((int)psVar10 < (int)psVar24) {
                    psVar11 = (short *)0xdc0f14ff;
                  }
                  if (psVar10 == psVar24) {
                    psVar11 = (short *)0xff;
                  }
                  if ((int)psVar24 < (int)psVar10) {
                    FUN_002be304(0x72e027ff);
                  }
                  else {
                    FUN_002be304(psVar11);
                  }
                  temp_v9 = (int)*(short *)(temp_v10 + 0x18cc);
                  temp_v11 = (int)*(short *)(temp_v6 + 0x131c);
                  psVar24 = psVar10;
                  psVar11 = (short *)(temp_v9 - temp_v11);
                }
              }
            }
            else {
              psVar24 = (short *)(int)*(short *)(temp_v6 + 0x131a);
              temp_v33 = (short *)(int)*(short *)(temp_v6 + 0x1328);
              if (*(char *)(temp_v4 + 0x1e62) != '\0') {
                psVar10 = (short *)(int)*(short *)(temp_v10 + 0x18ca);
                temp_v33 = (short *)(int)*(short *)(temp_v10 + 0x18d8);
                psVar11 = temp_v33;
                if ((int)psVar10 < (int)psVar24) {
                  psVar11 = (short *)0xdc0f14ff;
                }
                if (psVar10 == psVar24) {
                  psVar11 = (short *)0xff;
                }
                if ((int)psVar24 < (int)psVar10) {
                  FUN_002be304(0x72e027ff);
                }
                else {
                  FUN_002be304(psVar11);
                }
                temp_v9 = (int)*(short *)(temp_v10 + 0x18ca);
                temp_v11 = (int)*(short *)(temp_v6 + 0x131a);
                psVar24 = psVar10;
                psVar11 = (short *)(temp_v9 - temp_v11);
              }
            }
            if ((*pcVar21 != '\r') &&
               ((*pcVar21 != '\x06' || (temp_v9 = FUN_0029e9cc(*puVar22), temp_v9 != 0)))) {
              temp_v22 = psVar24;
              FUN_002bdf94(0,(unsigned char *)((int)*(short *)((int)temp_v23 + 8) + (int)temp_v28),
                           (int)temp_v30 +
                           (int)*(short *)((int)temp_v23 + 10) + (int)*(short *)(temp_v36 + 10),1,3,
                           0xdd,&LAB_001a5514);
            }
            else {
              FUN_002bdf94(0,(unsigned char *)((int)*(short *)((int)temp_v23 + 8) + (int)temp_v28),
                           (int)*(short *)(temp_v36 + 10) + (int)*(short *)((int)temp_v23 + 10) +
                           (int)temp_v30,1,3,0xdd,&LAB_001a551c);
            }
            if (*(char *)(temp_v4 + 0x1e62) != '\0') {
              temp_v36 = FUN_002bf4f8(0x1a,temp_v13 + 0x85);
              temp_v9 = FUN_002bf4f8(0x1a,0x84);
              if ((int)psVar11 >= 1) {
                FUN_002bdf94(0,(unsigned char *)
                               ((int)temp_v28 +
                               (int)*(short *)(temp_v9 + 8) + (int)*(short *)(temp_v36 + 8)),
                             (int)temp_v30 +
                             (int)*(short *)(temp_v36 + 10) + (int)*(short *)(temp_v9 + 10),1,1,0xdd,
                             &LAB_001a5518);
              }
              else if ((int)psVar11 < 0) {
                FUN_002bdf94(0,(unsigned char *)
                               ((int)temp_v28 +
                               (int)*(short *)(temp_v9 + 8) + (int)*(short *)(temp_v36 + 8)),
                             (int)temp_v30 +
                             (int)*(short *)(temp_v36 + 10) + (int)*(short *)(temp_v9 + 10),1,1,0xdd,
                             &LAB_001a500c);
              }
              temp_v9 = FUN_002bf4f8(0x1a,0x83);
              if ((int)psVar11 >= 1) {
                temp_v22 = psVar11;
                FUN_002bdf94(0,(unsigned char *)
                               ((int)*(short *)(temp_v36 + 8) + (int)*(short *)(temp_v9 + 8) +
                               (int)temp_v28),
                             (int)temp_v30 +
                             (int)*(short *)(temp_v36 + 10) + (int)*(short *)(temp_v9 + 10),1,3,0xdd,
                             &LAB_001a5514);
              }
              else if ((int)psVar11 < 0) {
                temp_v22 = (short *)-(int)psVar11;
                FUN_002bdf94(0,(unsigned char *)
                               ((int)*(short *)(temp_v36 + 8) + (int)*(short *)(temp_v9 + 8) +
                               (int)temp_v28),
                             (int)temp_v30 +
                             (int)*(short *)(temp_v36 + 10) + (int)*(short *)(temp_v9 + 10),1,3,0xdd,
                             &LAB_001a5514);
              }
            }
            FUN_002bed3c();
            temp_v36 = FUN_002bf4f8(0x1a,temp_v13 + 0x7b);
            temp_v23 = (short *)FUN_002bf4f8(0x1a,0x6e);
            if ((*pcVar21 != '\r') &&
               ((*pcVar21 != '\x06' || (temp_v9 = FUN_0029e9cc(*puVar22), temp_v9 != 0)))) {
              if ((int)psVar24 < 200) {
                temp_v9 = (int)temp_v33 - (int)psVar11;
                temp_v23 = (short *)(int)(short)temp_v9;
                temp_v21 = 200;
                temp_v11 = FUN_002bf4f8(0x1a,0x6e);
                temp_v22 = *(short **)(temp_v11 + 0xc);
                temp_v11 = aeabi_idivmod((int)*temp_v22 << 0xc,temp_v21);
                temp_v32 = temp_v11 * (int)temp_v23 >> 0xc;
                if ((0 < (int)temp_v23) && (temp_v32 < 1)) {
                  temp_v32 = 1;
                }
                temp_v2 = temp_v22[1];
                temp_v3 = (short)psVar24;
                temp_v12 = (short)psVar11;
                if (temp_v9 < 0) {
                  temp_v22 = (short *)(int)(short)(temp_v3 - temp_v12);
                  temp_v21 = 200;
                  temp_v9 = FUN_002bf4f8(0x1a,0x6e);
                  psVar10 = *(short **)(temp_v9 + 0xc);
                  temp_v9 = aeabi_idivmod((int)*psVar10 << 0xc,temp_v21);
                  temp_v32 = temp_v9 * (int)temp_v22 >> 0xc;
                  if ((0 < (int)temp_v22) && (temp_v32 < 1)) {
                    temp_v32 = 1;
                  }
                  temp_v2 = psVar10[1];
                }
                temp_v22 = (short *)0xdd;
                FUN_002b0750(2,0x1a,0x6e,temp_v28,(int)temp_v30 + (int)*(short *)(temp_v36 + 10),
                             temp_v32,(int)temp_v2);
                temp_v2 = (short)temp_v33;
                if (*temp_v38 != '\x03') {
                  temp_v31 = 0;
                  if ((int)temp_v33 < (int)psVar24) {
                    temp_v21 = 200;
                    temp_v22 = (short *)(int)(short)(temp_v3 - temp_v2);
                    temp_v9 = FUN_002bf4f8(0x1a,0x6f);
                    psVar10 = *(short **)(temp_v9 + 0xc);
                    temp_v9 = aeabi_idivmod((int)*psVar10 << 0xc,temp_v21);
                    temp_v23 = (short *)(temp_v9 * (int)temp_v22 >> 0xc);
                    if ((0 < (int)temp_v22) && ((int)temp_v23 < 1)) {
                      temp_v23 = (short *)0x1;
                    }
                    temp_v24 = (short *)(int)psVar10[1];
                    if ((0 < (int)psVar11) && (*(char *)(temp_v4 + 0x1eb8) != '\0')) {
                      temp_v21 = 200;
                      temp_v9 = FUN_002bf4f8(0x1a,0x76);
                      psVar11 = *(short **)(temp_v9 + 0xc);
                      temp_v9 = aeabi_idivmod((int)*psVar11 << 0xc,temp_v21);
                      temp_v31 = temp_v9 * temp_v12 >> 0xc;
                      if ((0 < temp_v12) && (temp_v31 < 1)) {
                        temp_v31 = 1;
                      }
                      temp_v25 = (float)(int)psVar11[1];
                      temp_v22 = (short *)0xdd;
                      FUN_002b0750(2,0x1a,0x76,(unsigned char *)((int)temp_v28 + temp_v32),
                                   (int)*(short *)(temp_v36 + 10) + (int)temp_v30,temp_v31,temp_v25)
                      ;
                      FUN_002bf538();
                      temp_v9 = DAT_0044ea00;
                      temp_v11 = FUN_002c5da8(6,1,0);
                      piVar16 = (int *)(temp_v9 + 0x12ac);
                      temp_v8 = piVar16[*piVar16 + 2];
                      piVar16[*piVar16 + 2] = temp_v11;
                      if (*(char *)(temp_v9 + 0x12c4) != '\0' || temp_v8 != temp_v11) {
                        (**(romwright_code **)(temp_v9 + 0x12c8))(temp_v11);
                        *(unsigned char *)(temp_v9 + 0x12c4) = 0;
                      }
                      temp_v22 = (short *)0xde;
                      FUN_002b0750(2,0x1a,0x77,(unsigned char *)((int)temp_v28 + temp_v32),
                                   (int)*(short *)(temp_v36 + 10) + (int)temp_v30,temp_v31,temp_v25)
                      ;
                      temp_v9 = DAT_0044ea00;
                      temp_v11 = FUN_002c5da8(6,7,0);
                      piVar16 = (int *)(temp_v9 + 0x12ac);
                      temp_v8 = piVar16[*piVar16 + 2];
                      piVar16[*piVar16 + 2] = temp_v11;
                      if (*(char *)(temp_v9 + 0x12c4) != '\0' || temp_v8 != temp_v11) {
                        (**(romwright_code **)(temp_v9 + 0x12c8))();
                        *(unsigned char *)(temp_v9 + 0x12c4) = 0;
                      }
                      FUN_002bf538();
                    }
                    temp_v22 = (short *)0xdd;
                    FUN_002b0750(2,0x1a,0x6f,(unsigned char *)((int)temp_v28 + temp_v31 + temp_v32),
                                 (int)*(short *)(temp_v36 + 10) + (int)temp_v30,temp_v23,temp_v24);
                  }
                  else if ((int)psVar24 < (int)temp_v33) {
                    temp_v21 = 200;
                    temp_v9 = (int)(short)(temp_v2 - temp_v3);
                    temp_v11 = FUN_002bf4f8(0x1a,0x71);
                    temp_v22 = *(short **)(temp_v11 + 0xc);
                    temp_v11 = aeabi_idivmod((int)*temp_v22 << 0xc,temp_v21);
                    temp_v23 = (short *)(temp_v11 * temp_v9 >> 0xc);
                    if ((0 < temp_v9) && ((int)temp_v23 < 1)) {
                      temp_v23 = (short *)0x1;
                    }
                    temp_v24 = (short *)(int)temp_v22[1];
                    if ((0 < (int)psVar11) && (*(char *)(temp_v4 + 0x1eb8) != '\0')) {
                      temp_v21 = 200;
                      temp_v9 = FUN_002bf4f8(0x1a,0x76);
                      temp_v22 = *(short **)(temp_v9 + 0xc);
                      temp_v9 = aeabi_idivmod((int)*temp_v22 << 0xc,temp_v21);
                      temp_v31 = temp_v9 * temp_v12 >> 0xc;
                      if ((0 < temp_v12) && (temp_v31 < 1)) {
                        temp_v31 = 1;
                      }
                      temp_v25 = (float)(int)temp_v22[1];
                      temp_v22 = (short *)0xdd;
                      temp_v27 = temp_v32 - (int)temp_v23;
                      FUN_002b0750(2,0x1a,0x76,(unsigned char *)(temp_v27 + (int)temp_v28),
                                   (int)*(short *)(temp_v36 + 10) + (int)temp_v30,temp_v31,temp_v25)
                      ;
                      FUN_002bf538();
                      temp_v9 = DAT_0044ea00;
                      temp_v11 = FUN_002c5da8(6,1,0);
                      piVar16 = (int *)(temp_v9 + 0x12ac);
                      temp_v8 = piVar16[*piVar16 + 2];
                      piVar16[*piVar16 + 2] = temp_v11;
                      if (*(char *)(temp_v9 + 0x12c4) != '\0' || temp_v8 != temp_v11) {
                        (**(romwright_code **)(temp_v9 + 0x12c8))(temp_v11);
                        *(unsigned char *)(temp_v9 + 0x12c4) = 0;
                      }
                      temp_v22 = (short *)0xde;
                      FUN_002b0750(2,0x1a,0x77,(unsigned char *)(temp_v27 + (int)temp_v28),
                                   (int)*(short *)(temp_v36 + 10) + (int)temp_v30,temp_v31,temp_v25)
                      ;
                      temp_v9 = DAT_0044ea00;
                      temp_v11 = FUN_002c5da8(6,7,0);
                      piVar16 = (int *)(temp_v9 + 0x12ac);
                      temp_v8 = piVar16[*piVar16 + 2];
                      piVar16[*piVar16 + 2] = temp_v11;
                      if (*(char *)(temp_v9 + 0x12c4) != '\0' || temp_v8 != temp_v11) {
                        (**(romwright_code **)(temp_v9 + 0x12c8))();
                        *(unsigned char *)(temp_v9 + 0x12c4) = 0;
                      }
                      FUN_002bf538();
                    }
                    temp_v22 = (short *)0xdd;
                    FUN_002b0750(2,0x1a,0x71,
                                 (unsigned char *)
                                 (temp_v31 + (temp_v32 - (int)temp_v23) + (int)temp_v28),
                                 (int)*(short *)(temp_v36 + 10) + (int)temp_v30,temp_v23,temp_v24);
                  }
                  else if (0 < (int)psVar11) {
                    temp_v21 = 200;
                    temp_v9 = FUN_002bf4f8(0x1a,0x76);
                    psVar11 = *(short **)(temp_v9 + 0xc);
                    temp_v9 = aeabi_idivmod((int)*psVar11 << 0xc,temp_v21);
                    temp_v31 = temp_v9 * temp_v12 >> 0xc;
                    if ((0 < temp_v12) && (temp_v31 < 1)) {
                      temp_v31 = 1;
                    }
                    temp_v25 = (float)(int)psVar11[1];
                    temp_v22 = (short *)0xdd;
                    FUN_002b0750(2,0x1a,0x76,(unsigned char *)((int)temp_v28 + temp_v32),
                                 (int)temp_v30 + (int)*(short *)(temp_v36 + 10),temp_v31,temp_v25);
                    FUN_002bf538();
                    temp_v9 = DAT_0044ea00;
                    temp_v11 = FUN_002c5da8(6,1,0);
                    piVar16 = (int *)(temp_v9 + 0x12ac);
                    temp_v8 = piVar16[*piVar16 + 2];
                    piVar16[*piVar16 + 2] = temp_v11;
                    if (*(char *)(temp_v9 + 0x12c4) != '\0' || temp_v8 != temp_v11) {
                      (**(romwright_code **)(temp_v9 + 0x12c8))();
                      *(unsigned char *)(temp_v9 + 0x12c4) = 0;
                    }
                    temp_v22 = (short *)0xde;
                    FUN_002b0750(2,0x1a,0x77,(unsigned char *)((int)temp_v28 + temp_v32),
                                 (int)*(short *)(temp_v36 + 10) + (int)temp_v30,temp_v31,temp_v25);
                    temp_v9 = DAT_0044ea00;
                    temp_v11 = FUN_002c5da8(6,7,0);
                    piVar16 = (int *)(temp_v9 + 0x12ac);
                    temp_v8 = piVar16[*piVar16 + 2];
                    piVar16[*piVar16 + 2] = temp_v11;
                    if (*(char *)(temp_v9 + 0x12c4) != '\0' || temp_v8 != temp_v11) {
                      (**(romwright_code **)(temp_v9 + 0x12c8))();
                      *(unsigned char *)(temp_v9 + 0x12c4) = 0;
                    }
                    FUN_002bf538();
                  }
                }
                else if ((int)temp_v33 < (int)psVar24) {
                  temp_v21 = 200;
                  temp_v9 = FUN_002bf4f8(0x1a,0x6f);
                  psVar11 = *(short **)(temp_v9 + 0xc);
                  temp_v9 = aeabi_idivmod((int)*psVar11 << 0xc,temp_v21);
                  temp_v9 = temp_v9 * (short)(temp_v3 - temp_v2) >> 0xc;
                  if ((0 < (short)(temp_v3 - temp_v2)) && (temp_v9 < 1)) {
                    temp_v9 = 1;
                  }
                  temp_v22 = (short *)0xdd;
                  FUN_002b0750(2,0x1a,0x6f,(unsigned char *)((int)temp_v28 + temp_v32),
                               (int)*(short *)(temp_v36 + 10) + (int)temp_v30,temp_v9,(int)psVar11[1]
                              );
                }
                else if ((int)psVar24 < (int)temp_v33) {
                  temp_v21 = 200;
                  temp_v9 = FUN_002bf4f8(0x1a,0x71);
                  psVar11 = *(short **)(temp_v9 + 0xc);
                  temp_v9 = aeabi_idivmod((int)*psVar11 << 0xc,temp_v21);
                  temp_v9 = temp_v9 * (short)(temp_v2 - temp_v3) >> 0xc;
                  if ((0 < (short)(temp_v2 - temp_v3)) && (temp_v9 < 1)) {
                    temp_v9 = 1;
                  }
                  temp_v22 = (short *)0xdd;
                  FUN_002b0750(2,0x1a,0x71,(unsigned char *)((temp_v32 - temp_v9) + (int)temp_v28),
                               (int)*(short *)(temp_v36 + 10) + (int)temp_v30,temp_v9,(int)psVar11[1]
                              );
                }
              }
              else {
                temp_v9 = (int)*(short *)(temp_v36 + 10) + (int)temp_v30;
                if (psVar24 == (short *)0x3e7) {
                  FUN_002bf288(2,0x1a,0x74,temp_v28,temp_v9,0xdd);
                  FUN_002b659c((unsigned char *)((int)temp_v28 + (int)temp_v23[4]),
                               (int)*(short *)(temp_v36 + 10) + (int)temp_v23[5] + (int)temp_v30,
                               (int)**(short **)(temp_v23 + 6),(int)(*(short **)(temp_v23 + 6))[1]);
                  temp_v9 = DAT_0044ea00;
                  temp_v11 = FUN_002c5da8(6,1,0);
                  piVar16 = (int *)(temp_v9 + 0x12ac);
                  temp_v8 = piVar16[*piVar16 + 2];
                  piVar16[*piVar16 + 2] = temp_v11;
                  if (*(char *)(temp_v9 + 0x12c4) != '\0' || temp_v8 != temp_v11) {
                    (**(romwright_code **)(temp_v9 + 0x12c8))();
                    *(unsigned char *)(temp_v9 + 0x12c4) = 0;
                  }
                  temp_v9 = FUN_002bed98(temp_v34 + 0x44);
                  temp_v12 = *(short *)(temp_v36 + 10);
                  temp_v9 = temp_v9 + (int)temp_v30;
                  temp_v11 = FUN_002beda4(temp_v34 + 0x44);
                  FUN_002bf288(2,0x1a,0x75,(unsigned char *)(temp_v11 + (int)temp_v28),temp_v9 + temp_v12,
                               0xdd);
                  temp_v9 = DAT_0044ea00;
                  temp_v11 = FUN_002c5da8(6,7,0);
                  piVar16 = (int *)(temp_v9 + 0x12ac);
                  temp_v8 = piVar16[*piVar16 + 2];
                  piVar16[*piVar16 + 2] = temp_v11;
                  if (*(char *)(temp_v9 + 0x12c4) != '\0' || temp_v8 != temp_v11) {
                    (*(romwright_code *)piVar16[7])();
                    *(unsigned char *)(piVar16 + 6) = 0;
                  }
                }
                else {
                  FUN_002bf288(2,0x1a,0x72,temp_v28,temp_v9,0xdd);
                  FUN_002b659c((unsigned char *)((int)temp_v28 + (int)temp_v23[4]),
                               (int)*(short *)(temp_v36 + 10) + (int)temp_v23[5] + (int)temp_v30,
                               (int)**(short **)(temp_v23 + 6),(int)(*(short **)(temp_v23 + 6))[1]);
                  temp_v9 = DAT_0044ea00;
                  temp_v11 = FUN_002c5da8(6,1,0);
                  piVar16 = (int *)(temp_v9 + 0x12ac);
                  temp_v8 = piVar16[*piVar16 + 2];
                  piVar16[*piVar16 + 2] = temp_v11;
                  if (*(char *)(temp_v9 + 0x12c4) != '\0' || temp_v8 != temp_v11) {
                    (**(romwright_code **)(temp_v9 + 0x12c8))();
                    *(unsigned char *)(temp_v9 + 0x12c4) = 0;
                  }
                  temp_v9 = FUN_002bed98(temp_v34 + 0x44);
                  temp_v12 = *(short *)(temp_v36 + 10);
                  temp_v9 = temp_v9 + (int)temp_v30;
                  temp_v11 = FUN_002beda4(temp_v34 + 0x44);
                  FUN_002bf288(2,0x1a,0x73,(unsigned char *)(temp_v11 + (int)temp_v28),temp_v9 + temp_v12,
                               0xdd);
                  temp_v9 = DAT_0044ea00;
                  temp_v11 = FUN_002c5da8(6,7,0);
                  piVar16 = (int *)(temp_v9 + 0x12ac);
                  temp_v8 = piVar16[*piVar16 + 2];
                  piVar16[*piVar16 + 2] = temp_v11;
                  if (*(char *)(temp_v9 + 0x12c4) != '\0' || temp_v8 != temp_v11) {
                    (*(romwright_code *)piVar16[7])();
                    *(unsigned char *)(piVar16 + 6) = 0;
                  }
                }
                FUN_002b64b8();
              }
            }
            FUN_002bed3c();
            temp_v13 = temp_v13 + 1;
          } while (temp_v13 < 5);
          FUN_00288ef0(&temp_v28,&temp_v30,0x17);
          FUN_002be304(0xff);
          if (*pcVar21 == '\0') {
            psVar24 = (short *)(int)*(short *)(temp_v6 + 0x1310);
            if (*(char *)(temp_v4 + 0x1e62) != '\0') {
              FUN_002bf288(2,0x1a,0xe6,temp_v28,temp_v30,0xdd);
              psVar11 = (short *)((int)*(short *)(temp_v10 + 0x18c0) - (int)*(short *)(temp_v6 + 0x1310)
                                 );
              if ((int)psVar11 < 0) {
                psVar24 = (short *)-(int)psVar11;
              }
              if (0 < (int)psVar11) {
                psVar24 = psVar11;
              }
              if (psVar11 != (short *)0x0) {
                temp_v13 = FUN_002bf4f8(0x1a,0xdb);
                if (psVar24 + -5 < (short *)0x5a) {
                  temp_v13 = FUN_002bf4f8(0x1a,0xda);
                }
                else if (psVar24 + -0x32 < (short *)0x384) {
                  temp_v13 = FUN_002bf4f8(0x1a,0xd9);
                }
                if ((int)psVar11 < 0) {
                  FUN_002be304(0xfa282d00);
                  temp_v22 = (short *)&LAB_001a6434;
                  temp_v23 = psVar24;
                  FUN_002bdf94(2,(unsigned char *)((int)temp_v28 + (int)*(short *)(temp_v13 + 8)),
                               (int)temp_v30 + (int)*(short *)(temp_v13 + 10),0,3,0xdd,&LAB_001a6438);
                }
                else {
                  FUN_002be304(0x72e02700);
                  temp_v22 = (short *)&LAB_001a6444;
                  temp_v23 = psVar24;
                  FUN_002bdf94(2,(unsigned char *)((int)temp_v28 + (int)*(short *)(temp_v13 + 8)),
                               (int)temp_v30 + (int)*(short *)(temp_v13 + 10),0,3,0xdd,&LAB_001a6438);
                }
              }
              temp_v9 = (int)*(short *)(temp_v10 + 0x18c0);
              temp_v11 = (int)*(short *)(temp_v6 + 0x1310);
              temp_v13 = temp_v9;
              if (temp_v9 < temp_v11) {
                temp_v13 = -0x23f0eb01;
              }
              if (temp_v9 == temp_v11) {
                temp_v13 = 0xff;
              }
              if (temp_v11 < temp_v9) {
                FUN_002be304(0x72e027ff);
              }
              else {
                FUN_002be304(temp_v13);
              }
              psVar24 = (short *)(int)*(short *)(temp_v10 + 0x18c0);
            }
            temp_v13 = FUN_002bf4f8(0x1a,0x8d);
            temp_v22 = psVar24;
            FUN_002bdf94(0,(unsigned char *)((int)temp_v28 + (int)*(short *)(temp_v13 + 8)),
                         (int)temp_v30 + (int)*(short *)(temp_v13 + 10),1,3,0xdd,&LAB_001a6450);
            if (*temp_v38 != '\t') {
              temp_v13 = FUN_002c09d0(0x410);
              if (temp_v13 != 0) {
                psVar24 = (short *)(int)*(short *)(temp_v6 + 0x1312);
                if (*(char *)(temp_v4 + 0x1e62) != '\0') {
                  FUN_002bf288(2,0x1a,0xe7,temp_v28,temp_v30,0xdd);
                  psVar11 = (short *)((int)*(short *)(temp_v10 + 0x18c2) -
                                     (int)*(short *)(temp_v6 + 0x1312));
                  if ((int)psVar11 < 0) {
                    psVar24 = (short *)-(int)psVar11;
                  }
                  if (0 < (int)psVar11) {
                    psVar24 = psVar11;
                  }
                  if (psVar11 != (short *)0x0) {
                    temp_v13 = FUN_002bf4f8(0x1a,0xe1);
                    if (psVar24 + -5 < (short *)0x5a) {
                      temp_v13 = FUN_002bf4f8(0x1a,0xe0);
                    }
                    else if (psVar24 + -0x32 < (short *)0x384) {
                      temp_v13 = FUN_002bf4f8(0x1a,0xdf);
                    }
                    if ((int)psVar11 < 0) {
                      FUN_002be304(0xfa282d00);
                      temp_v22 = (short *)&LAB_001a6434;
                      temp_v23 = psVar24;
                      FUN_002bdf94(2,(unsigned char *)((int)temp_v28 + (int)*(short *)(temp_v13 + 8)),
                                   (int)temp_v30 + (int)*(short *)(temp_v13 + 10),0,3,0xdd,
                                   &LAB_001a6438);
                    }
                    else {
                      FUN_002be304(0x72e02700);
                      temp_v22 = (short *)&LAB_001a6444;
                      temp_v23 = psVar24;
                      FUN_002bdf94(2,(unsigned char *)((int)temp_v28 + (int)*(short *)(temp_v13 + 8)),
                                   (int)temp_v30 + (int)*(short *)(temp_v13 + 10),0,3,0xdd,
                                   &LAB_001a6438);
                    }
                  }
                  temp_v9 = (int)*(short *)(temp_v10 + 0x18c2);
                  temp_v11 = (int)*(short *)(temp_v6 + 0x1312);
                  temp_v13 = temp_v9;
                  if (temp_v9 < temp_v11) {
                    temp_v13 = -0x23f0eb01;
                  }
                  if (temp_v9 == temp_v11) {
                    temp_v13 = 0xff;
                  }
                  if (temp_v11 < temp_v9) {
                    FUN_002be304(0x72e027ff);
                  }
                  else {
                    FUN_002be304(temp_v13);
                  }
                  psVar24 = (short *)(int)*(short *)(temp_v10 + 0x18c2);
                }
                temp_v13 = FUN_002bf4f8(0x1a,0x91);
                temp_v22 = psVar24;
                FUN_002bdf94(0,(unsigned char *)((int)*(short *)(temp_v13 + 8) + (int)temp_v28),
                             (int)*(short *)(temp_v13 + 10) + (int)temp_v30,1,3,0xdd,&LAB_001a6450);
              }
            }
            else if (*(char *)(temp_v4 + 0x1eb9) == '\x01') {
              psVar24 = (short *)(int)*(short *)(temp_v6 + 0x1312);
              if (*(char *)(temp_v4 + 0x1e62) != '\0') {
                FUN_002bf288(2,0x1a,0xe7,temp_v28,temp_v30,0xdd);
                psVar11 = (short *)((int)*(short *)(temp_v10 + 0x18c2) -
                                   (int)*(short *)(temp_v6 + 0x1312));
                if ((int)psVar11 < 0) {
                  psVar24 = (short *)-(int)psVar11;
                }
                if (0 < (int)psVar11) {
                  psVar24 = psVar11;
                }
                if (psVar11 != (short *)0x0) {
                  temp_v13 = FUN_002bf4f8(0x1a,0xe1);
                  if (psVar24 + -5 < (short *)0x5a) {
                    temp_v13 = FUN_002bf4f8(0x1a,0xe0);
                  }
                  else if (psVar24 + -0x32 < (short *)0x384) {
                    temp_v13 = FUN_002bf4f8(0x1a,0xdf);
                  }
                  if ((int)psVar11 < 0) {
                    FUN_002be304(0xfa282d00);
                    temp_v22 = (short *)&LAB_001a6434;
                    temp_v23 = psVar24;
                    FUN_002bdf94(2,(unsigned char *)((int)temp_v28 + (int)*(short *)(temp_v13 + 8)),
                                 (int)temp_v30 + (int)*(short *)(temp_v13 + 10),0,3,0xdd,&LAB_001a6438
                                );
                  }
                  else {
                    FUN_002be304(0x72e02700);
                    temp_v22 = (short *)&LAB_001a6444;
                    temp_v23 = psVar24;
                    FUN_002bdf94(2,(unsigned char *)((int)temp_v28 + (int)*(short *)(temp_v13 + 8)),
                                 (int)temp_v30 + (int)*(short *)(temp_v13 + 10),0,3,0xdd,&LAB_001a6438
                                );
                  }
                }
                temp_v9 = (int)*(short *)(temp_v10 + 0x18c2);
                temp_v11 = (int)*(short *)(temp_v6 + 0x1312);
                temp_v13 = temp_v9;
                if (temp_v9 < temp_v11) {
                  temp_v13 = -0x23f0eb01;
                }
                if (temp_v9 == temp_v11) {
                  temp_v13 = 0xff;
                }
                if (temp_v11 < temp_v9) {
                  FUN_002be304(0x72e027ff);
                }
                else {
                  FUN_002be304(temp_v13);
                }
                psVar24 = (short *)(int)*(short *)(temp_v10 + 0x18c2);
              }
              temp_v13 = FUN_002bf4f8(0x1a,0x91);
              temp_v22 = psVar24;
              FUN_002bdf94(0,(unsigned char *)((int)temp_v28 + (int)*(short *)(temp_v13 + 8)),
                           (int)temp_v30 + (int)*(short *)(temp_v13 + 10),1,3,0xdd,&LAB_001a6450);
            }
          }
          FUN_002bed3c();
          temp_v0 = *pcVar21;
          temp_v15 = temp_v0 == '\x04';
          if (temp_v15) {
            temp_v0 = *(char *)(temp_v4 + 0x1e62);
          }
          if (temp_v15 && temp_v0 == '\0') {
            FUN_002bf288(2,0x1a,0x93,temp_v28,temp_v30,0xdd);
          }
          temp_v9 = 0;
          temp_v13 = 0;
          if ((*(char *)(temp_v4 + 0x1e71) != '\0') ||
             ((*pcVar21 != '\r' &&
              ((*pcVar21 != '\x06' || (temp_v10 = FUN_0029e9cc(*puVar22), temp_v10 != 0)))))) {
            temp_v7 = 1;
            temp_v10 = 0;
            temp_v11 = 5;
            do {
              if (((unsigned int)*(unsigned short *)(temp_v6 + 0x1314) & (1 << (temp_v7 & 0xff))) != 0) {
                temp_v13 = temp_v13 + 1;
              }
              if (((unsigned int)*(unsigned short *)(temp_v6 + 0x1314) & (1 << ((temp_v7 + 1) & 0xff))) != 0) {
                temp_v10 = temp_v10 + 1;
              }
              temp_v11 = temp_v11 - 1;
              temp_v7 = temp_v7 + 2;
            } while (temp_v11 != 0);
            temp_v7 = 1;
            temp_v13 = 6 - (temp_v13 + temp_v10);
            do {
              if (((unsigned int)*(unsigned short *)(temp_v6 + 0x1314) & (1 << (temp_v7 & 0xff))) != 0) {
                FUN_00288ef0(&temp_v28,&temp_v30,(0x1d - temp_v9) - temp_v13);
                temp_v11 = temp_v13 + temp_v9;
                temp_v10 = FUN_002bf4f8(0x1a,temp_v11 + 0xa9);
                FUN_00288844((unsigned char *)((int)*(short *)(temp_v10 + 8) + (int)temp_v28),
                             (int)*(short *)(temp_v10 + 10) + (int)temp_v30,0xd3);
                FUN_00288790((int)(short)temp_v7,
                             (unsigned char *)((int)*(short *)(temp_v10 + 8) + (int)temp_v28),
                             (int)*(short *)(temp_v10 + 10) + (int)temp_v30,0xd3);
                temp_v10 = FUN_002bf4f8(0x1a,temp_v11 + 0xaf);
                FUN_002d8514((int)(short)temp_v7,
                             (unsigned char *)((int)temp_v28 + (int)*(short *)(temp_v10 + 8)),
                             (int)temp_v30 + (int)*(short *)(temp_v10 + 10),0xd3);
                temp_v9 = temp_v9 + 1;
                if (temp_v9 >= 6) break;
              }
              temp_v7 = temp_v7 + 1;
            } while ((int)temp_v7 < 0xb);
          }
          temp_v17 = (float)temp_v19;
          if ((*temp_v38 == '\x03') && (*(char *)(temp_v5 + 0x12f0) != '\0')) {
            FUN_00288ef0(&temp_v28,&temp_v30,10);
            FUN_002bf380(2,0x1a,1,temp_v28,temp_v30,0xdd);
            temp_v13 = 0;
LAB_001a6868:
            temp_v12 = *(short *)(temp_v6 + 0x133a);
            temp_v14 = 0x3d;
LAB_001a68b0:
            do {
              FUN_00288ef0(&temp_v28,&temp_v30,10);
              temp_v9 = FUN_002bf4f8(0x1a,temp_v13 + 0xa2);
              if (*(char *)(temp_v5 + 0x12ee) == temp_v13) {
                FUN_002bf380(2,0x1a,3,(unsigned char *)((int)*(short *)(temp_v9 + 8) + (int)temp_v28),
                             (int)temp_v30 + (int)*(short *)(temp_v9 + 10),0xdd);
              }
              else {
                FUN_002bf380(2,0x1a,2,(unsigned char *)((int)*(short *)(temp_v9 + 8) + (int)temp_v28),
                             (int)*(short *)(temp_v9 + 10) + (int)temp_v30,0xdd);
              }
              temp_v10 = FUN_002bf4f8(0x1a,0xa0);
              FUN_002be370(temp_v14,(unsigned char *)
                                  ((int)temp_v28 +
                                  (int)*(short *)(temp_v10 + 8) + (int)*(short *)(temp_v9 + 8)),
                           (int)temp_v30 +
                           (int)*(short *)(temp_v9 + 10) + (int)*(short *)(temp_v10 + 10),0xe2,0);
              temp_v10 = FUN_002bf4f8(0x1a,0xa1);
              if (temp_v12 != 0) {
                temp_v11 = FUN_002be650(temp_v12,0);
                if (temp_v11 != 0) {
                  temp_v8 = (int)*(short *)(temp_v9 + 8) + (int)*(short *)(temp_v10 + 8);
                  VectorSignedToFloat((int)*(short *)(temp_v10 + 10) + (int)*(short *)(temp_v9 + 10) +
                                      (int)temp_v30,(unsigned char)(in_fpscr >> 0x16) & 3);
                  VectorSignedToFloat((unsigned char *)((int)temp_v28 + temp_v8),
                                      (unsigned char)(in_fpscr >> 0x16) & 3);
                  FUN_002be5a4(2,0xff,temp_v11,temp_v8);
                }
              }
              else {
                FUN_002be624(temp_v35,&LAB_001a6d40);
                VectorSignedToFloat((int)temp_v30 +
                                    (int)*(short *)(temp_v9 + 10) + (int)*(short *)(temp_v10 + 10),
                                    (unsigned char)(in_fpscr >> 0x16) & 3);
                VectorSignedToFloat((unsigned char *)
                                    ((int)*(short *)(temp_v9 + 8) + (int)*(short *)(temp_v10 + 8) +
                                    (int)temp_v28),(unsigned char)(in_fpscr >> 0x16) & 3);
                FUN_002be5a4(2,0xff,temp_v35,(int)*(short *)(temp_v10 + 10));
              }
              temp_v17 = (float)temp_v19;
              temp_v13 = temp_v13 + 1;
              if (temp_v13 >= 7) break;
              while( 1 ) {
                while( 1 ) {
                  temp_v12 = 0;
                  if (temp_v13 == 0) goto LAB_001a6868;
                  if (temp_v13 == 1) break;
                  if (temp_v13 != 2) {
                    if (temp_v13 == 3) {
                      temp_v14 = 0x12d;
                      temp_v12 = *(short *)(temp_v6 + 0x1340);
                    }
                    else if (temp_v13 == 4) {
                      temp_v14 = 0x1a5;
                      temp_v12 = *(short *)(temp_v6 + 0x1342);
                    }
                    else if (temp_v13 == 5) {
                      temp_v14 = 0x21d;
                      temp_v12 = *(short *)(temp_v6 + 0x1344);
                    }
                    else if (temp_v13 == 6) {
                      temp_v14 = 0x295;
                      temp_v12 = *(short *)(temp_v6 + 0x1346);
                    }
                    goto LAB_001a68b0;
                  }
                  temp_v9 = FUN_002c09d0(0x410);
                  if (temp_v9 != 0) {
                    temp_v14 = 0x30d;
                    temp_v12 = *(short *)(temp_v6 + 0x133e);
                    goto LAB_001a68b0;
                  }
                  temp_v13 = 3;
                }
                temp_v9 = FUN_002c09d0(0x410);
                if (temp_v9 != 0) break;
                temp_v13 = 2;
              }
              temp_v12 = *(short *)(temp_v6 + 0x133c);
              temp_v14 = 0xb5;
            } while( 1 );
          }
        }
        else {
          FUN_00288ef0(&temp_v28,&temp_v30,0xe);
          FUN_002bf288(2,0x1a,0xc2,temp_v28,temp_v30,0xdd);
          temp_v7 = (unsigned int)*(unsigned short *)(temp_v4 + 0x1eb6);
          FUN_00288e68(temp_v7);
          temp_v13 = FUN_002bf4f8(0x1a,0xc3);
          FUN_002b6c34((int)(short)temp_v7,(unsigned char *)((int)temp_v28 + (int)*(short *)(temp_v13 + 8))
                       ,(int)temp_v30 + (int)*(short *)(temp_v13 + 10),0xe2,0,0);
          temp_v13 = FUN_002bf4f8(0x1a,0xc4);
          temp_v21 = FUN_002bce00(temp_v7);
          VectorSignedToFloat((int)temp_v30 + (int)*(short *)(temp_v13 + 10),
                              (unsigned char)(in_fpscr >> 0x16) & 3);
          VectorSignedToFloat((unsigned char *)((int)temp_v28 + (int)*(short *)(temp_v13 + 8)),
                              (unsigned char)(in_fpscr >> 0x16) & 3);
          FUN_002be5a4(3,0xffffffff,temp_v21,(int)*(short *)(temp_v13 + 8));
        }
      }
    }
  }
LAB_001a6a8c:
  if (*(char *)(temp_v4 + 0x1eb4) != '\0') {
    FUN_002ba12c(DAT_0044ea00);
    temp_v28 = (short *)(int)temp_v20;
    if (temp_v17 < *(float *)(temp_v34 + 0x294)) {
      FUN_002bf538();
      temp_v4 = DAT_0044ea00;
      temp_v13 = FUN_002c5da8(6,1,0);
      piVar16 = (int *)(temp_v4 + 0x12ac);
      temp_v6 = piVar16[*piVar16 + 2];
      piVar16[*piVar16 + 2] = temp_v13;
      if (*(char *)(temp_v4 + 0x12c4) != '\0' || temp_v6 != temp_v13) {
        (**(romwright_code **)(temp_v4 + 0x12c8))();
        *(unsigned char *)(temp_v4 + 0x12c4) = 0;
      }
      FUN_002bf288(2,0x1a,0xc6,temp_v28,0,0xdd);
      temp_v4 = DAT_0044ea00;
      temp_v13 = FUN_002c5da8(6,7,0);
      piVar16 = (int *)(temp_v4 + 0x12ac);
      temp_v6 = piVar16[*piVar16 + 2];
      piVar16[*piVar16 + 2] = temp_v13;
      if (*(char *)(temp_v4 + 0x12c4) != '\0' || temp_v6 != temp_v13) {
        (**(romwright_code **)(temp_v4 + 0x12c8))();
        *(unsigned char *)(temp_v4 + 0x12c4) = 0;
      }
      FUN_002bf538();
    }
    if (temp_v17 < *(float *)(temp_v34 + 800)) {
      FUN_002bf538();
      temp_v4 = DAT_0044ea00;
      temp_v13 = FUN_002c5da8(6,1,0);
      piVar16 = (int *)(temp_v4 + 0x12ac);
      temp_v6 = piVar16[*piVar16 + 2];
      piVar16[*piVar16 + 2] = temp_v13;
      if (*(char *)(temp_v4 + 0x12c4) != '\0' || temp_v6 != temp_v13) {
        (**(romwright_code **)(temp_v4 + 0x12c8))();
        *(unsigned char *)(temp_v4 + 0x12c4) = 0;
      }
      FUN_002bf288(2,0x1a,0xc6,temp_v28,0,0xdd);
      temp_v4 = DAT_0044ea00;
      temp_v13 = FUN_002c5da8(6,7,0);
      piVar16 = (int *)(temp_v4 + 0x12ac);
      temp_v6 = piVar16[*piVar16 + 2];
      piVar16[*piVar16 + 2] = temp_v13;
      if (*(char *)(temp_v4 + 0x12c4) != '\0' || temp_v6 != temp_v13) {
        (**(romwright_code **)(temp_v4 + 0x12c8))();
        *(unsigned char *)(temp_v4 + 0x12c4) = 0;
      }
      FUN_002bf538();
    }
  }
  FUN_002bf538();
  temp_v4 = DAT_0044ea00;
  piVar16 = (int *)(DAT_0044ea00 + 0x124c);
  temp_v13 = *piVar16;
  temp_v6 = piVar16[temp_v13 + 2];
  *piVar16 = temp_v13 - 1;
  if (*(char *)(temp_v4 + 0x1264) != '\0' || temp_v6 != piVar16[temp_v13 + 1]) {
    (**(romwright_code **)(temp_v4 + 0x1268))();
    *(unsigned char *)(temp_v4 + 0x1264) = 0;
  }
  temp_v4 = DAT_0044ea00;
  temp_v13 = FUN_002c5da8(6,7,0);
  piVar16 = (int *)(temp_v4 + 0x12ac);
  temp_v6 = piVar16[*piVar16 + 2];
  piVar16[*piVar16 + 2] = temp_v13;
  if (*(char *)(temp_v4 + 0x12c4) != '\0' || temp_v6 != temp_v13) {
    (**(romwright_code **)(temp_v4 + 0x12c8))();
    *(unsigned char *)(temp_v4 + 0x12c4) = 0;
  }
  FUN_002c198c(DAT_0044ea00);
  FUN_002c18e4(DAT_0044ea00);
  return 0;
}
