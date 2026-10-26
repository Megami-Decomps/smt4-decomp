#include "util/MathFunctions.h"
/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00288538` (_code @ 0x288538, 0x5d4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "shard/TextureDrawCall.h"
#include "shard/W6_W6Match6_ItemIcon.h"

extern "C" {

int FUN_0015f858(...);
int textDrawString(...);
int FUN_00164b5c(...);
int efctSetSpeed(void);
int asdTMTexTableEntryAt(...);
int jobGetScalarValue(void);
int FUN_0037245c(...);
void uiDrawItemListRow(int x, int y, int message, int category, unsigned int color, unsigned int id, float effect);
int FUN_0047fc38(void);
int VectorSignedToFloat(...);

/* stack frame of param_1: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
} param_1_stack;

extern unsigned char DAT_0052bfdc; /* 0x52bfdc */
extern int g_camp; /* 0x57f108 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_0015f858. */
/* Supplied declaration required: textDrawString. */
/* Supplied declaration required: FUN_00164b5c. */
extern int vec2GetYInt(int);
/* Supplied declaration required: efctSetSpeed. */
/* Supplied declaration required: asdTMTexTableEntryAt. */
extern int gameFlagIsSet(unsigned int);
/* Supplied declaration required: jobGetScalarValue. */
extern int resourceRunOperationIfUnblocked(void);
extern int FUN_002a4894(int);
/* Supplied declaration required: FUN_0037245c. */
/* Supplied declaration required: uiDrawItemListRow. */
/* Supplied declaration required: FUN_0047fc38. */
extern int equipmentHasPositiveUpgrade(int);


void FUN_00288538(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 12 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  unsigned char temp_v8;
  unsigned int in_fpscr;
  int temp_v9;
  int temp_v10;
  int temp_v11;
  int temp_v12;
  int temp_v13;
  
  temp_v0 = g_camp + 0x914;
  temp_v1 = vec2GetXInt(reinterpret_cast<const void *>(temp_v0));
  temp_v0 = vec2GetYInt(temp_v0);
  jobGetScalarValue();
  efctSetSpeed();
  if (param_1 == 0) {
    FUN_001835b4(2,0x12,0x52d,temp_v1,temp_v0,0xbf);
    FUN_001835b4(2,0x12,0x52f,temp_v1,temp_v0,0xbf);
    FUN_001835b4(2,0x12,0x52e,temp_v1,temp_v0,0xbf);
    FUN_001835b4(2,0x12,0x530,temp_v1,temp_v0,0xbf);
    FUN_001835b4(2,0x12,0x532,temp_v1,temp_v0,0xbf);
    FUN_001835b4(2,0x12,0x531,temp_v1,temp_v0,0xbf);
    temp_v2 = 0;
    temp_v11 = temp_v0;
    do {
      temp_v9 = 0;
      temp_v10 = 0;
      FUN_0037245c(temp_v2,&temp_v9,&temp_v10);
      temp_v0 = asdTMTexTableEntryAt(0x12,temp_v2 + 0x533);
      temp_v6 = 0xffffffff;
      temp_v8 = temp_v10 == 0x12d || temp_v10 == 0x1a5;
      if (temp_v10 != 0x12d && temp_v10 != 0x1a5) {
        temp_v8 = temp_v10 == 0x21d;
      }
      if (temp_v8) {
        temp_v4 = temp_v9;
        FUN_0047fc38();
        if (temp_v4 != 0) {
          temp_v6 = 0xfbeb39ff;
        }
        else {
          temp_v4 = equipmentHasPositiveUpgrade(temp_v9);
          if (temp_v4 != 0) {
            temp_v6 = 0x8400ff;
          }
        }
      }
      temp_v3 = temp_v10;
      temp_v4 = temp_v9;
      temp_v7 = *(short *)(temp_v0 + 8) + temp_v1;
      temp_v5 = *(short *)(temp_v0 + 10) + temp_v11;
      FUN_00164b5c(2,0x12,0xd,temp_v7,temp_v5,0xbf);
      temp_v0 = asdTMTexTableEntryAt(0x12,0xa0);
      uiDrawItemCategoryIcon((int)(short)temp_v3,*(short *)(temp_v0 + 8) + temp_v7,*(short *)(temp_v0 + 10) + temp_v5,
                   0xc4,0);
      temp_v0 = asdTMTexTableEntryAt(0x12,0xa1);
      if (temp_v4 >= 1) {
        FUN_0015f858(temp_v4,0);
        if (temp_v4 != 0) {
          VectorSignedToFloat(*(short *)(temp_v0 + 10) + temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
          VectorSignedToFloat(*(short *)(temp_v0 + 8) + temp_v7,(unsigned char)(in_fpscr >> 0x16) & 3);
          textDrawString(2,temp_v6);
        }
      }
      else {
        VectorSignedToFloat(*(short *)(temp_v0 + 10) + temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat(*(short *)(temp_v0 + 8) + temp_v7,(unsigned char)(in_fpscr >> 0x16) & 3);
        textDrawString(2,temp_v6,&DAT_0052bfdc);
      }
      do {
        temp_v2 = temp_v2 + 1;
        if (temp_v2 >= 7) {
          efctSetSpeed();
          return;
        }
      } while ((temp_v2 == 1 || temp_v2 == 2) && (temp_v0 = gameFlagIsSet(0x410), temp_v0 == 0));
    } while( 1 );
  }
  FUN_00164b5c(2,0x12,0xc,temp_v1,temp_v0,0xbf);
  temp_v11 = g_camp;
  temp_v10 = 0;
  temp_v9 = 0;
  temp_v2 = g_camp + 0x32b8;
  temp_v12 = temp_v1;
  temp_v13 = temp_v0;
  temp_v0 = resourceRunOperationIfUnblocked();
  temp_v1 = FUN_002a4894(temp_v2);
  temp_v0 = temp_v0 + temp_v1;
  temp_v1 = 0;
  do {
    if (temp_v1 != temp_v0) {
      temp_v9 = 0;
      temp_v10 = 0;
      FUN_0037245c(temp_v1,&temp_v9,&temp_v10);
      temp_v6 = 0x9b9b9bff;
      temp_v8 = temp_v10 == 0x12d || temp_v10 == 0x1a5;
      if (temp_v10 != 0x12d && temp_v10 != 0x1a5) {
        temp_v8 = temp_v10 == 0x21d;
      }
      if (temp_v8) {
        temp_v6 = 0xffffffff;
        temp_v2 = temp_v9;
        FUN_0047fc38();
        if (temp_v2 != 0) {
          temp_v6 = 0xfbeb39ff;
        }
        else {
          temp_v2 = equipmentHasPositiveUpgrade(temp_v9);
          if (temp_v2 != 0) {
            temp_v6 = 0x8400ff;
          }
        }
      }
      temp_v3 = asdTMTexTableEntryAt(0x12,temp_v1 + 0x466);
      temp_v4 = temp_v10;
      temp_v2 = temp_v9;
      temp_v7 = *(short *)(temp_v3 + 8) + temp_v12;
      temp_v5 = *(short *)(temp_v3 + 10) + temp_v13;
      FUN_00164b5c(2,0x12,0xd,temp_v7,temp_v5,0xbf);
      temp_v3 = asdTMTexTableEntryAt(0x12,0x464);
      uiDrawItemCategoryIcon((int)(short)temp_v4,*(short *)(temp_v3 + 8) + temp_v7,*(short *)(temp_v3 + 10) + temp_v5,
                   0xc4,0);
      temp_v4 = asdTMTexTableEntryAt(0x12,0x465);
      if (temp_v2 >= 1) {
        FUN_0015f858(temp_v2,0);
        if (temp_v2 != 0) {
          VectorSignedToFloat(*(short *)(temp_v4 + 10) + temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
          VectorSignedToFloat(*(short *)(temp_v4 + 8) + temp_v7,(unsigned char)(in_fpscr >> 0x16) & 3);
          textDrawString(2,temp_v6);
        }
      }
      else {
        VectorSignedToFloat(*(short *)(temp_v4 + 10) + temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat(*(short *)(temp_v4 + 8) + temp_v7,(unsigned char)(in_fpscr >> 0x16) & 3);
        textDrawString(2,temp_v6,&DAT_0052bfdc);
      }
    }
    do {
      temp_v1 = temp_v1 + 1;
      if (temp_v1 >= 7) {
        temp_v1 = asdTMTexTableEntryAt(0x12,temp_v0 + 0x477);
        FUN_0037245c(temp_v0,&temp_v9,&temp_v10);
        temp_v6 = 0x9b9b9bff;
        temp_v8 = temp_v10 == 0x12d || temp_v10 == 0x1a5;
        if (temp_v10 != 0x12d && temp_v10 != 0x1a5) {
          temp_v8 = temp_v10 == 0x21d;
        }
        if (temp_v8) {
          temp_v6 = 0x9fe7ffff;
          temp_v2 = temp_v9;
          FUN_0047fc38();
          if (temp_v2 != 0) {
            temp_v6 = 0xfbeb39ff;
          }
          else {
            temp_v2 = equipmentHasPositiveUpgrade(temp_v9);
            if (temp_v2 != 0) {
              temp_v6 = 0x8400ff;
            }
          }
        }
        uiDrawItemListRow(temp_v12 + *(short *)(temp_v1 + 8),temp_v13 + *(short *)(temp_v1 + 10),temp_v9,
                     temp_v10,temp_v6,(int)*(short *)(temp_v11 + temp_v0 * 2 + 0x1b3e),
                     *(float *)(g_camp + 0xA5C));
        efctSetSpeed();
        return;
      }
    } while ((temp_v1 == 1 || temp_v1 == 2) && (temp_v2 = gameFlagIsSet(0x410), temp_v2 == 0));
  } while( 1 );
}

} /* extern "C" */
