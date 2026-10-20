/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00281428` (_code @ 0x281428, 0x290 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0016c4b8(unsigned int, unsigned int);
int FUN_0019e3d0(int);
int VectorFloatToUnsigned(double, int);
int VectorSignedToFloat(unsigned int, int);

/* stack frame of void: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
} void_stack;

extern unsigned int g_renderCtx; /* 0x59dbb4 */

#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
extern int FUN_00162880(void);
extern int FUN_00162ea4(void);
extern int jobGetWork(void);
/* Supplied declaration required: FUN_0016c4b8. */
extern int FUN_0018206c(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0019e3d0. */


void FUN_00281428(void)

{
/* irregular: irregular input(s): in_fpscr; 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int in_fpscr;
  unsigned int temp_v2;
  int temp_v3;
  float temp_v4;
  float temp_v5;
  float temp_v6;
  
  temp_v0 = jobGetWork();
  if (((*(int *)(temp_v0 + 0x78) != 0) &&
      ((temp_v2 = (in_fpscr & 0xfffffff) | ((unsigned int)(*(float *)(temp_v0 + 0x28) == 0.0f) << 0x1e),
       !romwright_subpiece_4_1_0(temp_v2 >> 0x1e,0) || (*(int *)(temp_v0 + 0x80) != 0)))) &&
     ((temp_v1 = FUN_00162ea4(), temp_v1 == 0 || (temp_v1 = FUN_00162880(), temp_v1 == 0)))) {
    if (*(char *)(temp_v0 + 0x31) != '\0') {
      temp_v4 = *(float *)(temp_v0 + 0x2c);
    }
    else {
      temp_v4 = *(float *)(temp_v0 + 0x2c) * 0.5f;
    }
    temp_v1 = FUN_0018206c(*(unsigned int *)(temp_v0 + 0x10),*(unsigned int *)(temp_v0 + 0x14));
    temp_v6 = 255.0f;
    if (temp_v1 != 0) {
      temp_v1 = *(int *)(*(int *)(temp_v0 + 0xc) + 8);
      VectorSignedToFloat(*(unsigned int *)(temp_v1 + 0x14),(unsigned char)(temp_v2 >> 0x16) & 3);
      VectorSignedToFloat(*(unsigned int *)(temp_v1 + 0x18),(unsigned char)(temp_v2 >> 0x16) & 3);
      temp_v1 = VectorFloatToUnsigned(temp_v4 * 255.0f,3);
      temp_v3 = VectorFloatToUnsigned(*(float *)(temp_v0 + 0x28) * 255.0f,3);
      temp_v6 = 255.0f;
      FUN_0016c4b8(g_renderCtx,*(unsigned int *)(*(int *)(temp_v0 + 0xc) + 8));
      FUN_0019e3d0(temp_v3 + temp_v1 * 0x1010100);
    }
    temp_v1 = FUN_0018206c(*(unsigned int *)(temp_v0 + 0x10),*(unsigned int *)(temp_v0 + 0x84));
    if (temp_v1 != 0) {
      temp_v5 = *(float *)(temp_v0 + 0x88);
      if (*(char *)(temp_v0 + 0x8d) == '\0') {
        temp_v5 = *(float *)(temp_v0 + 0x28);
        temp_v1 = FUN_0018206c(*(unsigned int *)(temp_v0 + 0x10),*(unsigned int *)(temp_v0 + 0x14));
        if (temp_v1 != 0) {
          return;
        }
      }
      temp_v1 = VectorFloatToUnsigned(temp_v4 * temp_v6,3);
      temp_v3 = VectorFloatToUnsigned(temp_v5 * temp_v6,3);
      FUN_0016c4b8(g_renderCtx,*(unsigned int *)(*(int *)(temp_v0 + 0x80) + 8));
      FUN_0019e3d0(temp_v3 + temp_v1 * 0x1010100);
    }
  }
  return;
}

} /* extern "C" */
