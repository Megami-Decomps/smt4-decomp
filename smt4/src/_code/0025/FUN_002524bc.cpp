/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002524bc` (_code @ 0x2524bc, 0xc94 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002ad314(float *, float [10]);

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_4_stack;

extern int g_mapIf; /* 0x447a78 */
extern unsigned int *DAT_00447a7c; /* 0x447a7c */
extern int g_gameState; /* 0x49f91c */

/* Supplied declaration required: FUN_002ad314. */


int FUN_002524bc(unsigned int param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 10 goto(s); irregular input(s): in_s0, in_s1, in_s2, in_s3; 5 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int in_s0;
  unsigned int temp_v3;
  unsigned int in_s1;
  unsigned int in_s2;
  unsigned int in_s3;
  unsigned int temp_v4;
  float temp_v5;
  float temp_v6;
  float temp_v7;
  float temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  float temp_v11;
  float temp_v12 [10];
  
  if (param_2 != 0) {
    temp_v2 = 0;
    do {
      if (*(char *)(g_mapIf + temp_v2 * 0x194 + 0x1d0) == '\0') {
        if (temp_v2 == -1) {
          return -1;
        }
        temp_v5 = 120.0f;
        temp_v6 = 60.0f;
        temp_v4 = 0x41c00000;
        temp_v1 = g_mapIf + temp_v2 * 0x194;
        temp_v7 = 140.0f;
        *(unsigned char *)(temp_v1 + 0x1d0) = 1;
        *(unsigned int *)(temp_v1 + 500) = param_3;
        *(int *)(temp_v1 + 0x1e4) = param_2;
        *(unsigned int *)(temp_v1 + 0x1e8) = param_1;
        *(unsigned int *)(temp_v1 + 0x1ec) = param_4;
        *(unsigned int *)(temp_v1 + 0x244) = in_s3;
        *(unsigned int *)(temp_v1 + 0x22c) = in_s0;
        *(unsigned int *)(temp_v1 + 0x230) = in_s1;
        *(unsigned int *)(temp_v1 + 0x234) = in_s2;
        temp_v8 = 110.0f;
        temp_v9 = 0x447a0000;
        temp_v10 = 0x43960000;
        *(unsigned int *)(temp_v1 + 0x220) = in_s0;
        *(unsigned int *)(temp_v1 + 0x224) = in_s1;
        *(unsigned int *)(temp_v1 + 0x228) = in_s2;
        if (param_2 < 0x22) {
          if (param_2 != 0x17) {
            if (param_2 != 0xd) {
              if (param_2 != 0x15) {
                if (param_2 == 0x1d) {
LAB_00252e38:
                  temp_v3 = DAT_00447a7c[0x19];
                  temp_v0 = DAT_00447a7c[6];
                  *(unsigned int *)(temp_v1 + 0x1e0) = 0;
                  *(unsigned int *)(temp_v1 + 0x1f0) = 0;
                  *(unsigned int *)(temp_v1 + 0x248) = temp_v4;
                  *(unsigned int *)(temp_v1 + 0x24c) = temp_v4;
                  *(float *)(temp_v1 + 0x230) = *(float *)(temp_v1 + 0x230) + temp_v8;
                  *(unsigned int *)(temp_v1 + 0x354) = temp_v3;
                  *(unsigned int *)(temp_v1 + 0x358) = temp_v3;
                  *(unsigned int *)(temp_v1 + 0x35c) = temp_v0;
                  *(unsigned int *)(temp_v1 + 0x204) = temp_v9;
                  *(unsigned int *)(temp_v1 + 0x208) = temp_v10;
                  *(unsigned int *)(temp_v1 + 0x238) = *(unsigned int *)(temp_v1 + 0x22c);
                  *(unsigned int *)(temp_v1 + 0x23c) = *(unsigned int *)(temp_v1 + 0x230);
                  *(unsigned int *)(temp_v1 + 0x240) = *(unsigned int *)(temp_v1 + 0x234);
                  return temp_v2;
                }
                if (param_2 == 0x1e) {
LAB_00252e7c:
                  temp_v0 = DAT_00447a7c[0x15];
                  temp_v3 = DAT_00447a7c[6];
                  *(unsigned int *)(temp_v1 + 0x1e0) = 0;
                  *(unsigned int *)(temp_v1 + 0x1f0) = 0;
                  *(unsigned int *)(temp_v1 + 0x248) = temp_v4;
                  *(unsigned int *)(temp_v1 + 0x24c) = temp_v4;
                  *(float *)(temp_v1 + 0x230) = *(float *)(temp_v1 + 0x230) + temp_v8;
                  *(unsigned int *)(temp_v1 + 0x354) = temp_v0;
                  *(unsigned int *)(temp_v1 + 0x358) = temp_v0;
                  *(unsigned int *)(temp_v1 + 0x35c) = temp_v3;
                  *(unsigned int *)(temp_v1 + 0x204) = temp_v9;
                  *(unsigned int *)(temp_v1 + 0x208) = temp_v10;
                  *(unsigned int *)(temp_v1 + 0x238) = *(unsigned int *)(temp_v1 + 0x22c);
                  *(unsigned int *)(temp_v1 + 0x23c) = *(unsigned int *)(temp_v1 + 0x230);
                  *(unsigned int *)(temp_v1 + 0x240) = *(unsigned int *)(temp_v1 + 0x234);
                  return temp_v2;
                }
                if (param_2 == 0x1f) {
LAB_00252ec0:
                  temp_v3 = DAT_00447a7c[0x15];
                  temp_v0 = DAT_00447a7c[6];
                  *(unsigned int *)(temp_v1 + 0x1e0) = 0;
                  *(unsigned int *)(temp_v1 + 0x1f0) = 0;
                  *(unsigned int *)(temp_v1 + 0x248) = temp_v4;
                  *(unsigned int *)(temp_v1 + 0x24c) = temp_v4;
                  *(float *)(temp_v1 + 0x230) = *(float *)(temp_v1 + 0x230) + temp_v7;
                  *(unsigned int *)(temp_v1 + 0x354) = temp_v3;
                  *(unsigned int *)(temp_v1 + 0x358) = temp_v3;
                  *(unsigned int *)(temp_v1 + 0x35c) = temp_v0;
                  *(unsigned int *)(temp_v1 + 0x204) = temp_v9;
                  *(unsigned int *)(temp_v1 + 0x208) = temp_v10;
                  *(unsigned int *)(temp_v1 + 0x238) = *(unsigned int *)(temp_v1 + 0x22c);
                  *(unsigned int *)(temp_v1 + 0x23c) = *(unsigned int *)(temp_v1 + 0x230);
                  *(unsigned int *)(temp_v1 + 0x240) = *(unsigned int *)(temp_v1 + 0x234);
                  return temp_v2;
                }
                if (param_2 != 0xb) {
                  FUN_002ad314(&temp_v11,temp_v12);
                  *(float *)(temp_v1 + 0x22c) = *(float *)(temp_v1 + 0x22c) + temp_v11 * 50.0f;
                  *(float *)(temp_v1 + 0x234) = *(float *)(temp_v1 + 0x234) + temp_v12[0] * 50.0f;
                  goto LAB_002525f8;
                }
                FUN_002ad314(&temp_v11,temp_v12);
                *(float *)(temp_v1 + 0x22c) = *(float *)(temp_v1 + 0x22c) + temp_v11 * 15.0f;
                *(float *)(temp_v1 + 0x234) = *(float *)(temp_v1 + 0x234) + temp_v12[0] * 15.0f;
                goto LAB_00252784;
              }
LAB_00252a68:
              temp_v9 = DAT_00447a7c[0x14];
              temp_v10 = DAT_00447a7c[0x19];
              temp_v0 = DAT_00447a7c[6];
              *(unsigned int *)(temp_v1 + 0x1e0) = 0;
              *(unsigned int *)(temp_v1 + 0x1f0) = 0xffffffff;
              *(unsigned int *)(temp_v1 + 0x248) = temp_v4;
              *(unsigned int *)(temp_v1 + 0x24c) = temp_v4;
              *(float *)(temp_v1 + 0x230) = *(float *)(temp_v1 + 0x230) + temp_v6;
              *(unsigned int *)(temp_v1 + 0x354) = temp_v9;
              *(unsigned int *)(temp_v1 + 0x358) = temp_v10;
              *(unsigned int *)(temp_v1 + 0x35c) = temp_v0;
              *(unsigned int *)(temp_v1 + 0x238) = *(unsigned int *)(temp_v1 + 0x22c);
              *(unsigned int *)(temp_v1 + 0x23c) = *(unsigned int *)(temp_v1 + 0x230);
              *(unsigned int *)(temp_v1 + 0x240) = *(unsigned int *)(temp_v1 + 0x234);
              return temp_v2;
            }
LAB_00252cd4:
            temp_v10 = DAT_00447a7c[0x14];
            temp_v9 = DAT_00447a7c[6];
            *(unsigned int *)(temp_v1 + 0x1e0) = 0;
            *(unsigned int *)(temp_v1 + 0x1f0) = 0;
            *(unsigned int *)(temp_v1 + 0x248) = temp_v4;
            *(unsigned int *)(temp_v1 + 0x24c) = temp_v4;
            *(float *)(temp_v1 + 0x230) = *(float *)(temp_v1 + 0x230) + temp_v5;
            *(unsigned int *)(temp_v1 + 0x354) = temp_v10;
            *(unsigned int *)(temp_v1 + 0x358) = temp_v10;
          }
          else {
LAB_00252d10:
            temp_v10 = DAT_00447a7c[0x14];
            temp_v9 = DAT_00447a7c[0xb];
            *(unsigned int *)(temp_v1 + 0x1e0) = 0;
            *(unsigned int *)(temp_v1 + 0x1f0) = 0xffffffff;
            *(unsigned int *)(temp_v1 + 0x248) = temp_v4;
            *(unsigned int *)(temp_v1 + 0x24c) = temp_v4;
            *(float *)(temp_v1 + 0x230) = *(float *)(temp_v1 + 0x230) + temp_v6;
            *(unsigned int *)(temp_v1 + 0x354) = temp_v10;
            *(unsigned int *)(temp_v1 + 0x358) = temp_v10;
          }
        }
        else {
LAB_002525f8:
          if (param_2 == 1) {
            temp_v4 = DAT_00447a7c[0xc];
            *(unsigned int *)(temp_v1 + 0x1e0) = 1;
            *(unsigned int *)(temp_v1 + 0x1f0) = 0;
            *(float *)(temp_v1 + 0x248) = temp_v5;
            *(float *)(temp_v1 + 0x24c) = temp_v6;
            *(float *)(temp_v1 + 0x230) = *(float *)(temp_v1 + 0x230) + 150.0f;
            *(unsigned int *)(temp_v1 + 0x354) = temp_v4;
            *(unsigned int *)(temp_v1 + 0x358) = temp_v4;
            *(unsigned int *)(temp_v1 + 0x35c) = 0;
            *(unsigned int *)(temp_v1 + 0x204) = 0x44898000;
            *(unsigned int *)(temp_v1 + 0x208) = 0x44480000;
            *(unsigned int *)(temp_v1 + 0x20c) = 0x451c4000;
            *(unsigned int *)(temp_v1 + 0x238) = *(unsigned int *)(temp_v1 + 0x22c);
            *(unsigned int *)(temp_v1 + 0x23c) = *(unsigned int *)(temp_v1 + 0x230);
            *(unsigned int *)(temp_v1 + 0x240) = *(unsigned int *)(temp_v1 + 0x234);
            return temp_v2;
          }
          if (param_2 == 2) {
            temp_v4 = DAT_00447a7c[0xd];
            *(unsigned int *)(temp_v1 + 0x1e0) = 1;
            *(unsigned int *)(temp_v1 + 0x1f0) = 0;
            *(float *)(temp_v1 + 0x248) = temp_v5;
            *(float *)(temp_v1 + 0x24c) = temp_v6;
            *(float *)(temp_v1 + 0x230) = *(float *)(temp_v1 + 0x230) + 150.0f;
            *(unsigned int *)(temp_v1 + 0x354) = temp_v4;
            *(unsigned int *)(temp_v1 + 0x358) = temp_v4;
            *(unsigned int *)(temp_v1 + 0x35c) = 0;
            *(unsigned int *)(temp_v1 + 0x204) = 0x44898000;
            *(unsigned int *)(temp_v1 + 0x208) = 0x44480000;
            *(unsigned int *)(temp_v1 + 0x20c) = 0x451c4000;
            *(unsigned int *)(temp_v1 + 0x238) = *(unsigned int *)(temp_v1 + 0x22c);
            *(unsigned int *)(temp_v1 + 0x23c) = *(unsigned int *)(temp_v1 + 0x230);
            *(unsigned int *)(temp_v1 + 0x240) = *(unsigned int *)(temp_v1 + 0x234);
            return temp_v2;
          }
          if (param_2 == 3) {
            temp_v4 = DAT_00447a7c[0xe];
            *(unsigned int *)(temp_v1 + 0x1e0) = 1;
            *(unsigned int *)(temp_v1 + 0x1f0) = 0;
            *(float *)(temp_v1 + 0x248) = temp_v5;
            *(float *)(temp_v1 + 0x24c) = temp_v6;
            *(float *)(temp_v1 + 0x230) = *(float *)(temp_v1 + 0x230) + 150.0f;
            *(unsigned int *)(temp_v1 + 0x354) = temp_v4;
            *(unsigned int *)(temp_v1 + 0x358) = temp_v4;
            *(unsigned int *)(temp_v1 + 0x35c) = 0;
            *(unsigned int *)(temp_v1 + 0x204) = 0x44898000;
            *(unsigned int *)(temp_v1 + 0x208) = 0x44480000;
            *(unsigned int *)(temp_v1 + 0x20c) = 0x451c4000;
            *(unsigned int *)(temp_v1 + 0x238) = *(unsigned int *)(temp_v1 + 0x22c);
            *(unsigned int *)(temp_v1 + 0x23c) = *(unsigned int *)(temp_v1 + 0x230);
            *(unsigned int *)(temp_v1 + 0x240) = *(unsigned int *)(temp_v1 + 0x234);
            return temp_v2;
          }
          if (param_2 == 4) {
            temp_v4 = DAT_00447a7c[0xf];
            *(unsigned int *)(temp_v1 + 0x1f0) = 0;
            *(unsigned int *)(temp_v1 + 0x1e0) = 1;
            *(float *)(temp_v1 + 0x248) = temp_v5;
            *(float *)(temp_v1 + 0x24c) = temp_v6;
            *(float *)(temp_v1 + 0x230) = *(float *)(temp_v1 + 0x230) + 150.0f;
            *(unsigned int *)(temp_v1 + 0x354) = temp_v4;
            *(unsigned int *)(temp_v1 + 0x358) = temp_v4;
            *(unsigned int *)(temp_v1 + 0x35c) = 0;
            *(unsigned int *)(temp_v1 + 0x238) = *(unsigned int *)(temp_v1 + 0x22c);
            *(unsigned int *)(temp_v1 + 0x23c) = *(unsigned int *)(temp_v1 + 0x230);
            *(unsigned int *)(temp_v1 + 0x240) = *(unsigned int *)(temp_v1 + 0x234);
            return temp_v2;
          }
          if (param_2 == 5) {
            temp_v4 = DAT_00447a7c[0x12];
            *(unsigned int *)(temp_v1 + 0x1e0) = 1;
            *(unsigned int *)(temp_v1 + 0x1f0) = 0;
            *(float *)(temp_v1 + 0x248) = temp_v5;
            *(float *)(temp_v1 + 0x24c) = temp_v6;
            *(float *)(temp_v1 + 0x230) = *(float *)(temp_v1 + 0x230) + 150.0f;
            *(unsigned int *)(temp_v1 + 0x354) = temp_v4;
            *(unsigned int *)(temp_v1 + 0x358) = temp_v4;
            *(unsigned int *)(temp_v1 + 0x35c) = 0;
            *(unsigned int *)(temp_v1 + 0x238) = *(unsigned int *)(temp_v1 + 0x22c);
            *(unsigned int *)(temp_v1 + 0x23c) = *(unsigned int *)(temp_v1 + 0x230);
            *(unsigned int *)(temp_v1 + 0x240) = *(unsigned int *)(temp_v1 + 0x234);
            return temp_v2;
          }
          if (param_2 == 6) {
            temp_v4 = DAT_00447a7c[5];
            temp_v9 = DAT_00447a7c[7];
            *(unsigned int *)(temp_v1 + 0x1e0) = 1;
            *(unsigned int *)(temp_v1 + 0x1f0) = 0;
            *(unsigned int *)(temp_v1 + 0x248) = 0x41c80000;
            *(unsigned int *)(temp_v1 + 0x24c) = 0x41c80000;
            *(float *)(temp_v1 + 0x230) = *(float *)(temp_v1 + 0x230) + 150.0f;
            *(unsigned int *)(temp_v1 + 0x354) = temp_v4;
            *(unsigned int *)(temp_v1 + 0x358) = temp_v4;
            *(unsigned int *)(temp_v1 + 0x35c) = temp_v9;
            *(unsigned int *)(temp_v1 + 0x238) = *(unsigned int *)(temp_v1 + 0x22c);
            *(unsigned int *)(temp_v1 + 0x23c) = *(unsigned int *)(temp_v1 + 0x230);
            *(unsigned int *)(temp_v1 + 0x240) = *(unsigned int *)(temp_v1 + 0x234);
            return temp_v2;
          }
          if (param_2 == 7) {
            temp_v4 = DAT_00447a7c[0x10];
            *(unsigned int *)(temp_v1 + 0x1e0) = 1;
            *(unsigned int *)(temp_v1 + 0x1f0) = 0;
            *(float *)(temp_v1 + 0x248) = temp_v5;
            *(float *)(temp_v1 + 0x24c) = temp_v6;
            *(float *)(temp_v1 + 0x230) = *(float *)(temp_v1 + 0x230) + 150.0f;
            *(unsigned int *)(temp_v1 + 0x354) = temp_v4;
            *(unsigned int *)(temp_v1 + 0x358) = temp_v4;
            *(unsigned int *)(temp_v1 + 0x35c) = 0;
            *(unsigned int *)(temp_v1 + 0x204) = 0x44898000;
            *(unsigned int *)(temp_v1 + 0x208) = 0x44480000;
            *(unsigned int *)(temp_v1 + 0x20c) = 0x451c4000;
            *(unsigned int *)(temp_v1 + 0x238) = *(unsigned int *)(temp_v1 + 0x22c);
            *(unsigned int *)(temp_v1 + 0x23c) = *(unsigned int *)(temp_v1 + 0x230);
            *(unsigned int *)(temp_v1 + 0x240) = *(unsigned int *)(temp_v1 + 0x234);
            return temp_v2;
          }
          if (param_2 == 8) {
            temp_v4 = DAT_00447a7c[0x11];
            *(unsigned int *)(temp_v1 + 0x1f0) = 0;
            *(unsigned int *)(temp_v1 + 0x1e0) = 1;
            *(float *)(temp_v1 + 0x248) = temp_v5;
            *(float *)(temp_v1 + 0x24c) = temp_v6;
            *(float *)(temp_v1 + 0x230) = *(float *)(temp_v1 + 0x230) + 150.0f;
            *(unsigned int *)(temp_v1 + 0x354) = temp_v4;
            *(unsigned int *)(temp_v1 + 0x358) = temp_v4;
            *(unsigned int *)(temp_v1 + 0x35c) = 0;
            *(unsigned int *)(temp_v1 + 0x204) = 0x44898000;
            *(unsigned int *)(temp_v1 + 0x208) = 0x44480000;
            *(unsigned int *)(temp_v1 + 0x20c) = 0x451c4000;
            *(unsigned int *)(temp_v1 + 0x238) = *(unsigned int *)(temp_v1 + 0x22c);
            *(unsigned int *)(temp_v1 + 0x23c) = *(unsigned int *)(temp_v1 + 0x230);
            *(unsigned int *)(temp_v1 + 0x240) = *(unsigned int *)(temp_v1 + 0x234);
            return temp_v2;
          }
          if (param_2 != 0x14) {
            if (param_2 == 0x15) goto LAB_00252a68;
            if (param_2 == 0x16) {
              temp_v9 = DAT_00447a7c[0x14];
              temp_v10 = DAT_00447a7c[0x19];
              temp_v0 = DAT_00447a7c[6];
              *(unsigned int *)(temp_v1 + 0x1e0) = 1;
              *(unsigned int *)(temp_v1 + 0x1f0) = 1;
              *(unsigned int *)(temp_v1 + 0x248) = temp_v4;
              *(unsigned int *)(temp_v1 + 0x24c) = temp_v4;
              *(float *)(temp_v1 + 0x230) = *(float *)(temp_v1 + 0x230) + 150.0f;
              *(unsigned int *)(temp_v1 + 0x354) = temp_v9;
              *(unsigned int *)(temp_v1 + 0x358) = temp_v10;
              *(unsigned int *)(temp_v1 + 0x35c) = temp_v0;
              *(unsigned int *)(temp_v1 + 0x238) = *(unsigned int *)(temp_v1 + 0x22c);
              *(unsigned int *)(temp_v1 + 0x23c) = *(unsigned int *)(temp_v1 + 0x230);
              *(unsigned int *)(temp_v1 + 0x240) = *(unsigned int *)(temp_v1 + 0x234);
              return temp_v2;
            }
            if (param_2 != 0xe) {
              if (param_2 != 0xf) {
                if (param_2 == 0x10) {
                  temp_v9 = DAT_00447a7c[2];
                  temp_v10 = DAT_00447a7c[8];
                  *(unsigned int *)(temp_v1 + 0x1e0) = 1;
                  *(unsigned int *)(temp_v1 + 0x1f0) = 0;
                  *(unsigned int *)(temp_v1 + 0x248) = temp_v4;
                  *(unsigned int *)(temp_v1 + 0x24c) = temp_v4;
                  *(float *)(temp_v1 + 0x230) = *(float *)(temp_v1 + 0x230) + 150.0f;
                  *(unsigned int *)(temp_v1 + 0x354) = temp_v9;
                  *(unsigned int *)(temp_v1 + 0x358) = temp_v9;
                  *(unsigned int *)(temp_v1 + 0x35c) = temp_v10;
                  *(unsigned int *)(temp_v1 + 0x238) = *(unsigned int *)(temp_v1 + 0x22c);
                  *(unsigned int *)(temp_v1 + 0x23c) = *(unsigned int *)(temp_v1 + 0x230);
                  *(unsigned int *)(temp_v1 + 0x240) = *(unsigned int *)(temp_v1 + 0x234);
                  return temp_v2;
                }
                if (param_2 != 0x11) {
                  if (param_2 != 0x12) {
                    if (param_2 != 0x13) {
                      if (param_2 != 9) {
                        if (param_2 == 10) {
                          temp_v10 = DAT_00447a7c[0x14];
                          temp_v9 = DAT_00447a7c[9];
                          *(unsigned int *)(temp_v1 + 0x1e0) = 1;
                          *(unsigned int *)(temp_v1 + 0x1f0) = 0;
                          *(unsigned int *)(temp_v1 + 0x248) = temp_v4;
                          *(unsigned int *)(temp_v1 + 0x24c) = temp_v4;
                          *(float *)(temp_v1 + 0x230) = *(float *)(temp_v1 + 0x230) + temp_v5;
                          *(unsigned int *)(temp_v1 + 0x354) = temp_v10;
                          *(unsigned int *)(temp_v1 + 0x358) = temp_v10;
                          *(unsigned int *)(temp_v1 + 0x35c) = temp_v9;
                          *(unsigned int *)(temp_v1 + 0x238) = *(unsigned int *)(temp_v1 + 0x22c);
                          *(unsigned int *)(temp_v1 + 0x23c) = *(unsigned int *)(temp_v1 + 0x230);
                          *(unsigned int *)(temp_v1 + 0x240) = *(unsigned int *)(temp_v1 + 0x234);
                          return temp_v2;
                        }
                        if (param_2 != 0xb) {
                          if (param_2 == 0xc) {
                            temp_v10 = DAT_00447a7c[0x14];
                            temp_v9 = DAT_00447a7c[6];
                            *(unsigned int *)(temp_v1 + 0x1f0) = 0;
                            *(unsigned int *)(temp_v1 + 0x1e0) = 1;
                            *(unsigned int *)(temp_v1 + 0x248) = temp_v4;
                            *(unsigned int *)(temp_v1 + 0x24c) = temp_v4;
                            *(float *)(temp_v1 + 0x230) = *(float *)(temp_v1 + 0x230) + temp_v5;
                            *(unsigned int *)(temp_v1 + 0x354) = temp_v10;
                            *(unsigned int *)(temp_v1 + 0x358) = temp_v10;
                            *(unsigned int *)(temp_v1 + 0x35c) = temp_v9;
                            *(unsigned int *)(temp_v1 + 0x238) = *(unsigned int *)(temp_v1 + 0x22c);
                            *(unsigned int *)(temp_v1 + 0x23c) = *(unsigned int *)(temp_v1 + 0x230);
                            *(unsigned int *)(temp_v1 + 0x240) = *(unsigned int *)(temp_v1 + 0x234);
                            return temp_v2;
                          }
                          if (param_2 == 0xd) goto LAB_00252cd4;
                          if (param_2 == 0x17) goto LAB_00252d10;
                          if (param_2 == 0x18) {
                            temp_v9 = DAT_00447a7c[0x14];
                            temp_v10 = DAT_00447a7c[7];
                            *(unsigned int *)(temp_v1 + 0x1e0) = 1;
                            *(unsigned int *)(temp_v1 + 0x1f0) = 0xfffffffe;
                            *(unsigned int *)(temp_v1 + 0x248) = temp_v4;
                            *(unsigned int *)(temp_v1 + 0x24c) = temp_v4;
                            *(float *)(temp_v1 + 0x230) = *(float *)(temp_v1 + 0x230) + 80.0f;
                            *(unsigned int *)(temp_v1 + 0x354) = temp_v9;
                            *(unsigned int *)(temp_v1 + 0x358) = temp_v9;
                            *(unsigned int *)(temp_v1 + 0x35c) = temp_v10;
                            *(unsigned int *)(temp_v1 + 0x238) = *(unsigned int *)(temp_v1 + 0x22c);
                            *(unsigned int *)(temp_v1 + 0x23c) = *(unsigned int *)(temp_v1 + 0x230);
                            *(unsigned int *)(temp_v1 + 0x240) = *(unsigned int *)(temp_v1 + 0x234);
                            return temp_v2;
                          }
                          if (param_2 != 0x19) {
                            if (param_2 == 0x1a) goto LAB_00252dc4;
                            if (param_2 != 0x1b) {
                              if (param_2 == 0x1c) goto LAB_00252784;
                              if (param_2 == 0x1d) goto LAB_00252e38;
                              if (param_2 == 0x1e) goto LAB_00252e7c;
                              if (param_2 == 0x1f) goto LAB_00252ec0;
                              if (param_2 != 0x20) {
                                if (param_2 != 0x21) {
                                  if (param_2 != 0x22) {
                                    if (param_2 != 0x23) {
                                      if (param_2 != 0x24) {
                                        if (param_2 == 0x25) {
                                          temp_v9 = DAT_00447a7c[0x1f];
                                          temp_v4 = DAT_00447a7c[0x1b];
                                          *(unsigned int *)(temp_v1 + 0x1e0) = 2;
                                          *(unsigned int *)(temp_v1 + 0x1f0) = 0;
                                          *(float *)(temp_v1 + 0x248) = temp_v5;
                                          *(float *)(temp_v1 + 0x24c) = temp_v5;
                                          *(float *)(temp_v1 + 0x230) =
                                               *(float *)(temp_v1 + 0x230) + 40.0f;
                                          *(unsigned int *)(temp_v1 + 0x354) = temp_v9;
                                          *(unsigned int *)(temp_v1 + 0x358) = temp_v9;
                                          *(unsigned int *)(temp_v1 + 0x35c) = temp_v4;
                                          *(unsigned int *)(temp_v1 + 0x204) = 0x44960000;
                                          *(unsigned int *)(temp_v1 + 0x208) = 0x44960000;
                                          *(unsigned int *)(temp_v1 + 0x238) =
                                               *(unsigned int *)(temp_v1 + 0x22c);
                                          *(unsigned int *)(temp_v1 + 0x23c) =
                                               *(unsigned int *)(temp_v1 + 0x230);
                                          *(unsigned int *)(temp_v1 + 0x240) =
                                               *(unsigned int *)(temp_v1 + 0x234);
                                          return temp_v2;
                                        }
                                        if (param_2 != 0x26) {
                                          if (param_2 == 0x27) {
                                            temp_v4 = DAT_00447a7c[0x20];
                                            temp_v9 = DAT_00447a7c[0x1b];
                                            *(unsigned int *)(temp_v1 + 0x1f0) = 0;
                                            *(unsigned int *)(temp_v1 + 0x1e0) = 2;
                                            *(float *)(temp_v1 + 0x248) = temp_v5;
                                            *(float *)(temp_v1 + 0x24c) = temp_v5;
                                            *(float *)(temp_v1 + 0x230) =
                                                 *(float *)(temp_v1 + 0x230) + 40.0f;
                                            *(unsigned int *)(temp_v1 + 0x354) = temp_v4;
                                            *(unsigned int *)(temp_v1 + 0x358) = temp_v4;
                                            *(unsigned int *)(temp_v1 + 0x35c) = temp_v9;
                                            *(unsigned int *)(temp_v1 + 0x204) = 0x44960000;
                                            *(unsigned int *)(temp_v1 + 0x208) = 0x44960000;
                                          }
                                          *(unsigned int *)(temp_v1 + 0x238) =
                                               *(unsigned int *)(temp_v1 + 0x22c);
                                          *(unsigned int *)(temp_v1 + 0x23c) =
                                               *(unsigned int *)(temp_v1 + 0x230);
                                          *(unsigned int *)(temp_v1 + 0x240) =
                                               *(unsigned int *)(temp_v1 + 0x234);
                                          return temp_v2;
                                        }
                                      }
                                      temp_v9 = DAT_00447a7c[0x21];
                                      temp_v4 = DAT_00447a7c[0x1b];
                                      *(unsigned int *)(temp_v1 + 0x1e0) = 2;
                                      *(unsigned int *)(temp_v1 + 0x1f0) = 0;
                                      *(float *)(temp_v1 + 0x248) = temp_v5;
                                      *(float *)(temp_v1 + 0x24c) = temp_v5;
                                      *(float *)(temp_v1 + 0x230) = *(float *)(temp_v1 + 0x230) + 40.0f;
                                      *(unsigned int *)(temp_v1 + 0x354) = temp_v9;
                                      *(unsigned int *)(temp_v1 + 0x358) = temp_v9;
                                      *(unsigned int *)(temp_v1 + 0x35c) = temp_v4;
                                      *(unsigned int *)(temp_v1 + 0x204) = 0x44960000;
                                      *(unsigned int *)(temp_v1 + 0x208) = 0x44960000;
                                    }
                                    else {
                                      temp_v9 = DAT_00447a7c[0x20];
                                      temp_v4 = DAT_00447a7c[0x1c];
                                      *(unsigned int *)(temp_v1 + 0x1e0) = 2;
                                      *(unsigned int *)(temp_v1 + 0x1f0) = 0;
                                      *(float *)(temp_v1 + 0x248) = temp_v5;
                                      *(float *)(temp_v1 + 0x24c) = temp_v5;
                                      *(float *)(temp_v1 + 0x230) = *(float *)(temp_v1 + 0x230) + 40.0f;
                                      *(unsigned int *)(temp_v1 + 0x354) = temp_v9;
                                      *(unsigned int *)(temp_v1 + 0x358) = temp_v9;
                                      *(unsigned int *)(temp_v1 + 0x35c) = temp_v4;
                                      *(unsigned int *)(temp_v1 + 0x204) = 0x44960000;
                                      *(unsigned int *)(temp_v1 + 0x208) = 0x44960000;
                                    }
                                  }
                                  else {
                                    temp_v9 = DAT_00447a7c[0x1e];
                                    temp_v4 = DAT_00447a7c[0x1c];
                                    *(unsigned int *)(temp_v1 + 0x1e0) = 2;
                                    *(unsigned int *)(temp_v1 + 0x1f0) = 0;
                                    *(float *)(temp_v1 + 0x248) = temp_v5;
                                    *(float *)(temp_v1 + 0x24c) = temp_v5;
                                    *(float *)(temp_v1 + 0x230) = *(float *)(temp_v1 + 0x230) + 40.0f;
                                    *(unsigned int *)(temp_v1 + 0x354) = temp_v9;
                                    *(unsigned int *)(temp_v1 + 0x358) = temp_v9;
                                    *(unsigned int *)(temp_v1 + 0x35c) = temp_v4;
                                    *(unsigned int *)(temp_v1 + 0x204) = 0x44960000;
                                    *(unsigned int *)(temp_v1 + 0x208) = 0x44960000;
                                  }
                                  *(unsigned int *)(temp_v1 + 0x238) = *(unsigned int *)(temp_v1 + 0x22c);
                                  *(unsigned int *)(temp_v1 + 0x23c) = *(unsigned int *)(temp_v1 + 0x230);
                                  *(unsigned int *)(temp_v1 + 0x240) = *(unsigned int *)(temp_v1 + 0x234);
                                  return temp_v2;
                                }
                                if (g_gameState < 100) {
                                  temp_v9 = DAT_00447a7c[0x19];
                                  temp_v10 = DAT_00447a7c[6];
                                  *(unsigned int *)(temp_v1 + 0x1e0) = 1;
                                  *(unsigned int *)(temp_v1 + 0x1f0) = 0;
                                  *(unsigned int *)(temp_v1 + 0x248) = temp_v4;
                                  *(unsigned int *)(temp_v1 + 0x24c) = temp_v4;
                                  *(float *)(temp_v1 + 0x230) = *(float *)(temp_v1 + 0x230) + temp_v7;
                                  *(unsigned int *)(temp_v1 + 0x354) = temp_v9;
                                  *(unsigned int *)(temp_v1 + 0x358) = temp_v9;
                                  *(unsigned int *)(temp_v1 + 0x35c) = temp_v10;
                                  *(unsigned int *)(temp_v1 + 0x238) = *(unsigned int *)(temp_v1 + 0x22c);
                                  *(unsigned int *)(temp_v1 + 0x23c) = *(unsigned int *)(temp_v1 + 0x230);
                                  *(unsigned int *)(temp_v1 + 0x240) = *(unsigned int *)(temp_v1 + 0x234);
                                  return temp_v2;
                                }
                                temp_v10 = DAT_00447a7c[0x21];
                                temp_v9 = DAT_00447a7c[0x1b];
                                *(unsigned int *)(temp_v1 + 0x1e0) = 1;
                                *(unsigned int *)(temp_v1 + 0x1f0) = 0;
                                *(unsigned int *)(temp_v1 + 0x248) = temp_v4;
                                *(unsigned int *)(temp_v1 + 0x24c) = temp_v4;
                                *(float *)(temp_v1 + 0x230) = *(float *)(temp_v1 + 0x230) + temp_v7;
                                *(unsigned int *)(temp_v1 + 0x354) = temp_v10;
                                *(unsigned int *)(temp_v1 + 0x358) = temp_v10;
                              }
                              else {
                                temp_v10 = DAT_00447a7c[4];
                                temp_v9 = DAT_00447a7c[7];
                                *(unsigned int *)(temp_v1 + 0x1e0) = 1;
                                *(unsigned int *)(temp_v1 + 0x1f0) = 0;
                                *(unsigned int *)(temp_v1 + 0x248) = temp_v4;
                                *(unsigned int *)(temp_v1 + 0x24c) = temp_v4;
                                *(float *)(temp_v1 + 0x230) = *(float *)(temp_v1 + 0x230) + temp_v7;
                                *(unsigned int *)(temp_v1 + 0x354) = temp_v10;
                                *(unsigned int *)(temp_v1 + 0x358) = temp_v10;
                              }
                            }
                            else {
                              temp_v10 = DAT_00447a7c[0x14];
                              temp_v9 = DAT_00447a7c[10];
                              *(unsigned int *)(temp_v1 + 0x1e0) = 1;
                              *(unsigned int *)(temp_v1 + 0x1f0) = 1;
                              *(unsigned int *)(temp_v1 + 0x248) = temp_v4;
                              *(unsigned int *)(temp_v1 + 0x24c) = temp_v4;
                              *(float *)(temp_v1 + 0x230) = *(float *)(temp_v1 + 0x230) + temp_v7;
                              *(unsigned int *)(temp_v1 + 0x354) = temp_v10;
                              *(unsigned int *)(temp_v1 + 0x358) = temp_v10;
                            }
                          }
                          else {
                            temp_v10 = DAT_00447a7c[0x14];
                            temp_v9 = DAT_00447a7c[10];
                            *(unsigned int *)(temp_v1 + 0x1e0) = 1;
                            *(unsigned int *)(temp_v1 + 0x1f0) = 1;
                            *(unsigned int *)(temp_v1 + 0x248) = temp_v4;
                            *(unsigned int *)(temp_v1 + 0x24c) = temp_v4;
                            *(float *)(temp_v1 + 0x230) = *(float *)(temp_v1 + 0x230) + 150.0f;
                            *(unsigned int *)(temp_v1 + 0x354) = temp_v10;
                            *(unsigned int *)(temp_v1 + 0x358) = temp_v10;
                          }
                        }
                        else {
LAB_00252784:
                          temp_v10 = DAT_00447a7c[0x14];
                          temp_v9 = DAT_00447a7c[6];
                          *(unsigned int *)(temp_v1 + 0x1e0) = 1;
                          *(unsigned int *)(temp_v1 + 0x1f0) = 0;
                          *(unsigned int *)(temp_v1 + 0x248) = temp_v4;
                          *(unsigned int *)(temp_v1 + 0x24c) = temp_v4;
                          *(float *)(temp_v1 + 0x230) = *(float *)(temp_v1 + 0x230) + temp_v5;
                          *(unsigned int *)(temp_v1 + 0x354) = temp_v10;
                          *(unsigned int *)(temp_v1 + 0x358) = temp_v10;
                        }
                      }
                      else {
LAB_00252dc4:
                        temp_v10 = DAT_00447a7c[0x14];
                        temp_v9 = DAT_00447a7c[0xb];
                        *(unsigned int *)(temp_v1 + 0x1e0) = 1;
                        *(unsigned int *)(temp_v1 + 0x1f0) = 0xfffffffd;
                        *(unsigned int *)(temp_v1 + 0x248) = temp_v4;
                        *(unsigned int *)(temp_v1 + 0x24c) = temp_v4;
                        *(float *)(temp_v1 + 0x230) = *(float *)(temp_v1 + 0x230) + 80.0f;
                        *(unsigned int *)(temp_v1 + 0x354) = temp_v10;
                        *(unsigned int *)(temp_v1 + 0x358) = temp_v10;
                      }
                    }
                    else {
                      temp_v10 = *DAT_00447a7c;
                      temp_v9 = DAT_00447a7c[7];
                      *(unsigned int *)(temp_v1 + 0x1e0) = 1;
                      *(unsigned int *)(temp_v1 + 0x1f0) = 0;
                      *(unsigned int *)(temp_v1 + 0x248) = temp_v4;
                      *(unsigned int *)(temp_v1 + 0x24c) = temp_v4;
                      *(float *)(temp_v1 + 0x230) = *(float *)(temp_v1 + 0x230) + 150.0f;
                      *(unsigned int *)(temp_v1 + 0x354) = temp_v10;
                      *(unsigned int *)(temp_v1 + 0x358) = temp_v10;
                    }
                  }
                  else {
                    temp_v10 = DAT_00447a7c[3];
                    temp_v9 = DAT_00447a7c[7];
                    *(unsigned int *)(temp_v1 + 0x1e0) = 1;
                    *(unsigned int *)(temp_v1 + 0x1f0) = 0;
                    *(unsigned int *)(temp_v1 + 0x248) = temp_v4;
                    *(unsigned int *)(temp_v1 + 0x24c) = temp_v4;
                    *(float *)(temp_v1 + 0x230) = *(float *)(temp_v1 + 0x230) + 150.0f;
                    *(unsigned int *)(temp_v1 + 0x354) = temp_v10;
                    *(unsigned int *)(temp_v1 + 0x358) = temp_v10;
                  }
                }
                else {
                  temp_v10 = DAT_00447a7c[2];
                  temp_v9 = DAT_00447a7c[7];
                  *(unsigned int *)(temp_v1 + 0x1e0) = 1;
                  *(unsigned int *)(temp_v1 + 0x1f0) = 0;
                  *(unsigned int *)(temp_v1 + 0x248) = temp_v4;
                  *(unsigned int *)(temp_v1 + 0x24c) = temp_v4;
                  *(float *)(temp_v1 + 0x230) = *(float *)(temp_v1 + 0x230) + 150.0f;
                  *(unsigned int *)(temp_v1 + 0x354) = temp_v10;
                  *(unsigned int *)(temp_v1 + 0x358) = temp_v10;
                }
              }
              else {
                temp_v10 = DAT_00447a7c[1];
                temp_v9 = DAT_00447a7c[7];
                *(unsigned int *)(temp_v1 + 0x1e0) = 1;
                *(unsigned int *)(temp_v1 + 0x1f0) = 0;
                *(unsigned int *)(temp_v1 + 0x248) = temp_v4;
                *(unsigned int *)(temp_v1 + 0x24c) = temp_v4;
                *(float *)(temp_v1 + 0x230) = *(float *)(temp_v1 + 0x230) + 150.0f;
                *(unsigned int *)(temp_v1 + 0x354) = temp_v10;
                *(unsigned int *)(temp_v1 + 0x358) = temp_v10;
              }
            }
            else {
              temp_v10 = DAT_00447a7c[1];
              temp_v9 = DAT_00447a7c[8];
              *(unsigned int *)(temp_v1 + 0x1e0) = 1;
              *(unsigned int *)(temp_v1 + 0x1f0) = 0;
              *(unsigned int *)(temp_v1 + 0x248) = temp_v4;
              *(unsigned int *)(temp_v1 + 0x24c) = temp_v4;
              *(float *)(temp_v1 + 0x230) = *(float *)(temp_v1 + 0x230) + 150.0f;
              *(unsigned int *)(temp_v1 + 0x354) = temp_v10;
              *(unsigned int *)(temp_v1 + 0x358) = temp_v10;
            }
          }
          else {
            temp_v10 = DAT_00447a7c[0x19];
            temp_v9 = DAT_00447a7c[6];
            *(unsigned int *)(temp_v1 + 0x1e0) = 1;
            *(unsigned int *)(temp_v1 + 0x1f0) = 0;
            *(unsigned int *)(temp_v1 + 0x248) = temp_v4;
            *(unsigned int *)(temp_v1 + 0x24c) = temp_v4;
            *(float *)(temp_v1 + 0x230) = *(float *)(temp_v1 + 0x230) + 150.0f;
            *(unsigned int *)(temp_v1 + 0x354) = temp_v10;
            *(unsigned int *)(temp_v1 + 0x358) = temp_v10;
          }
        }
        *(unsigned int *)(temp_v1 + 0x35c) = temp_v9;
        *(unsigned int *)(temp_v1 + 0x238) = *(unsigned int *)(temp_v1 + 0x22c);
        *(unsigned int *)(temp_v1 + 0x23c) = *(unsigned int *)(temp_v1 + 0x230);
        *(unsigned int *)(temp_v1 + 0x240) = *(unsigned int *)(temp_v1 + 0x234);
        return temp_v2;
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 0x80);
  }
  return -1;
}

} /* extern "C" */
