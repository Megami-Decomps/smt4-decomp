/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001f1bc4` (_code @ 0x1f1bc4, 0x4ec bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001b079c(...);
int FUN_0029a17c(...);
int FUN_0029efc0(...);
int FUN_002be5a4(...);
int FUN_002bf288(...);
int FUN_002bf4f8(...);
int FUN_002bf538(void);
int VectorSignedToFloat(...);

typedef int romwright_code(...);
/* stack frame of param_2: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp9C; /* 0x9c: local_9c */
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned int spA8; /* 0xa8: local_a8 */
} param_2_stack;

extern int g_titleScene; /* 0x44ea00 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_001b079c. */
extern int FUN_0026280c(void);
extern unsigned int FUN_00288674(int);
/* Supplied declaration required: FUN_0029a17c. */
extern int FUN_0029d65c(int);
extern int FUN_0029ee54(int);
extern int FUN_0029efa8(int);
/* Supplied declaration required: FUN_0029efc0. */
/* Supplied declaration required: FUN_002be5a4. */
extern int FUN_002bed98(int);
extern int FUN_002beda4(int);
/* Supplied declaration required: FUN_002bf288. */
/* Supplied declaration required: FUN_002bf4f8. */
/* Supplied declaration required: FUN_002bf538. */


void FUN_001f1bc4(int param_1,int param_2)

{
/* irregular: irregular input(s): in_fpscr; 8 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  unsigned int temp_v9;
  int temp_v10;
  int temp_v11;
  int *piVar13;
  unsigned int in_fpscr;
  unsigned char temp_v12 [68];
  int temp_v13;
  
  temp_v0 = FUN_0026280c();
  if (temp_v0 != 0) {
    temp_v1 = temp_v0 + 0x4e8;
    temp_v2 = FUN_0029efc0();
    temp_v3 = FUN_0029efa8(temp_v1);
    temp_v4 = FUN_00288674(temp_v3 + temp_v2);
    temp_v2 = FUN_0029efa8(temp_v1);
    temp_v2 = FUN_002bf4f8(0x24,temp_v2 + 0xb6);
    if (*(int *)(temp_v0 + 0x3fc) >= 4) {
      FUN_002bf288(2,0x24,0xb5,param_1,param_2,0x97);
    }
    temp_v13 = temp_v0 + 0x54c;
    temp_v3 = FUN_0029efc0();
    temp_v11 = 0;
    do {
      temp_v5 = FUN_002bf4f8(0x24,temp_v11 + 0xb6);
      temp_v8 = *(int *)(temp_v0 + 0x3fc);
      temp_v10 = (int)*(short *)(temp_v5 + 8);
      if (temp_v8 >= 4) {
        temp_v5 = (int)*(short *)(temp_v5 + 10);
      }
      else {
        temp_v10 = (temp_v10 - *(short *)(temp_v2 + 8)) * 0x1000;
        temp_v10 = (int)*(short *)(temp_v2 + 8) +
                 (((int)(temp_v10 + ((unsigned int)(temp_v10 >> 0x1f) >> 0x1e)) >> 2) * temp_v8 >> 0xc);
        temp_v5 = ((int)*(short *)(temp_v5 + 10) - (int)*(short *)(temp_v2 + 10)) * 0x1000;
        temp_v5 = (int)*(short *)(temp_v2 + 10) +
                (((int)(temp_v5 + ((unsigned int)(temp_v5 >> 0x1f) >> 0x1e)) >> 2) * temp_v8 >> 0xc);
      }
      FUN_002bf288(2,0x24,0xb1,param_1 + temp_v10,param_2 + temp_v5,0x9c);
      temp_v8 = FUN_0029ee54(temp_v13);
      temp_v6 = temp_v3 + temp_v11;
      if (temp_v6 < temp_v8) {
        temp_v7 = FUN_002bf4f8(0x24,0xb2);
        temp_v8 = temp_v0;
        FUN_001b079c(temp_v0,temp_v4,temp_v12,temp_v6);
        if (temp_v8 == 0) {
          temp_v9 = 0xff;
        }
        else {
          temp_v9 = 0x8400ff;
        }
        VectorSignedToFloat((int)*(short *)(temp_v7 + 10) + param_2 + temp_v5,
                            (unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat((int)*(short *)(temp_v7 + 8) + param_1 + temp_v10,
                            (unsigned char)(in_fpscr >> 0x16) & 3);
        FUN_002be5a4(2,temp_v9,temp_v12);
      }
      temp_v11 = temp_v11 + 1;
    } while (temp_v11 < 8);
    temp_v1 = FUN_0029efa8(temp_v1);
    temp_v1 = FUN_002bf4f8(0x24,temp_v1 + 200);
    temp_v2 = FUN_0029efc0(temp_v13);
    temp_v3 = FUN_0029efa8(temp_v13);
    temp_v11 = FUN_0029efa8(temp_v13);
    temp_v11 = FUN_002bf4f8(0x24,temp_v11 + 200);
    temp_v5 = *(int *)(temp_v0 + 0x3fc);
    if (temp_v5 >= 4) {
      temp_v8 = (int)*(short *)(temp_v11 + 8);
      temp_v1 = (int)*(short *)(temp_v11 + 10);
    }
    else {
      temp_v8 = ((int)*(short *)(temp_v11 + 8) - (int)*(short *)(temp_v1 + 8)) * 0x1000;
      temp_v8 = (int)*(short *)(temp_v1 + 8) +
              (((int)(temp_v8 + ((unsigned int)(temp_v8 >> 0x1f) >> 0x1e)) >> 2) * temp_v5 >> 0xc);
      temp_v11 = ((int)*(short *)(temp_v11 + 10) - (int)*(short *)(temp_v1 + 10)) * 0x1000;
      temp_v1 = (int)*(short *)(temp_v1 + 10) +
              (((int)(temp_v11 + ((unsigned int)(temp_v11 >> 0x1f) >> 0x1e)) >> 2) * temp_v5 >> 0xc);
    }
    FUN_002bf538();
    temp_v1 = temp_v1 + param_2;
    param_1 = param_1 + temp_v8;
    FUN_002bf288(2,0x24,0xbe,param_1,temp_v1,0xab);
    FUN_002bf288(2,0x24,0xbf,param_1,temp_v1,0xab);
    FUN_002bf288(2,0x24,0xc0,param_1,temp_v1,0xab);
    FUN_002bf538();
    FUN_002bf288(2,0x24,0xc1,param_1,temp_v1,0xb5);
    temp_v11 = FUN_0029efa8(temp_v13);
    temp_v11 = FUN_0029d65c((int)*(short *)(temp_v0 + temp_v11 * 2 + 0x44c));
    if (!((temp_v11 == 1 || temp_v11 == 2) || temp_v11 == 6)) {
      FUN_002bf288(2,0x24,0xc2,param_1,temp_v1,0xba);
    }
    else {
      FUN_002bf288(2,0x24,0xc3,param_1,temp_v1,0xba);
    }
    temp_v5 = FUN_002bf4f8(0x24,0xc2);
    temp_v11 = g_titleScene;
    piVar13 = (int *)(g_titleScene + 0x130c);
    temp_v8 = piVar13[*piVar13 + 2];
    piVar13[*piVar13 + 2] = 3;
    if (*(char *)(temp_v11 + 0x1324) != '\0' || temp_v8 != 3) {
      (**(romwright_code **)(temp_v11 + 0x1328))();
      *(unsigned char *)(temp_v11 + 0x1324) = 0;
    }
    FUN_0029a17c(*(short *)(temp_v5 + 8) + param_1,*(short *)(temp_v5 + 10) + temp_v1,
                 (int)**(short **)(temp_v5 + 0xc),(int)(*(short **)(temp_v5 + 0xc))[1],1);
    temp_v11 = FUN_002bed98(temp_v0 + 0xb0);
    temp_v5 = FUN_002beda4(temp_v0 + 0xb0);
    FUN_002bf288(2,0x24,0xc4,temp_v5 + param_1,temp_v11 + temp_v1,0xbf);
    temp_v11 = g_titleScene;
    piVar13 = (int *)(g_titleScene + 0x130c);
    temp_v5 = piVar13[*piVar13 + 2];
    piVar13[*piVar13 + 2] = 0;
    if (*(char *)(temp_v11 + 0x1324) != '\0' || temp_v5 != 0) {
      (**(romwright_code **)(temp_v11 + 0x1328))(0);
      *(unsigned char *)(temp_v11 + 0x1324) = 0;
    }
    temp_v11 = FUN_002bf4f8(0x24,0xc5);
    FUN_001b079c(temp_v0,temp_v4,temp_v12,temp_v2 + temp_v3);
    if (temp_v0 == 0) {
      temp_v4 = 0xffffffff;
    }
    else {
      temp_v4 = 0x8400ff;
    }
    VectorSignedToFloat(*(short *)(temp_v11 + 10) + temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat(*(short *)(temp_v11 + 8) + param_1,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_002be5a4(3,temp_v4,temp_v12);
  }
  return;
}

} /* extern "C" */
