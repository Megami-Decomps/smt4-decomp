/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0032b0d4` (_code @ 0x32b0d4, 0x558 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "shard/TextureDrawCall.h"

extern "C" {

int CONCAT44(double, double);
int FUN_0014e314(...);
int FUN_00157558(int);
int FUN_00162790(...);
int efctSetSpeed(...);
float FUN_00168594(const char *, unsigned int, float);
int FUN_0016c4b8(...);
int FUN_00183bb0(void);
int dataTableGet(int, int);
int FUN_002027fc(void);
int VectorSignedToFloat(...);

typedef int romwright_code(...);
/* stack frame of void: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
} void_stack;

extern int DAT_00589170; /* 0x589170 */
extern int g_renderCtx; /* 0x59dbb4 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: CONCAT44 (PIECE). */
/* Supplied declaration required: FUN_0014e314. */
/* Supplied declaration required: FUN_00157558. */
/* Supplied declaration required: FUN_00162790. */
/* Supplied declaration required: efctSetSpeed. */
/* Supplied declaration required: FUN_00168594. */
extern int packNibblesAndByte(unsigned int, unsigned int, unsigned int);
extern int FUN_001692ac(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0016c4b8. */
extern int FUN_001834a4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_00183bb0. */
/* Supplied declaration required: dataTableGet. */
extern int dataTableGetEntries(void);
/* Supplied declaration required: FUN_002027fc. */
extern int s4LoadIsInProgress(void);


unsigned int FUN_0032b0d4(void)

{
/* irregular: irregular input(s): in_fpscr; 12 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  int *piVar9;
  int temp_v8;
  unsigned int in_fpscr;
  float temp_v9;
  float temp_v10;
  unsigned long long temp_v11;
  unsigned long long temp_v12;
  unsigned int temp_v13;
  
  temp_v2 = DAT_00589170;
  if (((*(int *)(DAT_00589170 + 0x78) != 0x16 && *(int *)(DAT_00589170 + 0x78) != 0x17) ||
      (temp_v1 = s4LoadIsInProgress(), temp_v1 == 0)) && (*(char *)(temp_v2 + 0x61) != '\0')) {
    temp_v2 = *(int *)(temp_v2 + 0x78);
    temp_v11 = 0;
    if (!((temp_v2 == 3 || temp_v2 == 4) || temp_v2 == 6)) {
      FUN_002027fc();
      temp_v2 = DAT_00589170;
      FUN_00157558(g_renderCtx);
      temp_v1 = g_renderCtx;
      temp_v3 = packNibblesAndByte(6,1,0);
      piVar9 = (int *)(temp_v1 + 0x12b8);
      temp_v5 = *piVar9;
      temp_v6 = piVar9[temp_v5 + 2];
      *piVar9 = temp_v5 + 1;
      piVar9[temp_v5 + 3] = temp_v3;
      if (*(char *)(temp_v1 + 0x12d0) != '\0' || temp_v6 != temp_v3) {
        (**(romwright_code **)(temp_v1 + 0x12d4))();
        *(unsigned char *)(temp_v1 + 0x12d0) = 0;
      }
      efctSetSpeed();
      FUN_00183bb0();
      temp_v1 = g_renderCtx;
      temp_v3 = packNibblesAndByte(6,7,0);
      piVar9 = (int *)(temp_v1 + 0x12b8);
      temp_v5 = piVar9[*piVar9 + 2];
      piVar9[*piVar9 + 2] = temp_v3;
      if (*(char *)(temp_v1 + 0x12d0) != '\0' || temp_v5 != temp_v3) {
        (**(romwright_code **)(temp_v1 + 0x12d4))();
        *(unsigned char *)(temp_v1 + 0x12d0) = 0;
      }
      temp_v1 = 0;
      do {
        FUN_001835b4(2,0x2a,temp_v1 + 8000,0,0,2);
        temp_v3 = g_renderCtx;
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < 3);
      piVar9 = (int *)(g_renderCtx + 0x12b8);
      temp_v1 = *piVar9;
      temp_v5 = piVar9[temp_v1 + 2];
      *piVar9 = temp_v1 - 1;
      if (*(char *)(temp_v3 + 0x12d0) != '\0' || temp_v5 != piVar9[temp_v1 + 1]) {
        (**(romwright_code **)(temp_v3 + 0x12d4))();
        *(unsigned char *)(temp_v3 + 0x12d0) = 0;
      }
      temp_v1 = g_renderCtx;
      temp_v3 = FUN_001692ac(1,0);
      piVar9 = (int *)(temp_v1 + 0x1258);
      temp_v5 = *piVar9;
      temp_v6 = piVar9[temp_v5 + 2];
      *piVar9 = temp_v5 + 1;
      piVar9[temp_v5 + 3] = temp_v3;
      if (*(char *)(temp_v1 + 0x1270) != '\0' || temp_v6 != temp_v3) {
        (**(romwright_code **)(temp_v1 + 0x1274))();
        *(unsigned char *)(temp_v1 + 0x1270) = 0;
      }
      efctSetSpeed();
      FUN_00183bb0();
      temp_v13 = 0xffffffff;
      if (*(char *)(temp_v2 + 0x3c) == '\0') {
        temp_v13 = 0x787878ff;
      }
      temp_v1 = FUN_001834a4(9,0x11);
      temp_v12 = 0x3f000000;
      temp_v3 = 0;
      temp_v0 = **(short **)(temp_v1 + 0xc);
      do {
        temp_v9 = (float)((unsigned long long)temp_v11 >> 0x20);
        dataTableGet(0x3a,0);
        temp_v5 = dataTableGetEntries();
        temp_v5 = temp_v5 + temp_v3 * 100;
        temp_v10 = temp_v9;
        temp_v9 = FUN_00168594(reinterpret_cast<const char *>(temp_v5), 4, 0.0f);
        temp_v6 = (int)temp_v0 - (int)temp_v9;
        temp_v9 = (float)VectorSignedToFloat(temp_v6,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v9 = temp_v9 * (float)temp_v12;
        temp_v11 = CONCAT44(temp_v10,temp_v9);
        if (*(int *)(temp_v2 + 8) != temp_v3) {
          temp_v10 = (float)VectorSignedToFloat((int)*(short *)(temp_v1 + 8),
                                              (unsigned char)(in_fpscr >> 0x16) & 3);
          VectorSignedToFloat((int)*(short *)(temp_v1 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
          VectorSignedToFloat((int)(temp_v10 + temp_v9),(unsigned char)(in_fpscr >> 0x16) & 3);
          FUN_00162790(4,temp_v13,temp_v5);
        }
        else {
          efctSetSpeed(temp_v6);
          efctSetSpeed();
          temp_v8 = 0;
          temp_v6 = temp_v2 + temp_v3 * 8;
          do {
            FUN_001835b4(2,0x2a,temp_v8 + 0x1f43,(int)*(float *)(temp_v6 + 0x14),
                         (int)*(float *)(temp_v6 + 0x18),2);
            temp_v8 = temp_v8 + 1;
          } while (temp_v8 < 7);
          efctSetSpeed();
          temp_v8 = g_renderCtx;
          temp_v4 = packNibblesAndByte(6,1,0);
          piVar9 = (int *)(temp_v8 + 0x12b8);
          temp_v7 = piVar9[*piVar9 + 2];
          piVar9[*piVar9 + 2] = temp_v4;
          if (*(char *)(temp_v8 + 0x12d0) != '\0' || temp_v7 != temp_v4) {
            (**(romwright_code **)(temp_v8 + 0x12d4))();
            *(unsigned char *)(temp_v8 + 0x12d0) = 0;
          }
          temp_v8 = 0;
          do {
            FUN_001835b4(2,0x2a,temp_v8 + 0x1f43,(int)*(float *)(temp_v6 + 0x14),
                         (int)*(float *)(temp_v6 + 0x18),2);
            temp_v4 = g_renderCtx;
            temp_v8 = temp_v8 + 1;
          } while (temp_v8 < 7);
          temp_v6 = packNibblesAndByte(6,7,0);
          piVar9 = (int *)(temp_v4 + 0x12b8);
          temp_v8 = piVar9[*piVar9 + 2];
          piVar9[*piVar9 + 2] = temp_v6;
          if (*(char *)(temp_v4 + 0x12d0) != '\0' || temp_v8 != temp_v6) {
            (**(romwright_code **)(temp_v4 + 0x12d4))();
            *(unsigned char *)(temp_v4 + 0x12d0) = 0;
          }
          efctSetSpeed();
          temp_v10 = (float)VectorSignedToFloat((int)*(short *)(temp_v1 + 8),
                                              (unsigned char)(in_fpscr >> 0x16) & 3);
          VectorSignedToFloat((int)*(short *)(temp_v1 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
          VectorSignedToFloat((int)(temp_v10 + (float)temp_v11),(unsigned char)(in_fpscr >> 0x16) & 3);
          FUN_00162790(4,0xff,temp_v5);
        }
        temp_v5 = g_renderCtx;
        temp_v3 = temp_v3 + 1;
      } while (temp_v3 < 5);
      piVar9 = (int *)(g_renderCtx + 0x1258);
      temp_v2 = *piVar9;
      temp_v1 = piVar9[temp_v2 + 2];
      *piVar9 = temp_v2 - 1;
      if (*(char *)(temp_v5 + 0x1270) != '\0' || temp_v1 != piVar9[temp_v2 + 1]) {
        (**(romwright_code **)(temp_v5 + 0x1274))();
        *(unsigned char *)(temp_v5 + 0x1270) = 0;
      }
    }
    else {
      FUN_0016c4b8(g_renderCtx,0);
      FUN_0014e314(0xff,0xff,0xff);
    }
  }
  return 0;
}

} /* extern "C" */
