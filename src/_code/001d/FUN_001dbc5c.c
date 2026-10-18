/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001dbc5c` (_code @ 0x1dbc5c, 0x248 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
} void_stack;

extern unsigned int DAT_0044ea00; /* 0x44ea00 */

/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
extern int FUN_002a60b4(unsigned int, unsigned int);
extern int FUN_002b8660(void);
/* Supplied declaration required: FUN_002ba1e0. */
extern int FUN_002c08f0(void);
/* Supplied declaration required: FUN_002c1b64. */
extern int FUN_002c1d5c(void);


void FUN_001dbc5c(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  float temp_v3;
  float temp_v4;
  float temp_v5;
  
  temp_v0 = FUN_002c08f0();
  if (((*(int *)(temp_v0 + 0x78) != 0) &&
      ((*(float *)(temp_v0 + 0x28) != 0.0f || (*(int *)(temp_v0 + 0x80) != 0)))) &&
     ((temp_v1 = FUN_002c1d5c(), temp_v1 == 0 || (temp_v1 = FUN_002b8660(), temp_v1 == 0)))) {
    if (*(char *)(temp_v0 + 0x31) != '\0') {
      temp_v3 = *(float *)(temp_v0 + 0x2c);
    }
    else {
      temp_v3 = *(float *)(temp_v0 + 0x2c) * 0.5f;
    }
    temp_v1 = FUN_002a60b4(*(unsigned int *)(temp_v0 + 0x10),*(unsigned int *)(temp_v0 + 0x14));
    temp_v5 = 255.0f;
    if (temp_v1 != 0) {
      temp_v1 = VectorFloatToUnsigned(temp_v3 * 255.0f,3);
      temp_v2 = VectorFloatToUnsigned(*(float *)(temp_v0 + 0x28) * 255.0f,3);
      temp_v5 = 255.0f;
      FUN_002c1b64(DAT_0044ea00,*(unsigned int *)(*(int *)(temp_v0 + 0xc) + 8));
      FUN_002ba1e0(temp_v2 + temp_v1 * 0x1010100);
    }
    temp_v1 = FUN_002a60b4(*(unsigned int *)(temp_v0 + 0x10),*(unsigned int *)(temp_v0 + 0x84));
    if (temp_v1 != 0) {
      temp_v4 = *(float *)(temp_v0 + 0x88);
      if (*(char *)(temp_v0 + 0x8d) == '\0') {
        temp_v4 = *(float *)(temp_v0 + 0x28);
        temp_v1 = FUN_002a60b4(*(unsigned int *)(temp_v0 + 0x10),*(unsigned int *)(temp_v0 + 0x14));
        if (temp_v1 != 0) {
          return;
        }
      }
      temp_v1 = VectorFloatToUnsigned(temp_v3 * temp_v5,3);
      temp_v2 = VectorFloatToUnsigned(temp_v4 * temp_v5,3);
      FUN_002c1b64(DAT_0044ea00,*(unsigned int *)(*(int *)(temp_v0 + 0x80) + 8));
      FUN_002ba1e0(temp_v2 + temp_v1 * 0x1010100);
    }
  }
  return;
}
