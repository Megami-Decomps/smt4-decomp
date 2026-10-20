/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00318544` (_code @ 0x318544, 0x1dc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdTMTexTableReleaseNode(unsigned int);
int FUN_0019d96c(int, int, int);
int FUN_001ad0fc(int);
int FUN_001ad1ac(int, unsigned int);
int FUN_001b2d54(unsigned int, unsigned int, unsigned int);
int VectorSignedToFloat(unsigned int, int);

/* stack frame of param_5: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_5_stack;

extern unsigned int g_aocSystem; /* 0x570280 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern int jobGetWork(int);
extern int gameFlagIsSet(unsigned int);
/* Supplied declaration required: asdTMTexTableReleaseNode. */
/* Supplied declaration required: FUN_0019d96c. */
/* Supplied declaration required: FUN_001ad0fc. */
/* Supplied declaration required: FUN_001ad1ac. */
/* Supplied declaration required: FUN_001b2d54. */
extern int FUN_003ae9d8(int, unsigned int);


void FUN_00318544(int param_1,unsigned int param_2,int param_3,unsigned int param_4,unsigned int param_5)

{
/* irregular: irregular input(s): in_fpscr; 6 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned char temp_v2;
  unsigned int in_fpscr;
  float temp_v3;
  float temp_v4;
  
  temp_v0 = gameFlagIsSet(0x522);
  if ((temp_v0 == 0) || (param_1 != 0)) {
    temp_v1 = jobGetWork(param_1);
    temp_v2 = *(int *)(temp_v1 + 0x84) != -1;
    temp_v0 = temp_v1;
    if (temp_v2) {
      temp_v0 = *(int *)(temp_v1 + 0x80);
    }
    if (temp_v2 && temp_v0 != 0) {
      asdTMTexTableReleaseNode(*(unsigned int *)(temp_v1 + 0x10));
      FUN_001b2d54(g_aocSystem,*(unsigned int *)(temp_v1 + 0x10),*(unsigned int *)(temp_v1 + 0x84));
      *(unsigned int *)(temp_v1 + 0x84) = 0xffffffff;
      *(unsigned int *)(temp_v1 + 0x80) = 0;
    }
    *(unsigned char *)(temp_v1 + 0x30) = 1;
    FUN_001ad0fc(temp_v1);
    temp_v4 = (float)VectorSignedToFloat(param_5,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v3 = (float)VectorSignedToFloat(param_4,(unsigned char)(in_fpscr >> 0x16) & 3);
    *(unsigned int *)(temp_v1 + 8) = param_2;
    *(unsigned int *)(temp_v1 + 0xa0) = *(unsigned int *)(temp_v1 + 0x90);
    *(unsigned int *)(temp_v1 + 0xa4) = *(unsigned int *)(temp_v1 + 0x94);
    *(float *)(temp_v1 + 0x98) = temp_v3 * 50.0f * 0.001953125f;
    *(float *)(temp_v1 + 0x9c) = temp_v4 * -50.0f * 0.001953125f;
    temp_v0 = FUN_003ae9d8(param_1,param_2);
    if (temp_v0 != 0) {
      if (temp_v0 == 1) {
        FUN_0019d96c(temp_v1,2,0);
        *(unsigned int *)(temp_v1 + 0x78) = 2;
        return;
      }
      if (temp_v0 == 2) {
        if (param_3 != 0) {
          FUN_0019d96c(temp_v1,6,0);
        }
        else {
          FUN_0019d96c(temp_v1,7,0);
        }
        *(unsigned int *)(temp_v1 + 0x78) = 2;
        *(unsigned int *)(temp_v1 + 0xa0) = *(unsigned int *)(temp_v1 + 0x98);
        *(unsigned int *)(temp_v1 + 0xa4) = *(unsigned int *)(temp_v1 + 0x9c);
        *(unsigned int *)(temp_v1 + 0x90) = *(unsigned int *)(temp_v1 + 0x98);
        *(unsigned int *)(temp_v1 + 0x94) = *(unsigned int *)(temp_v1 + 0x9c);
        return;
      }
      if (temp_v0 == 3) {
        FUN_0019d96c(temp_v1,5,0);
        temp_v0 = jobGetWork(param_1);
        *(unsigned int *)(temp_v0 + 0x78) = 1;
        *(unsigned int *)(temp_v0 + 0x4c) = *(unsigned int *)(temp_v0 + 0x34);
        *(unsigned int *)(temp_v0 + 0x50) = *(unsigned int *)(temp_v0 + 0x38);
        *(unsigned int *)(temp_v0 + 0x54) = *(unsigned int *)(temp_v0 + 0x3c);
        FUN_001ad1ac(temp_v1 + 0x40,*(unsigned int *)(temp_v1 + 8));
        return;
      }
    }
    else {
      *(unsigned int *)(temp_v1 + 0x24) = 0;
      if (*(int *)(temp_v1 + 0x78) != 0) {
        *(unsigned int *)(temp_v1 + 0x78) = 1;
      }
      else {
        *(unsigned char *)(temp_v1 + 0x30) = 0;
        *(unsigned int *)(temp_v1 + 0x28) = 0;
        *(unsigned int *)(temp_v1 + 0x90) = *(unsigned int *)(temp_v1 + 0x98);
        *(unsigned int *)(temp_v1 + 0x94) = *(unsigned int *)(temp_v1 + 0x9c);
        *(unsigned int *)(temp_v1 + 0xa0) = *(unsigned int *)(temp_v1 + 0x98);
        *(unsigned int *)(temp_v1 + 0xa4) = *(unsigned int *)(temp_v1 + 0x9c);
      }
    }
  }
  return;
}

} /* extern "C" */
