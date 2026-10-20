/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ca7fc` (_code @ 0x2ca7fc, 0x3cc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0028f4b4(int, int);
int FUN_002be5a4(...);
int FUN_002bed3c(void);
int FUN_002bf380(...);
int FUN_002bf538(...);
int dataTableGet(int, int);
int FUN_002c39a4(int);
int VectorSignedToFloat(...);

typedef int romwright_code(...);
/* stack frame of void: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
} void_stack;

extern unsigned char LAB_002cabd8; /* 0x2cabd8 */
extern int g_titleMain; /* 0x44e300 */
extern int g_titleScene; /* 0x44ea00 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_0028f4b4. */
/* Supplied declaration required: FUN_002be5a4. */
/* Supplied declaration required: FUN_002bed3c. */
/* Supplied declaration required: FUN_002bf380. */
extern int FUN_002bf4f8(unsigned int);
/* Supplied declaration required: FUN_002bf538. */
extern int dataTableGetEntries(void);
/* Supplied declaration required: dataTableGet. */
/* Supplied declaration required: FUN_002c39a4. */
extern int FUN_002c5d80(unsigned int, unsigned int);
extern int packNibblesAndByte(unsigned int, unsigned int, unsigned int);


unsigned int FUN_002ca7fc(void)

{
/* irregular: irregular input(s): in_fpscr; 8 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int *piVar7;
  unsigned int in_fpscr;
  float temp_v6;
  float temp_v7;
  unsigned long long temp_v8;
  unsigned long long temp_v9;
  unsigned int temp_v10;
  
  temp_v3 = g_titleMain;
  if (*(char *)(g_titleMain + 0x10) == '\0') {
    FUN_002c39a4(g_titleScene);
    temp_v2 = g_titleScene;
    temp_v1 = packNibblesAndByte(6,1,0);
    piVar7 = (int *)(temp_v2 + 0x12ac);
    temp_v4 = *piVar7;
    temp_v5 = piVar7[temp_v4 + 2];
    *piVar7 = temp_v4 + 1;
    piVar7[temp_v4 + 3] = temp_v1;
    if (*(char *)(temp_v2 + 0x12c4) != '\0' || temp_v5 != temp_v1) {
      (**(romwright_code **)(temp_v2 + 0x12c8))();
      *(unsigned char *)(temp_v2 + 0x12c4) = 0;
    }
    FUN_002bf538();
    FUN_002bed3c();
    FUN_002bf380(2,0x11,1,0,0,2);
    temp_v2 = g_titleScene;
    piVar7 = (int *)(g_titleScene + 0x12ac);
    temp_v1 = *piVar7;
    temp_v4 = piVar7[temp_v1 + 2];
    *piVar7 = temp_v1 - 1;
    if (*(char *)(temp_v2 + 0x12c4) != '\0' || temp_v4 != piVar7[temp_v1 + 1]) {
      (**(romwright_code **)(temp_v2 + 0x12c8))();
      *(unsigned char *)(temp_v2 + 0x12c4) = 0;
    }
    temp_v2 = g_titleScene;
    temp_v1 = FUN_002c5d80(1,0);
    piVar7 = (int *)(temp_v2 + 0x124c);
    temp_v4 = *piVar7;
    temp_v5 = piVar7[temp_v4 + 2];
    *piVar7 = temp_v4 + 1;
    piVar7[temp_v4 + 3] = temp_v1;
    if (*(char *)(temp_v2 + 0x1264) != '\0' || temp_v5 != temp_v1) {
      (**(romwright_code **)(temp_v2 + 0x1268))();
      *(unsigned char *)(temp_v2 + 0x1264) = 0;
    }
    FUN_002bf538();
    FUN_002bed3c();
    temp_v10 = 0xff;
    if (*(char *)(temp_v3 + 0x60) == '\0') {
      temp_v10 = 0x787878ff;
    }
    temp_v2 = FUN_002bf4f8(0x11);
    temp_v8 = 0;
    temp_v0 = **(short **)(temp_v2 + 0xc);
    FUN_002be5a4(2,0xff,&LAB_002cabd8);
    temp_v9 = 0x3f000000;
    temp_v1 = 0;
    do {
      dataTableGet(0x3a,0);
      temp_v4 = dataTableGetEntries();
      temp_v6 = (float)temp_v8;
      temp_v4 = temp_v4 + temp_v1 * 0x56;
      FUN_0028f4b4(temp_v4,4);
      temp_v5 = (int)temp_v0 - (int)temp_v6;
      temp_v6 = (float)VectorSignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v6 = temp_v6 * (float)temp_v9;
      if (*(int *)(temp_v3 + 8) != temp_v1) {
        temp_v7 = (float)VectorSignedToFloat((int)*(short *)(temp_v2 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat((int)*(short *)(temp_v2 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat((int)(temp_v7 + temp_v6),(unsigned char)(in_fpscr >> 0x16) & 3);
        FUN_002be5a4(4,temp_v10,temp_v4);
      }
      else {
        FUN_002bf538(temp_v5);
        temp_v5 = temp_v3 + temp_v1 * 8;
        FUN_002bf380(2,0x11,2,(int)*(float *)(temp_v5 + 0x40),(int)*(float *)(temp_v5 + 0x44),2);
        FUN_002bf538();
        FUN_002bf538();
        FUN_002bf380(2,0x11,2,(int)*(float *)(temp_v5 + 0x40),(int)*(float *)(temp_v5 + 0x44),2);
        FUN_002bf538();
        temp_v7 = (float)VectorSignedToFloat((int)*(short *)(temp_v2 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat((int)*(short *)(temp_v2 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat((int)(temp_v7 + temp_v6),(unsigned char)(in_fpscr >> 0x16) & 3);
        FUN_002be5a4(4,0x72e027ff,temp_v4);
      }
      temp_v4 = g_titleScene;
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < 4);
    piVar7 = (int *)(g_titleScene + 0x124c);
    temp_v3 = *piVar7;
    temp_v2 = piVar7[temp_v3 + 2];
    *piVar7 = temp_v3 - 1;
    if (*(char *)(temp_v4 + 0x1264) != '\0' || temp_v2 != piVar7[temp_v3 + 1]) {
      (**(romwright_code **)(temp_v4 + 0x1268))(piVar7[temp_v3 + 1]);
      *(unsigned char *)(temp_v4 + 0x1264) = 0;
    }
  }
  return 0;
}

} /* extern "C" */
