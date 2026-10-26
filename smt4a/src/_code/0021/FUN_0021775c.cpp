/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0021775c` (_code @ 0x21775c, 0x7b8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "shard/TextureDrawCall.h"
#include "shard/W6_W6Match6_ItemIcon.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "code/Code0016.h"
#include "code/Code0026_Smt4a.h"

extern "C" {

int FUN_002027fc(void);

int textFormatBuffer(...);
int FUN_0015f858(...);
int textDrawString(...);
int efctSetSpeed(void);
int FUN_00180310(...);
int FUN_00214dc4(void);
int FUN_0023c8c0(...);
int FUN_0023d150(...);
int FUN_0023d230(int, int, int);
int FUN_0048144c(void);
int VectorSignedToFloat(...);

/* stack frame of param_2: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp98; /* 0x98: local_98 */
} param_2_stack;

extern int g_camp; /* 0x57f108 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: textFormatBuffer. */
/* Supplied declaration required: FUN_0015f858. */
/* Supplied declaration required: textDrawString. */
extern int vec2GetXInt(void);
extern int vec2GetYInt(int);
/* Supplied declaration required: efctSetSpeed. */
/* Supplied declaration required: FUN_00180310. */
extern unsigned int FUN_001ba3d4(unsigned int);
/* Supplied declaration required: FUN_002027fc. */
/* Supplied declaration required: FUN_00214dc4. */
/* Supplied declaration required: FUN_0023c8c0. */
/* Supplied declaration required: FUN_0023d150. */
/* Supplied declaration required: FUN_0023d230. */
/* Supplied declaration required: FUN_0026ec00. */
extern int recordGetModeForId(int);
extern int resourceRunOperationIfUnblocked(int);
extern int FUN_002a4894(int);
extern int objectApplyIfUnblocked(int);
/* Supplied declaration required: FUN_0048144c. */


void FUN_0021775c(int param_1,int param_2)

{
/* irregular: irregular input(s): in_fpscr; 17 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  unsigned int in_fpscr;
  unsigned int temp_v11;
  int temp_v12;
  unsigned char temp_v13 [44];
  unsigned int temp_v14;
  int temp_v15;
  int temp_v16;
  
  temp_v1 = g_camp + 0x6e4;
  temp_v2 = vec2GetXInt();
  temp_v3 = vec2GetYInt(temp_v1);
  temp_v1 = temp_v2;
  if (temp_v2 < 0) {
    temp_v1 = -temp_v2;
  }
  if (temp_v1 >= 0x140) {
    return;
  }
  efctSetSpeed();
  temp_v1 = g_camp;
  if (param_1 != 0x18) {
    if (param_1 < 0x19) {
      if (param_1 != 0xe) {
        if (param_1 >= 0xe) {
          if (param_1 - 0x13U >= 5) {
            efctSetSpeed();
            return;
          }
          FUN_0023c8c0(param_1,temp_v2,temp_v3,param_2);
          efctSetSpeed();
          return;
        }
        if (param_1 == 10) {
          efctSetSpeed();
          return;
        }
        if (param_1 < 0xb) {
          if (param_1 == 1 || param_1 == 9) {
            FUN_0023d230(temp_v2,temp_v3,param_2);
          }
          efctSetSpeed();
          return;
        }
        if (param_1 != 0xb && param_1 != 0xd) {
          efctSetSpeed();
          return;
        }
      }
      temp_v14 = 0;
      temp_v15 = param_1;
      temp_v16 = param_2;
      if (param_1 != 0xb) {
        if (param_1 != 0xd) {
          if (param_1 != 0xe) {
            efctSetSpeed();
            return;
          }
          temp_v12 = g_camp + 0x188;
          temp_v8 = g_camp + 0x2a78;
          FUN_00164b5c(2,0x14,0,temp_v2,temp_v3,0x65);
          FUN_001835b4(2,0x14,0x46b,temp_v2,temp_v3,0x6a);
        }
        else {
          temp_v12 = g_camp + 0x124;
          temp_v8 = g_camp + 0x22a8;
          FUN_00164b5c(2,0x14,0,temp_v2,temp_v3,0x65);
          FUN_001835b4(2,0x14,0x46a,temp_v2,temp_v3,0x6a);
        }
      }
      else {
        temp_v12 = g_camp + 0xc0;
        temp_v8 = g_camp + 0x21b0;
        FUN_00164b5c(2,0x14,0,temp_v2,temp_v3,0x65);
        FUN_001835b4(2,0x14,0x469,temp_v2,temp_v3,0x6a);
      }
      temp_v7 = 0;
      do {
        temp_v4 = resourceRunOperationIfUnblocked(temp_v12);
        temp_v5 = objectApplyIfUnblocked(temp_v12);
        if (temp_v5 <= temp_v4 + temp_v7) break;
        temp_v4 = resourceRunOperationIfUnblocked(temp_v12);
        temp_v0 = *(unsigned short *)(temp_v8 + (temp_v4 + temp_v7) * 2);
        temp_v10 = (unsigned int)temp_v0;
        temp_v4 = (int)asdTMTexTableEntryAt(0x14,temp_v7 + 0x40d);
        FUN_001835b4(2,0x14,0x46c,*(short *)(temp_v4 + 8) + temp_v2,*(short *)(temp_v4 + 10) + temp_v3,0x6a)
        ;
        FUN_001835b4(2,0x14,0x46d,*(short *)(temp_v4 + 8) + temp_v2,*(short *)(temp_v4 + 10) + temp_v3,0x6a)
        ;
        FUN_001835b4(2,0x14,0x46e,*(short *)(temp_v4 + 8) + temp_v2,*(short *)(temp_v4 + 10) + temp_v3,0x6a)
        ;
        temp_v5 = (int)asdTMTexTableEntryAt(0x14,0x470);
        temp_v9 = temp_v10;
        FUN_0015f858(temp_v10,0);
        if (temp_v9 != 0) {
          temp_v11 = 0xffffffff;
          if ((temp_v15 == 0xb) && (temp_v6 = temp_v10, FUN_0048144c(), temp_v6 == 0)) {
            temp_v11 = 0x9b9b9bff;
          }
          VectorSignedToFloat((int)*(short *)(temp_v4 + 10) + (int)*(short *)(temp_v5 + 10) + temp_v3,
                              (unsigned char)(in_fpscr >> 0x16) & 3);
          VectorSignedToFloat((int)*(short *)(temp_v4 + 8) + (int)*(short *)(temp_v5 + 8) + temp_v2,
                              (unsigned char)(in_fpscr >> 0x16) & 3);
          textDrawString(2,temp_v11,temp_v9,(int)*(short *)(temp_v5 + 8));
        }
        temp_v5 = (int)asdTMTexTableEntryAt(0x14,0x473);
        temp_v11 = FUN_001ba3d4(temp_v10);
        textFormatBuffer(temp_v13,"%d",temp_v11);
        FUN_00180310(0,(int)*(short *)(temp_v4 + 8) + (int)*(short *)(temp_v5 + 8) + temp_v2,
                     (int)*(short *)(temp_v4 + 10) + (int)*(short *)(temp_v5 + 10) + temp_v3,1,3,0x6f,
                     temp_v13);
        temp_v5 = (int)asdTMTexTableEntryAt(0x14,0x474);
        FUN_00180310(0,(int)*(short *)(temp_v5 + 8) + (int)*(short *)(temp_v4 + 8) + temp_v2,
                     (int)*(short *)(temp_v4 + 10) + (int)*(short *)(temp_v5 + 10) + temp_v3,1,1,0x6f,
                     "*");
        temp_v5 = (int)asdTMTexTableEntryAt(0x14,0x46f);
        uiDrawItemCategoryIcon((int)(short)temp_v0,
                     (int)*(short *)(temp_v5 + 8) + (int)*(short *)(temp_v4 + 8) + temp_v2,
                     (int)*(short *)(temp_v4 + 10) + (int)*(short *)(temp_v5 + 10) + temp_v3,0x6f,0);
        temp_v7 = temp_v7 + 1;
      } while (temp_v7 < 0xb);
      FUN_0023d150(temp_v12,temp_v2,temp_v3,1);
      if (temp_v16 != 0) {
        temp_v7 = resourceRunOperationIfUnblocked(temp_v12);
        temp_v4 = FUN_002a4894(temp_v12);
        temp_v0 = *(unsigned short *)(temp_v8 + (temp_v4 + temp_v7) * 2);
        temp_v9 = (unsigned int)temp_v0;
        temp_v8 = FUN_002a4894(temp_v12);
        temp_v1 = recordGetModeForId((int)*(short *)(temp_v1 + temp_v8 * 2 + 0x1b3e));
        temp_v11 = 0x9fe7ffff;
        if ((temp_v1 == 1 || temp_v1 == 2) || temp_v1 == 6) {
          temp_v11 = 0xf5ff9fff;
          temp_v14 = 1;
        }
        temp_v1 = FUN_002a4894(temp_v12);
        temp_v1 = (int)asdTMTexTableEntryAt(0x14,temp_v1 + 0x42e);
        FUN_0026ec00(*(short *)(temp_v1 + 8) + temp_v2,*(short *)(temp_v1 + 10) + temp_v3,temp_v14);
        temp_v8 = (int)asdTMTexTableEntryAt(0x14,0x477);
        temp_v10 = temp_v9;
        FUN_0015f858(temp_v9,0);
        if (temp_v10 != 0) {
          if ((temp_v15 == 0xb) && (temp_v6 = temp_v9, FUN_0048144c(), temp_v6 == 0)) {
            temp_v11 = 0x9b9b9bff;
          }
          VectorSignedToFloat((int)*(short *)(temp_v1 + 10) + (int)*(short *)(temp_v8 + 10) + temp_v3,
                              (unsigned char)(in_fpscr >> 0x16) & 3);
          VectorSignedToFloat((int)*(short *)(temp_v1 + 8) + (int)*(short *)(temp_v8 + 8) + temp_v2,
                              (unsigned char)(in_fpscr >> 0x16) & 3);
          textDrawString(3,temp_v11,temp_v10,(int)*(short *)(temp_v8 + 8));
        }
        temp_v8 = (int)asdTMTexTableEntryAt(0x14,0x47a);
        temp_v11 = FUN_001ba3d4(temp_v9);
        textFormatBuffer(temp_v13,"%d",temp_v11);
        FUN_00180310(0,(int)*(short *)(temp_v1 + 8) + (int)*(short *)(temp_v8 + 8) + temp_v2,
                     (int)*(short *)(temp_v1 + 10) + (int)*(short *)(temp_v8 + 10) + temp_v3,1,3,0x83,
                     temp_v13);
        temp_v8 = (int)asdTMTexTableEntryAt(0x14,0x47b);
        FUN_00180310(0,(int)*(short *)(temp_v8 + 8) + (int)*(short *)(temp_v1 + 8) + temp_v2,
                     (int)*(short *)(temp_v1 + 10) + (int)*(short *)(temp_v8 + 10) + temp_v3,1,1,0x83,
                     "*");
        FUN_001835b4(2,0x14,0x475,*(short *)(temp_v1 + 8) + temp_v2,*(short *)(temp_v1 + 10) + temp_v3,0x83)
        ;
        temp_v8 = (int)asdTMTexTableEntryAt(0x14,0x476);
        uiDrawItemCategoryIcon((int)(short)temp_v0,
                     (int)*(short *)(temp_v8 + 8) + (int)*(short *)(temp_v1 + 8) + temp_v2,
                     (int)*(short *)(temp_v1 + 10) + (int)*(short *)(temp_v8 + 10) + temp_v3,0x88,0);
      }
      efctSetSpeed();
      return;
    }
    if (param_1 != 0x4a) {
      if (param_1 < 0x4b) {
        if (param_1 == 0x2b) {
          FUN_00214dc4();
          efctSetSpeed();
          return;
        }
        if (param_1 < 0x2c) {
          if (param_1 != 0x19) {
            if (param_1 == 0x29) {
              FUN_002027fc();
            }
            efctSetSpeed();
            return;
          }
        }
        else if (param_1 != 0x48 && param_1 != 0x49) {
          efctSetSpeed();
          return;
        }
      }
      else if ((param_1 != 0x4b && param_1 != 0x4c) && (param_1 != 0x4d && param_1 != 0x4e)) {
        efctSetSpeed();
        return;
      }
    }
  }
  FUN_0023c8c0(param_1,temp_v2,temp_v3,param_2);
  efctSetSpeed();
  return;
}

} /* extern "C" */
