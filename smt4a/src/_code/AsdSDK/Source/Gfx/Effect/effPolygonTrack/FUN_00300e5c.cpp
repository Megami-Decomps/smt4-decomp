/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00300e5c` (_code @ 0x300e5c, 0x5d0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int effBehaviorRun(int);
int FUN_0032246c(...);
int FUN_00383568(...);
int VectorFloatToUnsigned(double, int);
int VectorUnsignedToFloat(...);

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
} param_1_stack;

extern unsigned char DAT_005c1130; /* 0x5c1130 */
extern unsigned char DAT_005c1131; /* 0x5c1131 */
extern unsigned char DAT_005c1132; /* 0x5c1132 */
extern unsigned char DAT_005c1133; /* 0x5c1133 */
extern unsigned char DAT_006471d0; /* 0x6471d0 */
extern float DAT_006472dc; /* 0x6472dc */
extern float DAT_006472e0; /* 0x6472e0 */
extern float DAT_006472e4; /* 0x6472e4 */
extern float DAT_006472e8; /* 0x6472e8 */
extern float DAT_006472ec; /* 0x6472ec */
extern float DAT_006472f0; /* 0x6472f0 */
extern float DAT_006472f4; /* 0x6472f4 */
extern float DAT_006472f8; /* 0x6472f8 */

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Supplied declaration required: effBehaviorRun. */
/* Supplied declaration required: FUN_0032246c. */
/* Supplied declaration required: FUN_00383568. */


void FUN_00300e5c(int *param_1)

{
/* irregular: irregular input(s): in_fpscr; 5 native warning(s); review required */
  int temp_v0;
  float *pfVar2;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int *puVar5;
  int temp_v3;
  int temp_v4;
  unsigned int in_fpscr;
  float temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  float temp_v8;
  float temp_v9;
  unsigned int temp_v10;
  float temp_v11;
  float temp_v12;
  float temp_v13;
  float temp_v14;
  float temp_v15;
  float temp_v16;
  float temp_v17;
  int temp_v18;
  unsigned int temp_v19;
  unsigned int temp_v20;
  
  if (*param_1 != 0) {
    effBehaviorRun(param_1[0xc]);
    temp_v1 = param_1[1];
    temp_v16 = 0.003921569f;
    temp_v2 = 0;
    temp_v14 = (float)VectorUnsignedToFloat(temp_v1 >> 0x18,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v11 = (float)VectorUnsignedToFloat((temp_v1 & 0xffffff) >> 0x10,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v5 = (float)VectorUnsignedToFloat(temp_v1 & 0xff,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v8 = (float)VectorUnsignedToFloat((temp_v1 & 0xffff) >> 8,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v14 = temp_v14 * 0.003921569f;
    temp_v11 = temp_v11 * 0.003921569f;
    temp_v5 = temp_v5 * 0.003921569f;
    temp_v8 = temp_v8 * 0.003921569f;
    temp_v4 = *param_1;
    temp_v3 = param_1[10];
    puVar5 = *(unsigned int **)(param_1[0xc] + 0x18);
    DAT_006472dc = temp_v14;
    DAT_006472e0 = temp_v11;
    DAT_006472e4 = temp_v8;
    DAT_006472e8 = temp_v5;
    if (0 < temp_v4) {
      temp_v17 = 255.0f;
      do {
        if (*(short *)(*(int *)(temp_v3 + 0x18) + (temp_v2 & 0xffff) * 2) != -1) {
          temp_v0 = puVar5[4];
          if (temp_v0 != -2) {
            if (!(temp_v0 == -1 || temp_v0 == 0)) {
              temp_v18 = *puVar5;
              temp_v19 = puVar5[1];
              temp_v20 = puVar5[2];
              FUN_00383568(temp_v3,temp_v2 & 0xffff,&temp_v18);
              temp_v1 = puVar5[5];
              temp_v12 = (float)VectorUnsignedToFloat
                                        ((temp_v1 & 0xffffff) >> 0x10,(unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v15 = (float)VectorUnsignedToFloat
                                        ((temp_v1 & 0xffff) >> 8,(unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v9 = (float)VectorUnsignedToFloat(temp_v1 >> 0x18,(unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v13 = (float)VectorUnsignedToFloat(temp_v1 & 0xff,(unsigned char)(in_fpscr >> 0x16) & 3);
              DAT_006472dc = temp_v9 * temp_v16 * temp_v14;
              DAT_006472e0 = temp_v12 * temp_v16 * temp_v11;
              DAT_006472e4 = temp_v15 * temp_v16 * temp_v8;
              DAT_006472e8 = temp_v13 * temp_v16 * temp_v5;
              temp_v1 = VectorFloatToUnsigned(DAT_006472dc * temp_v17,3);
              temp_v10 = VectorFloatToUnsigned(DAT_006472e0 * temp_v17,3);
              temp_v6 = VectorFloatToUnsigned(DAT_006472e4 * temp_v17,3);
              temp_v7 = VectorFloatToUnsigned(DAT_006472e8 * temp_v17,3);
              temp_v15 = (float)VectorUnsignedToFloat(temp_v7 & 0xff,(unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v13 = (float)VectorUnsignedToFloat(temp_v6 & 0xff,(unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v9 = (float)VectorUnsignedToFloat(temp_v10 & 0xff,(unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v12 = (float)VectorUnsignedToFloat(temp_v1 & 0xff,(unsigned char)(in_fpscr >> 0x16) & 3);
              pfVar2 = (float *)(*(int *)(*(int *)(temp_v3 + 0x10) + 4) + (temp_v2 & 0xffff) * 0x10);
              DAT_006472ec = temp_v14;
              DAT_006472f0 = temp_v11;
              DAT_006472f4 = temp_v8;
              DAT_006472f8 = temp_v5;
              *pfVar2 = temp_v15 * temp_v16 * temp_v16;
              pfVar2[3] = temp_v12 * temp_v16 * temp_v16;
              pfVar2[1] = temp_v13 * temp_v16 * temp_v16;
              pfVar2[2] = temp_v9 * temp_v16 * temp_v16;
              temp_v9 = (float)VectorUnsignedToFloat(temp_v7 & 0xff,(unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v12 = (float)VectorUnsignedToFloat(temp_v6 & 0xff,(unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v13 = (float)VectorUnsignedToFloat(temp_v10 & 0xff,(unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v15 = (float)VectorUnsignedToFloat(temp_v1 & 0xff,(unsigned char)(in_fpscr >> 0x16) & 3);
              pfVar2 = (float *)(*(int *)(*(int *)(temp_v3 + 0x14) + 4) + (temp_v2 & 0xffff) * 0x10);
              *pfVar2 = temp_v9 * temp_v16 * temp_v16;
              pfVar2[1] = temp_v12 * temp_v16 * temp_v16;
              pfVar2[2] = temp_v13 * temp_v16 * temp_v16;
              pfVar2[3] = temp_v15 * temp_v16 * temp_v16;
            }
            else {
              FUN_00383568(temp_v3,temp_v2 & 0xffff,&DAT_006471d0);
              pfVar2 = (float *)(*(int *)(*(int *)(temp_v3 + 0x10) + 4) + (temp_v2 & 0xffff) * 0x10);
              temp_v9 = (float)VectorUnsignedToFloat((unsigned int)DAT_005c1130,(unsigned char)(in_fpscr >> 0x16) & 3)
              ;
              *pfVar2 = temp_v9 * temp_v16 * temp_v16;
              temp_v9 = (float)VectorUnsignedToFloat((unsigned int)DAT_005c1131,(unsigned char)(in_fpscr >> 0x16) & 3)
              ;
              pfVar2[1] = temp_v9 * temp_v16 * temp_v16;
              temp_v9 = (float)VectorUnsignedToFloat((unsigned int)DAT_005c1132,(unsigned char)(in_fpscr >> 0x16) & 3)
              ;
              pfVar2[2] = temp_v9 * temp_v16 * temp_v16;
              temp_v9 = (float)VectorUnsignedToFloat((unsigned int)DAT_005c1133,(unsigned char)(in_fpscr >> 0x16) & 3)
              ;
              pfVar2[3] = temp_v9 * temp_v16 * temp_v16;
              pfVar2 = (float *)(*(int *)(*(int *)(temp_v3 + 0x14) + 4) + (temp_v2 & 0xffff) * 0x10);
              temp_v9 = (float)VectorUnsignedToFloat((unsigned int)DAT_005c1130,(unsigned char)(in_fpscr >> 0x16) & 3)
              ;
              *pfVar2 = temp_v9 * temp_v16 * temp_v16;
              temp_v9 = (float)VectorUnsignedToFloat((unsigned int)DAT_005c1131,(unsigned char)(in_fpscr >> 0x16) & 3)
              ;
              pfVar2[1] = temp_v9 * temp_v16 * temp_v16;
              temp_v9 = (float)VectorUnsignedToFloat((unsigned int)DAT_005c1132,(unsigned char)(in_fpscr >> 0x16) & 3)
              ;
              pfVar2[2] = temp_v9 * temp_v16 * temp_v16;
              temp_v9 = (float)VectorUnsignedToFloat((unsigned int)DAT_005c1133,(unsigned char)(in_fpscr >> 0x16) & 3)
              ;
              pfVar2[3] = temp_v9 * temp_v16 * temp_v16;
              *(unsigned short *)(*(int *)(temp_v3 + 0x18) + (temp_v2 & 0xffff) * 2) = 0;
            }
          }
          else {
            FUN_00383568(temp_v3,temp_v2 & 0xffff,&DAT_006471d0);
            pfVar2 = (float *)(*(int *)(*(int *)(temp_v3 + 0x10) + 4) + (temp_v2 & 0xffff) * 0x10);
            temp_v9 = (float)VectorUnsignedToFloat((unsigned int)DAT_005c1130,(unsigned char)(in_fpscr >> 0x16) & 3);
            *pfVar2 = temp_v9 * temp_v16 * temp_v16;
            temp_v9 = (float)VectorUnsignedToFloat((unsigned int)DAT_005c1131,(unsigned char)(in_fpscr >> 0x16) & 3);
            pfVar2[1] = temp_v9 * temp_v16 * temp_v16;
            temp_v9 = (float)VectorUnsignedToFloat((unsigned int)DAT_005c1132,(unsigned char)(in_fpscr >> 0x16) & 3);
            pfVar2[2] = temp_v9 * temp_v16 * temp_v16;
            temp_v9 = (float)VectorUnsignedToFloat((unsigned int)DAT_005c1133,(unsigned char)(in_fpscr >> 0x16) & 3);
            pfVar2[3] = temp_v9 * temp_v16 * temp_v16;
            pfVar2 = (float *)(*(int *)(*(int *)(temp_v3 + 0x14) + 4) + (temp_v2 & 0xffff) * 0x10);
            temp_v9 = (float)VectorUnsignedToFloat((unsigned int)DAT_005c1130,(unsigned char)(in_fpscr >> 0x16) & 3);
            *pfVar2 = temp_v9 * temp_v16 * temp_v16;
            temp_v9 = (float)VectorUnsignedToFloat((unsigned int)DAT_005c1131,(unsigned char)(in_fpscr >> 0x16) & 3);
            pfVar2[1] = temp_v9 * temp_v16 * temp_v16;
            temp_v9 = (float)VectorUnsignedToFloat((unsigned int)DAT_005c1132,(unsigned char)(in_fpscr >> 0x16) & 3);
            pfVar2[2] = temp_v9 * temp_v16 * temp_v16;
            temp_v9 = (float)VectorUnsignedToFloat((unsigned int)DAT_005c1133,(unsigned char)(in_fpscr >> 0x16) & 3);
            pfVar2[3] = temp_v9 * temp_v16 * temp_v16;
            *(unsigned short *)(*(int *)(temp_v3 + 0x18) + (temp_v2 & 0xffff) * 2) = 0xffff;
          }
        }
        temp_v2 = temp_v2 + 1;
        puVar5 = puVar5 + 10;
      } while ((int)temp_v2 < temp_v4);
    }
    if ((param_1[0xb] != 0) && ((unsigned int)param_1[4] <= *(unsigned int *)(param_1[0xc] + 0x10))) {
      *(int *)(param_1[0xb] + 4) = param_1[1];
      FUN_0032246c(param_1[0xb]);
    }
  }
  return;
}

} /* extern "C" */
