/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00215c6c` (_code @ 0x215c6c, 0xbf4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_00215c6c_arg0 fn_00215c6c_arg0;
struct fn_00215c6c_arg0 {
    undefined4 field_0x0; /* +0x0 */
    unsigned char pad_0x4[0x3f8];
    undefined4 field_0x3fc; /* +0x3fc */
    unsigned char pad_0x400[0x4e10];
    undefined4 field_0x5210; /* +0x5210 */
    unsigned char pad_0x5214[0x1acc];
    byte field_0x6ce0; /* +0x6ce0 */
    unsigned char pad_0x6ce1[0x2657];
    ushort field_0x9338; /* +0x9338 */
};

typedef int romwright_code();
/* stack frame of param_2: 8 slot(s), 30 byte(s) */
typedef struct {
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned short spC8; /* 0xc8: local_c8 */
    unsigned int spCC; /* 0xcc: local_cc */
    unsigned int spD0; /* 0xd0: local_d0 */
    unsigned int spD4; /* 0xd4: local_d4 */
    unsigned int spD8; /* 0xd8: local_d8 */
} param_2_stack;

extern unsigned char LAB_002161d4; /* 0x2161d4 */
extern unsigned char LAB_002161d8; /* 0x2161d8 */
extern unsigned char LAB_002161e8; /* 0x2161e8 */
extern unsigned char LAB_00216878; /* 0x216878 */
extern unsigned char LAB_0021687c; /* 0x21687c */
extern int DAT_0044ea00; /* 0x44ea00 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_001ce124. */
/* Supplied declaration required: FUN_00258308. */
extern unsigned int *FUN_00262a44(void);
/* Supplied declaration required: FUN_002883bc. */
/* Supplied declaration required: FUN_0029a418. */
extern int FUN_0029ba58(unsigned int, unsigned short, unsigned char *);
extern int FUN_0029d8fc(int);
extern unsigned int FUN_0029e080(void);
extern int FUN_0029f248(unsigned int *);
extern int FUN_0029f260(unsigned int *);
/* Supplied declaration required: FUN_0029fa74. */
extern int *FUN_002a8a08(void);
/* Supplied declaration required: FUN_002b0824. */
/* Supplied declaration required: FUN_002b6a98. */
/* Supplied declaration required: FUN_002b7118. */
/* Supplied declaration required: FUN_002b9364. */
/* Supplied declaration required: FUN_002bd020. */
/* Supplied declaration required: FUN_002bd258. */
/* Supplied declaration required: FUN_002be16c. */
/* Supplied declaration required: FUN_002be4dc. */
/* Supplied declaration required: FUN_002be77c. */
/* Supplied declaration required: FUN_002be7fc. */
/* Supplied declaration required: FUN_002bef14. */
extern int FUN_002bef70(unsigned int *);
extern int FUN_002bef7c(unsigned int *);
/* Supplied declaration required: FUN_002bf460. */
/* Supplied declaration required: FUN_002bf558. */
/* Supplied declaration required: FUN_002bf6d0. */
/* Supplied declaration required: FUN_002bf710. */
extern int FUN_002c5fa4(unsigned int, unsigned int, unsigned int);


void FUN_00215c6c(fn_00215c6c_arg0 *param_1,int param_2)

{
/* irregular: irregular input(s): in_fpscr; 21 native warning(s); review required */
  char temp_v0;
  unsigned int *puVar2;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned short *puVar6;
  unsigned int temp_v4;
  unsigned int *puVar8;
  unsigned int *puVar9;
  short *psVar10;
  unsigned char *puVar11;
  int temp_v5;
  int temp_v6;
  unsigned short temp_v7;
  int temp_v8;
  int *piVar16;
  unsigned int temp_v9;
  unsigned short temp_v10;
  unsigned int temp_v11;
  unsigned char temp_v12;
  unsigned int in_fpscr;
  unsigned short temp_v13 [26];
  unsigned int *temp_v14;
  unsigned char temp_v15 [64];
  unsigned char temp_v16 [24];
  unsigned int *temp_v17;
  int temp_v18;
  
  puVar2 = (unsigned int *)FUN_00262a44();
  if (puVar2 != (unsigned int *)0x0) {
    temp_v14 = puVar2 + 0x24c0;
    temp_v10 = 0;
    puVar8 = (unsigned int *)0x0;
    if (*(short *)(puVar2 + 0x24ce) != 0) {
      puVar8 = puVar2 + 0x249c;
    }
    temp_v8 = 0;
    if (*(short *)(puVar2 + 0x24ce) != 0) {
      do {
        temp_v1 = (unsigned int)*(unsigned short *)((int)puVar2 + temp_v8 * 2 + 0x933c);
        FUN_0029fa74();
        temp_v2 = FUN_0029f260(puVar8);
        temp_v3 = FUN_0029f248(puVar8);
        if (*(short *)((int)puVar2 + (temp_v2 + temp_v3) * 2 + 0x6278) == *(short *)(temp_v1 + 0x1a)) {
          temp_v10 = *(unsigned short *)((int)puVar2 + temp_v8 * 2 + 0x933c);
          break;
        }
        temp_v8 = temp_v8 + 1;
      } while (temp_v8 < (int)(unsigned int)*(unsigned short *)(temp_v14 + 0xe));
    }
    temp_v8 = FUN_0029ba58(*puVar2,temp_v10,temp_v16);
    FUN_002bf558(2,0x24,6,param_1,param_2,0x65);
    FUN_002bf460(2,0x24,0x14b,param_1,param_2,0x6a);
    FUN_002bf460(2,0x24,0x14c,param_1,param_2,0x6a);
    FUN_002bf460(2,0x24,0x14d,param_1,param_2,0x6a);
    FUN_002bf460(2,0x24,0x4f,param_1,param_2,0x6a);
    puVar6 = (unsigned short *)(unsigned int)*(unsigned short *)(puVar2 + 0x1484);
    FUN_002b9364();
    temp_v2 = FUN_002bf6d0(0x24,0x4d);
    temp_v9 = 0xffffffff;
    temp_v11 = 0xffffffff;
    temp_v1 = FUN_0029e080();
    if (temp_v1 < *(unsigned char *)((int)puVar6 + 3)) {
      temp_v9 = 0x5a5a5aff;
      temp_v11 = 0xdc0f14ff;
    }
    else {
      temp_v3 = FUN_002b0824(*puVar6);
      if (temp_v3 != 0) {
        temp_v9 = 0x5a5a5aff;
      }
      else if (*(char *)(puVar2 + 0x1b38) == '\0') {
        temp_v9 = 0x72e027ff;
      }
    }
    if (temp_v8 == 0) {
      FUN_002be7fc(temp_v15,&LAB_002161d4);
    }
    else {
      temp_v4 = FUN_002bd258(*puVar6);
      FUN_002be7fc(temp_v15,&LAB_002161d8,temp_v4);
    }
    VectorSignedToFloat(*(short *)(temp_v2 + 10) + param_2,(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat((int)&param_1->field_0x0 + (int)*(short *)(temp_v2 + 8),
                        (unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_002be77c(2,temp_v9,temp_v15);
    temp_v8 = FUN_002bf6d0(0x24,0x4e);
    temp_v9 = FUN_002bd020(*puVar6,0);
    FUN_002be7fc(temp_v15,&LAB_002161d8,temp_v9);
    VectorSignedToFloat(*(short *)(temp_v8 + 10) + param_2,(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat((int)&param_1->field_0x0 + (int)*(short *)(temp_v8 + 8),
                        (unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_002be77c(2,0xf49800ff,temp_v15);
    temp_v8 = FUN_002bf6d0(0x24,0x51);
    FUN_002be4dc(temp_v11);
    FUN_002be16c(0,(int)&param_1->field_0x0 + (int)*(short *)(temp_v8 + 8),
                 *(short *)(temp_v8 + 10) + param_2,1,2,0x6f,&LAB_002161e8,
                 *(unsigned char *)((int)puVar6 + 3));
    FUN_002bef14();
    temp_v17 = puVar2 + 0x1b00;
    if (*(char *)(puVar2 + 0x1b38) == '\0') {
      FUN_002bf460(2,0x24,0x1e9,
                   (int)&param_1->field_0x0 +
                   ((int)(puVar2[0xff] + ((unsigned int)((int)puVar2[0xff] >> 0x1f) >> 0x1e)) >> 2) % 3,
                   param_2,0x79);
      FUN_002bf710();
      temp_v8 = DAT_0044ea00;
      temp_v2 = FUN_002c5fa4(6,1,0);
      piVar16 = (int *)(temp_v8 + 0x12ac);
      temp_v3 = piVar16[*piVar16 + 2];
      piVar16[*piVar16 + 2] = temp_v2;
      if (*(char *)(temp_v8 + 0x12c4) != '\0' || temp_v3 != temp_v2) {
        (**(romwright_code **)(temp_v8 + 0x12c8))();
        *(unsigned char *)(temp_v8 + 0x12c4) = 0;
      }
      FUN_002bf460(2,0x24,0x1ea,param_1,param_2,0x79);
      temp_v8 = DAT_0044ea00;
      temp_v2 = FUN_002c5fa4(6,7,0);
      piVar16 = (int *)(temp_v8 + 0x12ac);
      temp_v3 = piVar16[*piVar16 + 2];
      piVar16[*piVar16 + 2] = temp_v2;
      if (*(char *)(temp_v8 + 0x12c4) != '\0' || temp_v3 != temp_v2) {
        (**(romwright_code **)(temp_v8 + 0x12c8))();
        *(unsigned char *)(temp_v8 + 0x12c4) = 0;
      }
      FUN_002bf710();
    }
    FUN_002bf710();
    FUN_002bf460(2,0x24,0x14e,param_1,param_2,0x79);
    FUN_002bf460(2,0x24,0x14f,param_1,param_2,0x79);
    FUN_002bf460(2,0x24,0x150,param_1,param_2,0x79);
    FUN_002bf710();
    FUN_002bf460(2,0x24,0x151,param_1,param_2,0x7b);
    FUN_002bf460(2,0x24,0x152,param_1,param_2,0x7c);
    FUN_002bf460(2,0x24,0x153,param_1,param_2,0x7d);
    temp_v8 = FUN_0029d8fc((int)*(short *)(puVar2 + 0x10e));
    if (!((temp_v8 == 1 || temp_v8 == 2) || temp_v8 == 6)) {
      FUN_002bf460(2,0x24,0x154,param_1,param_2,0x7e);
    }
    else {
      FUN_002bf460(2,0x24,0x155,param_1,param_2,0x7e);
    }
    temp_v2 = FUN_002bf6d0(0x24,0x154);
    temp_v8 = DAT_0044ea00;
    piVar16 = (int *)(DAT_0044ea00 + 0x130c);
    temp_v3 = piVar16[*piVar16 + 2];
    piVar16[*piVar16 + 2] = 3;
    if (*(char *)(temp_v8 + 0x1324) != '\0' || temp_v3 != 3) {
      (**(romwright_code **)(temp_v8 + 0x1328))();
      *(unsigned char *)(temp_v8 + 0x1324) = 0;
    }
    FUN_0029a418((int)&param_1->field_0x0 + (int)*(short *)(temp_v2 + 8),
                 *(short *)(temp_v2 + 10) + param_2,(int)**(short **)(temp_v2 + 0xc),
                 (int)(*(short **)(temp_v2 + 0xc))[1],1);
    temp_v8 = FUN_002bef70(puVar2 + 0x2c);
    temp_v2 = FUN_002bef7c(puVar2 + 0x2c);
    FUN_002bf460(2,0x24,0x156,(int)&param_1->field_0x0 + temp_v2,temp_v8 + param_2,0x83);
    temp_v8 = DAT_0044ea00;
    piVar16 = (int *)(DAT_0044ea00 + 0x130c);
    temp_v2 = piVar16[*piVar16 + 2];
    piVar16[*piVar16 + 2] = 0;
    if (*(char *)(temp_v8 + 0x1324) != '\0' || temp_v2 != 0) {
      (**(romwright_code **)(temp_v8 + 0x1328))(0);
      *(unsigned char *)(temp_v8 + 0x1324) = 0;
    }
    temp_v8 = FUN_002bf6d0(0x24,0x162);
    puVar9 = puVar2 + 0x1484;
    puVar8 = puVar9;
    FUN_001ce124();
    piVar16 = (int *)FUN_002a8a08();
    if (*piVar16 < (int)puVar8) {
      temp_v11 = 0xdc0f14ff;
    }
    else {
      temp_v11 = 0xffffffff;
    }
    FUN_002be4dc(temp_v11);
    FUN_001ce124();
    FUN_002be16c(0,(int)&param_1->field_0x0 + (int)*(short *)(temp_v8 + 8),
                 *(short *)(temp_v8 + 10) + param_2,1,8,0x8d,&LAB_002161e8,puVar9);
    FUN_002bef14();
    temp_v1 = 0;
    if (*(short *)((int)temp_v14 + 0x3a) != 0) {
      do {
        temp_v8 = FUN_002bf6d0(0x24,temp_v1 + 0x157);
        psVar10 = (short *)(unsigned int)*(unsigned short *)((int)puVar2 + temp_v1 * 2 + 0x5212);
        FUN_002b9364();
        temp_v2 = *(short *)(temp_v8 + 10) + param_2;
        temp_v3 = (int)&param_1->field_0x0 + (int)*(short *)(temp_v8 + 8);
        if ((temp_v1 & 1) != 0) {
          FUN_002bf460(2,0x24,0x134,temp_v3,temp_v2,0x83);
        }
        else {
          FUN_002bf460(2,0x24,0x133,temp_v3,temp_v2,0x83);
        }
        FUN_002bf460(2,0x24,0x135,(int)&param_1->field_0x0 + (int)*(short *)(temp_v8 + 8),
                     *(short *)(temp_v8 + 10) + param_2,0x88);
        temp_v2 = FUN_002bf6d0(0x24,0x139);
        temp_v18 = temp_v1 + 1;
        temp_v11 = 0xffffffff;
        if (*(char *)(temp_v17 + 0x38) == temp_v18) {
          temp_v11 = 0x72e027ff;
        }
        if (*(char *)((int)puVar2 + temp_v1 + 0x522a) != '\0') {
          temp_v9 = FUN_002bd258(*psVar10);
          FUN_002be7fc(temp_v15,&LAB_002161d8,temp_v9);
        }
        else {
          FUN_002be7fc(temp_v15,&LAB_00216878);
        }
        VectorSignedToFloat((int)*(short *)(temp_v8 + 10) + (int)*(short *)(temp_v2 + 10) + param_2,
                            (unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat((int)&param_1->field_0x0 +
                            (int)*(short *)(temp_v8 + 8) + (int)*(short *)(temp_v2 + 8),
                            (unsigned char)(in_fpscr >> 0x16) & 3);
        FUN_002be77c(2,temp_v11,temp_v15,(int)*(short *)(temp_v2 + 8));
        temp_v2 = FUN_002bf6d0(0x24,0x13a);
        temp_v11 = FUN_002bd020(*psVar10,0);
        FUN_002be7fc(temp_v15,&LAB_002161d8,temp_v11);
        puVar11 = temp_v15;
        FUN_002b7118(puVar11,2);
        VectorSignedToFloat((int)*(short *)(temp_v8 + 10) + (int)*(short *)(temp_v2 + 10) + param_2,
                            (unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat((int)&param_1->field_0x0 +
                            (int)*(short *)(temp_v8 + 8) + (int)*(short *)(temp_v2 + 8) +
                            ((int)**(short **)(temp_v2 + 0xc) - (int)puVar11) / 2,
                            (unsigned char)(in_fpscr >> 0x16) & 3);
        FUN_002be77c(2,0xf49800ff,temp_v15,(int)*(short *)(temp_v8 + 8));
        temp_v2 = FUN_002bf6d0(0x24,0x138);
        temp_v0 = *(char *)((int)puVar2 + temp_v1 + 0x522a);
        if (temp_v0 != '\0') {
          if (temp_v0 != '\x03') {
            temp_v3 = FUN_002b0824();
            temp_v7 = (unsigned short)*(unsigned char *)(temp_v3 + 0x48);
          }
          else {
            FUN_002883bc(*psVar10,temp_v13);
            temp_v7 = temp_v13[0];
          }
          FUN_002be16c(0,(int)&param_1->field_0x0 +
                         (int)*(short *)(temp_v8 + 8) + (int)*(short *)(temp_v2 + 8),
                       (int)*(short *)(temp_v8 + 10) + (int)*(short *)(temp_v2 + 10) + param_2,1,2,0x8d
                       ,&LAB_002161e8,temp_v7);
        }
        else {
          FUN_002be16c(0,(int)&param_1->field_0x0 +
                         (int)*(short *)(temp_v8 + 8) + (int)*(short *)(temp_v2 + 8),
                       (int)*(short *)(temp_v8 + 10) + (int)*(short *)(temp_v2 + 10) + param_2,1,2,0x8d
                       ,&LAB_0021687c,*(unsigned char *)((int)psVar10 + 3));
        }
        temp_v2 = FUN_002bf6d0(0x24,0x136);
        temp_v12 = *(char *)((int)puVar2 + temp_v1 + 0x522a) == '\0';
        if (!temp_v12) {
          temp_v6 = (int)*(short *)(temp_v8 + 10) + (int)*(short *)(temp_v2 + 10);
          temp_v3 = (int)*(short *)(temp_v8 + 8) + (int)*(short *)(temp_v2 + 8);
          temp_v5 = (int)*psVar10;
        }
        else {
          temp_v6 = (int)*(short *)(temp_v8 + 10) + (int)*(short *)(temp_v2 + 10);
          temp_v3 = (int)*(short *)(temp_v8 + 8) + (int)*(short *)(temp_v2 + 8);
          temp_v5 = 0;
        }
        FUN_002b6a98(temp_v5,(int)&param_1->field_0x0 + temp_v3,temp_v6 + param_2,0x8d,!temp_v12);
        temp_v3 = DAT_0044ea00;
        if (*(char *)(temp_v17 + 0x38) == temp_v18) {
          temp_v6 = FUN_002c5fa4(6,1,0);
          piVar16 = (int *)(temp_v3 + 0x12ac);
          temp_v5 = piVar16[*piVar16 + 2];
          piVar16[*piVar16 + 2] = temp_v6;
          if (*(char *)(temp_v3 + 0x12c4) != '\0' || temp_v5 != temp_v6) {
            (**(romwright_code **)(temp_v3 + 0x12c8))();
            *(unsigned char *)(temp_v3 + 0x12c4) = 0;
          }
          FUN_002bf460(2,0x24,0x58,
                       (int)&param_1->field_0x0 +
                       (int)*(short *)(temp_v8 + 8) + (int)*(short *)(temp_v2 + 8),
                       (int)*(short *)(temp_v2 + 10) + (int)*(short *)(temp_v8 + 10) + param_2,0x97);
          FUN_002bf710();
          FUN_002bf460(2,0x24,0x59,
                       (int)&param_1->field_0x0 +
                       (int)*(short *)(temp_v8 + 8) + (int)*(short *)(temp_v2 + 8),
                       (int)*(short *)(temp_v8 + 10) + (int)*(short *)(temp_v2 + 10) + param_2,0x97);
          FUN_002bf710();
          temp_v3 = DAT_0044ea00;
          temp_v6 = FUN_002c5fa4(6,7,0);
          piVar16 = (int *)(temp_v3 + 0x12ac);
          temp_v5 = piVar16[*piVar16 + 2];
          piVar16[*piVar16 + 2] = temp_v6;
          if (*(char *)(temp_v3 + 0x12c4) != '\0' || temp_v5 != temp_v6) {
            (**(romwright_code **)(temp_v3 + 0x12c8))();
            *(unsigned char *)(temp_v3 + 0x12c4) = 0;
          }
        }
        FUN_00258308(*psVar10,(int)&param_1->field_0x0 +
                              (int)*(short *)(temp_v8 + 8) + (int)*(short *)(temp_v2 + 8),
                     (int)*(short *)(temp_v2 + 10) + (int)*(short *)(temp_v8 + 10) + param_2,0x9c);
        temp_v1 = temp_v1 + 1;
      } while ((int)temp_v1 < (int)(unsigned int)*(unsigned short *)((int)temp_v14 + 0x3a));
    }
  }
  return;
}
