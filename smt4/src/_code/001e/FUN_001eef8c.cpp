/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001eef8c` (_code @ 0x1eef8c, 0x15b4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00290994(...);

int FUN_002580d4(...);
int FUN_00288154(...);
int FUN_0029a17c(...);
int FUN_0029e6f0(void);
int FUN_0029efc0(...);
int FUN_002b066c(...);
int FUN_002b6758(...);
int FUN_002b6dd8(...);
int FUN_002b9024(void);
int FUN_002bce30(...);
int FUN_002bd068(...);
int FUN_002bdf94(...);
int FUN_002be304(...);
int FUN_002be5a4(...);
int FUN_002be624(...);
int FUN_002bed3c(void);
int FUN_002bf288(...);
int FUN_002bf380(int, int, int, int, int, int);
int FUN_002bf4f8(...);
int FUN_002bf538(void);
int VectorSignedToFloat(...);

typedef int romwright_code(...);
/* stack frame of param_3: 14 slot(s), 54 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned short spB0; /* 0xb0: local_b0 */
    unsigned int spC0; /* 0xc0: local_c0 */
    unsigned int spC4; /* 0xc4: local_c4 */
    unsigned int spC8; /* 0xc8: local_c8 */
    unsigned int spCC; /* 0xcc: local_cc */
    unsigned int spD0; /* 0xd0: local_d0 */
    unsigned int spD4; /* 0xd4: local_d4 */
    unsigned int spD8; /* 0xd8: local_d8 */
    unsigned int spDC; /* 0xdc: local_dc */
    unsigned int spE0; /* 0xe0: local_e0 */
} param_3_stack;

extern unsigned char LAB_001ef4b8; /* 0x1ef4b8 */
extern unsigned char LAB_001ef4c8; /* 0x1ef4c8 */
extern unsigned char LAB_001efd48; /* 0x1efd48 */
extern unsigned char LAB_001efd54; /* 0x1efd54 */
extern unsigned char LAB_001f0518; /* 0x1f0518 */
extern unsigned char LAB_001f051c; /* 0x1f051c */
extern int DAT_0044ea00; /* 0x44ea00 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_002580d4. */
extern int FUN_0026280c(void);
/* Supplied declaration required: FUN_00288154. */
/* Supplied declaration required: FUN_00290994. */
/* Supplied declaration required: FUN_0029a17c. */
extern int FUN_0029d644(int);
extern int FUN_0029d65c(int);
extern unsigned int FUN_0029dde0(void);
/* Supplied declaration required: FUN_0029e6f0. */
extern int FUN_0029efa8(int);
/* Supplied declaration required: FUN_0029efc0. */
extern int *FUN_002a8764(void);
/* Supplied declaration required: FUN_002b066c. */
/* Supplied declaration required: FUN_002b6758. */
/* Supplied declaration required: FUN_002b6dd8. */
/* Supplied declaration required: FUN_002b9024. */
/* Supplied declaration required: FUN_002bce30. */
/* Supplied declaration required: FUN_002bd068. */
/* Supplied declaration required: FUN_002bdf94. */
/* Supplied declaration required: FUN_002be304. */
/* Supplied declaration required: FUN_002be5a4. */
/* Supplied declaration required: FUN_002be624. */
/* Supplied declaration required: FUN_002bed3c. */
extern int FUN_002bed98(int);
extern int FUN_002beda4(int);
/* Supplied declaration required: FUN_002bf288. */
/* Supplied declaration required: FUN_002bf380. */
/* Supplied declaration required: FUN_002bf4f8. */
/* Supplied declaration required: FUN_002bf538. */
extern int FUN_002c5da8(unsigned int, unsigned int, unsigned int);


void FUN_001eef8c(int param_1,int param_2,int param_3)

{
/* irregular: irregular input(s): in_fpscr; 22 native warning(s); review required */
  short temp_v0;
  unsigned short temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned short *puVar5;
  int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  int temp_v8;
  int temp_v9;
  int temp_v10;
  short *psVar13;
  int temp_v11;
  int temp_v12;
  unsigned char *puVar16;
  int temp_v13;
  int temp_v14;
  int *piVar19;
  unsigned int temp_v15;
  unsigned int temp_v16;
  unsigned int in_fpscr;
  unsigned short temp_v17 [26];
  int temp_v18;
  unsigned char temp_v19 [72];
  int temp_v20;
  int temp_v21;
  int temp_v22;
  
  temp_v20 = param_1;
  temp_v21 = param_2;
  temp_v22 = param_3;
  temp_v2 = FUN_0026280c();
  temp_v8 = temp_v21;
  temp_v9 = temp_v20;
  if (temp_v2 != 0) {
    FUN_002bf380(2,0x24,3,temp_v20,temp_v21,0x65);
    FUN_002bf288(2,0x24,0x10e,temp_v9,temp_v8,0x6a);
    FUN_002bf288(2,0x24,0x10f,temp_v9,temp_v8,0x6a);
    FUN_002bf288(2,0x24,0x110,temp_v9,temp_v8,0x6a);
    FUN_002bf288(2,0x24,0x111,temp_v9,temp_v8,0x6a);
    FUN_002bf288(2,0x24,0x4f,temp_v9,temp_v8,0x6a);
    temp_v3 = temp_v2 + 0x6c00;
    puVar5 = (unsigned short *)
             ((*(unsigned int *)(temp_v2 + (unsigned int)*(unsigned short *)(temp_v2 + 0x6ce2) * 8 + 0x1394) & 0x1ffff) >> 2);
    FUN_002b9024();
    temp_v4 = FUN_002bf4f8(0x24,0x4d);
    temp_v15 = 0xffffffff;
    temp_v5 = FUN_0029dde0();
    temp_v16 = 0x5a5a5aff;
    if (temp_v5 < *(unsigned char *)((int)puVar5 + 3)) {
      temp_v15 = 0xdc0f14ff;
    }
    else {
      temp_v6 = FUN_002b066c(*puVar5);
      if ((temp_v6 == 0) && (temp_v16 = 0xffffffff, *(char *)(temp_v3 + 0xe0) == '\0')) {
        temp_v16 = 0x72e027ff;
      }
    }
    temp_v7 = FUN_002bd068(*puVar5);
    FUN_002be624(temp_v19,&LAB_001ef4b8,temp_v7);
    VectorSignedToFloat(*(short *)(temp_v4 + 10) + temp_v8,(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat(*(short *)(temp_v4 + 8) + temp_v9,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_002be5a4(2,temp_v16,temp_v19);
    temp_v4 = FUN_002bf4f8(0x24,0x4e);
    temp_v16 = FUN_002bce30(*puVar5,0);
    FUN_002be624(temp_v19,&LAB_001ef4b8,temp_v16);
    VectorSignedToFloat(*(short *)(temp_v4 + 10) + temp_v8,(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat(*(short *)(temp_v4 + 8) + temp_v9,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_002be5a4(2,0xf49800ff,temp_v19);
    temp_v4 = FUN_002bf4f8(0x24,0x51);
    FUN_002be304(temp_v15);
    FUN_002bdf94(0,*(short *)(temp_v4 + 8) + temp_v9,*(short *)(temp_v4 + 10) + temp_v8,1,2,0x6f,
                 &LAB_001ef4c8,*(unsigned char *)((int)puVar5 + 3));
    FUN_002bed3c();
    if (*(char *)(temp_v3 + 0xe0) == '\0') {
      FUN_002bf288(2,0x24,0x1e9,
                   ((int)(*(int *)(temp_v2 + 0x3fc) +
                         ((unsigned int)(*(int *)(temp_v2 + 0x3fc) >> 0x1f) >> 0x1e)) >> 2) % 3 + temp_v9,
                   temp_v8,0x79);
      FUN_002bf538();
      temp_v4 = DAT_0044ea00;
      temp_v6 = FUN_002c5da8(6,1,0);
      piVar19 = (int *)(temp_v4 + 0x12ac);
      temp_v13 = piVar19[*piVar19 + 2];
      piVar19[*piVar19 + 2] = temp_v6;
      if (*(char *)(temp_v4 + 0x12c4) != '\0' || temp_v13 != temp_v6) {
        (**(romwright_code **)(temp_v4 + 0x12c8))();
        *(unsigned char *)(temp_v4 + 0x12c4) = 0;
      }
      FUN_002bf288(2,0x24,0x1ea,temp_v9,temp_v8,0x79);
      temp_v9 = DAT_0044ea00;
      temp_v8 = FUN_002c5da8(6,7,0);
      piVar19 = (int *)(temp_v9 + 0x12ac);
      temp_v4 = piVar19[*piVar19 + 2];
      piVar19[*piVar19 + 2] = temp_v8;
      if (*(char *)(temp_v9 + 0x12c4) != '\0' || temp_v4 != temp_v8) {
        (**(romwright_code **)(temp_v9 + 0x12c8))(temp_v8);
        *(unsigned char *)(temp_v9 + 0x12c4) = 0;
      }
      FUN_002bf538();
    }
    temp_v18 = temp_v2 + 0x6c7c;
    temp_v9 = FUN_0029efc0();
    temp_v4 = 0;
    temp_v8 = FUN_0029d644(temp_v2 + 0x6c7c);
    if (0 < temp_v8) {
      do {
        temp_v6 = temp_v21;
        temp_v8 = temp_v20;
        temp_v1 = *(unsigned short *)(temp_v2 + (temp_v9 + temp_v4) * 2 + 0x6ce2);
        temp_v13 = FUN_002bf4f8(0x24,temp_v4 + 0x125);
        temp_v8 = temp_v8 + *(short *)(temp_v13 + 8);
        temp_v6 = temp_v6 + *(short *)(temp_v13 + 10);
        temp_v10 = temp_v2 + (unsigned int)temp_v1 * 8;
        psVar13 = (short *)(*(unsigned int *)(temp_v10 + 0x1390) & 0x7fff);
        temp_v13 = temp_v10;
        FUN_002b9024();
        temp_v11 = FUN_002bf4f8(0x24,0x11a);
        FUN_002bf288(2,0x24,0x113,*(short *)(temp_v11 + 8) + temp_v8,*(short *)(temp_v11 + 10) + temp_v6,
                     0x6a);
        FUN_002bf288(2,0x24,0x114,*(short *)(temp_v11 + 8) + temp_v8,*(short *)(temp_v11 + 10) + temp_v6,
                     0x6f);
        temp_v12 = FUN_002bf4f8(0x24,0x118);
        temp_v15 = FUN_002bd068(*psVar13);
        FUN_002be624(temp_v19,&LAB_001ef4b8,temp_v15);
        puVar16 = temp_v19;
        FUN_002b6dd8(puVar16,1);
        VectorSignedToFloat((int)*(short *)(temp_v11 + 10) + (int)*(short *)(temp_v12 + 10) + temp_v6,
                            (unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat(temp_v8 + ((int)**(short **)(temp_v12 + 0xc) - (int)puVar16) / 2 +
                            (int)*(short *)(temp_v11 + 8) + (int)*(short *)(temp_v12 + 8),
                            (unsigned char)(in_fpscr >> 0x16) & 3);
        FUN_002be5a4(1,0xff,temp_v19,(int)*(short *)(temp_v12 + 10));
        temp_v12 = FUN_002bf4f8(0x24,0x119);
        temp_v15 = FUN_002bce30(*psVar13,0);
        FUN_002be624(temp_v19,&LAB_001ef4b8,temp_v15);
        puVar16 = temp_v19;
        FUN_002b6dd8(puVar16,2);
        VectorSignedToFloat((int)*(short *)(temp_v11 + 10) + (int)*(short *)(temp_v12 + 10) + temp_v6,
                            (unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat(temp_v8 + ((int)**(short **)(temp_v12 + 0xc) - (int)puVar16) / 2 +
                            (int)*(short *)(temp_v11 + 8) + (int)*(short *)(temp_v12 + 8),
                            (unsigned char)(in_fpscr >> 0x16) & 3);
        FUN_002be5a4(2,0x7a4c00ff,temp_v19,(int)*(short *)(temp_v11 + 8));
        temp_v12 = FUN_002bf4f8(0x24,0x117);
        if (*(unsigned int *)(temp_v10 + 0x1390) >> 0x1e == 3) {
          FUN_00288154(*psVar13,temp_v17);
          temp_v5 = (unsigned int)temp_v17[0];
        }
        else {
          temp_v14 = FUN_002b066c(*psVar13);
          temp_v5 = (unsigned int)*(unsigned char *)(temp_v14 + 0x48);
        }
        FUN_002be304(0xff);
        FUN_002bdf94(0,(int)*(short *)(temp_v11 + 8) + (int)*(short *)(temp_v12 + 8) + temp_v8,
                     (int)*(short *)(temp_v11 + 10) + (int)*(short *)(temp_v12 + 10) + temp_v6,1,2,0x79,
                     &LAB_001ef4c8,temp_v5);
        FUN_002bed3c();
        temp_v12 = FUN_002bf4f8(0x24,0x115);
        FUN_002b6758((int)*psVar13,
                     (int)*(short *)(temp_v11 + 8) + (int)*(short *)(temp_v12 + 8) + temp_v8,
                     (int)*(short *)(temp_v11 + 10) + (int)*(short *)(temp_v12 + 10) + temp_v6,0x79,1);
        FUN_002580d4(*psVar13,(int)*(short *)(temp_v11 + 8) + (int)*(short *)(temp_v12 + 8) + temp_v8,
                     (int)*(short *)(temp_v11 + 10) + (int)*(short *)(temp_v12 + 10) + temp_v6,0x7e);
        psVar13 = (short *)((*(unsigned int *)(temp_v10 + 0x1390) & 0x3fffffff) >> 0xf);
        FUN_002b9024();
        temp_v11 = FUN_002bf4f8(0x24,0x11b);
        FUN_002bf288(2,0x24,0x113,*(short *)(temp_v11 + 8) + temp_v8,*(short *)(temp_v11 + 10) + temp_v6,
                     0x6a);
        FUN_002bf288(2,0x24,0x114,*(short *)(temp_v11 + 8) + temp_v8,*(short *)(temp_v11 + 10) + temp_v6,
                     0x6f);
        temp_v12 = FUN_002bf4f8(0x24,0x118);
        temp_v15 = FUN_002bd068(*psVar13);
        FUN_002be624(temp_v19,&LAB_001ef4b8,temp_v15);
        puVar16 = temp_v19;
        FUN_002b6dd8(puVar16,1);
        VectorSignedToFloat((int)*(short *)(temp_v11 + 10) + (int)*(short *)(temp_v12 + 10) + temp_v6,
                            (unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat(temp_v8 + ((int)**(short **)(temp_v12 + 0xc) - (int)puVar16) / 2 +
                            (int)*(short *)(temp_v11 + 8) + (int)*(short *)(temp_v12 + 8),
                            (unsigned char)(in_fpscr >> 0x16) & 3);
        FUN_002be5a4(1,0xff,temp_v19,(int)*(short *)(temp_v11 + 8));
        temp_v12 = FUN_002bf4f8(0x24,0x119);
        temp_v15 = FUN_002bce30(*psVar13,0);
        FUN_002be624(temp_v19,&LAB_001ef4b8,temp_v15);
        puVar16 = temp_v19;
        FUN_002b6dd8(puVar16,2);
        VectorSignedToFloat((int)*(short *)(temp_v11 + 10) + (int)*(short *)(temp_v12 + 10) + temp_v6,
                            (unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat(temp_v8 + ((int)**(short **)(temp_v12 + 0xc) - (int)puVar16) / 2 +
                            (int)*(short *)(temp_v11 + 8) + (int)*(short *)(temp_v12 + 8),
                            (unsigned char)(in_fpscr >> 0x16) & 3);
        FUN_002be5a4(2,0x7a4c00ff,temp_v19,(int)*(short *)(temp_v11 + 8));
        temp_v12 = FUN_002bf4f8(0x24,0x117);
        if ((*(unsigned int *)(temp_v10 + 0x1394) & 3) == 3) {
          FUN_00288154(*psVar13,temp_v17);
          temp_v1 = temp_v17[0];
        }
        else {
          temp_v10 = FUN_002b066c(*psVar13);
          temp_v1 = (unsigned short)*(unsigned char *)(temp_v10 + 0x48);
        }
        FUN_002be304(0xff);
        FUN_002bdf94(0,(int)*(short *)(temp_v11 + 8) + (int)*(short *)(temp_v12 + 8) + temp_v8,
                     (int)*(short *)(temp_v11 + 10) + (int)*(short *)(temp_v12 + 10) + temp_v6,1,2,0x79,
                     &LAB_001ef4c8,temp_v1);
        FUN_002bed3c();
        temp_v10 = FUN_002bf4f8(0x24,0x115);
        FUN_002b6758((int)*psVar13,
                     (int)*(short *)(temp_v11 + 8) + (int)*(short *)(temp_v10 + 8) + temp_v8,
                     (int)*(short *)(temp_v11 + 10) + (int)*(short *)(temp_v10 + 10) + temp_v6,0x6f,1);
        FUN_002580d4(*psVar13,(int)*(short *)(temp_v10 + 8) + (int)*(short *)(temp_v11 + 8) + temp_v8,
                     (int)*(short *)(temp_v11 + 10) + (int)*(short *)(temp_v10 + 10) + temp_v6,0x74);
        temp_v10 = FUN_002bf4f8(0x24,0x123);
        temp_v13 = temp_v13 + 0x1390;
        FUN_0029e6f0();
        piVar19 = (int *)FUN_002a8764();
        if (*piVar19 < temp_v13) {
          temp_v15 = 0xdc0f14ff;
        }
        else {
          temp_v15 = 0xff;
        }
        FUN_002be304(temp_v15);
        FUN_002bdf94(0,*(short *)(temp_v10 + 8) + temp_v8,*(short *)(temp_v10 + 10) + temp_v6,1,8,0x79,
                     &LAB_001efd48,temp_v13);
        FUN_002bed3c();
        temp_v4 = temp_v4 + 1;
        temp_v8 = FUN_0029d644(temp_v18);
      } while (temp_v4 < temp_v8);
    }
    temp_v4 = FUN_0029efc0(temp_v18);
    temp_v6 = FUN_0029efa8(temp_v18);
    temp_v8 = temp_v21;
    temp_v9 = temp_v20;
    if (temp_v22 != 0) {
      temp_v1 = *(unsigned short *)(temp_v2 + (temp_v6 + temp_v4) * 2 + 0x6ce2);
      temp_v4 = FUN_0029efa8(temp_v18);
      temp_v4 = FUN_002bf4f8(0x24,temp_v4 + 0x146);
      FUN_002bf538();
      FUN_002bf288(2,0x24,0x12a,*(short *)(temp_v4 + 8) + temp_v9,*(short *)(temp_v4 + 10) + temp_v8,0x79)
      ;
      FUN_002bf288(2,0x24,299,*(short *)(temp_v4 + 8) + temp_v9,*(short *)(temp_v4 + 10) + temp_v8,0x79);
      FUN_002bf288(2,0x24,300,*(short *)(temp_v4 + 8) + temp_v9,*(short *)(temp_v4 + 10) + temp_v8,0x79);
      FUN_002bf538();
      FUN_002bf288(2,0x24,0x12d,*(short *)(temp_v4 + 8) + temp_v9,*(short *)(temp_v4 + 10) + temp_v8,0x7e)
      ;
      temp_v6 = FUN_0029efa8(temp_v18);
      temp_v6 = FUN_0029d65c((int)*(short *)(temp_v2 + temp_v6 * 2 + 0x438));
      temp_v13 = *(short *)(temp_v4 + 10) + temp_v8;
      temp_v10 = *(short *)(temp_v4 + 8) + temp_v9;
      if (!((temp_v6 == 1 || temp_v6 == 2) || temp_v6 == 6)) {
        FUN_002bf288(2,0x24,0x12f,temp_v10,temp_v13,0x7e);
      }
      else {
        FUN_002bf288(2,0x24,0x130,temp_v10,temp_v13,0x7e);
      }
      temp_v13 = FUN_002bf4f8(0x24,0x12f);
      temp_v6 = DAT_0044ea00;
      piVar19 = (int *)(DAT_0044ea00 + 0x130c);
      temp_v10 = piVar19[*piVar19 + 2];
      piVar19[*piVar19 + 2] = 3;
      if (*(char *)(temp_v6 + 0x1324) != '\0' || temp_v10 != 3) {
        (**(romwright_code **)(temp_v6 + 0x1328))();
        *(unsigned char *)(temp_v6 + 0x1324) = 0;
      }
      FUN_0029a17c((int)*(short *)(temp_v4 + 8) + (int)*(short *)(temp_v13 + 8) + temp_v9,
                   (int)*(short *)(temp_v4 + 10) + (int)*(short *)(temp_v13 + 10) + temp_v8,
                   (int)**(short **)(temp_v13 + 0xc),(int)(*(short **)(temp_v13 + 0xc))[1],1);
      temp_v6 = FUN_002bed98(temp_v2 + 0xb0);
      temp_v0 = *(short *)(temp_v4 + 10);
      temp_v13 = FUN_002beda4(temp_v2 + 0xb0);
      FUN_002bf288(2,0x24,0x131,temp_v13 + temp_v9 + (int)*(short *)(temp_v4 + 8),
                   temp_v6 + temp_v8 + (int)temp_v0,0x83);
      temp_v6 = DAT_0044ea00;
      piVar19 = (int *)(DAT_0044ea00 + 0x130c);
      temp_v13 = piVar19[*piVar19 + 2];
      piVar19[*piVar19 + 2] = 0;
      if (*(char *)(temp_v6 + 0x1324) != '\0' || temp_v13 != 0) {
        (**(romwright_code **)(temp_v6 + 0x1328))();
        *(unsigned char *)(temp_v6 + 0x1324) = 0;
      }
      temp_v9 = *(short *)(temp_v4 + 8) + temp_v9;
      temp_v8 = *(short *)(temp_v4 + 10) + temp_v8;
      temp_v6 = temp_v2 + (unsigned int)temp_v1 * 8;
      psVar13 = (short *)(*(unsigned int *)(temp_v6 + 0x1390) & 0x7fff);
      temp_v4 = temp_v6;
      FUN_002b9024();
      temp_v13 = FUN_002bf4f8(0x24,0x13b);
      FUN_002bf288(2,0x24,0x133,*(short *)(temp_v13 + 8) + temp_v9,*(short *)(temp_v13 + 10) + temp_v8,
                   0x83);
      FUN_002bf288(2,0x24,0x135,*(short *)(temp_v13 + 8) + temp_v9,*(short *)(temp_v13 + 10) + temp_v8,
                   0x88);
      temp_v10 = FUN_002bf4f8(0x24,0x139);
      temp_v15 = 0xffffffff;
      if (*(char *)(temp_v3 + 0xe0) == '\x01') {
        temp_v15 = 0x72e027ff;
      }
      temp_v16 = FUN_002bd068(*psVar13);
      FUN_002be624(temp_v19,&LAB_001efd54,temp_v16);
      VectorSignedToFloat((int)*(short *)(temp_v13 + 10) + (int)*(short *)(temp_v10 + 10) + temp_v8,
                          (unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat((int)*(short *)(temp_v13 + 8) + (int)*(short *)(temp_v10 + 8) + temp_v9,
                          (unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_002be5a4(2,temp_v15,temp_v19,(int)*(short *)(temp_v10 + 8));
      temp_v10 = FUN_002bf4f8(0x24,0x13a);
      temp_v15 = FUN_002bce30(*psVar13,0);
      FUN_002be624(temp_v19,&LAB_001efd54,temp_v15);
      puVar16 = temp_v19;
      FUN_002b6dd8(puVar16,2);
      VectorSignedToFloat((int)*(short *)(temp_v13 + 10) + (int)*(short *)(temp_v10 + 10) + temp_v8,
                          (unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat(temp_v9 + ((int)**(short **)(temp_v10 + 0xc) - (int)puVar16) / 2 +
                          (int)*(short *)(temp_v13 + 8) + (int)*(short *)(temp_v10 + 8),
                          (unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_002be5a4(2,0xf49800ff,temp_v19,(int)*(short *)(temp_v13 + 8));
      temp_v10 = FUN_002bf4f8(0x24,0x138);
      if (*(unsigned int *)(temp_v6 + 0x1390) >> 0x1e == 3) {
        FUN_00288154(*psVar13,temp_v17);
        temp_v1 = temp_v17[0];
      }
      else {
        temp_v11 = FUN_002b066c(*psVar13);
        temp_v1 = (unsigned short)*(unsigned char *)(temp_v11 + 0x48);
      }
      FUN_002bdf94(0,(int)*(short *)(temp_v13 + 8) + (int)*(short *)(temp_v10 + 8) + temp_v9,
                   (int)*(short *)(temp_v13 + 10) + (int)*(short *)(temp_v10 + 10) + temp_v8,1,2,0x8d,
                   &LAB_001efd48,temp_v1);
      temp_v11 = FUN_002bf4f8(0x24,0x136);
      FUN_002b6758((int)*psVar13,(int)*(short *)(temp_v13 + 8) + (int)*(short *)(temp_v11 + 8) + temp_v9,
                   (int)*(short *)(temp_v13 + 10) + (int)*(short *)(temp_v11 + 10) + temp_v8,0x8d,1);
      temp_v10 = DAT_0044ea00;
      if (*(char *)(temp_v3 + 0xe0) == '\x01') {
        temp_v12 = FUN_002c5da8(6,1,0);
        piVar19 = (int *)(temp_v10 + 0x12ac);
        temp_v14 = piVar19[*piVar19 + 2];
        piVar19[*piVar19 + 2] = temp_v12;
        if (*(char *)(temp_v10 + 0x12c4) != '\0' || temp_v14 != temp_v12) {
          (**(romwright_code **)(temp_v10 + 0x12c8))();
          *(unsigned char *)(temp_v10 + 0x12c4) = 0;
        }
        FUN_002bf288(2,0x24,0x58,(int)*(short *)(temp_v13 + 8) + (int)*(short *)(temp_v11 + 8) + temp_v9,
                     (int)*(short *)(temp_v13 + 10) + (int)*(short *)(temp_v11 + 10) + temp_v8,0x97);
        FUN_002bf538();
        FUN_002bf288(2,0x24,0x59,(int)*(short *)(temp_v13 + 8) + (int)*(short *)(temp_v11 + 8) + temp_v9,
                     (int)*(short *)(temp_v13 + 10) + (int)*(short *)(temp_v11 + 10) + temp_v8,0x97);
        FUN_002bf538();
        temp_v10 = DAT_0044ea00;
        temp_v12 = FUN_002c5da8(6,7,0);
        piVar19 = (int *)(temp_v10 + 0x12ac);
        temp_v14 = piVar19[*piVar19 + 2];
        piVar19[*piVar19 + 2] = temp_v12;
        if (*(char *)(temp_v10 + 0x12c4) != '\0' || temp_v14 != temp_v12) {
          (**(romwright_code **)(temp_v10 + 0x12c8))();
          *(unsigned char *)(temp_v10 + 0x12c4) = 0;
        }
      }
      FUN_002580d4(*psVar13,(int)*(short *)(temp_v13 + 8) + (int)*(short *)(temp_v11 + 8) + temp_v9,
                   (int)*(short *)(temp_v11 + 10) + (int)*(short *)(temp_v13 + 10) + temp_v8,0x9c);
      psVar13 = (short *)((*(unsigned int *)(temp_v6 + 0x1390) & 0x3fffffff) >> 0xf);
      FUN_002b9024();
      temp_v13 = FUN_002bf4f8(0x24,0x13c);
      FUN_002bf288(2,0x24,0x134,*(short *)(temp_v13 + 8) + temp_v9,*(short *)(temp_v13 + 10) + temp_v8,
                   0x6a);
      FUN_002bf288(2,0x24,0x135,*(short *)(temp_v13 + 8) + temp_v9,*(short *)(temp_v13 + 10) + temp_v8,
                   0x6f);
      temp_v10 = FUN_002bf4f8(0x24,0x139);
      temp_v15 = 0xffffffff;
      if (*(char *)(temp_v3 + 0xe0) == '\x02') {
        temp_v15 = 0x72e027ff;
      }
      temp_v16 = FUN_002bd068(*psVar13);
      FUN_002be624(temp_v19,&LAB_001efd54,temp_v16);
      VectorSignedToFloat((int)*(short *)(temp_v13 + 10) + (int)*(short *)(temp_v10 + 10) + temp_v8,
                          (unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat((int)*(short *)(temp_v13 + 8) + (int)*(short *)(temp_v10 + 8) + temp_v9,
                          (unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_002be5a4(2,temp_v15,temp_v19,(int)*(short *)(temp_v10 + 8));
      temp_v10 = FUN_002bf4f8(0x24,0x13a);
      temp_v15 = FUN_002bce30(*psVar13,0);
      FUN_002be624(temp_v19,&LAB_001f0518,temp_v15);
      puVar16 = temp_v19;
      FUN_002b6dd8(puVar16,2);
      VectorSignedToFloat((int)*(short *)(temp_v13 + 10) + (int)*(short *)(temp_v10 + 10) + temp_v8,
                          (unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat(temp_v9 + ((int)**(short **)(temp_v10 + 0xc) - (int)puVar16) / 2 +
                          (int)*(short *)(temp_v13 + 8) + (int)*(short *)(temp_v10 + 8),
                          (unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_002be5a4(2,0xf49800ff,temp_v19,(int)*(short *)(temp_v13 + 8));
      temp_v10 = FUN_002bf4f8(0x24,0x138);
      if ((*(unsigned int *)(temp_v6 + 0x1394) & 3) == 3) {
        FUN_00288154(*psVar13,temp_v17);
      }
      else {
        temp_v6 = FUN_002b066c(*psVar13);
        temp_v17[0] = (unsigned short)*(unsigned char *)(temp_v6 + 0x48);
      }
      FUN_002bdf94(0,(int)*(short *)(temp_v13 + 8) + (int)*(short *)(temp_v10 + 8) + temp_v9,
                   (int)*(short *)(temp_v10 + 10) + (int)*(short *)(temp_v13 + 10) + temp_v8,1,2,0x8d,
                   &LAB_001f051c,temp_v17[0]);
      temp_v10 = FUN_002bf4f8(0x24,0x136);
      FUN_002b6758((int)*psVar13,(int)*(short *)(temp_v13 + 8) + (int)*(short *)(temp_v10 + 8) + temp_v9,
                   (int)*(short *)(temp_v13 + 10) + (int)*(short *)(temp_v10 + 10) + temp_v8,0x8d,1);
      temp_v6 = DAT_0044ea00;
      if (*(char *)(temp_v3 + 0xe0) == '\x02') {
        temp_v3 = FUN_002c5da8(6,1,0);
        piVar19 = (int *)(temp_v6 + 0x12ac);
        temp_v11 = piVar19[*piVar19 + 2];
        piVar19[*piVar19 + 2] = temp_v3;
        if (*(char *)(temp_v6 + 0x12c4) != '\0' || temp_v11 != temp_v3) {
          (**(romwright_code **)(temp_v6 + 0x12c8))();
          *(unsigned char *)(temp_v6 + 0x12c4) = 0;
        }
        FUN_002bf288(2,0x24,0x58,(int)*(short *)(temp_v13 + 8) + (int)*(short *)(temp_v10 + 8) + temp_v9,
                     (int)*(short *)(temp_v13 + 10) + (int)*(short *)(temp_v10 + 10) + temp_v8,0x97);
        FUN_002bf538();
        FUN_002bf288(2,0x24,0x59,(int)*(short *)(temp_v13 + 8) + (int)*(short *)(temp_v10 + 8) + temp_v9,
                     (int)*(short *)(temp_v13 + 10) + (int)*(short *)(temp_v10 + 10) + temp_v8,0x97);
        FUN_002bf538();
        temp_v3 = DAT_0044ea00;
        temp_v6 = FUN_002c5da8(6,7,0);
        piVar19 = (int *)(temp_v3 + 0x12ac);
        temp_v11 = piVar19[*piVar19 + 2];
        piVar19[*piVar19 + 2] = temp_v6;
        if (*(char *)(temp_v3 + 0x12c4) != '\0' || temp_v11 != temp_v6) {
          (**(romwright_code **)(temp_v3 + 0x12c8))(temp_v6);
          *(unsigned char *)(temp_v3 + 0x12c4) = 0;
        }
      }
      FUN_002580d4(*psVar13,(int)*(short *)(temp_v13 + 8) + (int)*(short *)(temp_v10 + 8) + temp_v9,
                   (int)*(short *)(temp_v10 + 10) + (int)*(short *)(temp_v13 + 10) + temp_v8,0x9c);
      temp_v4 = temp_v4 + 0x1390;
      FUN_0029e6f0();
      piVar19 = (int *)FUN_002a8764();
      if (*piVar19 < temp_v4) {
        temp_v15 = 0xdc0f14ff;
      }
      else {
        temp_v15 = 0xffffffff;
      }
      FUN_002be304(temp_v15);
      temp_v3 = FUN_002bf4f8(0x24,0x144);
      FUN_002bdf94(0,*(short *)(temp_v3 + 8) + temp_v9,*(short *)(temp_v3 + 10) + temp_v8,1,8,0x8d,
                   &LAB_001f051c,temp_v4);
      FUN_002bed3c();
    }
    FUN_00290994(temp_v18,temp_v20,temp_v20,0x24,0x23,0x24,0x25,0x1f,0x21,0x20,0x22,
                 (int)*(short *)(temp_v2 + 0x476),(int)*(short *)(temp_v2 + 0x472),
                 (int)*(short *)(temp_v2 + 0x474),0x97,0);
  }
  return;
}

} /* extern "C" */
