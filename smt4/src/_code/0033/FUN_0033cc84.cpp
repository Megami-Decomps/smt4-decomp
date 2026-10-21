/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0033cc84` (_code @ 0x33cc84, 0x274 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00247f0c(void);
int FUN_002b7638(int *);
int FUN_002bc0e0(void);
int FUN_002bf288(int, int, int, int, int, int);
int efctSetSpeed(void);
int FUN_002c1b64(unsigned int, int);
int FUN_0033c72c(...);
int VectorSignedToFloat(...);

/* stack frame of param_1: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
} param_1_stack;

extern unsigned int g_titleScene; /* 0x44ea00 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00247f0c. */
/* Supplied declaration required: FUN_002b7638. */
/* Supplied declaration required: FUN_002bc0e0. */
/* Supplied declaration required: FUN_002bf288. */
/* Supplied declaration required: efctSetSpeed. */
/* Supplied declaration required: FUN_002c1b64. */
/* Supplied declaration required: FUN_0033c72c. */


void FUN_0033cc84(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 11 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int in_fpscr;
  float temp_v6;
  int temp_v7;
  int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  float temp_v11;
  
  if (*(int *)(param_1 + 0x390) != 4) {
    temp_v8 = 0;
    temp_v9 = 0;
    temp_v6 = 0.0f;
    temp_v10 = 0;
    temp_v11 = *(float *)(param_1 + 0x398) * 0.25f * (1.0f - *(float *)(param_1 + 0x394) * 0.25f) * 0.5f
    ;
    FUN_002c1b64(g_titleScene,0);
    FUN_002b7638(&temp_v8);
    FUN_002bc0e0();
    efctSetSpeed();
    temp_v7 = (int)(temp_v6 + (4.0f - *(float *)(param_1 + 0x39c)) * 20.0f);
    FUN_002bf288(2,0x14,0x54,0,temp_v7,0x23);
    FUN_002bf288(2,0x14,0x55,0,temp_v7,0x23);
    FUN_00247f0c();
    temp_v5 = 0;
    temp_v7 = temp_v1;
    if (0 < *(int *)(param_1 + 0x2f4)) {
      do {
        temp_v4 = param_1 + temp_v5 * 0x54;
        if (*(char *)(temp_v4 + 0x40) != '\0') {
          temp_v0 = *(int *)(param_1 + 0x2f8);
          if (temp_v0 != 0) {
            temp_v7 = *(int *)(param_1 + 0x2fc);
          }
          if (!(temp_v0 == 0 || temp_v7 == 0)) {
            if (*(int *)(temp_v4 + 0x44) != 1) {
              VectorSignedToFloat(*(unsigned int *)(temp_v4 + 0x48),(unsigned char)(in_fpscr >> 0x16) & 3);
              VectorSignedToFloat(temp_v7,(unsigned char)(in_fpscr >> 0x16) & 3);
            }
            else {
              VectorSignedToFloat(*(unsigned int *)(temp_v4 + 0x48),(unsigned char)(in_fpscr >> 0x16) & 3);
              VectorSignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
            }
          }
          else if (*(int *)(temp_v4 + 0x44) != 1) {
            VectorSignedToFloat(*(unsigned int *)(temp_v4 + 0x48),(unsigned char)(in_fpscr >> 0x16) & 3);
            VectorSignedToFloat(*(unsigned int *)(param_1 + 0x2fc),(unsigned char)(in_fpscr >> 0x16) & 3);
          }
          else {
            VectorSignedToFloat(*(unsigned int *)(temp_v4 + 0x48),(unsigned char)(in_fpscr >> 0x16) & 3);
            VectorSignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
          }
          FUN_0033c72c(param_1,0x24);
          temp_v7 = temp_v2;
        }
        else {
          FUN_0033c72c(param_1,0x24);
          temp_v7 = temp_v3;
        }
        temp_v5 = temp_v5 + 1;
      } while (temp_v5 < *(int *)(param_1 + 0x2f4));
    }
  }
  return;
}

} /* extern "C" */
