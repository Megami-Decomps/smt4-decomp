/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00244c70` (_code @ 0x244c70, 0x1104 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0018a924(float *, float [12]);

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
} param_4_stack;

extern int g_mapIf; /* 0x58103c */
extern unsigned int *DAT_00581040; /* 0x581040 */
extern int g_gameState; /* 0x5f15fc */

/* Supplied declaration required: FUN_0018a924. */


int FUN_00244c70(unsigned int param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 9 goto(s); irregular input(s): in_s0, in_s1, in_s2, in_s3; 5 native warning(s); review required */
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
  float temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  float temp_v12;
  float temp_v13;
  float temp_v14 [12];
  
  if (param_2 != 0) {
    temp_v2 = 0;
    do {
      if (*(char *)(g_mapIf + temp_v2 * 0x194 + 0x1dc) == '\0') {
        if (temp_v2 == -1) {
          return -1;
        }
        temp_v5 = 120.0f;
        temp_v7 = 60.0f;
        temp_v6 = 150.0f;
        temp_v1 = g_mapIf + temp_v2 * 0x194;
        temp_v4 = 0x41c00000;
        *(unsigned char *)(temp_v1 + 0x1dc) = 1;
        *(unsigned int *)(temp_v1 + 0x200) = param_3;
        *(int *)(temp_v1 + 0x1f0) = param_2;
        *(unsigned int *)(temp_v1 + 500) = param_1;
        *(unsigned int *)(temp_v1 + 0x1f8) = param_4;
        *(unsigned int *)(temp_v1 + 0x250) = in_s3;
        *(unsigned int *)(temp_v1 + 0x238) = in_s0;
        *(unsigned int *)(temp_v1 + 0x23c) = in_s1;
        *(unsigned int *)(temp_v1 + 0x240) = in_s2;
        temp_v8 = 140.0f;
        temp_v9 = 110.0f;
        temp_v10 = 0x447a0000;
        temp_v11 = 0x43960000;
        temp_v12 = 180.0f;
        *(unsigned int *)(temp_v1 + 0x22c) = in_s0;
        *(unsigned int *)(temp_v1 + 0x230) = in_s1;
        *(unsigned int *)(temp_v1 + 0x234) = in_s2;
        if (param_2 < 0x2d) {
          if (param_2 != 0x17) {
            if (param_2 != 0xd) {
              if (param_2 != 0x15) {
                if (param_2 != 0x1d) {
                  if (param_2 != 0x1e) {
                    if (param_2 != 0x1f) {
                      if (param_2 != 0x2b) {
                        if (param_2 != 0xb) {
                          FUN_0018a924(&temp_v13,temp_v14);
                          *(float *)(temp_v1 + 0x238) = *(float *)(temp_v1 + 0x238) + temp_v13 * 50.0f;
                          *(float *)(temp_v1 + 0x240) = *(float *)(temp_v1 + 0x240) + temp_v14[0] * 50.0f
                          ;
                          goto LAB_00244db8;
                        }
                        FUN_0018a924(&temp_v13,temp_v14);
                        *(float *)(temp_v1 + 0x238) = *(float *)(temp_v1 + 0x238) + temp_v13 * 15.0f;
                        *(float *)(temp_v1 + 0x240) = *(float *)(temp_v1 + 0x240) + temp_v14[0] * 15.0f;
LAB_00244fac:
                        temp_v11 = DAT_00581040[0x15];
                        temp_v10 = DAT_00581040[6];
                        *(unsigned int *)(temp_v1 + 0x1ec) = 1;
                        *(unsigned int *)(temp_v1 + 0x1fc) = 0;
                        *(unsigned int *)(temp_v1 + 0x254) = temp_v4;
                        *(unsigned int *)(temp_v1 + 600) = temp_v4;
                        *(float *)(temp_v1 + 0x23c) = *(float *)(temp_v1 + 0x23c) + temp_v5;
                        *(unsigned int *)(temp_v1 + 0x360) = temp_v11;
                        *(unsigned int *)(temp_v1 + 0x364) = temp_v11;
                        *(unsigned int *)(temp_v1 + 0x368) = temp_v10;
                      }
                      else {
LAB_00245d20:
                        temp_v4 = DAT_00581040[0x10];
                        *(unsigned int *)(temp_v1 + 0x1ec) = 0;
                        *(unsigned int *)(temp_v1 + 0x1fc) = 0;
                        *(float *)(temp_v1 + 0x254) = temp_v5;
                        *(float *)(temp_v1 + 600) = temp_v7;
                        *(float *)(temp_v1 + 0x23c) = *(float *)(temp_v1 + 0x23c) + temp_v6;
                        *(unsigned int *)(temp_v1 + 0x360) = temp_v4;
                        *(unsigned int *)(temp_v1 + 0x364) = temp_v4;
                        *(unsigned int *)(temp_v1 + 0x368) = 0;
                      }
                    }
                    else {
LAB_0024578c:
                      temp_v3 = DAT_00581040[0x16];
                      temp_v0 = DAT_00581040[6];
                      *(unsigned int *)(temp_v1 + 0x1ec) = 0;
                      *(unsigned int *)(temp_v1 + 0x1fc) = 0;
                      *(unsigned int *)(temp_v1 + 0x254) = temp_v4;
                      *(unsigned int *)(temp_v1 + 600) = temp_v4;
                      *(float *)(temp_v1 + 0x23c) = *(float *)(temp_v1 + 0x23c) + temp_v8;
                      *(unsigned int *)(temp_v1 + 0x360) = temp_v3;
                      *(unsigned int *)(temp_v1 + 0x364) = temp_v3;
                      *(unsigned int *)(temp_v1 + 0x368) = temp_v0;
                      *(unsigned int *)(temp_v1 + 0x210) = temp_v10;
                      *(unsigned int *)(temp_v1 + 0x214) = temp_v11;
                    }
                  }
                  else {
LAB_00245748:
                    temp_v3 = DAT_00581040[0x16];
                    temp_v0 = DAT_00581040[6];
                    *(unsigned int *)(temp_v1 + 0x1ec) = 0;
                    *(unsigned int *)(temp_v1 + 0x1fc) = 0;
                    *(unsigned int *)(temp_v1 + 0x254) = temp_v4;
                    *(unsigned int *)(temp_v1 + 600) = temp_v4;
                    *(float *)(temp_v1 + 0x23c) = *(float *)(temp_v1 + 0x23c) + temp_v9;
                    *(unsigned int *)(temp_v1 + 0x360) = temp_v3;
                    *(unsigned int *)(temp_v1 + 0x364) = temp_v3;
                    *(unsigned int *)(temp_v1 + 0x368) = temp_v0;
                    *(unsigned int *)(temp_v1 + 0x210) = temp_v10;
                    *(unsigned int *)(temp_v1 + 0x214) = temp_v11;
                  }
                }
                else {
LAB_00245704:
                  temp_v3 = DAT_00581040[0x1e];
                  temp_v0 = DAT_00581040[6];
                  *(unsigned int *)(temp_v1 + 0x1ec) = 0;
                  *(unsigned int *)(temp_v1 + 0x1fc) = 0;
                  *(unsigned int *)(temp_v1 + 0x254) = temp_v4;
                  *(unsigned int *)(temp_v1 + 600) = temp_v4;
                  *(float *)(temp_v1 + 0x23c) = *(float *)(temp_v1 + 0x23c) + temp_v9;
                  *(unsigned int *)(temp_v1 + 0x360) = temp_v3;
                  *(unsigned int *)(temp_v1 + 0x364) = temp_v3;
                  *(unsigned int *)(temp_v1 + 0x368) = temp_v0;
                  *(unsigned int *)(temp_v1 + 0x210) = temp_v10;
                  *(unsigned int *)(temp_v1 + 0x214) = temp_v11;
                }
              }
              else {
LAB_00245294:
                temp_v10 = DAT_00581040[0x15];
                temp_v11 = DAT_00581040[0x1e];
                temp_v0 = DAT_00581040[6];
                *(unsigned int *)(temp_v1 + 0x1ec) = 0;
                *(unsigned int *)(temp_v1 + 0x1fc) = 0xffffffff;
                *(unsigned int *)(temp_v1 + 0x254) = temp_v4;
                *(unsigned int *)(temp_v1 + 600) = temp_v4;
                *(float *)(temp_v1 + 0x23c) = *(float *)(temp_v1 + 0x23c) + temp_v7;
                *(unsigned int *)(temp_v1 + 0x360) = temp_v10;
                *(unsigned int *)(temp_v1 + 0x364) = temp_v11;
                *(unsigned int *)(temp_v1 + 0x368) = temp_v0;
              }
            }
            else {
LAB_00245554:
              temp_v11 = DAT_00581040[0x15];
              temp_v10 = DAT_00581040[6];
              *(unsigned int *)(temp_v1 + 0x1ec) = 0;
              *(unsigned int *)(temp_v1 + 0x1fc) = 0;
              *(unsigned int *)(temp_v1 + 0x254) = temp_v4;
              *(unsigned int *)(temp_v1 + 600) = temp_v4;
              *(float *)(temp_v1 + 0x23c) = *(float *)(temp_v1 + 0x23c) + temp_v5;
              *(unsigned int *)(temp_v1 + 0x360) = temp_v11;
              *(unsigned int *)(temp_v1 + 0x364) = temp_v11;
              *(unsigned int *)(temp_v1 + 0x368) = temp_v10;
            }
          }
          else {
LAB_00245590:
            temp_v10 = DAT_00581040[0x15];
            temp_v11 = DAT_00581040[0xb];
            *(unsigned int *)(temp_v1 + 0x1ec) = 0;
            *(unsigned int *)(temp_v1 + 0x1fc) = 0xffffffff;
            *(unsigned int *)(temp_v1 + 0x254) = temp_v4;
            *(unsigned int *)(temp_v1 + 600) = temp_v4;
            *(float *)(temp_v1 + 0x23c) = *(float *)(temp_v1 + 0x23c) + temp_v7;
            *(unsigned int *)(temp_v1 + 0x360) = temp_v10;
            *(unsigned int *)(temp_v1 + 0x364) = temp_v10;
            *(unsigned int *)(temp_v1 + 0x368) = temp_v11;
          }
        }
        else {
LAB_00244db8:
          if (param_2 == 1) {
            temp_v4 = DAT_00581040[0xd];
            *(unsigned int *)(temp_v1 + 0x1ec) = 1;
            *(unsigned int *)(temp_v1 + 0x1fc) = 0;
            *(float *)(temp_v1 + 0x254) = temp_v5;
            *(float *)(temp_v1 + 600) = temp_v7;
            *(float *)(temp_v1 + 0x23c) = *(float *)(temp_v1 + 0x23c) + temp_v6;
            *(unsigned int *)(temp_v1 + 0x360) = temp_v4;
            *(unsigned int *)(temp_v1 + 0x364) = temp_v4;
            *(unsigned int *)(temp_v1 + 0x368) = 0;
            *(unsigned int *)(temp_v1 + 0x210) = 0x44898000;
            *(unsigned int *)(temp_v1 + 0x214) = 0x44480000;
            *(unsigned int *)(temp_v1 + 0x218) = 0x451c4000;
            *(unsigned int *)(temp_v1 + 0x244) = *(unsigned int *)(temp_v1 + 0x238);
            *(unsigned int *)(temp_v1 + 0x248) = *(unsigned int *)(temp_v1 + 0x23c);
            *(unsigned int *)(temp_v1 + 0x24c) = *(unsigned int *)(temp_v1 + 0x240);
            return temp_v2;
          }
          if (param_2 == 2) {
            temp_v4 = DAT_00581040[0xe];
            *(unsigned int *)(temp_v1 + 0x1ec) = 1;
            *(unsigned int *)(temp_v1 + 0x1fc) = 0;
            *(float *)(temp_v1 + 0x254) = temp_v5;
            *(float *)(temp_v1 + 600) = temp_v7;
            *(float *)(temp_v1 + 0x23c) = *(float *)(temp_v1 + 0x23c) + temp_v6;
            *(unsigned int *)(temp_v1 + 0x360) = temp_v4;
            *(unsigned int *)(temp_v1 + 0x364) = temp_v4;
            *(unsigned int *)(temp_v1 + 0x368) = 0;
            *(unsigned int *)(temp_v1 + 0x210) = 0x44898000;
            *(unsigned int *)(temp_v1 + 0x214) = 0x44480000;
            *(unsigned int *)(temp_v1 + 0x218) = 0x451c4000;
            *(unsigned int *)(temp_v1 + 0x244) = *(unsigned int *)(temp_v1 + 0x238);
            *(unsigned int *)(temp_v1 + 0x248) = *(unsigned int *)(temp_v1 + 0x23c);
            *(unsigned int *)(temp_v1 + 0x24c) = *(unsigned int *)(temp_v1 + 0x240);
            return temp_v2;
          }
          if (param_2 == 3) {
            temp_v4 = DAT_00581040[0xf];
            *(unsigned int *)(temp_v1 + 0x1ec) = 1;
            *(unsigned int *)(temp_v1 + 0x1fc) = 0;
            *(float *)(temp_v1 + 0x254) = temp_v5;
            *(float *)(temp_v1 + 600) = temp_v7;
            *(float *)(temp_v1 + 0x23c) = *(float *)(temp_v1 + 0x23c) + temp_v6;
            *(unsigned int *)(temp_v1 + 0x360) = temp_v4;
            *(unsigned int *)(temp_v1 + 0x364) = temp_v4;
            *(unsigned int *)(temp_v1 + 0x368) = 0;
            *(unsigned int *)(temp_v1 + 0x210) = 0x44898000;
            *(unsigned int *)(temp_v1 + 0x214) = 0x44480000;
            *(unsigned int *)(temp_v1 + 0x218) = 0x451c4000;
            *(unsigned int *)(temp_v1 + 0x244) = *(unsigned int *)(temp_v1 + 0x238);
            *(unsigned int *)(temp_v1 + 0x248) = *(unsigned int *)(temp_v1 + 0x23c);
            *(unsigned int *)(temp_v1 + 0x24c) = *(unsigned int *)(temp_v1 + 0x240);
            return temp_v2;
          }
          if (param_2 == 4) {
            temp_v4 = DAT_00581040[0x10];
            *(unsigned int *)(temp_v1 + 0x1ec) = 1;
            *(unsigned int *)(temp_v1 + 0x1fc) = 0;
            *(float *)(temp_v1 + 0x254) = temp_v5;
            *(float *)(temp_v1 + 600) = temp_v7;
            *(float *)(temp_v1 + 0x23c) = *(float *)(temp_v1 + 0x23c) + temp_v6;
            *(unsigned int *)(temp_v1 + 0x360) = temp_v4;
            *(unsigned int *)(temp_v1 + 0x364) = temp_v4;
            *(unsigned int *)(temp_v1 + 0x368) = 0;
            *(unsigned int *)(temp_v1 + 0x244) = *(unsigned int *)(temp_v1 + 0x238);
            *(unsigned int *)(temp_v1 + 0x248) = *(unsigned int *)(temp_v1 + 0x23c);
            *(unsigned int *)(temp_v1 + 0x24c) = *(unsigned int *)(temp_v1 + 0x240);
            return temp_v2;
          }
          if (param_2 == 5) {
            temp_v4 = DAT_00581040[0x13];
            *(unsigned int *)(temp_v1 + 0x1fc) = 0;
            *(unsigned int *)(temp_v1 + 0x1ec) = 1;
            *(float *)(temp_v1 + 0x254) = temp_v5;
            *(float *)(temp_v1 + 600) = temp_v7;
            *(float *)(temp_v1 + 0x23c) = *(float *)(temp_v1 + 0x23c) + temp_v6;
            *(unsigned int *)(temp_v1 + 0x360) = temp_v4;
            *(unsigned int *)(temp_v1 + 0x364) = temp_v4;
            *(unsigned int *)(temp_v1 + 0x368) = 0;
            *(unsigned int *)(temp_v1 + 0x244) = *(unsigned int *)(temp_v1 + 0x238);
            *(unsigned int *)(temp_v1 + 0x248) = *(unsigned int *)(temp_v1 + 0x23c);
            *(unsigned int *)(temp_v1 + 0x24c) = *(unsigned int *)(temp_v1 + 0x240);
            return temp_v2;
          }
          if (param_2 != 6) {
            if (param_2 == 7) {
              temp_v4 = DAT_00581040[0x11];
              *(unsigned int *)(temp_v1 + 0x1ec) = 1;
              *(unsigned int *)(temp_v1 + 0x1fc) = 0;
              *(float *)(temp_v1 + 0x254) = temp_v5;
              *(float *)(temp_v1 + 600) = temp_v7;
              *(float *)(temp_v1 + 0x23c) = *(float *)(temp_v1 + 0x23c) + temp_v6;
              *(unsigned int *)(temp_v1 + 0x360) = temp_v4;
              *(unsigned int *)(temp_v1 + 0x364) = temp_v4;
              *(unsigned int *)(temp_v1 + 0x368) = 0;
              *(unsigned int *)(temp_v1 + 0x210) = 0x44898000;
              *(unsigned int *)(temp_v1 + 0x214) = 0x44480000;
              *(unsigned int *)(temp_v1 + 0x218) = 0x451c4000;
              *(unsigned int *)(temp_v1 + 0x244) = *(unsigned int *)(temp_v1 + 0x238);
              *(unsigned int *)(temp_v1 + 0x248) = *(unsigned int *)(temp_v1 + 0x23c);
              *(unsigned int *)(temp_v1 + 0x24c) = *(unsigned int *)(temp_v1 + 0x240);
              return temp_v2;
            }
            if (param_2 == 8) {
              temp_v4 = DAT_00581040[0x12];
              *(unsigned int *)(temp_v1 + 0x1ec) = 1;
              *(unsigned int *)(temp_v1 + 0x1fc) = 0;
              *(float *)(temp_v1 + 0x254) = temp_v5;
              *(float *)(temp_v1 + 600) = temp_v7;
              *(float *)(temp_v1 + 0x23c) = *(float *)(temp_v1 + 0x23c) + temp_v6;
              *(unsigned int *)(temp_v1 + 0x360) = temp_v4;
              *(unsigned int *)(temp_v1 + 0x364) = temp_v4;
              *(unsigned int *)(temp_v1 + 0x368) = 0;
              *(unsigned int *)(temp_v1 + 0x210) = 0x44898000;
              *(unsigned int *)(temp_v1 + 0x214) = 0x44480000;
              *(unsigned int *)(temp_v1 + 0x218) = 0x451c4000;
              *(unsigned int *)(temp_v1 + 0x244) = *(unsigned int *)(temp_v1 + 0x238);
              *(unsigned int *)(temp_v1 + 0x248) = *(unsigned int *)(temp_v1 + 0x23c);
              *(unsigned int *)(temp_v1 + 0x24c) = *(unsigned int *)(temp_v1 + 0x240);
              return temp_v2;
            }
            if (param_2 == 0x14) {
              temp_v10 = DAT_00581040[0x1e];
              temp_v11 = DAT_00581040[6];
              *(unsigned int *)(temp_v1 + 0x1ec) = 1;
              *(unsigned int *)(temp_v1 + 0x1fc) = 0;
              *(unsigned int *)(temp_v1 + 0x254) = temp_v4;
              *(unsigned int *)(temp_v1 + 600) = temp_v4;
              *(float *)(temp_v1 + 0x23c) = *(float *)(temp_v1 + 0x23c) + temp_v6;
              *(unsigned int *)(temp_v1 + 0x360) = temp_v10;
              *(unsigned int *)(temp_v1 + 0x364) = temp_v10;
              *(unsigned int *)(temp_v1 + 0x368) = temp_v11;
              *(unsigned int *)(temp_v1 + 0x244) = *(unsigned int *)(temp_v1 + 0x238);
              *(unsigned int *)(temp_v1 + 0x248) = *(unsigned int *)(temp_v1 + 0x23c);
              *(unsigned int *)(temp_v1 + 0x24c) = *(unsigned int *)(temp_v1 + 0x240);
              return temp_v2;
            }
            if (param_2 == 0x15) goto LAB_00245294;
            if (param_2 == 0x16) {
              temp_v10 = DAT_00581040[0x15];
              temp_v11 = DAT_00581040[0x1e];
              temp_v0 = DAT_00581040[6];
              *(unsigned int *)(temp_v1 + 0x1ec) = 1;
              *(unsigned int *)(temp_v1 + 0x1fc) = 1;
              *(unsigned int *)(temp_v1 + 0x254) = temp_v4;
              *(unsigned int *)(temp_v1 + 600) = temp_v4;
              *(float *)(temp_v1 + 0x23c) = *(float *)(temp_v1 + 0x23c) + temp_v6;
              *(unsigned int *)(temp_v1 + 0x360) = temp_v10;
              *(unsigned int *)(temp_v1 + 0x364) = temp_v11;
              *(unsigned int *)(temp_v1 + 0x368) = temp_v0;
              *(unsigned int *)(temp_v1 + 0x244) = *(unsigned int *)(temp_v1 + 0x238);
              *(unsigned int *)(temp_v1 + 0x248) = *(unsigned int *)(temp_v1 + 0x23c);
              *(unsigned int *)(temp_v1 + 0x24c) = *(unsigned int *)(temp_v1 + 0x240);
              return temp_v2;
            }
            if (param_2 == 0xe) {
              temp_v11 = DAT_00581040[1];
              temp_v10 = DAT_00581040[8];
              *(unsigned int *)(temp_v1 + 0x1fc) = 0;
              *(unsigned int *)(temp_v1 + 0x1ec) = 1;
              *(unsigned int *)(temp_v1 + 0x254) = temp_v4;
              *(unsigned int *)(temp_v1 + 600) = temp_v4;
              *(float *)(temp_v1 + 0x23c) = *(float *)(temp_v1 + 0x23c) + temp_v6;
              *(unsigned int *)(temp_v1 + 0x360) = temp_v11;
              *(unsigned int *)(temp_v1 + 0x364) = temp_v11;
              *(unsigned int *)(temp_v1 + 0x368) = temp_v10;
              *(unsigned int *)(temp_v1 + 0x244) = *(unsigned int *)(temp_v1 + 0x238);
              *(unsigned int *)(temp_v1 + 0x248) = *(unsigned int *)(temp_v1 + 0x23c);
              *(unsigned int *)(temp_v1 + 0x24c) = *(unsigned int *)(temp_v1 + 0x240);
              return temp_v2;
            }
            if (param_2 == 0xf) {
              temp_v11 = DAT_00581040[1];
              temp_v10 = DAT_00581040[7];
              *(unsigned int *)(temp_v1 + 0x1ec) = 1;
              *(unsigned int *)(temp_v1 + 0x1fc) = 0;
              *(unsigned int *)(temp_v1 + 0x254) = temp_v4;
              *(unsigned int *)(temp_v1 + 600) = temp_v4;
              *(float *)(temp_v1 + 0x23c) = *(float *)(temp_v1 + 0x23c) + temp_v6;
              *(unsigned int *)(temp_v1 + 0x360) = temp_v11;
              *(unsigned int *)(temp_v1 + 0x364) = temp_v11;
              *(unsigned int *)(temp_v1 + 0x368) = temp_v10;
              *(unsigned int *)(temp_v1 + 0x244) = *(unsigned int *)(temp_v1 + 0x238);
              *(unsigned int *)(temp_v1 + 0x248) = *(unsigned int *)(temp_v1 + 0x23c);
              *(unsigned int *)(temp_v1 + 0x24c) = *(unsigned int *)(temp_v1 + 0x240);
              return temp_v2;
            }
            if (param_2 == 0x10) {
              temp_v11 = DAT_00581040[2];
              temp_v10 = DAT_00581040[8];
              *(unsigned int *)(temp_v1 + 0x1ec) = 1;
              *(unsigned int *)(temp_v1 + 0x1fc) = 0;
              *(unsigned int *)(temp_v1 + 0x254) = temp_v4;
              *(unsigned int *)(temp_v1 + 600) = temp_v4;
              *(float *)(temp_v1 + 0x23c) = *(float *)(temp_v1 + 0x23c) + temp_v6;
              *(unsigned int *)(temp_v1 + 0x360) = temp_v11;
              *(unsigned int *)(temp_v1 + 0x364) = temp_v11;
              *(unsigned int *)(temp_v1 + 0x368) = temp_v10;
              *(unsigned int *)(temp_v1 + 0x244) = *(unsigned int *)(temp_v1 + 0x238);
              *(unsigned int *)(temp_v1 + 0x248) = *(unsigned int *)(temp_v1 + 0x23c);
              *(unsigned int *)(temp_v1 + 0x24c) = *(unsigned int *)(temp_v1 + 0x240);
              return temp_v2;
            }
            if (param_2 == 0x11) {
              temp_v11 = DAT_00581040[2];
              temp_v10 = DAT_00581040[7];
              *(unsigned int *)(temp_v1 + 0x1ec) = 1;
              *(unsigned int *)(temp_v1 + 0x1fc) = 0;
              *(unsigned int *)(temp_v1 + 0x254) = temp_v4;
              *(unsigned int *)(temp_v1 + 600) = temp_v4;
              *(float *)(temp_v1 + 0x23c) = *(float *)(temp_v1 + 0x23c) + temp_v6;
              *(unsigned int *)(temp_v1 + 0x360) = temp_v11;
              *(unsigned int *)(temp_v1 + 0x364) = temp_v11;
              *(unsigned int *)(temp_v1 + 0x368) = temp_v10;
              *(unsigned int *)(temp_v1 + 0x244) = *(unsigned int *)(temp_v1 + 0x238);
              *(unsigned int *)(temp_v1 + 0x248) = *(unsigned int *)(temp_v1 + 0x23c);
              *(unsigned int *)(temp_v1 + 0x24c) = *(unsigned int *)(temp_v1 + 0x240);
              return temp_v2;
            }
            if (param_2 == 0x12) {
              temp_v11 = DAT_00581040[3];
              temp_v10 = DAT_00581040[7];
              *(unsigned int *)(temp_v1 + 0x1ec) = 1;
              *(unsigned int *)(temp_v1 + 0x1fc) = 0;
              *(unsigned int *)(temp_v1 + 0x254) = temp_v4;
              *(unsigned int *)(temp_v1 + 600) = temp_v4;
              *(float *)(temp_v1 + 0x23c) = *(float *)(temp_v1 + 0x23c) + temp_v6;
              *(unsigned int *)(temp_v1 + 0x360) = temp_v11;
              *(unsigned int *)(temp_v1 + 0x364) = temp_v11;
              *(unsigned int *)(temp_v1 + 0x368) = temp_v10;
              *(unsigned int *)(temp_v1 + 0x244) = *(unsigned int *)(temp_v1 + 0x238);
              *(unsigned int *)(temp_v1 + 0x248) = *(unsigned int *)(temp_v1 + 0x23c);
              *(unsigned int *)(temp_v1 + 0x24c) = *(unsigned int *)(temp_v1 + 0x240);
              return temp_v2;
            }
            if (param_2 == 0x13) {
              temp_v11 = *DAT_00581040;
              temp_v10 = DAT_00581040[7];
              *(unsigned int *)(temp_v1 + 0x1ec) = 1;
              *(unsigned int *)(temp_v1 + 0x1fc) = 0;
              *(unsigned int *)(temp_v1 + 0x254) = temp_v4;
              *(unsigned int *)(temp_v1 + 600) = temp_v4;
              *(float *)(temp_v1 + 0x23c) = *(float *)(temp_v1 + 0x23c) + temp_v6;
              *(unsigned int *)(temp_v1 + 0x360) = temp_v11;
              *(unsigned int *)(temp_v1 + 0x364) = temp_v11;
              *(unsigned int *)(temp_v1 + 0x368) = temp_v10;
              *(unsigned int *)(temp_v1 + 0x244) = *(unsigned int *)(temp_v1 + 0x238);
              *(unsigned int *)(temp_v1 + 0x248) = *(unsigned int *)(temp_v1 + 0x23c);
              *(unsigned int *)(temp_v1 + 0x24c) = *(unsigned int *)(temp_v1 + 0x240);
              return temp_v2;
            }
            if (param_2 == 0x24) {
              temp_v11 = DAT_00581040[0x18];
              temp_v10 = DAT_00581040[7];
              *(unsigned int *)(temp_v1 + 0x1ec) = 1;
              *(unsigned int *)(temp_v1 + 0x1fc) = 0;
              *(unsigned int *)(temp_v1 + 0x254) = temp_v4;
              *(unsigned int *)(temp_v1 + 600) = temp_v4;
              *(float *)(temp_v1 + 0x23c) = *(float *)(temp_v1 + 0x23c) + temp_v12;
              *(unsigned int *)(temp_v1 + 0x360) = temp_v11;
              *(unsigned int *)(temp_v1 + 0x364) = temp_v11;
              *(unsigned int *)(temp_v1 + 0x368) = temp_v10;
              *(unsigned int *)(temp_v1 + 0x244) = *(unsigned int *)(temp_v1 + 0x238);
              *(unsigned int *)(temp_v1 + 0x248) = *(unsigned int *)(temp_v1 + 0x23c);
              *(unsigned int *)(temp_v1 + 0x24c) = *(unsigned int *)(temp_v1 + 0x240);
              return temp_v2;
            }
            if (param_2 == 9) {
              temp_v10 = DAT_00581040[0x15];
              temp_v11 = DAT_00581040[0xb];
              *(unsigned int *)(temp_v1 + 0x1ec) = 1;
              *(unsigned int *)(temp_v1 + 0x1fc) = 0xfffffffd;
              *(unsigned int *)(temp_v1 + 0x254) = temp_v4;
              *(unsigned int *)(temp_v1 + 600) = temp_v4;
              *(float *)(temp_v1 + 0x23c) = *(float *)(temp_v1 + 0x23c) + 80.0f;
              *(unsigned int *)(temp_v1 + 0x360) = temp_v10;
              *(unsigned int *)(temp_v1 + 0x364) = temp_v10;
              *(unsigned int *)(temp_v1 + 0x368) = temp_v11;
              *(unsigned int *)(temp_v1 + 0x244) = *(unsigned int *)(temp_v1 + 0x238);
              *(unsigned int *)(temp_v1 + 0x248) = *(unsigned int *)(temp_v1 + 0x23c);
              *(unsigned int *)(temp_v1 + 0x24c) = *(unsigned int *)(temp_v1 + 0x240);
              return temp_v2;
            }
            if (param_2 == 10) {
              temp_v10 = DAT_00581040[0x15];
              temp_v11 = DAT_00581040[9];
              *(unsigned int *)(temp_v1 + 0x1ec) = 1;
              *(unsigned int *)(temp_v1 + 0x1fc) = 0;
              *(unsigned int *)(temp_v1 + 0x254) = temp_v4;
              *(unsigned int *)(temp_v1 + 600) = temp_v4;
              *(float *)(temp_v1 + 0x23c) = *(float *)(temp_v1 + 0x23c) + temp_v5;
              *(unsigned int *)(temp_v1 + 0x360) = temp_v10;
              *(unsigned int *)(temp_v1 + 0x364) = temp_v10;
              *(unsigned int *)(temp_v1 + 0x368) = temp_v11;
              *(unsigned int *)(temp_v1 + 0x244) = *(unsigned int *)(temp_v1 + 0x238);
              *(unsigned int *)(temp_v1 + 0x248) = *(unsigned int *)(temp_v1 + 0x23c);
              *(unsigned int *)(temp_v1 + 0x24c) = *(unsigned int *)(temp_v1 + 0x240);
              return temp_v2;
            }
            if (param_2 == 0xb || param_2 == 0xc) goto LAB_00244fac;
            if (param_2 == 0xd) goto LAB_00245554;
            if (param_2 == 0x17) goto LAB_00245590;
            if (param_2 != 0x18) {
              if (param_2 != 0x19) {
                if (param_2 != 0x1a) {
                  if (param_2 != 0x1b) {
                    if (param_2 != 0x1c) {
                      if (param_2 == 0x1d) goto LAB_00245704;
                      if (param_2 == 0x1e) goto LAB_00245748;
                      if (param_2 == 0x1f) goto LAB_0024578c;
                      if (param_2 != 0x20) {
                        if (param_2 != 0x21) {
                          if (param_2 != 0x2d) {
                            if (param_2 == 0x2e) {
                              temp_v10 = DAT_00581040[0x26];
                              temp_v4 = DAT_00581040[0x22];
                              *(unsigned int *)(temp_v1 + 0x1ec) = 2;
                              *(unsigned int *)(temp_v1 + 0x1fc) = 0;
                              *(float *)(temp_v1 + 0x254) = temp_v5;
                              *(float *)(temp_v1 + 600) = temp_v5;
                              *(float *)(temp_v1 + 0x23c) = *(float *)(temp_v1 + 0x23c) + 40.0f;
                              *(unsigned int *)(temp_v1 + 0x360) = temp_v10;
                              *(unsigned int *)(temp_v1 + 0x364) = temp_v10;
                              *(unsigned int *)(temp_v1 + 0x368) = temp_v4;
                              *(unsigned int *)(temp_v1 + 0x210) = 0x44960000;
                              *(unsigned int *)(temp_v1 + 0x214) = 0x44960000;
                              *(unsigned int *)(temp_v1 + 0x244) = *(unsigned int *)(temp_v1 + 0x238);
                              *(unsigned int *)(temp_v1 + 0x248) = *(unsigned int *)(temp_v1 + 0x23c);
                              *(unsigned int *)(temp_v1 + 0x24c) = *(unsigned int *)(temp_v1 + 0x240);
                              return temp_v2;
                            }
                            if (param_2 == 0x2f) {
                              temp_v10 = DAT_00581040[0x27];
                              temp_v4 = DAT_00581040[0x21];
                              *(unsigned int *)(temp_v1 + 0x1ec) = 2;
                              *(unsigned int *)(temp_v1 + 0x1fc) = 0;
                              *(float *)(temp_v1 + 0x254) = temp_v5;
                              *(float *)(temp_v1 + 600) = temp_v5;
                              *(float *)(temp_v1 + 0x23c) = *(float *)(temp_v1 + 0x23c) + 40.0f;
                              *(unsigned int *)(temp_v1 + 0x360) = temp_v10;
                              *(unsigned int *)(temp_v1 + 0x364) = temp_v10;
                              *(unsigned int *)(temp_v1 + 0x368) = temp_v4;
                              *(unsigned int *)(temp_v1 + 0x210) = 0x44960000;
                              *(unsigned int *)(temp_v1 + 0x214) = 0x44960000;
                              *(unsigned int *)(temp_v1 + 0x244) = *(unsigned int *)(temp_v1 + 0x238);
                              *(unsigned int *)(temp_v1 + 0x248) = *(unsigned int *)(temp_v1 + 0x23c);
                              *(unsigned int *)(temp_v1 + 0x24c) = *(unsigned int *)(temp_v1 + 0x240);
                              return temp_v2;
                            }
                            if (param_2 == 0x30) {
                              temp_v4 = DAT_00581040[0x25];
                              temp_v10 = DAT_00581040[0x21];
                              *(unsigned int *)(temp_v1 + 0x1ec) = 2;
                              *(unsigned int *)(temp_v1 + 0x1fc) = 0;
                              *(float *)(temp_v1 + 0x254) = temp_v5;
                              *(float *)(temp_v1 + 600) = temp_v5;
                              *(float *)(temp_v1 + 0x23c) = *(float *)(temp_v1 + 0x23c) + 40.0f;
                              *(unsigned int *)(temp_v1 + 0x360) = temp_v4;
                              *(unsigned int *)(temp_v1 + 0x364) = temp_v4;
                              *(unsigned int *)(temp_v1 + 0x368) = temp_v10;
                              *(unsigned int *)(temp_v1 + 0x210) = 0x44960000;
                              *(unsigned int *)(temp_v1 + 0x214) = 0x44960000;
                              *(unsigned int *)(temp_v1 + 0x244) = *(unsigned int *)(temp_v1 + 0x238);
                              *(unsigned int *)(temp_v1 + 0x248) = *(unsigned int *)(temp_v1 + 0x23c);
                              *(unsigned int *)(temp_v1 + 0x24c) = *(unsigned int *)(temp_v1 + 0x240);
                              return temp_v2;
                            }
                            if (param_2 == 0x31) {
                              temp_v4 = DAT_00581040[0x27];
                              temp_v10 = DAT_00581040[0x21];
                              *(unsigned int *)(temp_v1 + 0x1ec) = 2;
                              *(unsigned int *)(temp_v1 + 0x1fc) = 0;
                              *(float *)(temp_v1 + 0x254) = temp_v5;
                              *(float *)(temp_v1 + 600) = temp_v5;
                              *(float *)(temp_v1 + 0x23c) = *(float *)(temp_v1 + 0x23c) + 40.0f;
                              *(unsigned int *)(temp_v1 + 0x360) = temp_v4;
                              *(unsigned int *)(temp_v1 + 0x364) = temp_v4;
                              *(unsigned int *)(temp_v1 + 0x368) = temp_v10;
                              *(unsigned int *)(temp_v1 + 0x210) = 0x44960000;
                              *(unsigned int *)(temp_v1 + 0x214) = 0x44960000;
                              *(unsigned int *)(temp_v1 + 0x244) = *(unsigned int *)(temp_v1 + 0x238);
                              *(unsigned int *)(temp_v1 + 0x248) = *(unsigned int *)(temp_v1 + 0x23c);
                              *(unsigned int *)(temp_v1 + 0x24c) = *(unsigned int *)(temp_v1 + 0x240);
                              return temp_v2;
                            }
                            if (param_2 == 0x32) {
                              temp_v4 = DAT_00581040[0x26];
                              temp_v10 = DAT_00581040[0x21];
                              *(unsigned int *)(temp_v1 + 0x1ec) = 2;
                              *(unsigned int *)(temp_v1 + 0x1fc) = 0;
                              *(float *)(temp_v1 + 0x254) = temp_v5;
                              *(float *)(temp_v1 + 600) = temp_v5;
                              *(float *)(temp_v1 + 0x23c) = *(float *)(temp_v1 + 0x23c) + 40.0f;
                              *(unsigned int *)(temp_v1 + 0x360) = temp_v4;
                              *(unsigned int *)(temp_v1 + 0x364) = temp_v4;
                              *(unsigned int *)(temp_v1 + 0x368) = temp_v10;
                              *(unsigned int *)(temp_v1 + 0x210) = 0x44960000;
                              *(unsigned int *)(temp_v1 + 0x214) = 0x44960000;
                              *(unsigned int *)(temp_v1 + 0x244) = *(unsigned int *)(temp_v1 + 0x238);
                              *(unsigned int *)(temp_v1 + 0x248) = *(unsigned int *)(temp_v1 + 0x23c);
                              *(unsigned int *)(temp_v1 + 0x24c) = *(unsigned int *)(temp_v1 + 0x240);
                              return temp_v2;
                            }
                            if (param_2 == 0x35) {
                              temp_v10 = DAT_00581040[0x2a];
                              temp_v4 = DAT_00581040[0x21];
                              *(unsigned int *)(temp_v1 + 0x1ec) = 2;
                              *(unsigned int *)(temp_v1 + 0x1fc) = 0;
                              *(float *)(temp_v1 + 0x254) = temp_v5;
                              *(float *)(temp_v1 + 600) = temp_v5;
                              *(float *)(temp_v1 + 0x23c) = *(float *)(temp_v1 + 0x23c) + 40.0f;
                              *(unsigned int *)(temp_v1 + 0x360) = temp_v10;
                              *(unsigned int *)(temp_v1 + 0x364) = temp_v10;
                              *(unsigned int *)(temp_v1 + 0x368) = temp_v4;
                              *(unsigned int *)(temp_v1 + 0x210) = 0x44960000;
                              *(unsigned int *)(temp_v1 + 0x214) = 0x44960000;
                              *(unsigned int *)(temp_v1 + 0x244) = *(unsigned int *)(temp_v1 + 0x238);
                              *(unsigned int *)(temp_v1 + 0x248) = *(unsigned int *)(temp_v1 + 0x23c);
                              *(unsigned int *)(temp_v1 + 0x24c) = *(unsigned int *)(temp_v1 + 0x240);
                              return temp_v2;
                            }
                            if (param_2 == 0x22) {
                              temp_v0 = DAT_00581040[0x19];
                              temp_v3 = DAT_00581040[6];
                              *(unsigned int *)(temp_v1 + 0x1ec) = 0;
                              *(unsigned int *)(temp_v1 + 0x1fc) = 0;
                              *(unsigned int *)(temp_v1 + 0x254) = temp_v4;
                              *(unsigned int *)(temp_v1 + 600) = temp_v4;
                              *(float *)(temp_v1 + 0x23c) = *(float *)(temp_v1 + 0x23c) + temp_v9;
                              *(unsigned int *)(temp_v1 + 0x360) = temp_v0;
                              *(unsigned int *)(temp_v1 + 0x364) = temp_v0;
                              *(unsigned int *)(temp_v1 + 0x368) = temp_v3;
                              *(unsigned int *)(temp_v1 + 0x210) = temp_v10;
                              *(unsigned int *)(temp_v1 + 0x214) = temp_v11;
                              *(unsigned int *)(temp_v1 + 0x244) = *(unsigned int *)(temp_v1 + 0x238);
                              *(unsigned int *)(temp_v1 + 0x248) = *(unsigned int *)(temp_v1 + 0x23c);
                              *(unsigned int *)(temp_v1 + 0x24c) = *(unsigned int *)(temp_v1 + 0x240);
                              return temp_v2;
                            }
                            if (param_2 == 0x23) {
                              temp_v3 = DAT_00581040[0x19];
                              temp_v0 = DAT_00581040[6];
                              *(unsigned int *)(temp_v1 + 0x1ec) = 0;
                              *(unsigned int *)(temp_v1 + 0x1fc) = 0;
                              *(unsigned int *)(temp_v1 + 0x254) = temp_v4;
                              *(unsigned int *)(temp_v1 + 600) = temp_v4;
                              *(float *)(temp_v1 + 0x23c) = *(float *)(temp_v1 + 0x23c) + temp_v9;
                              *(unsigned int *)(temp_v1 + 0x360) = temp_v3;
                              *(unsigned int *)(temp_v1 + 0x364) = temp_v3;
                              *(unsigned int *)(temp_v1 + 0x368) = temp_v0;
                              *(unsigned int *)(temp_v1 + 0x210) = temp_v10;
                              *(unsigned int *)(temp_v1 + 0x214) = temp_v11;
                              *(unsigned int *)(temp_v1 + 0x244) = *(unsigned int *)(temp_v1 + 0x238);
                              *(unsigned int *)(temp_v1 + 0x248) = *(unsigned int *)(temp_v1 + 0x23c);
                              *(unsigned int *)(temp_v1 + 0x24c) = *(unsigned int *)(temp_v1 + 0x240);
                              return temp_v2;
                            }
                            if (param_2 == 0x2c) {
                              temp_v11 = DAT_00581040[0x1b];
                              temp_v10 = DAT_00581040[7];
                              *(unsigned int *)(temp_v1 + 0x1ec) = 1;
                              *(unsigned int *)(temp_v1 + 0x1fc) = 0;
                              *(unsigned int *)(temp_v1 + 0x254) = temp_v4;
                              *(unsigned int *)(temp_v1 + 600) = temp_v4;
                              *(float *)(temp_v1 + 0x23c) = *(float *)(temp_v1 + 0x23c) + temp_v6;
                              *(unsigned int *)(temp_v1 + 0x360) = temp_v11;
                              *(unsigned int *)(temp_v1 + 0x364) = temp_v11;
                              *(unsigned int *)(temp_v1 + 0x368) = temp_v10;
                              *(unsigned int *)(temp_v1 + 0x244) = *(unsigned int *)(temp_v1 + 0x238);
                              *(unsigned int *)(temp_v1 + 0x248) = *(unsigned int *)(temp_v1 + 0x23c);
                              *(unsigned int *)(temp_v1 + 0x24c) = *(unsigned int *)(temp_v1 + 0x240);
                              return temp_v2;
                            }
                            if (param_2 == 0x33) {
                              temp_v4 = DAT_00581040[0x28];
                              temp_v10 = DAT_00581040[0x22];
                              *(unsigned int *)(temp_v1 + 0x1ec) = 2;
                              *(unsigned int *)(temp_v1 + 0x1fc) = 0;
                              *(float *)(temp_v1 + 0x254) = temp_v5;
                              *(float *)(temp_v1 + 600) = temp_v5;
                              *(float *)(temp_v1 + 0x23c) = *(float *)(temp_v1 + 0x23c) + 40.0f;
                              *(unsigned int *)(temp_v1 + 0x360) = temp_v4;
                              *(unsigned int *)(temp_v1 + 0x364) = temp_v4;
                              *(unsigned int *)(temp_v1 + 0x368) = temp_v10;
                              *(unsigned int *)(temp_v1 + 0x210) = 0x44960000;
                              *(unsigned int *)(temp_v1 + 0x214) = 0x44960000;
                              *(unsigned int *)(temp_v1 + 0x244) = *(unsigned int *)(temp_v1 + 0x238);
                              *(unsigned int *)(temp_v1 + 0x248) = *(unsigned int *)(temp_v1 + 0x23c);
                              *(unsigned int *)(temp_v1 + 0x24c) = *(unsigned int *)(temp_v1 + 0x240);
                              return temp_v2;
                            }
                            if (param_2 != 0x34) {
                              if (param_2 == 0x25) {
                                temp_v11 = DAT_00581040[0x15];
                                temp_v10 = DAT_00581040[0x1a];
                                *(unsigned int *)(temp_v1 + 0x1fc) = 0;
                                *(unsigned int *)(temp_v1 + 0x1ec) = 1;
                                *(unsigned int *)(temp_v1 + 0x254) = temp_v4;
                                *(unsigned int *)(temp_v1 + 600) = temp_v4;
                                *(float *)(temp_v1 + 0x23c) = *(float *)(temp_v1 + 0x23c) + temp_v5;
                                *(unsigned int *)(temp_v1 + 0x360) = temp_v11;
                                *(unsigned int *)(temp_v1 + 0x364) = temp_v11;
                                *(unsigned int *)(temp_v1 + 0x368) = temp_v10;
                                *(unsigned int *)(temp_v1 + 0x244) = *(unsigned int *)(temp_v1 + 0x238);
                                *(unsigned int *)(temp_v1 + 0x248) = *(unsigned int *)(temp_v1 + 0x23c);
                                *(unsigned int *)(temp_v1 + 0x24c) = *(unsigned int *)(temp_v1 + 0x240);
                                return temp_v2;
                              }
                              if (param_2 == 0x28) {
                                temp_v10 = DAT_00581040[0x15];
                                temp_v11 = DAT_00581040[6];
                                *(unsigned int *)(temp_v1 + 0x1ec) = 1;
                                *(unsigned int *)(temp_v1 + 0x1fc) = 0;
                                *(unsigned int *)(temp_v1 + 0x254) = temp_v4;
                                *(unsigned int *)(temp_v1 + 600) = temp_v4;
                                *(float *)(temp_v1 + 0x23c) = *(float *)(temp_v1 + 0x23c) + temp_v5;
                                *(unsigned int *)(temp_v1 + 0x360) = temp_v10;
                                *(unsigned int *)(temp_v1 + 0x364) = temp_v10;
                                *(unsigned int *)(temp_v1 + 0x368) = temp_v11;
                                *(unsigned int *)(temp_v1 + 0x244) = *(unsigned int *)(temp_v1 + 0x238);
                                *(unsigned int *)(temp_v1 + 0x248) = *(unsigned int *)(temp_v1 + 0x23c);
                                *(unsigned int *)(temp_v1 + 0x24c) = *(unsigned int *)(temp_v1 + 0x240);
                                return temp_v2;
                              }
                              if (param_2 == 0x26) {
                                temp_v11 = DAT_00581040[1];
                                temp_v10 = DAT_00581040[6];
                                *(unsigned int *)(temp_v1 + 0x1ec) = 1;
                                *(unsigned int *)(temp_v1 + 0x1fc) = 0;
                                *(unsigned int *)(temp_v1 + 0x254) = temp_v4;
                                *(unsigned int *)(temp_v1 + 600) = temp_v4;
                                *(float *)(temp_v1 + 0x23c) = *(float *)(temp_v1 + 0x23c) + temp_v6;
                                *(unsigned int *)(temp_v1 + 0x360) = temp_v11;
                                *(unsigned int *)(temp_v1 + 0x364) = temp_v11;
                                *(unsigned int *)(temp_v1 + 0x368) = temp_v10;
                                *(unsigned int *)(temp_v1 + 0x244) = *(unsigned int *)(temp_v1 + 0x238);
                                *(unsigned int *)(temp_v1 + 0x248) = *(unsigned int *)(temp_v1 + 0x23c);
                                *(unsigned int *)(temp_v1 + 0x24c) = *(unsigned int *)(temp_v1 + 0x240);
                                return temp_v2;
                              }
                              if (param_2 == 0x27) {
                                temp_v11 = DAT_00581040[2];
                                temp_v10 = DAT_00581040[6];
                                *(unsigned int *)(temp_v1 + 0x1ec) = 1;
                                *(unsigned int *)(temp_v1 + 0x1fc) = 0;
                                *(unsigned int *)(temp_v1 + 0x254) = temp_v4;
                                *(unsigned int *)(temp_v1 + 600) = temp_v4;
                                *(float *)(temp_v1 + 0x23c) = *(float *)(temp_v1 + 0x23c) + temp_v6;
                                *(unsigned int *)(temp_v1 + 0x360) = temp_v11;
                                *(unsigned int *)(temp_v1 + 0x364) = temp_v11;
                                *(unsigned int *)(temp_v1 + 0x368) = temp_v10;
                                *(unsigned int *)(temp_v1 + 0x244) = *(unsigned int *)(temp_v1 + 0x238);
                                *(unsigned int *)(temp_v1 + 0x248) = *(unsigned int *)(temp_v1 + 0x23c);
                                *(unsigned int *)(temp_v1 + 0x24c) = *(unsigned int *)(temp_v1 + 0x240);
                                return temp_v2;
                              }
                              if (param_2 != 0x29) {
                                if (param_2 != 0x2a) {
                                  if (param_2 != 0x2b) {
                                    *(unsigned int *)(temp_v1 + 0x244) = *(unsigned int *)(temp_v1 + 0x238);
                                    *(unsigned int *)(temp_v1 + 0x248) = *(unsigned int *)(temp_v1 + 0x23c);
                                    *(unsigned int *)(temp_v1 + 0x24c) = *(unsigned int *)(temp_v1 + 0x240);
                                    return temp_v2;
                                  }
                                  goto LAB_00245d20;
                                }
                                temp_v11 = DAT_00581040[0x15];
                                temp_v10 = DAT_00581040[0xb];
                                *(unsigned int *)(temp_v1 + 0x1ec) = 1;
                                *(unsigned int *)(temp_v1 + 0x1fc) = 0;
                                *(unsigned int *)(temp_v1 + 0x254) = temp_v4;
                                *(unsigned int *)(temp_v1 + 600) = temp_v4;
                                *(float *)(temp_v1 + 0x23c) = *(float *)(temp_v1 + 0x23c) + temp_v6;
                                *(unsigned int *)(temp_v1 + 0x360) = temp_v11;
                                *(unsigned int *)(temp_v1 + 0x364) = temp_v11;
                              }
                              else {
                                temp_v11 = DAT_00581040[0x15];
                                temp_v10 = DAT_00581040[10];
                                *(unsigned int *)(temp_v1 + 0x1ec) = 1;
                                *(unsigned int *)(temp_v1 + 0x1fc) = 0;
                                *(unsigned int *)(temp_v1 + 0x254) = temp_v4;
                                *(unsigned int *)(temp_v1 + 600) = temp_v4;
                                *(float *)(temp_v1 + 0x23c) = *(float *)(temp_v1 + 0x23c) + temp_v6;
                                *(unsigned int *)(temp_v1 + 0x360) = temp_v11;
                                *(unsigned int *)(temp_v1 + 0x364) = temp_v11;
                              }
                              *(unsigned int *)(temp_v1 + 0x368) = temp_v10;
                              *(unsigned int *)(temp_v1 + 0x244) = *(unsigned int *)(temp_v1 + 0x238);
                              *(unsigned int *)(temp_v1 + 0x248) = *(unsigned int *)(temp_v1 + 0x23c);
                              *(unsigned int *)(temp_v1 + 0x24c) = *(unsigned int *)(temp_v1 + 0x240);
                              return temp_v2;
                            }
                          }
                          temp_v10 = DAT_00581040[0x24];
                          temp_v4 = DAT_00581040[0x22];
                          *(unsigned int *)(temp_v1 + 0x1ec) = 2;
                          *(unsigned int *)(temp_v1 + 0x1fc) = 0;
                          *(float *)(temp_v1 + 0x254) = temp_v5;
                          *(float *)(temp_v1 + 600) = temp_v5;
                          *(float *)(temp_v1 + 0x23c) = *(float *)(temp_v1 + 0x23c) + 40.0f;
                          *(unsigned int *)(temp_v1 + 0x360) = temp_v10;
                          *(unsigned int *)(temp_v1 + 0x364) = temp_v10;
                          *(unsigned int *)(temp_v1 + 0x368) = temp_v4;
                          *(unsigned int *)(temp_v1 + 0x210) = 0x44960000;
                          *(unsigned int *)(temp_v1 + 0x214) = 0x44960000;
                        }
                        else if (g_gameState < 100) {
                          temp_v11 = DAT_00581040[0x1e];
                          temp_v10 = DAT_00581040[6];
                          *(unsigned int *)(temp_v1 + 0x1ec) = 1;
                          *(unsigned int *)(temp_v1 + 0x1fc) = 0;
                          *(unsigned int *)(temp_v1 + 0x254) = temp_v4;
                          *(unsigned int *)(temp_v1 + 600) = temp_v4;
                          *(float *)(temp_v1 + 0x23c) = *(float *)(temp_v1 + 0x23c) + temp_v8;
                          *(unsigned int *)(temp_v1 + 0x360) = temp_v11;
                          *(unsigned int *)(temp_v1 + 0x364) = temp_v11;
                          *(unsigned int *)(temp_v1 + 0x368) = temp_v10;
                        }
                        else {
                          temp_v11 = DAT_00581040[0x27];
                          temp_v10 = DAT_00581040[0x21];
                          *(unsigned int *)(temp_v1 + 0x1fc) = 0;
                          *(unsigned int *)(temp_v1 + 0x1ec) = 1;
                          *(unsigned int *)(temp_v1 + 0x254) = temp_v4;
                          *(unsigned int *)(temp_v1 + 600) = temp_v4;
                          *(float *)(temp_v1 + 0x23c) = *(float *)(temp_v1 + 0x23c) + temp_v8;
                          *(unsigned int *)(temp_v1 + 0x360) = temp_v11;
                          *(unsigned int *)(temp_v1 + 0x364) = temp_v11;
                          *(unsigned int *)(temp_v1 + 0x368) = temp_v10;
                        }
                      }
                      else {
                        temp_v11 = DAT_00581040[4];
                        temp_v10 = DAT_00581040[7];
                        *(unsigned int *)(temp_v1 + 0x1fc) = 0;
                        *(unsigned int *)(temp_v1 + 0x1ec) = 1;
                        *(unsigned int *)(temp_v1 + 0x254) = temp_v4;
                        *(unsigned int *)(temp_v1 + 600) = temp_v4;
                        *(float *)(temp_v1 + 0x23c) = *(float *)(temp_v1 + 0x23c) + temp_v8;
                        *(unsigned int *)(temp_v1 + 0x360) = temp_v11;
                        *(unsigned int *)(temp_v1 + 0x364) = temp_v11;
                        *(unsigned int *)(temp_v1 + 0x368) = temp_v10;
                      }
                    }
                    else {
                      temp_v10 = DAT_00581040[0x15];
                      temp_v11 = DAT_00581040[6];
                      *(unsigned int *)(temp_v1 + 0x1fc) = 0;
                      *(unsigned int *)(temp_v1 + 0x1ec) = 1;
                      *(unsigned int *)(temp_v1 + 0x254) = temp_v4;
                      *(unsigned int *)(temp_v1 + 600) = temp_v4;
                      *(float *)(temp_v1 + 0x23c) = *(float *)(temp_v1 + 0x23c) + temp_v5;
                      *(unsigned int *)(temp_v1 + 0x360) = temp_v10;
                      *(unsigned int *)(temp_v1 + 0x364) = temp_v10;
                      *(unsigned int *)(temp_v1 + 0x368) = temp_v11;
                    }
                  }
                  else {
                    temp_v11 = DAT_00581040[0x15];
                    temp_v10 = DAT_00581040[10];
                    *(unsigned int *)(temp_v1 + 0x1ec) = 1;
                    *(unsigned int *)(temp_v1 + 0x1fc) = 1;
                    *(unsigned int *)(temp_v1 + 0x254) = temp_v4;
                    *(unsigned int *)(temp_v1 + 600) = temp_v4;
                    *(float *)(temp_v1 + 0x23c) = *(float *)(temp_v1 + 0x23c) + temp_v8;
                    *(unsigned int *)(temp_v1 + 0x360) = temp_v11;
                    *(unsigned int *)(temp_v1 + 0x364) = temp_v11;
                    *(unsigned int *)(temp_v1 + 0x368) = temp_v10;
                  }
                }
                else {
                  temp_v10 = DAT_00581040[0x15];
                  temp_v11 = DAT_00581040[0xb];
                  *(unsigned int *)(temp_v1 + 0x1ec) = 1;
                  *(unsigned int *)(temp_v1 + 0x1fc) = 0xfffffffd;
                  *(unsigned int *)(temp_v1 + 0x254) = temp_v4;
                  *(unsigned int *)(temp_v1 + 600) = temp_v4;
                  *(float *)(temp_v1 + 0x23c) = *(float *)(temp_v1 + 0x23c) + 80.0f;
                  *(unsigned int *)(temp_v1 + 0x360) = temp_v10;
                  *(unsigned int *)(temp_v1 + 0x364) = temp_v10;
                  *(unsigned int *)(temp_v1 + 0x368) = temp_v11;
                }
              }
              else {
                temp_v11 = DAT_00581040[0x15];
                temp_v10 = DAT_00581040[10];
                *(unsigned int *)(temp_v1 + 0x1ec) = 1;
                *(unsigned int *)(temp_v1 + 0x1fc) = 1;
                *(unsigned int *)(temp_v1 + 0x254) = temp_v4;
                *(unsigned int *)(temp_v1 + 600) = temp_v4;
                *(float *)(temp_v1 + 0x23c) = *(float *)(temp_v1 + 0x23c) + temp_v6;
                *(unsigned int *)(temp_v1 + 0x360) = temp_v11;
                *(unsigned int *)(temp_v1 + 0x364) = temp_v11;
                *(unsigned int *)(temp_v1 + 0x368) = temp_v10;
              }
              *(unsigned int *)(temp_v1 + 0x244) = *(unsigned int *)(temp_v1 + 0x238);
              *(unsigned int *)(temp_v1 + 0x248) = *(unsigned int *)(temp_v1 + 0x23c);
              *(unsigned int *)(temp_v1 + 0x24c) = *(unsigned int *)(temp_v1 + 0x240);
              return temp_v2;
            }
            temp_v11 = DAT_00581040[0x15];
            temp_v10 = DAT_00581040[7];
            *(unsigned int *)(temp_v1 + 0x1ec) = 1;
            *(unsigned int *)(temp_v1 + 0x1fc) = 0xfffffffe;
            *(unsigned int *)(temp_v1 + 0x254) = temp_v4;
            *(unsigned int *)(temp_v1 + 600) = temp_v4;
            *(float *)(temp_v1 + 0x23c) = *(float *)(temp_v1 + 0x23c) + 80.0f;
            *(unsigned int *)(temp_v1 + 0x360) = temp_v11;
            *(unsigned int *)(temp_v1 + 0x364) = temp_v11;
          }
          else {
            temp_v4 = DAT_00581040[5];
            temp_v10 = DAT_00581040[7];
            *(unsigned int *)(temp_v1 + 0x1ec) = 1;
            *(unsigned int *)(temp_v1 + 0x1fc) = 0;
            *(unsigned int *)(temp_v1 + 0x254) = 0x41c80000;
            *(unsigned int *)(temp_v1 + 600) = 0x41c80000;
            *(float *)(temp_v1 + 0x23c) = *(float *)(temp_v1 + 0x23c) + temp_v6;
            *(unsigned int *)(temp_v1 + 0x360) = temp_v4;
            *(unsigned int *)(temp_v1 + 0x364) = temp_v4;
          }
          *(unsigned int *)(temp_v1 + 0x368) = temp_v10;
        }
        *(unsigned int *)(temp_v1 + 0x244) = *(unsigned int *)(temp_v1 + 0x238);
        *(unsigned int *)(temp_v1 + 0x248) = *(unsigned int *)(temp_v1 + 0x23c);
        *(unsigned int *)(temp_v1 + 0x24c) = *(unsigned int *)(temp_v1 + 0x240);
        return temp_v2;
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 0x80);
  }
  return -1;
}

} /* extern "C" */
