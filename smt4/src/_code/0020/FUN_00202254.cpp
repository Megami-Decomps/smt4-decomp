/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00202254` (_code @ 0x202254, 0x6ec bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {
extern unsigned char* DAT_004474f4;

int FUN_0028c618(unsigned int, int);
int nodeSetTranslation(unsigned int, int, float *);
void FUN_002e29c0(float x, float z, float heading);
float FUN_002f35d8(void);
int VectorSignedToFloat(int, int);

/* stack frame of void: 10 slot(s), 40 byte(s) */
typedef struct {
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp8C; /* 0x8c: local_8c */
} void_stack;

extern signed char DAT_0049f93e; /* 0x49f93e */
extern signed char DAT_004bd0dc; /* 0x4bd0dc */
extern unsigned int DAT_004bd0e0; /* 0x4bd0e0 */
extern int DAT_004bd0f4; /* 0x4bd0f4 */
extern int DAT_004bd610; /* 0x4bd610 */
extern int iRam004bd614; /* 0x4bd614 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_0028c618. */
/* Supplied declaration required: nodeSetTranslation. */
extern int gameGetMapBlock(void);


void FUN_00202254(void)

{
/* irregular: 9 goto(s); irregular input(s): in_fpscr; 5 native warning(s); review required */
  unsigned char temp_v0;
  char temp_v1;
  unsigned int *puVar3;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  unsigned int in_fpscr;
  float temp_v9;
  float temp_v10;
  unsigned long long temp_v11;
  unsigned int temp_v12;
  unsigned long long temp_v13;
  float temp_v14;
  float temp_v15;
  unsigned int temp_v16;
  float temp_v17;
  int temp_v18;
  int temp_v19 [19];
  
  temp_v18 = gameGetMapBlock();
  temp_v6 = 0;
  if (DAT_0049f93e != '\0') {
    temp_v6 = 0;
    do {
      temp_v2 = 0;
      if (temp_v2 < (int)(&DAT_004bd0e0)[temp_v6]) {
        do {
          puVar3 = *(unsigned int **)(temp_v6 * 0x100 + temp_v2 * 4 + 0x4bd110);
          if ((*puVar3 & 2) == 0) {
            *puVar3 = *puVar3 | 2;
            *(unsigned char *)(*(int *)(puVar3[2] + 0x2c) + 0x1f6) = 0;
          }
          temp_v2 = temp_v2 + 1;
        } while (temp_v2 < (int)(&DAT_004bd0e0)[temp_v6]);
      }
      temp_v6 = temp_v6 + 1;
    } while (temp_v6 < 6);
    DAT_004bd0dc = '\x01';
  }
  else {
    temp_v2 = 0;
    if (temp_v2 < DAT_004bd0f4) {
      do {
        puVar3 = (unsigned int *)(&DAT_004bd610)[temp_v2];
        if ((*puVar3 & 2) != 0) {
          *puVar3 = *puVar3 & 0xfffffffd;
          *(unsigned char *)(*(int *)(puVar3[2] + 0x2c) + 0x1f6) = 1;
        }
        temp_v2 = temp_v2 + 1;
      } while (temp_v2 < DAT_004bd0f4);
    }
    if (DAT_004bd0dc != '\0') {
      {
        float cameraHeading = FUN_002f35d8();
        FUN_002e29c0(*(float*)(DAT_004474f4 + 0x4c),*(float*)(DAT_004474f4 + 0x54),cameraHeading);
      }
      temp_v2 = temp_v18;
      temp_v19[0] = 0;
      temp_v19[1] = 0;
      temp_v19[2] = 0;
      temp_v19[3] = 0;
      temp_v19[4] = 0;
      temp_v19[5] = 0;
      temp_v8 = 0;
      if ('\0' < *(char *)(temp_v18 + 0xdd1)) {
        temp_v13 = 0x43fa0000437a0000;
        temp_v11 = 0;
        do {
          temp_v3 = 0;
          if ('\0' < *(char *)(temp_v2 + 0xdd0)) {
            temp_v7 = temp_v18 + temp_v8 * 0x78;
            do {
              temp_v4 = temp_v7 + temp_v3 * 8;
              if (*(char *)(temp_v4 + 0x42) == '\x01') {
                temp_v9 = (float)VectorSignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
                temp_v10 = (float)VectorSignedToFloat(temp_v8,(unsigned char)(in_fpscr >> 0x16) & 3);
                temp_v14 = (float)((unsigned long long)temp_v13 >> 0x20);
                temp_v15 = (float)temp_v13 + temp_v9 * temp_v14;
                temp_v17 = (float)temp_v13 + temp_v10 * temp_v14;
                temp_v16 = (unsigned int)(temp_v11 >> 0x20);
                temp_v0 = *(unsigned char *)(temp_v4 + 0x41);
                if (temp_v0 != 0x30) {
                  if (temp_v0 >= 0x31) {
                    if (temp_v0 != 0x40) {
                      if (temp_v0 < 0x41) {
                        if (temp_v0 != 0x31) {
                          if (temp_v0 != 0x32) {
                            if (temp_v0 != 0x33) goto LAB_002026d0;
                            temp_v11 = (unsigned long long)temp_v16 << 0x20;
                            puVar3 = *(unsigned int **)(temp_v19[3] * 4 + 0x4bd410);
                            temp_v19[3] = temp_v19[3] + 1;
                          }
                          else {
                            temp_v11 = (unsigned long long)temp_v16 << 0x20;
                            puVar3 = *(unsigned int **)(temp_v19[3] * 4 + 0x4bd410);
                            temp_v19[3] = temp_v19[3] + 1;
                          }
                        }
                        else {
                          puVar3 = *(unsigned int **)(temp_v19[3] * 4 + 0x4bd410);
                          temp_v11 = (unsigned long long)temp_v16 << 0x20;
                          temp_v19[3] = temp_v19[3] + 1;
                        }
                      }
                      else if (temp_v0 != 0x41) {
                        if (temp_v0 != 0x42) {
                          if (temp_v0 != 0x43) goto LAB_002026d0;
                          temp_v11 = (unsigned long long)temp_v16 << 0x20;
                          puVar3 = *(unsigned int **)(temp_v19[4] * 4 + 0x4bd510);
                          temp_v19[4] = temp_v19[4] + 1;
                        }
                        else {
                          temp_v11 = (unsigned long long)temp_v16 << 0x20;
                          puVar3 = *(unsigned int **)(temp_v19[4] * 4 + 0x4bd510);
                          temp_v19[4] = temp_v19[4] + 1;
                        }
                      }
                      else {
                        temp_v11 = (unsigned long long)temp_v16 << 0x20;
                        puVar3 = *(unsigned int **)(temp_v19[4] * 4 + 0x4bd510);
                        temp_v19[4] = temp_v19[4] + 1;
                      }
                    }
                    else {
                      temp_v11 = (unsigned long long)temp_v16 << 0x20;
                      puVar3 = *(unsigned int **)(temp_v19[4] * 4 + 0x4bd510);
                      temp_v19[4] = temp_v19[4] + 1;
                    }
                    goto LAB_0020267c;
                  }
                  if (temp_v0 == 0x12) {
                    temp_v11 = (unsigned long long)temp_v16 << 0x20;
                    puVar3 = *(unsigned int **)(temp_v19[1] * 4 + 0x4bd210);
                    temp_v19[1] = temp_v19[1] + 1;
                    goto LAB_0020267c;
                  }
                  if (temp_v0 >= 0x13) {
                    if (temp_v0 != 0x13) {
                      if (temp_v0 != 0x20) {
                        if (temp_v0 != 0x21) goto LAB_002026d0;
                        temp_v11 = (unsigned long long)temp_v16 << 0x20;
                        puVar3 = *(unsigned int **)(temp_v19[2] * 4 + 0x4bd310);
                        temp_v19[2] = temp_v19[2] + 1;
                      }
                      else {
                        temp_v11 = (unsigned long long)temp_v16 << 0x20;
                        puVar3 = *(unsigned int **)(temp_v19[2] * 4 + 0x4bd310);
                        temp_v19[2] = temp_v19[2] + 1;
                      }
                    }
                    else {
                      temp_v11 = (unsigned long long)temp_v16 << 0x20;
                      puVar3 = *(unsigned int **)(temp_v19[1] * 4 + 0x4bd210);
                      temp_v19[1] = temp_v19[1] + 1;
                    }
                    goto LAB_0020267c;
                  }
                  if (temp_v0 == 0) {
                    temp_v11 = (unsigned long long)temp_v16 << 0x20;
                    puVar3 = *(unsigned int **)(temp_v19[0] * 4 + 0x4bd110);
                    temp_v19[0] = temp_v19[0] + 1;
                    goto LAB_0020267c;
                  }
                  if (temp_v0 == 0x10) {
                    temp_v11 = (unsigned long long)temp_v16 << 0x20;
                    puVar3 = *(unsigned int **)(temp_v19[1] * 4 + 0x4bd210);
                    temp_v19[1] = temp_v19[1] + 1;
                    goto LAB_0020267c;
                  }
                  if (temp_v0 == 0x11) {
                    temp_v11 = (unsigned long long)temp_v16 << 0x20;
                    puVar3 = *(unsigned int **)(temp_v19[1] * 4 + 0x4bd210);
                    temp_v19[1] = temp_v19[1] + 1;
                    goto LAB_0020267c;
                  }
                }
                else {
                  puVar3 = *(unsigned int **)(temp_v19[3] * 4 + 0x4bd410);
                  temp_v11 = (unsigned long long)temp_v16 << 0x20;
                  temp_v19[3] = temp_v19[3] + 1;
LAB_0020267c:
                  if (puVar3 != (unsigned int *)0x0) {
                    nodeSetTranslation(puVar3[2],0,&temp_v15);
                    FUN_0028c618(puVar3[2],0);
                    if ((*puVar3 & 2) != 0) {
                      *puVar3 = *puVar3 & 0xfffffffd;
                      *(unsigned char *)(*(int *)(puVar3[2] + 0x2c) + 0x1f6) = 1;
                    }
                  }
                }
LAB_002026d0:
                temp_v5 = DAT_004bd610;
                if ((*(char *)(temp_v4 + 0x3e) == '\x01') && (DAT_004bd610 != 0)) {
                  temp_v1 = *(char *)(temp_v4 + 0x40);
                  if (temp_v1 == '\x01') {
                    temp_v11 = temp_v11 & 0xffffffff00000000;
                  }
                  else if (temp_v1 == '\x02') {
                    temp_v11 = temp_v11 & 0xffffffff00000000;
                  }
                  else if (temp_v1 == '\x03') {
                    temp_v11 = temp_v11 & 0xffffffff00000000;
                  }
                  else if (temp_v1 == '\x04') {
                    temp_v11 = temp_v11 & 0xffffffff00000000;
                  }
                  nodeSetTranslation(*(unsigned int *)(DAT_004bd610 + 8),0,&temp_v15);
                  FUN_0028c618(*(unsigned int *)(temp_v5 + 8),0);
                }
                temp_v5 = iRam004bd614;
                if ((*(char *)(temp_v4 + 0x3f) == '\x01') && (iRam004bd614 != 0)) {
                  temp_v1 = *(char *)(temp_v4 + 0x40);
                  if (temp_v1 == '\x01') {
                    temp_v11 = temp_v11 & 0xffffffff00000000;
                  }
                  else if (temp_v1 == '\x02') {
                    temp_v11 = temp_v11 & 0xffffffff00000000;
                  }
                  else if (temp_v1 == '\x03') {
                    temp_v11 = temp_v11 & 0xffffffff00000000;
                  }
                  else if (temp_v1 == '\x04') {
                    temp_v11 = temp_v11 & 0xffffffff00000000;
                  }
                  nodeSetTranslation(*(unsigned int *)(iRam004bd614 + 8),0,&temp_v15);
                  FUN_0028c618(*(unsigned int *)(temp_v5 + 8),0);
                }
                temp_v12 = (unsigned int)(temp_v11 >> 0x20);
                if (*(char *)(temp_v4 + 0x43) != '\x02') {
                  if (*(char *)(temp_v4 + 0x43) == '\x01') {
                    temp_v5 = *(int *)(temp_v6 * 4 + 0x4bd618);
                    if (temp_v5 != 0) {
                      temp_v1 = *(char *)(temp_v4 + 0x40);
                      if (temp_v1 == '\x01') {
                        temp_v11 = (unsigned long long)temp_v12 << 0x20;
                      }
                      else if (temp_v1 == '\x02') {
                        temp_v11 = temp_v11 & 0xffffffff00000000;
                      }
                      else if (temp_v1 == '\x03') {
                        temp_v11 = temp_v11 & 0xffffffff00000000;
                      }
                      else if (temp_v1 == '\x04') {
                        temp_v11 = temp_v11 & 0xffffffff00000000;
                      }
                      nodeSetTranslation(*(unsigned int *)(temp_v5 + 8),0,&temp_v15);
                      FUN_0028c618(*(unsigned int *)(temp_v5 + 8),0);
                    }
                    temp_v6 = temp_v6 + 1;
                  }
                }
                else {
                  temp_v4 = *(int *)(temp_v6 * 4 + 0x4bd618);
                  if (temp_v4 != 0) {
                    temp_v11 = (unsigned long long)temp_v12 << 0x20;
                    nodeSetTranslation(*(unsigned int *)(temp_v4 + 8),0,&temp_v15);
                    FUN_0028c618(*(unsigned int *)(temp_v4 + 8),0);
                  }
                  temp_v6 = temp_v6 + 1;
                }
              }
              temp_v3 = temp_v3 + 1;
            } while (temp_v3 < *(char *)(temp_v2 + 0xdd0));
          }
          temp_v8 = temp_v8 + 1;
        } while (temp_v8 < *(char *)(temp_v2 + 0xdd1));
      }
      temp_v6 = 0;
      do {
        temp_v2 = temp_v19[temp_v6];
        if (temp_v2 < (int)(&DAT_004bd0e0)[temp_v6]) {
          do {
            puVar3 = *(unsigned int **)(temp_v6 * 0x100 + temp_v2 * 4 + 0x4bd110);
            if ((*puVar3 & 2) == 0) {
              *puVar3 = *puVar3 | 2;
              *(unsigned char *)(*(int *)(puVar3[2] + 0x2c) + 0x1f6) = 0;
            }
            temp_v2 = temp_v2 + 1;
          } while (temp_v2 < (int)(&DAT_004bd0e0)[temp_v6]);
        }
        temp_v6 = temp_v6 + 1;
      } while (temp_v6 < 5);
      return;
    }
  }
  return;
}

} /* extern "C" */
