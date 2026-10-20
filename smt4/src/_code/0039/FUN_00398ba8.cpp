/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00398ba8` (_code @ 0x398ba8, 0x3a4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002ba12c(int);
int FUN_002be5a4(...);
int FUN_002bed3c(void);
int FUN_002bf288(...);
int FUN_002bf4f8(...);
int FUN_002bf538(void);
int FUN_002c18e4(...);
int FUN_002c198c(...);
int FUN_002c1b64(int, int);
int FUN_002c39a4(int);
int VectorSignedToFloat(...);

typedef int romwright_code(...);
/* stack frame of param_1: 5 slot(s), 11 byte(s) */
typedef struct {
    unsigned char sp36; /* 0x36: local_36 */
    unsigned char sp37; /* 0x37: local_37 */
    unsigned char sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_1_stack;

extern int g_titleScene; /* 0x44ea00 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_002ba12c. */
/* Supplied declaration required: FUN_002be5a4. */
/* Supplied declaration required: FUN_002bed3c. */
/* Supplied declaration required: FUN_002bf288. */
/* Supplied declaration required: FUN_002bf4f8. */
/* Supplied declaration required: FUN_002bf538. */
/* Supplied declaration required: FUN_002c18e4. */
/* Supplied declaration required: FUN_002c198c. */
/* Supplied declaration required: FUN_002c1b64. */
/* Supplied declaration required: FUN_002c39a4. */
extern int FUN_002c5d80(unsigned int, unsigned int);
extern int packNibblesAndByte(unsigned int, unsigned int, unsigned int);


void FUN_00398ba8(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 11 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int *piVar5;
  int temp_v4;
  unsigned int temp_v5;
  unsigned char temp_v6;
  unsigned int in_fpscr;
  float temp_v7;
  int temp_v8;
  unsigned char temp_v9;
  unsigned char temp_v10;
  unsigned char temp_v11;
  
  FUN_002bf538();
  temp_v7 = 0.27f;
  FUN_002ba12c(g_titleScene);
  temp_v8 = (int)temp_v7;
  FUN_002c39a4(g_titleScene);
  FUN_002bed3c();
  temp_v4 = g_titleScene;
  temp_v0 = FUN_002c5d80(1,0);
  piVar5 = (int *)(temp_v4 + 0x124c);
  temp_v2 = *piVar5;
  temp_v3 = piVar5[temp_v2 + 2];
  *piVar5 = temp_v2 + 1;
  piVar5[temp_v2 + 3] = temp_v0;
  if (*(char *)(temp_v4 + 0x1264) != '\0' || temp_v3 != temp_v0) {
    (**(romwright_code **)(temp_v4 + 0x1268))();
    *(unsigned char *)(temp_v4 + 0x1264) = 0;
  }
  FUN_002c1b64(g_titleScene,0);
  FUN_002bf288(2,0x2e,0,temp_v8,0,0xb);
  temp_v4 = g_titleScene;
  temp_v0 = packNibblesAndByte(6,1,0);
  piVar5 = (int *)(temp_v4 + 0x12ac);
  temp_v2 = piVar5[*piVar5 + 2];
  piVar5[*piVar5 + 2] = temp_v0;
  if (*(char *)(temp_v4 + 0x12c4) != '\0' || temp_v2 != temp_v0) {
    (**(romwright_code **)(temp_v4 + 0x12c8))();
    *(unsigned char *)(temp_v4 + 0x12c4) = 0;
  }
  FUN_002bf288(2,0x2e,1,temp_v8,0,0xb);
  FUN_002bf288(2,0x2e,2,temp_v8,0,0xb);
  temp_v4 = g_titleScene;
  temp_v0 = packNibblesAndByte(6,7,0);
  piVar5 = (int *)(temp_v4 + 0x12ac);
  temp_v2 = piVar5[*piVar5 + 2];
  piVar5[*piVar5 + 2] = temp_v0;
  if (*(char *)(temp_v4 + 0x12c4) != '\0' || temp_v2 != temp_v0) {
    (**(romwright_code **)(temp_v4 + 0x12c8))();
    *(unsigned char *)(temp_v4 + 0x12c4) = 0;
  }
  temp_v9 = 0;
  temp_v10 = 0;
  temp_v4 = 0;
  temp_v11 = 0;
  do {
    temp_v0 = FUN_002bf4f8(0x2e,temp_v4 + 8);
    if (*(char *)(param_1 + 1) != '\x04') {
      temp_v1 = param_1 + temp_v4 * 2;
      temp_v6 = *(char *)(temp_v1 + 0xb0) == '\0';
      if (temp_v6) {
        temp_v1 = (unsigned int)*(unsigned char *)(temp_v1 + 0xb1);
      }
      temp_v2 = *(short *)(temp_v0 + 8) + temp_v8;
      if (!(temp_v6 && temp_v1 == 0)) {
        FUN_002bf288(2,0x2e,0x10,temp_v2,(int)*(short *)(temp_v0 + 10),0x10);
      }
      else {
        FUN_002bf288(2,0x2e,5,temp_v2,(int)*(short *)(temp_v0 + 10),0x10);
      }
    }
    temp_v5 = 0xffffffff;
    if ((*(char *)(param_1 + 0x22) == temp_v4) && (*(char *)(param_1 + 1) != '\x04')) {
      temp_v5 = 0x72e027ff;
      FUN_002bf288(2,0x2e,4,*(short *)(temp_v0 + 8) + temp_v8,(int)*(short *)(temp_v0 + 10),0x10);
      temp_v1 = *(unsigned int *)(param_1 + 0xc);
      temp_v2 = (int)(((long long)(int)temp_v1 * -0x77777777 + ((unsigned long long)temp_v1 << 0x20)) >> 0x20);
      if ((int)(temp_v1 + ((temp_v2 >> 4) - (temp_v2 >> 0x1f)) * -0x1e) < 0xf) {
        FUN_002bf288(2,0x2e,6,*(short *)(temp_v0 + 8) + temp_v8,(int)*(short *)(temp_v0 + 10),0x10);
      }
    }
    temp_v2 = FUN_002bf4f8(0x2e,7);
    temp_v3 = param_1 + temp_v4 * 2;
    temp_v9 = *(unsigned char *)(temp_v3 + 0xb0);
    temp_v10 = *(unsigned char *)(temp_v3 + 0xb1);
    VectorSignedToFloat((int)*(short *)(temp_v0 + 10) + (int)*(short *)(temp_v2 + 10),
                        (unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat((int)*(short *)(temp_v0 + 8) + (int)*(short *)(temp_v2 + 8) + temp_v8,
                        (unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_002be5a4(4,temp_v5,&temp_v9,(int)*(short *)(temp_v0 + 10));
    temp_v4 = temp_v4 + 1;
  } while (temp_v4 < 8);
  FUN_002bf538();
  temp_v4 = g_titleScene;
  piVar5 = (int *)(g_titleScene + 0x124c);
  temp_v0 = *piVar5;
  temp_v2 = piVar5[temp_v0 + 2];
  *piVar5 = temp_v0 - 1;
  if (*(char *)(temp_v4 + 0x1264) != '\0' || temp_v2 != piVar5[temp_v0 + 1]) {
    (**(romwright_code **)(temp_v4 + 0x1268))();
    *(unsigned char *)(temp_v4 + 0x1264) = 0;
  }
  FUN_002c198c(g_titleScene);
  FUN_002c18e4(g_titleScene);
  return;
}

} /* extern "C" */
