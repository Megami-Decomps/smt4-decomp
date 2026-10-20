/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a26dc` (_code @ 0x1a26dc, 0xb40 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00290994(...);
int FUN_0029a17c(...);
int FUN_002bed98(...);
int FUN_002beda4(...);
int FUN_002c18e4(...);
int FUN_002c198c(...);

int FUN_00288f60(void);
int FUN_002b46f8(...);
int FUN_002b6dd8(...);
int FUN_002be5a4(...);
int FUN_002be624(...);
int FUN_002bf288(...);
int FUN_002bf380(...);
int FUN_002bf4f8(...);
int FUN_002bf538(void);
int FUN_002c39a4(int);
int FUN_002fc15c(...);
int VectorSignedToFloat(...);

typedef int romwright_code(...);
/* stack frame of void: 9 slot(s), 34 byte(s) */
typedef struct {
    unsigned short spAC; /* 0xac: local_ac */
    unsigned int spB0; /* 0xb0: local_b0 */
    unsigned int sp140; /* 0x140: local_140 */
    unsigned int sp144; /* 0x144: local_144 */
    unsigned int sp150; /* 0x150: local_150 */
    unsigned int sp154; /* 0x154: local_154 */
    unsigned int sp158; /* 0x158: local_158 */
    unsigned int sp15C; /* 0x15c: local_15c */
    unsigned int sp160; /* 0x160: local_160 */
} void_stack;

extern unsigned char LAB_001a2aa8; /* 0x1a2aa8 */
extern unsigned char LAB_001a2ab0; /* 0x1a2ab0 */
extern unsigned char LAB_001a31cc; /* 0x1a31cc */
extern unsigned char LAB_001f62dc; /* 0x1f62dc */
extern int DAT_0043dd24; /* 0x43dd24 */
extern int DAT_0044ea00; /* 0x44ea00 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00288f60. */
/* Supplied declaration required: FUN_00290994. */
/* Supplied declaration required: FUN_0029a17c. */
extern int FUN_0029d644(int);
extern int FUN_0029d65c(int);
extern int FUN_0029ee54(int);
extern int FUN_0029efa8(int);
extern int FUN_0029efc0(int);
/* Supplied declaration required: FUN_002b46f8. */
/* Supplied declaration required: FUN_002b6dd8. */
/* Supplied declaration required: FUN_002be5a4. */
/* Supplied declaration required: FUN_002be624. */
/* Supplied declaration required: FUN_002bed98. */
/* Supplied declaration required: FUN_002beda4. */
/* Supplied declaration required: FUN_002bf288. */
/* Supplied declaration required: FUN_002bf380. */
/* Supplied declaration required: FUN_002bf4f8. */
/* Supplied declaration required: FUN_002bf538. */
extern int FUN_002c09d0(unsigned int);
extern unsigned int FUN_002c0c74(unsigned int);
extern unsigned int FUN_002c0cc4(void);
extern unsigned int FUN_002c0cec(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c18e4. */
/* Supplied declaration required: FUN_002c198c. */
/* Supplied declaration required: FUN_002c39a4. */
extern int FUN_002c5d80(unsigned int, unsigned int);
extern int FUN_002e0d34(unsigned int);
/* Supplied declaration required: FUN_002fc15c. */


unsigned int FUN_001a26dc(void)

{
/* irregular: irregular input(s): in_fpscr; 18 native warning(s); review required */
  unsigned char temp_v0;
  short temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned char *puVar6;
  unsigned short *puVar7;
  unsigned int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  int temp_v8;
  int temp_v9;
  int *piVar13;
  unsigned int temp_v10;
  unsigned int in_fpscr;
  unsigned char temp_v11 [128];
  int temp_v12;
  unsigned short temp_v13 [68];
  
  temp_v2 = DAT_0043dd24;
  temp_v10 = 0;
  if (*(int *)(DAT_0043dd24 + 0x744) == 0) {
    return 0;
  }
  FUN_002c39a4(DAT_0044ea00);
  temp_v4 = DAT_0044ea00;
  temp_v3 = FUN_002c5d80(1,0);
  piVar13 = (int *)(temp_v4 + 0x124c);
  temp_v7 = *piVar13;
  temp_v8 = piVar13[temp_v7 + 2];
  *piVar13 = temp_v7 + 1;
  piVar13[temp_v7 + 3] = temp_v3;
  if (*(char *)(temp_v4 + 0x1264) != '\0' || temp_v8 != temp_v3) {
    (**(romwright_code **)(temp_v4 + 0x1268))();
    *(unsigned char *)(temp_v4 + 0x1264) = 0;
  }
  temp_v4 = *(int *)(temp_v2 + 0x744);
  if (*(char *)(temp_v2 + 0x74e) != '\x02') {
    FUN_002bf380(2,0x1e,0,0,0,0xc9);
    FUN_002bf380(2,0x1e,3,0,0,0xd3);
    if (*(char *)(temp_v2 + 0x74e) == '\0') {
      temp_v10 = 0x23;
    }
    else if (*(char *)(temp_v2 + 0x74e) == '\x01') {
      temp_v10 = 0x24;
    }
    FUN_002bf288(2,0x1e,temp_v10,0,0,0xd8);
  }
  else {
    temp_v3 = 0;
    if ((temp_v4 == 1) && (temp_v3 = *(int *)(temp_v2 + 0x748) * 2 - 0xc, 0 < temp_v3)) {
      temp_v3 = 0;
    }
    FUN_002bf288(2,0x1e,0x28,0,temp_v3,0xc9);
    FUN_002bf288(2,0x1e,0x29,0,temp_v3,0xc9);
    temp_v7 = FUN_002bf4f8(0x1e,0x2a);
    temp_v8 = FUN_002e0d34(*(unsigned int *)(temp_v2 + 0x7ec));
    if (temp_v8 != 0) {
      FUN_002be624(temp_v11,&LAB_001a2aa8);
    }
    else {
      FUN_002be624(temp_v11,&LAB_001a2ab0);
    }
    puVar6 = temp_v11;
    FUN_002b6dd8(puVar6,2);
    temp_v8 = (int)*(short *)(temp_v7 + 8) + ((int)**(short **)(temp_v7 + 0xc) - (int)puVar6) / 2;
    VectorSignedToFloat(*(short *)(temp_v7 + 10) + temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat(temp_v8,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_002be5a4(2,0xffffffff,temp_v11,temp_v8);
  }
  temp_v12 = temp_v2 + 0x788;
  temp_v3 = 0;
  do {
    if ((temp_v4 == 1) || (temp_v7 = FUN_0029efa8(temp_v12), temp_v7 != temp_v3)) {
      FUN_002bf538();
      if (*(char *)(temp_v2 + 0x74e) != '\x02') {
        temp_v7 = FUN_002bf4f8(0x1e,temp_v3 + 7);
      }
      else {
        temp_v7 = FUN_002bf4f8(0x1e,temp_v3 + 0x2b);
      }
      FUN_002bf380(2,0x1e,1,(int)*(short *)(temp_v7 + 8),(int)*(short *)(temp_v7 + 10),0xd3);
      temp_v10 = 0xff;
      temp_v8 = FUN_0029efc0(temp_v12);
      if ((*(char *)(temp_v8 + temp_v3 + temp_v2 + 0x758) == 'B') &&
         ((temp_v8 = FUN_002c09d0(500), temp_v8 != 0 || (temp_v8 = FUN_002c09d0(0x1e1), temp_v8 != 0))))
      {
        temp_v10 = 0x5a5a5aff;
      }
      temp_v8 = FUN_0029efc0(temp_v12);
      if ((*(char *)(temp_v8 + temp_v3 + temp_v2 + 0x758) == 'A') &&
         ((temp_v8 = FUN_002c09d0(499), temp_v8 != 0 || (temp_v8 = FUN_002c09d0(0x1d8), temp_v8 != 0))))
      {
        temp_v10 = 0x5a5a5aff;
      }
      temp_v8 = FUN_0029efc0(temp_v12);
      if (*(char *)(temp_v8 + temp_v3 + temp_v2 + 0x758) != '=') {
        if (*(char *)(temp_v2 + 0x74e) != '\x02') {
          temp_v8 = FUN_0029efc0(temp_v12);
          temp_v0 = *(unsigned char *)(temp_v8 + temp_v3 + temp_v2 + 0x758);
          if (temp_v0 >= 0x4c) {
            puVar7 = (unsigned short *)0x0;
          }
          else if (temp_v0 != 0x3d) {
            temp_v5 = FUN_002c0cec(0x38,0);
            temp_v6 = FUN_002c0cc4();
            temp_v5 = FUN_002c0c74(temp_v5);
            temp_v13[0] = (unsigned short)temp_v0;
            puVar7 = temp_v13;
            FUN_002b46f8(puVar7,temp_v6,temp_v5,0x72,&LAB_001f62dc);
            puVar7 = puVar7 + 1;
          }
          else {
            puVar7 = (unsigned short *)FUN_00288f60();
          }
        }
        else {
          temp_v8 = FUN_0029efc0(temp_v12);
          puVar7 = (unsigned short *)(unsigned int)*(unsigned char *)(temp_v8 + temp_v3 + temp_v2 + 0x758);
          FUN_002fc15c(puVar7);
        }
        FUN_002be624(temp_v11,&LAB_001a2aa8,puVar7);
      }
      else {
        temp_v5 = FUN_00288f60();
        FUN_002be624(temp_v11,&LAB_001a2aa8,temp_v5);
        temp_v8 = FUN_002c09d0(0x668);
        if (((temp_v8 != 0) && (temp_v8 = FUN_002c09d0(0x1d7), temp_v8 == 0)) ||
           (temp_v8 = FUN_002c09d0(0x263), temp_v8 != 0)) {
          temp_v10 = 0x5a5a5aff;
        }
        temp_v8 = FUN_002c09d0(0x13b);
        if ((((temp_v8 != 0) || (temp_v8 = FUN_002c09d0(0x1a0), temp_v8 != 0)) ||
            (temp_v8 = FUN_002c09d0(0x1ba), temp_v8 != 0)) &&
           ((temp_v8 = FUN_002c09d0(0x18c), temp_v8 == 0 &&
            (temp_v8 = FUN_002c09d0(0x1d8), temp_v8 == 0)))) {
          temp_v10 = 0x5a5a5aff;
        }
      }
      temp_v8 = FUN_002bf4f8(0x1e,6);
      puVar6 = temp_v11;
      FUN_002b6dd8(puVar6,2);
      temp_v9 = (int)*(short *)(temp_v7 + 8) + (int)*(short *)(temp_v8 + 8) +
               ((int)**(short **)(temp_v8 + 0xc) - (int)puVar6) / 2;
      VectorSignedToFloat((int)*(short *)(temp_v7 + 10) + (int)*(short *)(temp_v8 + 10),
                          (unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat(temp_v9,(unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_002be5a4(2,temp_v10,temp_v11,temp_v9);
      FUN_002bf538();
    }
    temp_v3 = temp_v3 + 1;
    if (*(char *)(DAT_0043dd24 + 0x74e) == '\x02') {
      temp_v7 = 10;
    }
    else {
      temp_v7 = 9;
    }
  } while (temp_v3 < temp_v7);
  if (temp_v4 != 1) {
    temp_v4 = FUN_0029efa8(temp_v12);
    if (*(char *)(temp_v2 + 0x74e) != '\x02') {
      temp_v3 = FUN_002bf4f8(0x1e,temp_v4 + 0x18);
    }
    else {
      temp_v3 = FUN_002bf4f8(0x1e,temp_v4 + 0x35);
    }
    FUN_002bf538();
    FUN_002bf380(2,0x1e,2,(int)*(short *)(temp_v3 + 8),(int)*(short *)(temp_v3 + 10),0xdd);
    FUN_002bf538();
    FUN_002bf288(2,0x1e,0x13,(int)*(short *)(temp_v3 + 8),(int)*(short *)(temp_v3 + 10),0xe2);
    if (*(int *)(temp_v2 + 0x744) != 3) {
      temp_v7 = FUN_0029efa8(temp_v12);
      temp_v7 = FUN_0029d65c((int)*(short *)(temp_v2 + temp_v7 * 2 + 0x772));
      if (!((temp_v7 == 1 || temp_v7 == 2) || temp_v7 == 6)) {
        FUN_002bf288(2,0x1e,0x14,(int)*(short *)(temp_v3 + 8),(int)*(short *)(temp_v3 + 10),0xe7);
      }
      else {
        FUN_002bf288(2,0x1e,0x15,(int)*(short *)(temp_v3 + 8),(int)*(short *)(temp_v3 + 10),0xe7);
      }
    }
    else {
      FUN_002bf288(2,0x1e,0x15,(int)*(short *)(temp_v3 + 8),(int)*(short *)(temp_v3 + 10),0xe7);
    }
    temp_v7 = FUN_0029efc0(temp_v12);
    temp_v10 = 0xffffffff;
    if (*(char *)(temp_v7 + temp_v4 + temp_v2 + 0x758) != '=') {
      if (*(int *)(temp_v2 + 0x744) == 3) {
        temp_v10 = 0x72e027ff;
      }
      if (*(char *)(temp_v2 + 0x74e) != '\x02') {
        temp_v7 = FUN_0029efc0(temp_v12);
        temp_v0 = *(unsigned char *)(temp_v7 + temp_v4 + temp_v2 + 0x758);
        if (temp_v0 >= 0x4c) {
          puVar7 = (unsigned short *)0x0;
        }
        else if (temp_v0 != 0x3d) {
          temp_v5 = FUN_002c0cec(0x38,0);
          temp_v6 = FUN_002c0cc4();
          temp_v5 = FUN_002c0c74(temp_v5);
          temp_v13[0] = (unsigned short)temp_v0;
          puVar7 = temp_v13;
          FUN_002b46f8(puVar7,temp_v6,temp_v5,0x72,&LAB_001f62dc);
          puVar7 = puVar7 + 1;
        }
        else {
          puVar7 = (unsigned short *)FUN_00288f60();
        }
      }
      else {
        temp_v7 = FUN_0029efc0(temp_v12);
        puVar7 = (unsigned short *)(unsigned int)*(unsigned char *)(temp_v7 + temp_v4 + temp_v2 + 0x758);
        FUN_002fc15c(puVar7);
      }
      FUN_002be624(temp_v11,&LAB_001a2aa8,puVar7);
    }
    else {
      temp_v5 = FUN_00288f60();
      FUN_002be624(temp_v11,&LAB_001a31cc,temp_v5);
      temp_v4 = FUN_002c09d0(0x668);
      if (((temp_v4 != 0) && (temp_v4 = FUN_002c09d0(0x1d7), temp_v4 == 0)) ||
         (temp_v4 = FUN_002c09d0(0x263), temp_v4 != 0)) {
        temp_v10 = 0x787878ff;
      }
      else if (*(int *)(temp_v2 + 0x744) == 3) {
        temp_v10 = 0x72e027ff;
      }
    }
    temp_v4 = FUN_002bf4f8(0x1e,0x17);
    puVar6 = temp_v11;
    FUN_002b6dd8(puVar6,3);
    temp_v7 = (int)*(short *)(temp_v3 + 8) + (int)*(short *)(temp_v4 + 8) +
             ((int)**(short **)(temp_v4 + 0xc) - (int)puVar6) / 2;
    VectorSignedToFloat((int)*(short *)(temp_v3 + 10) + (int)*(short *)(temp_v4 + 10),
                        (unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat(temp_v7,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_002be5a4(3,temp_v10,temp_v11,temp_v7);
    temp_v7 = FUN_002bf4f8(0x1e,0x14);
    temp_v4 = DAT_0044ea00;
    piVar13 = (int *)(DAT_0044ea00 + 0x130c);
    temp_v8 = piVar13[*piVar13 + 2];
    piVar13[*piVar13 + 2] = 3;
    if (*(char *)(temp_v4 + 0x1324) != '\0' || temp_v8 != 3) {
      (**(romwright_code **)(temp_v4 + 0x1328))();
      *(unsigned char *)(temp_v4 + 0x1324) = 0;
    }
    FUN_0029a17c((int)*(short *)(temp_v3 + 8) + (int)*(short *)(temp_v7 + 8),
                 (int)*(short *)(temp_v3 + 10) + (int)*(short *)(temp_v7 + 10),
                 (int)**(short **)(temp_v7 + 0xc),(int)(*(short **)(temp_v7 + 0xc))[1],1);
    temp_v4 = FUN_002bed98();
    temp_v1 = *(short *)(temp_v3 + 10);
    temp_v7 = FUN_002beda4(temp_v2 + 0x62c);
    FUN_002bf288(2,0x1e,0x16,temp_v7 + *(short *)(temp_v3 + 8),temp_v4 + temp_v1,0xec);
    temp_v4 = DAT_0044ea00;
    piVar13 = (int *)(DAT_0044ea00 + 0x130c);
    temp_v3 = piVar13[*piVar13 + 2];
    piVar13[*piVar13 + 2] = 0;
    if (*(char *)(temp_v4 + 0x1324) != '\0' || temp_v3 != 0) {
      (**(romwright_code **)(temp_v4 + 0x1328))();
      *(unsigned char *)(temp_v4 + 0x1324) = 0;
    }
  }
  temp_v4 = FUN_0029ee54(temp_v12);
  temp_v3 = FUN_0029d644(temp_v12);
  if (temp_v3 < temp_v4) {
    FUN_002bf538();
    temp_v10 = FUN_002bed98(temp_v2 + 0x6b8);
    temp_v5 = FUN_002beda4(temp_v2 + 0x6b8);
    FUN_00290994(temp_v12,temp_v5,temp_v10,0x1e,0x43,0x44,0x45,0x3f,0x41,0x40,0x42,
                 (int)*(short *)(temp_v2 + 0x770),(int)*(short *)(temp_v2 + 0x76c),
                 (int)*(short *)(temp_v2 + 0x76e),0xfb,0);
    FUN_002bf538();
  }
  temp_v2 = DAT_0044ea00;
  piVar13 = (int *)(DAT_0044ea00 + 0x124c);
  temp_v4 = *piVar13;
  temp_v3 = piVar13[temp_v4 + 2];
  *piVar13 = temp_v4 - 1;
  if (*(char *)(temp_v2 + 0x1264) != '\0' || temp_v3 != piVar13[temp_v4 + 1]) {
    (**(romwright_code **)(temp_v2 + 0x1268))();
    *(unsigned char *)(temp_v2 + 0x1264) = 0;
  }
  FUN_002c198c(DAT_0044ea00);
  FUN_002c18e4(DAT_0044ea00);
  return 0;
}

} /* extern "C" */
