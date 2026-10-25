#include "util/Vec2Fixed.h"
/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c8940` (_code @ 0x2c8940, 0x6bc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "shard/TextureDrawCall.h"

extern "C" {

int textFormatBuffer(...);
int textDrawString(...);
int FUN_00164b5c(...);
int efctSetSpeed(void);
int asdTMTexTableEntryAt(...);
int resourceRunOperationIfUnblocked(...);
int FUN_00344cd0(...);
int VectorSignedToFloat(...);

/* stack frame of param_2: 10 slot(s), 40 byte(s) */
typedef struct {
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int sp9C; /* 0x9c: local_9c */
    unsigned int spA8; /* 0xa8: local_a8 */
    unsigned int spAC; /* 0xac: local_ac */
    unsigned int spB0; /* 0xb0: local_b0 */
    unsigned int spB4; /* 0xb4: local_b4 */
    unsigned int spB8; /* 0xb8: local_b8 */
} param_2_stack;

extern unsigned char LAB_002c8db8; /* 0x2c8db8 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: textFormatBuffer. */
/* Supplied declaration required: textDrawString. */
/* Supplied declaration required: FUN_00164b5c. */
extern int vec2GetYInt(int);
/* Supplied declaration required: efctSetSpeed. */
/* Supplied declaration required: asdTMTexTableEntryAt. */
extern int uniteGetWork(void);
extern int recordGetModeForId(int);
extern int FUN_002861fc(unsigned short);
/* Supplied declaration required: resourceRunOperationIfUnblocked. */
extern int FUN_002a4894(int);
extern int bitTableIndexIsClear(unsigned short);
/* Supplied declaration required: FUN_00344cd0. */
extern int uiSearchPrimary(int);


void FUN_002c8940(int param_1,int param_2)

{
/* irregular: irregular input(s): in_fpscr; 9 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  unsigned int in_fpscr;
  unsigned char temp_v9 [84];
  
  temp_v1 = uniteGetWork();
  if (temp_v1 == 0) {
    return;
  }
  efctSetSpeed();
  FUN_00164b5c(2,0x1a,6,param_1,param_2,0x65);
  FUN_001835b4(2,0x1a,0x1d2,param_1,param_2,0x6a);
  temp_v2 = temp_v1 + 0x9148;
  temp_v3 = resourceRunOperationIfUnblocked();
  temp_v8 = 0;
  temp_v4 = uiSearchPrimary(temp_v2);
  if (0 < temp_v4) {
    do {
      if ((*(char *)(temp_v1 + 0x252) == '\0') || (temp_v4 = FUN_002a4894(temp_v2), temp_v4 != temp_v8)) {
        temp_v4 = asdTMTexTableEntryAt(0x1a,temp_v8 + 0x2e);
        temp_v5 = temp_v1 + (temp_v3 + temp_v8) * 2;
        temp_v6 = FUN_002861fc(*(unsigned short *)(temp_v5 + 0x90a8));
        if (temp_v6 != 0) {
          FUN_001835b4(2,0x1a,0x1d3,*(short *)(temp_v4 + 8) + param_1,*(short *)(temp_v4 + 10) + param_2
                       ,0x6a);
          textFormatBuffer(temp_v9,&LAB_002c8db8,temp_v6 + 8);
          temp_v6 = asdTMTexTableEntryAt(0x1a,0x1d5);
          VectorSignedToFloat((int)*(short *)(temp_v4 + 10) + (int)*(short *)(temp_v6 + 10) + param_2,
                              (unsigned char)(in_fpscr >> 0x16) & 3);
          VectorSignedToFloat((int)*(short *)(temp_v4 + 8) + (int)*(short *)(temp_v6 + 8) + param_1,
                              (unsigned char)(in_fpscr >> 0x16) & 3);
          textDrawString(2,0xffffffff,temp_v9,(int)*(short *)(temp_v6 + 10));
          temp_v5 = bitTableIndexIsClear(*(unsigned short *)(temp_v5 + 0x90a8));
          if (temp_v5 != 0) {
            temp_v5 = asdTMTexTableEntryAt(0x1a,0x1d4);
            FUN_00164b5c(2,0x1a,7,(int)*(short *)(temp_v5 + 8) + (int)*(short *)(temp_v4 + 8) + param_1,
                         (int)*(short *)(temp_v5 + 10) + (int)*(short *)(temp_v4 + 10) + param_2,0x6a);
          }
        }
      }
      temp_v8 = temp_v8 + 1;
      temp_v4 = uiSearchPrimary(temp_v2);
    } while (temp_v8 < temp_v4);
  }
  temp_v3 = resourceRunOperationIfUnblocked(temp_v2);
  temp_v4 = FUN_002a4894(temp_v2);
  temp_v3 = temp_v1 + (temp_v4 + temp_v3) * 2;
  temp_v4 = FUN_002861fc(*(unsigned short *)(temp_v3 + 0x90a8));
  if (*(char *)(temp_v1 + 0x252) == '\0' || temp_v4 == 0) {
    FUN_001835b4(2,0x1a,0x272,param_1,param_2,0x97);
    FUN_00344cd0(temp_v2,param_1,param_2,0x1a,0x23,0x24,0x25,0x1f,0x21,0x20,0x22,
                 (int)*(short *)(temp_v1 + 0x476),(int)*(short *)(temp_v1 + 0x472),
                 (int)*(short *)(temp_v1 + 0x474),0x97,0);
    efctSetSpeed();
    return;
  }
  temp_v8 = FUN_002a4894(temp_v2);
  temp_v8 = asdTMTexTableEntryAt(0x1a,temp_v8 + 0x3f);
  efctSetSpeed();
  FUN_001835b4(2,0x1a,0x38,*(short *)(temp_v8 + 8) + param_1,*(short *)(temp_v8 + 10) + param_2,0x79);
  FUN_001835b4(2,0x1a,0x39,*(short *)(temp_v8 + 8) + param_1,*(short *)(temp_v8 + 10) + param_2,0x79);
  FUN_001835b4(2,0x1a,0x3a,*(short *)(temp_v8 + 8) + param_1,*(short *)(temp_v8 + 10) + param_2,0x79);
  efctSetSpeed();
  FUN_001835b4(2,0x1a,0x3b,*(short *)(temp_v8 + 8) + param_1,*(short *)(temp_v8 + 10) + param_2,0x7e);
  temp_v5 = FUN_002a4894(temp_v2);
  temp_v5 = recordGetModeForId((int)*(short *)(temp_v1 + temp_v5 * 2 + 0x438));
  temp_v6 = *(short *)(temp_v8 + 10) + param_2;
  temp_v7 = *(short *)(temp_v8 + 8) + param_1;
  if (!((temp_v5 == 1 || temp_v5 == 2) || temp_v5 == 6)) {
    FUN_001835b4(2,0x1a,0x245,temp_v7,temp_v6,0x7e);
    FUN_001835b4(2,0x1a,0x3c,*(short *)(temp_v8 + 8) + param_1,*(short *)(temp_v8 + 10) + param_2,0x7e);
    FUN_001835b4(2,0x1a,0x3d,*(short *)(temp_v8 + 8) + param_1,*(short *)(temp_v8 + 10) + param_2,0x7e);
  }
  else {
    FUN_001835b4(2,0x1a,0x27f,temp_v7,temp_v6,0x7e);
    if ((temp_v5 != 1 && temp_v5 != 2) && temp_v5 != 6) {
      FUN_001835b4(2,0x1a,0x3c,*(short *)(temp_v8 + 8) + param_1,*(short *)(temp_v8 + 10) + param_2,0x7e
                  );
      FUN_001835b4(2,0x1a,0x3d,*(short *)(temp_v8 + 8) + param_1,*(short *)(temp_v8 + 10) + param_2,0x7e
                  );
    }
    else {
      FUN_001835b4(2,0x1a,0x27c,*(short *)(temp_v8 + 8) + param_1,*(short *)(temp_v8 + 10) + param_2,
                   0x7e);
      FUN_001835b4(2,0x1a,0x27d,*(short *)(temp_v8 + 8) + param_1,*(short *)(temp_v8 + 10) + param_2,
                   0x7e);
    }
  }
  efctSetSpeed();
  if (!((temp_v5 == 1 || temp_v5 == 2) || temp_v5 == 6)) {
    temp_v6 = vec2GetYInt(temp_v1 + 0xb0);
    temp_v0 = *(short *)(temp_v8 + 10);
    temp_v7 = vec2GetXInt(reinterpret_cast<const void *>(temp_v1 + 0xb0));
    FUN_001835b4(2,0x1a,0x3e,temp_v7 + param_1 + (int)*(short *)(temp_v8 + 8),
                 temp_v6 + param_2 + (int)temp_v0,0x83);
  }
  else {
    temp_v6 = vec2GetYInt(temp_v1 + 0xb0);
    temp_v0 = *(short *)(temp_v8 + 10);
    temp_v7 = vec2GetXInt(reinterpret_cast<const void *>(temp_v1 + 0xb0));
    FUN_001835b4(2,0x1a,0x27e,temp_v7 + param_1 + (int)*(short *)(temp_v8 + 8),
                 temp_v6 + param_2 + (int)temp_v0,0x83);
  }
  efctSetSpeed();
  FUN_001835b4(2,0x1a,0x1d6,*(short *)(temp_v8 + 8) + param_1,*(short *)(temp_v8 + 10) + param_2,0x83);
  textFormatBuffer(temp_v9,&LAB_002c8db8,temp_v4 + 8);
  temp_v4 = asdTMTexTableEntryAt(0x1a,0x1d8);
  temp_v6 = (int)*(short *)(temp_v4 + 10);
  VectorSignedToFloat(*(short *)(temp_v8 + 10) + temp_v6 + param_2,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat((int)*(short *)(temp_v8 + 8) + (int)*(short *)(temp_v4 + 8) + param_1,
                      (unsigned char)(in_fpscr >> 0x16) & 3);
  if (!((temp_v5 == 1 || temp_v5 == 2) || temp_v5 == 6)) {
    textDrawString(3,0x9fe7ffff,temp_v9,temp_v6);
  }
  else {
    textDrawString(3,0xf5ff9fff,temp_v9,temp_v6);
  }
  temp_v3 = bitTableIndexIsClear(*(unsigned short *)(temp_v3 + 0x90a8));
  if (temp_v3 != 0) {
    temp_v3 = asdTMTexTableEntryAt(0x1a,0x1d7);
    FUN_00164b5c(2,0x1a,7,(int)*(short *)(temp_v3 + 8) + (int)*(short *)(temp_v8 + 8) + param_1,
                 (int)*(short *)(temp_v3 + 10) + (int)*(short *)(temp_v8 + 10) + param_2,0x83);
  }
  FUN_001835b4(2,0x1a,0x272,param_1,param_2,0x97);
  FUN_00344cd0(temp_v2,param_1,param_2,0x1a,0x23,0x24,0x25,0x1f,0x21,0x20,0x22,
               (int)*(short *)(temp_v1 + 0x476),(int)*(short *)(temp_v1 + 0x472),
               (int)*(short *)(temp_v1 + 0x474),0x97,0);
  efctSetSpeed();
  return;
}

} /* extern "C" */
