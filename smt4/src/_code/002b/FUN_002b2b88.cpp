/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b2b88` (_code @ 0x2b2b88, 0x570 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "font/FontStringReader.h"

extern "C" {

int FUN_001464cc(...);
int FUN_002aa18c(...);
int FUN_002aa200(unsigned int, unsigned int, int);
int FUN_002aea44(unsigned char [4]);
int VectorSignedToFloat(...);
int VectorUnsignedToFloat(...);

typedef int romwright_code(...);
/* stack frame of param_4: 15 slot(s), 40 byte(s) */
typedef struct {
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned short sp7A; /* 0x7a: local_7a */
    unsigned short sp7C; /* 0x7c: local_7c */
    unsigned short sp7E; /* 0x7e: local_7e */
    unsigned short sp80; /* 0x80: local_80 */
    unsigned char sp81; /* 0x81: local_81 */
    unsigned char sp82; /* 0x82: local_82 */
    unsigned char sp83; /* 0x83: local_83 */
    unsigned char sp84; /* 0x84: local_84 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp98; /* 0x98: local_98 */
} param_4_stack;

extern unsigned int g_titleScene; /* 0x44ea00 */
extern int DAT_00464a70; /* 0x464a70 */
extern unsigned int *DAT_00464a74; /* 0x464a74 */

/* Unsupported intrinsic, declaration required: NAN (FLOAT_NAN). */
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
/* Supplied declaration required: FUN_001464cc. */
/* Supplied declaration required: FUN_002aa18c. */
/* Supplied declaration required: FUN_002aa200. */
/* Supplied declaration required: FUN_002aea44. */
/* Supplied declaration required: callbackBindingInitFromKind. */
extern int __aeabi_uidivmod(unsigned int, int);


void FUN_002b2b88(unsigned int param_1,unsigned int *param_2,int param_3,int param_4)

{
/* irregular: 5 unstructured edge(s); 3 goto(s); irregular input(s): in_fpscr, in_s3, in_s4, in_s6; 9 native warning(s); review required */
  unsigned short temp_v0;
  unsigned char temp_v1;
  unsigned int *puVar3;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned short *puVar8;
  unsigned short *puVar9;
  unsigned short *puVar10;
  romwright_code *pcVar11;
  int *piVar12;
  int *piVar13;
  int temp_v6;
  unsigned int temp_v7;
  unsigned char temp_v8;
  unsigned char temp_v9;
  unsigned int in_fpscr;
  float temp_v10;
  float in_s3;
  float temp_v11;
  float in_s4;
  unsigned int in_s6;
  float temp_v12;
  unsigned long long temp_v13;
  long long temp_v14;
  unsigned long long temp_v15;
  unsigned long long temp_v16;
  float temp_v17;
  long long temp_v18;
  unsigned long long temp_v19;
  int temp_v20;
  romwright_code *temp_v21;
  romwright_code *temp_v22;
  unsigned char temp_v23 [4];
  char temp_v24;
  unsigned char temp_v25;
  char temp_v26;
  unsigned char temp_v27;
  unsigned short temp_v28;
  unsigned short temp_v29;
  unsigned short temp_v30;
  unsigned short temp_v31;
  unsigned int temp_v32;
  unsigned int temp_v33;
  unsigned int temp_v34;
  
  puVar3 = (unsigned int *)&DAT_00464a70;
  if (DAT_00464a70 != 0) {
    puVar3 = DAT_00464a74;
  }
  if ((DAT_00464a70 == 0 || puVar3 <= param_2) ||
     (temp_v6 = DAT_00464a70 + (int)param_2 * 0x2c, temp_v6 == 0)) {
    return;
  }
  temp_v16 = 0;
  temp_v15 = (unsigned long long)in_s6;
  temp_v32 = param_1;
  temp_v33 = param_1;
  temp_v34 = param_1;
  FUN_002aea44(temp_v23);
  temp_v7 = (unsigned int)((unsigned long long)temp_v16 >> 0x20);
  piVar13 = *(int **)(temp_v6 + 8);
  temp_v2 = temp_v7;
  callbackBindingInitFromKind(reinterpret_cast<FontStringReader *>(&temp_v20), reinterpret_cast<FontEncodingSource *>(piVar13), 0x30);
  FUN_001464cc(g_titleScene);
  temp_v20 = param_3;
  temp_v14 = (unsigned long long)temp_v7 << 0x20;
  temp_v13 = (unsigned long long)temp_v2;
  piVar12 = (int *)((int)&temp_v20 + ((int)temp_v22 >> 1));
  pcVar11 = temp_v21;
  if (((unsigned int)temp_v22 & 1) != 0) {
    pcVar11 = *(romwright_code **)((unsigned char *)temp_v21 + *piVar12);
  }
  temp_v2 = (*pcVar11)(piVar12);
  if (param_4 >= temp_v20 - param_3) {
    temp_v18 = (unsigned long long)(unsigned int)(int)in_s4 << 0x20;
    temp_v19 = 0x3f000000;
    do {
      temp_v12 = (float)temp_v13;
      temp_v7 = (unsigned int)((unsigned long long)temp_v14 >> 0x20);
      if (temp_v2 != 10) {
        temp_v3 = (**(romwright_code **)(*piVar13 + 0x44))(piVar13,temp_v2);
        if (temp_v3 != 0) {
          (**(romwright_code **)(*piVar13 + 0x40))(piVar13,temp_v23,temp_v2);
          temp_v4 = (unsigned int)temp_v25;
          temp_v17 = (float)((unsigned long long)temp_v16 >> 0x20);
          in_fpscr = in_fpscr & 0xfffffff;
          temp_v7 = in_fpscr | ((unsigned int)(in_s3 < temp_v17) << 0x1f) | ((unsigned int)(in_s3 == temp_v17) << 0x1e);
          temp_v1 = (unsigned char)(temp_v7 >> 0x18);
          VectorUnsignedToFloat(temp_v4,(unsigned char)(temp_v7 >> 0x16) & 3);
          VectorUnsignedToFloat((unsigned int)temp_v27,(unsigned char)(temp_v7 >> 0x16) & 3);
          temp_v11 = (float)VectorSignedToFloat((int)temp_v26,(unsigned char)(temp_v7 >> 0x16) & 3);
          temp_v10 = (float)VectorSignedToFloat((int)temp_v24,(unsigned char)(temp_v7 >> 0x16) & 3);
          if (!((unsigned char)((temp_v1 >> 6) & 1) || (unsigned char)(temp_v1 >> 7) != ((in_s3 != in_s3) || (temp_v17 != temp_v17)))) {
            VectorUnsignedToFloat(temp_v4,(unsigned char)(temp_v7 >> 0x16) & 3);
            temp_v24 = (char)(int)(temp_v10 * in_s3);
            temp_v26 = (char)(int)(temp_v11 * in_s3);
          }
          else {
            temp_v7 = in_fpscr | ((unsigned int)(in_s4 < temp_v17) << 0x1f) | ((unsigned int)(in_s4 == temp_v17) << 0x1e)
            ;
            temp_v1 = (unsigned char)(temp_v7 >> 0x18);
            if (!(unsigned char)((temp_v1 >> 6) & 1) && (unsigned char)(temp_v1 >> 7) == ((in_s4 != in_s4) || (temp_v17 != temp_v17))) {
              temp_v7 = in_fpscr | ((unsigned int)(in_s4 < temp_v11) << 0x1f) |
                       ((unsigned int)(in_s4 == temp_v11) << 0x1e);
              temp_v1 = (unsigned char)(temp_v7 >> 0x18);
              temp_v26 = (char)((unsigned long long)temp_v18 >> 0x20);
              if (!((unsigned char)((temp_v1 >> 6) & 1) || (unsigned char)(temp_v1 >> 7) != ((in_s4 != in_s4) || (temp_v11 != temp_v11))))
              {
                temp_v24 = temp_v24 + (char)(int)((in_s4 - temp_v11) * (float)temp_v19);
              }
              else {
                VectorUnsignedToFloat(temp_v4,(unsigned char)(temp_v7 >> 0x16) & 3);
                temp_v24 = (char)(int)(temp_v10 * (in_s4 / temp_v11));
              }
            }
          }
          temp_v4 = (temp_v7 & 0xfffffff) | ((unsigned int)(in_s3 < temp_v17) << 0x1f) |
                  ((unsigned int)(in_s3 == temp_v17) << 0x1e);
          in_fpscr = temp_v4 | ((unsigned int)((in_s3 != in_s3) || (temp_v17 != temp_v17)) << 0x1c);
          temp_v1 = (unsigned char)(temp_v4 >> 0x18);
          if ((unsigned char)((temp_v1 >> 6) & 1) || temp_v1 >> 7 != ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
            in_fpscr = temp_v7 & 0xfffffff;
          }
          temp_v15 = temp_v15 & 0xffffffff;
          temp_v3 = *(int *)(temp_v6 + 4);
          for (puVar9 = *(unsigned short **)(temp_v3 + 0x10); puVar9 != (unsigned short *)0x0;
              puVar9 = *(unsigned short **)(puVar9 + 4)) {
            temp_v9 = temp_v2 <= *puVar9;
            temp_v8 = *puVar9 == temp_v2;
            if (!temp_v9 || temp_v8) {
              temp_v9 = puVar9[1] <= temp_v2;
              temp_v8 = temp_v2 == puVar9[1];
            }
            if (!temp_v9 || temp_v8) {
              temp_v0 = puVar9[2];
              temp_v7 = 0xffff;
              if (temp_v0 == 0) {
                temp_v7 = ((temp_v2 - *puVar9) + (unsigned int)puVar9[6]) & 0xffff;
                goto LAB_002b2f7c;
              }
              if (temp_v0 != 1) {
                if (temp_v0 == 2) {
                  puVar8 = puVar9 + 7;
                  puVar9 = puVar9 + 6 + ((unsigned int)puVar9[6] * 2 - 1);
                  if (puVar8 <= puVar9) {
                    do {
                      puVar10 = puVar8 + ((((int)puVar9 - (int)puVar8) >> 2) / 2) * 2;
                      temp_v4 = (unsigned int)*puVar10;
                      if (temp_v4 >= temp_v2 && temp_v4 != temp_v2) {
                        puVar9 = puVar10 + -2;
                      }
                      if (temp_v4 < temp_v2) {
                        puVar8 = puVar10 + 2;
                      }
                      if (temp_v4 == temp_v2) {
                        temp_v7 = (unsigned int)puVar10[1];
                        break;
                      }
                    } while (puVar8 <= puVar9);
                  }
                }
LAB_002b2f7c:
                if (temp_v7 == 0xffff) break;
                goto LAB_002b2f98;
              }
              temp_v7 = (unsigned int)puVar9[(temp_v2 - *puVar9) + 6];
              goto LAB_002b2f7c;
            }
          }
          temp_v7 = (unsigned int)*(unsigned short *)(temp_v3 + 2);
LAB_002b2f98:
          temp_v3 = __aeabi_uidivmod(temp_v7,(unsigned int)*(unsigned short *)(*(int *)(temp_v3 + 8) + 0xc) *
                                        (unsigned int)*(unsigned short *)(*(int *)(temp_v3 + 8) + 0xe));
          FUN_002aa200(g_titleScene,*(unsigned int *)(*(int *)(temp_v6 + 0xc) + temp_v3 * 4),
                       *(unsigned char *)(temp_v6 + 0x24));
          VectorUnsignedToFloat((unsigned int)temp_v30,(unsigned char)(in_fpscr >> 0x16) & 3);
          VectorUnsignedToFloat((unsigned int)temp_v28,(unsigned char)(in_fpscr >> 0x16) & 3);
          VectorUnsignedToFloat((unsigned int)temp_v31,(unsigned char)(in_fpscr >> 0x16) & 3);
          VectorUnsignedToFloat((unsigned int)temp_v25,(unsigned char)(in_fpscr >> 0x16) & 3);
          VectorUnsignedToFloat((unsigned int)temp_v29,(unsigned char)(in_fpscr >> 0x16) & 3);
          VectorUnsignedToFloat((unsigned int)temp_v27,(unsigned char)(in_fpscr >> 0x16) & 3);
          VectorSignedToFloat((int)temp_v24,(unsigned char)(in_fpscr >> 0x16) & 3);
          FUN_002aa18c(param_1,temp_v32,temp_v33,temp_v34);
          temp_v8 = ((unsigned int)temp_v22 & 1) == 0;
          pcVar11 = (romwright_code *)(int)temp_v26;
          if (temp_v8) {
            pcVar11 = temp_v21;
          }
          piVar12 = (int *)((int)&temp_v20 + ((int)temp_v22 >> 1));
          VectorSignedToFloat((romwright_code *)(int)temp_v26,(unsigned char)(in_fpscr >> 0x16) & 3);
          if (!temp_v8) {
            pcVar11 = *(romwright_code **)((unsigned char *)temp_v21 + *piVar12);
          }
          temp_v2 = (*pcVar11)(piVar12);
          temp_v10 = (float)VectorSignedToFloat((int)temp_v26,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v10 = temp_v10 + (float)temp_v15;
        }
        else {
          temp_v8 = ((unsigned int)temp_v22 & 1) == 0;
          pcVar11 = (romwright_code *)(int)temp_v26;
          if (temp_v8) {
            pcVar11 = temp_v21;
          }
          VectorSignedToFloat((romwright_code *)(int)temp_v26,(unsigned char)(in_fpscr >> 0x16) & 3);
          if (!temp_v8) {
            pcVar11 = *(romwright_code **)((unsigned char *)temp_v21 + *(int *)((int)&temp_v20 + ((int)temp_v22 >> 1)));
          }
          temp_v2 = (*pcVar11)();
          temp_v10 = (float)VectorSignedToFloat((int)temp_v26,(unsigned char)(in_fpscr >> 0x16) & 3);
        }
        temp_v10 = temp_v10 + temp_v12;
      }
      else {
        temp_v5 = (**(romwright_code **)(*piVar13 + 0x24))(piVar13);
        temp_v8 = ((unsigned int)temp_v22 & 1) == 0;
        VectorSignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
        pcVar11 = temp_v22;
        if (temp_v8) {
          pcVar11 = temp_v21;
        }
        temp_v14 = (unsigned long long)temp_v7 << 0x20;
        if (!temp_v8) {
          pcVar11 = *(romwright_code **)((unsigned char *)temp_v21 + *(int *)((int)&temp_v20 + ((int)temp_v22 >> 1)));
        }
        temp_v2 = (*pcVar11)();
        in_fpscr = (in_fpscr & 0xfffffff) |
                   ((unsigned int)(temp_v12 <= (float)((unsigned long long)temp_v14 >> 0x20)) << 0x1d);
        if (!romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0)) {
          temp_v14 = (unsigned long long)(unsigned int)temp_v12 << 0x20;
        }
        temp_v10 = (float)((unsigned long long)temp_v16 >> 0x20);
      }
      temp_v13 = (unsigned long long)(unsigned int)temp_v10;
    } while (param_4 >= temp_v20 - param_3);
  }
  FUN_001464cc(g_titleScene);
  return;
}

} /* extern "C" */
