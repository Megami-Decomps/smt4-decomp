#include "util/Vec2Fixed.h"
/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fa4dc` (_code @ 0x2fa4dc, 0x204 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "shard/TextureDrawCall.h"

extern "C" {

int efctSetSpeed(void);

/* stack frame of param_2: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_2_stack;

extern int vec2GetYInt(int);
/* Supplied declaration required: efctSetSpeed. */
extern int FUN_001834a4(unsigned int, int);


void FUN_002fa4dc(int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  short temp_v0;
  short temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  int temp_v9;
  
  if (*(char *)(param_1 + 0x38b9) != '\0') {
    param_2 = 1;
  }
  temp_v6 = *(int *)(param_1 + 0x41a0);
  temp_v2 = *(int *)(param_1 + 0x41a4);
  efctSetSpeed();
  temp_v7 = 0;
  do {
    temp_v8 = param_1 + temp_v7;
    if (*(char *)(temp_v8 + 0x4ae5) == '\0') {
      if ((param_2 == 0) && (*(int *)(param_1 + 0x3890) != temp_v7)) {
        efctSetSpeed();
      }
      temp_v3 = FUN_001834a4(0xd,temp_v7 + 0x36);
      temp_v9 = param_1 + temp_v7 * 0x8c + 0x73c;
      temp_v4 = vec2GetXInt(reinterpret_cast<const void *>(temp_v9));
      temp_v0 = *(short *)(temp_v3 + 8);
      temp_v9 = vec2GetYInt(temp_v9);
      temp_v1 = *(short *)(temp_v3 + 10);
      temp_v3 = vec2GetXInt(reinterpret_cast<const void *>(param_1 + 0x12b8));
      temp_v5 = vec2GetYInt(param_1 + 0x12b8);
      temp_v4 = temp_v3 + temp_v4 + temp_v0 + temp_v6;
      temp_v3 = temp_v5 + temp_v9 + temp_v1 + temp_v2;
      if (*(char *)(temp_v8 + 0x41ed) == '\0') {
        if (*(char *)(temp_v8 + 0x41e8) != '\0') {
          efctSetSpeed();
        }
        temp_v8 = param_1 + temp_v7 * 2;
        if (*(short *)(temp_v8 + 0x38a8) <
            *(short *)(param_1 + *(int *)(param_1 + 0x3890) * 2 + 0x38a8)) {
          FUN_001835b4(2,0xd,0x12,temp_v4,temp_v3,0x1f);
          FUN_001835b4(2,0xd,*(short *)(temp_v8 + 0x38a8) + 0x17,temp_v4,temp_v3,0x24);
        }
        else {
          FUN_001835b4(2,0xd,0x11,temp_v4,temp_v3,0x1f);
          FUN_001835b4(2,0xd,*(short *)(temp_v8 + 0x38a8) + 0x13,temp_v4,temp_v3,0x24);
        }
      }
      efctSetSpeed();
    }
    temp_v7 = temp_v7 + 1;
  } while (temp_v7 < 4);
  return;
}

} /* extern "C" */
