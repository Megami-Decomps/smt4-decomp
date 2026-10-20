/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003fcfe8` (_code @ 0x3fcfe8, 0x154 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdTextureRelease(void);
int asdMemFree(...);
int asdTMTexTableReleaseNode(int);
int FUN_001b2d54(unsigned int, int, unsigned int);
int FUN_00419e38(void);
int aocClearFlagD_C(void);
int aocClearFlagD_10(unsigned int, undefined4);

typedef struct fn_003fcfe8_arg0 fn_003fcfe8_arg0;
struct fn_003fcfe8_arg0 {
    unsigned char pad_0x0[0x4];
    undefined4 field_0x4; /* +0x4 */
    int field_0x8; /* +0x8 */
    unsigned char pad_0xc[0x4];
    void *field_0x10; /* +0x10 */
    int field_0x14; /* +0x14 */
    undefined4 field_0x18; /* +0x18 */
    undefined4 field_0x1c; /* +0x1c */
    undefined4 field_0x20; /* +0x20 */
    undefined4 field_0x24; /* +0x24 */
    int field_0x28; /* +0x28 */
    int field_0x2c; /* +0x2c */
    int field_0x30; /* +0x30 */
    unsigned char pad_0x34[0x8];
    undefined1 field_0x3c; /* +0x3c */
    undefined1 field_0x3d; /* +0x3d */
    unsigned char pad_0x3e[0x6];
    int field_0x44; /* +0x44 */
};

extern unsigned int g_aocSystem; /* 0x570280 */

/* Supplied declaration required: asdTextureRelease. */
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: asdTMTexTableReleaseNode. */
/* Supplied declaration required: FUN_001b2d54. */
/* Supplied declaration required: FUN_00419e38. */
/* Supplied declaration required: aocClearFlagD_C. */
/* Supplied declaration required: aocClearFlagD_10. */


void FUN_003fcfe8(fn_003fcfe8_arg0 *param_1)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  if ((param_1->field_0x14 != 0) && (temp_v0 = 0, *(short *)((int)param_1->field_0x10 + 4) != 0)) {
    do {
      temp_v1 = param_1->field_0x14 + temp_v0 * 0x20;
      if (*(int *)(temp_v1 + 0x18) != 0) {
        if (*(int *)(temp_v1 + 0x1c) >= 0) {
          asdTMTexTableReleaseNode(param_1->field_0x8);
          FUN_001b2d54(g_aocSystem,param_1->field_0x8,*(unsigned int *)(temp_v1 + 0x1c));
        }
        else {
          asdTextureRelease();
        }
        *(unsigned int *)(temp_v1 + 0x18) = 0;
        *(unsigned int *)(temp_v1 + 0x1c) = 0xffffffff;
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < (int)(unsigned int)*(unsigned short *)((int)param_1->field_0x10 + 4));
  }
  if (param_1->field_0x28 != 0) {
    if (param_1->field_0x8 != 6) {
      aocClearFlagD_C();
    }
    else {
      aocClearFlagD_10(g_aocSystem,param_1->field_0x4);
    }
    asdMemFree(param_1->field_0x28);
    param_1->field_0x10 = (void *)0x0;
    param_1->field_0x14 = 0;
    param_1->field_0x18 = 0;
    param_1->field_0x1c = 0;
    param_1->field_0x20 = 0;
    param_1->field_0x24 = 0;
    param_1->field_0x28 = 0;
    param_1->field_0x3c = 0;
    param_1->field_0x3d = 0;
  }
  if (param_1->field_0x2c != 0) {
    asdMemFree();
    param_1->field_0x2c = 0;
  }
  if (param_1->field_0x30 != 0) {
    asdMemFree();
    param_1->field_0x30 = 0;
  }
  if ((param_1->field_0x44 != 0) && (FUN_00419e38(), param_1->field_0x44 != 0)) {
    asdMemFree();
    param_1->field_0x44 = 0;
  }
  param_1->field_0x4 = 0;
  return;
}

} /* extern "C" */
