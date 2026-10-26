#include "util/MathFunctions.h"
/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0022ecfc` (_code @ 0x22ecfc, 0xa74 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "shard/TextureDrawCall.h"

extern "C" {

int textFormatBuffer(...);
int textDrawString(...);
int FUN_00164b5c(...);
int efctSetSpeed(...);
int asdTMTexTableEntryAt(...);
int FUN_0023dedc(...);
int FUN_00344cd0(...);
int FUN_0035ae58(...);
int partyDrawCategorySelectionIcon(...);
unsigned int questHasSpecialDetailPage(unsigned int);
int VectorSignedToFloat(...);

typedef int romwright_code(...);
/* stack frame of void: 9 slot(s), 36 byte(s) */
typedef struct {
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int sp9C; /* 0x9c: local_9c */
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned int spA8; /* 0xa8: local_a8 */
    unsigned int spAC; /* 0xac: local_ac */
    unsigned int spB0; /* 0xb0: local_b0 */
    unsigned int spB4; /* 0xb4: local_b4 */
    unsigned int spB8; /* 0xb8: local_b8 */
} void_stack;

extern int g_uiQuest; /* 0x57f28c */
extern int g_renderCtx; /* 0x59dbb4 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: textFormatBuffer. */
extern unsigned int FUN_00156850(unsigned int, unsigned int);
/* Supplied declaration required: textDrawString. */
/* Supplied declaration required: FUN_00164b5c. */
extern int vec2GetYInt(int);
/* Supplied declaration required: efctSetSpeed. */
/* Supplied declaration required: asdTMTexTableEntryAt. */
/* Supplied declaration required: FUN_0023dedc. */
extern int recordGetModeForId(int);
extern int resourceRunOperationIfUnblocked(int);
extern int FUN_002a4894(int);
/* Supplied declaration required: FUN_00344cd0. */
extern int uiSearchPrimary(int);
/* Supplied declaration required: FUN_0035ae58. */
/* Supplied declaration required: partyDrawCategorySelectionIcon. */
extern int partyEntryGetBit5(unsigned int);
extern int partyEntryGetBit6(unsigned int);
extern int partyEntryFlagsBit3(unsigned int);
extern int partyEntryBitsBit4(unsigned int);


void FUN_0022ecfc(void)

{
/* irregular: irregular input(s): in_fpscr; 12 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  int temp_v8;
  int temp_v9;
  int temp_v10;
  int *piVar12;
  unsigned int temp_v11;
  int temp_v12;
  unsigned char temp_v13;
  unsigned char temp_v14;
  unsigned char temp_v15;
  unsigned int in_fpscr;
  unsigned char temp_v16 [84];
  
  temp_v0 = g_uiQuest;
  temp_v1 = vec2GetXInt(reinterpret_cast<const void *>(g_uiQuest + 0x34));
  temp_v2 = vec2GetYInt(temp_v0 + 0x34);
  if (*(char *)(temp_v0 + 0x90c) != '\0') {
    temp_v3 = temp_v0 + 0x948;
    temp_v12 = temp_v0 + 0xa10;
  }
  else {
    temp_v3 = temp_v0 + 0x9ac;
    temp_v12 = temp_v0 + 0xad6;
  }
  efctSetSpeed();
  FUN_00164b5c(2,0x1e,8,temp_v1,temp_v2,0x65);
  if (*(char *)(temp_v0 + 0x90c) != '\0') {
    FUN_00164b5c(2,0x1e,9,temp_v1,temp_v2,0x65);
  }
  else {
    FUN_00164b5c(2,0x1e,10,temp_v1,temp_v2,0x65);
  }
  FUN_00164b5c(2,0x1e,0xb,temp_v1,temp_v2,0x65);
  if (*(char *)(temp_v0 + 0x90c) != '\0') {
    FUN_001835b4(2,0x1e,0x82,temp_v1,temp_v2,0x6a);
  }
  else {
    FUN_001835b4(2,0x1e,0x83,temp_v1,temp_v2,0x6a);
  }
  temp_v10 = 0;
  temp_v4 = uiSearchPrimary(temp_v3);
  if (0 < temp_v4) {
    do {
      if ((*(int *)(temp_v0 + 4) != 2) || (temp_v4 = FUN_002a4894(temp_v3), temp_v4 != temp_v10)) {
        temp_v4 = resourceRunOperationIfUnblocked(temp_v3);
        temp_v11 = (unsigned int)*(unsigned short *)(temp_v12 + (temp_v4 + temp_v10) * 2);
        temp_v4 = asdTMTexTableEntryAt(0x1e,temp_v10 + 0x9e);
        if (temp_v11 != 0) {
          temp_v5 = asdTMTexTableEntryAt(0x1e,0x9c);
          temp_v6 = temp_v11;
          FUN_0023dedc(temp_v11,(int)*(short *)(temp_v4 + 8) + (int)*(short *)(temp_v5 + 8) + temp_v1,
                       (int)*(short *)(temp_v4 + 10) + (int)*(short *)(temp_v5 + 10) + temp_v2,0x6f,0,0);
          temp_v5 = asdTMTexTableEntryAt(0x1e,0x9b);
          temp_v7 = FUN_00156850(temp_v11,0);
          textFormatBuffer(temp_v16,"%s",temp_v7);
          VectorSignedToFloat((int)*(short *)(temp_v5 + 10) + (int)*(short *)(temp_v4 + 10) + temp_v2,
                              (unsigned char)(in_fpscr >> 0x16) & 3);
          VectorSignedToFloat((int)*(short *)(temp_v4 + 8) + (int)*(short *)(temp_v5 + 8) + temp_v1,
                              (unsigned char)(in_fpscr >> 0x16) & 3);
          textDrawString(2,temp_v6,temp_v16,(int)*(short *)(temp_v4 + 8));
          temp_v5 = asdTMTexTableEntryAt(0x1e,0x9a);
          partyDrawCategorySelectionIcon(temp_v11,(int)*(short *)(temp_v5 + 8) + (int)*(short *)(temp_v4 + 8) + temp_v1,
                       (int)*(short *)(temp_v4 + 10) + (int)*(short *)(temp_v5 + 10) + temp_v2,0x6f);
          temp_v5 = asdTMTexTableEntryAt(0x1e,0x9d);
          temp_v8 = partyEntryGetBit5(temp_v11);
          if (temp_v8 != 0) {
            FUN_00164b5c(2,0x1e,0xf,(int)*(short *)(temp_v4 + 8) + (int)*(short *)(temp_v5 + 8) + temp_v1,
                         (int)*(short *)(temp_v4 + 10) + (int)*(short *)(temp_v5 + 10) + temp_v2,0x74);
          }
          else {
            temp_v8 = partyEntryBitsBit4(temp_v11);
            if ((temp_v8 == 0) && ((temp_v6 = questHasSpecialDetailPage(temp_v11)) != 0)) {
              FUN_00164b5c(2,0x1e,0x13,
                           (int)*(short *)(temp_v4 + 8) + (int)*(short *)(temp_v5 + 8) + temp_v1,
                           (int)*(short *)(temp_v4 + 10) + (int)*(short *)(temp_v5 + 10) + temp_v2,0x74);
            }
            else {
              temp_v8 = partyEntryGetBit6(temp_v11);
              if (temp_v8 != 0) {
                FUN_00164b5c(2,0x1e,0x10,
                             (int)*(short *)(temp_v4 + 8) + (int)*(short *)(temp_v5 + 8) + temp_v1,
                             (int)*(short *)(temp_v4 + 10) + (int)*(short *)(temp_v5 + 10) + temp_v2,0x74)
                ;
              }
            }
          }
        }
      }
      temp_v10 = temp_v10 + 1;
      temp_v4 = uiSearchPrimary(temp_v3);
    } while (temp_v10 < temp_v4);
  }
  temp_v4 = uiSearchPrimary(temp_v3);
  if ((0 < temp_v4) &&
     (((temp_v4 = *(int *)(temp_v0 + 4), temp_v4 == 2 || temp_v4 == 6 || (temp_v4 == 7 || temp_v4 == 8)) ||
      (temp_v4 == 9 || temp_v4 == 10)))) {
    temp_v4 = FUN_002a4894(temp_v3);
    temp_v10 = asdTMTexTableEntryAt(0x1e,temp_v4 + 0xb5);
    temp_v5 = resourceRunOperationIfUnblocked(temp_v3);
    temp_v11 = (unsigned int)*(unsigned short *)(temp_v12 + (temp_v5 + temp_v4) * 2);
    efctSetSpeed();
    FUN_00164b5c(2,0x1e,0x11,*(short *)(temp_v10 + 8) + temp_v1,*(short *)(temp_v10 + 10) + temp_v2,0x97);
    efctSetSpeed();
    FUN_001835b4(2,0x1e,0xab,*(short *)(temp_v10 + 8) + temp_v1,*(short *)(temp_v10 + 10) + temp_v2,0x9c);
    temp_v12 = recordGetModeForId((int)*(short *)(temp_v0 + temp_v4 * 2 + 0xd28));
    temp_v13 = temp_v12 == 1;
    temp_v14 = temp_v12 == 2;
    temp_v15 = temp_v12 == 6;
    temp_v12 = *(short *)(temp_v10 + 10) + temp_v2;
    temp_v4 = *(short *)(temp_v10 + 8) + temp_v1;
    if (!((temp_v13 || temp_v14) || temp_v15)) {
      FUN_001835b4(2,0x1e,0xca,temp_v4,temp_v12,0x9c);
    }
    else {
      FUN_001835b4(2,0x1e,0xce,temp_v4,temp_v12,0x9c);
    }
    temp_v12 = *(int *)(temp_v0 + 0x10) % 0x28;
    if (temp_v12 >= 0x14) {
      temp_v12 = 0x28 - temp_v12;
    }
    VectorSignedToFloat(temp_v12,(unsigned char)(in_fpscr >> 0x16) & 3);
    efctSetSpeed(temp_v12);
    temp_v12 = *(short *)(temp_v10 + 10) + temp_v2;
    temp_v4 = *(short *)(temp_v10 + 8) + temp_v1;
    if ((temp_v13 || temp_v14) || temp_v15) {
      FUN_001835b4(2,0x1e,0xcf,temp_v4,temp_v12,0x9c);
      efctSetSpeed();
      FUN_001835b4(2,0x1e,0xcc,*(short *)(temp_v10 + 8) + temp_v1,*(short *)(temp_v10 + 10) + temp_v2,0xa1);
      FUN_001835b4(2,0x1e,0xcd,*(short *)(temp_v10 + 8) + temp_v1,*(short *)(temp_v10 + 10) + temp_v2,0xa1);
    }
    else {
      FUN_001835b4(2,0x1e,0xcb,temp_v4,temp_v12,0x9c);
      efctSetSpeed();
      FUN_001835b4(2,0x1e,0xac,*(short *)(temp_v10 + 8) + temp_v1,*(short *)(temp_v10 + 10) + temp_v2,0xa1);
      FUN_001835b4(2,0x1e,0xad,*(short *)(temp_v10 + 8) + temp_v1,*(short *)(temp_v10 + 10) + temp_v2,0xa1);
    }
    temp_v4 = asdTMTexTableEntryAt(0x1e,0xac);
    temp_v5 = vec2GetXInt(reinterpret_cast<const void *>(temp_v0 + 0x14c));
    temp_v8 = vec2GetYInt(temp_v0 + 0x14c);
    temp_v12 = g_renderCtx;
    piVar12 = (int *)(g_renderCtx + 0x1318);
    temp_v9 = piVar12[*piVar12 + 2];
    piVar12[*piVar12 + 2] = 3;
    if (*(char *)(temp_v12 + 0x1330) != '\0' || temp_v9 != 3) {
      (**(romwright_code **)(temp_v12 + 0x1334))();
      *(unsigned char *)(temp_v12 + 0x1330) = 0;
    }
    FUN_0035ae58((int)*(short *)(temp_v10 + 8) + (int)*(short *)(temp_v4 + 8) + temp_v1,
                 (int)*(short *)(temp_v10 + 10) + (int)*(short *)(temp_v4 + 10) + temp_v2,
                 (int)**(short **)(temp_v4 + 0xc),(int)(*(short **)(temp_v4 + 0xc))[1],1,temp_v8);
    FUN_001835b4(2,0x1e,0xae,(int)*(short *)(temp_v10 + 8) + temp_v5 + temp_v1,
                 temp_v8 + temp_v2 + (int)*(short *)(temp_v10 + 10),0xa6);
    temp_v12 = g_renderCtx;
    piVar12 = (int *)(g_renderCtx + 0x1318);
    temp_v4 = piVar12[*piVar12 + 2];
    piVar12[*piVar12 + 2] = 0;
    if (*(char *)(temp_v12 + 0x1330) != '\0' || temp_v4 != 0) {
      (**(romwright_code **)(temp_v12 + 0x1334))();
      *(unsigned char *)(temp_v12 + 0x1330) = 0;
    }
    temp_v12 = asdTMTexTableEntryAt(0x1e,0xb3);
    temp_v6 = temp_v11;
    FUN_0023dedc(temp_v11,(int)*(short *)(temp_v12 + 8) + (int)*(short *)(temp_v10 + 8) + temp_v1,
                 (int)*(short *)(temp_v10 + 10) + (int)*(short *)(temp_v12 + 10) + temp_v2,0xab,1,
                 (temp_v13 || temp_v14) || temp_v15);
    temp_v12 = asdTMTexTableEntryAt(0x1e,0xb2);
    temp_v7 = FUN_00156850(temp_v6,0);
    textFormatBuffer(temp_v16,"%s",temp_v7);
    VectorSignedToFloat((int)*(short *)(temp_v10 + 10) + (int)*(short *)(temp_v12 + 10) + temp_v2,
                        (unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat((int)*(short *)(temp_v10 + 8) + (int)*(short *)(temp_v12 + 8) + temp_v1,
                        (unsigned char)(in_fpscr >> 0x16) & 3);
    textDrawString(3,temp_v11,temp_v16,(int)*(short *)(temp_v12 + 8));
    temp_v12 = partyEntryFlagsBit3(temp_v6);
    temp_v4 = *(short *)(temp_v10 + 10) + temp_v2;
    temp_v5 = *(short *)(temp_v10 + 8) + temp_v1;
    if (temp_v12 != 0) {
      FUN_001835b4(2,0x1e,0xb0,temp_v5,temp_v4,0xab);
    }
    else {
      FUN_001835b4(2,0x1e,0xaf,temp_v5,temp_v4,0xab);
    }
    temp_v12 = asdTMTexTableEntryAt(0x1e,0xb1);
    partyDrawCategorySelectionIcon(temp_v6,(int)*(short *)(temp_v12 + 8) + (int)*(short *)(temp_v10 + 8) + temp_v1,
                 (int)*(short *)(temp_v10 + 10) + (int)*(short *)(temp_v12 + 10) + temp_v2,0xb0);
    temp_v12 = asdTMTexTableEntryAt(0x1e,0xb4);
    temp_v4 = partyEntryGetBit5(temp_v6);
    if (temp_v4 != 0) {
      FUN_00164b5c(2,0x1e,0xf,(int)*(short *)(temp_v10 + 8) + (int)*(short *)(temp_v12 + 8) + temp_v1,
                   (int)*(short *)(temp_v10 + 10) + (int)*(short *)(temp_v12 + 10) + temp_v2,0xb0);
    }
    else {
      temp_v4 = partyEntryBitsBit4(temp_v6);
      temp_v11 = temp_v6;
      if ((temp_v4 == 0) && ((temp_v6 = questHasSpecialDetailPage(temp_v11)) != 0)) {
        FUN_00164b5c(2,0x1e,0x13,(int)*(short *)(temp_v10 + 8) + (int)*(short *)(temp_v12 + 8) + temp_v1,
                     (int)*(short *)(temp_v10 + 10) + (int)*(short *)(temp_v12 + 10) + temp_v2,0xb0);
      }
      else {
        temp_v4 = partyEntryGetBit6(temp_v11);
        if (temp_v4 != 0) {
          FUN_00164b5c(2,0x1e,0x10,(int)*(short *)(temp_v10 + 8) + (int)*(short *)(temp_v12 + 8) + temp_v1
                       ,(int)*(short *)(temp_v10 + 10) + (int)*(short *)(temp_v12 + 10) + temp_v2,0xb0);
        }
      }
    }
  }
  FUN_00344cd0(temp_v3,temp_v1,temp_v2,0x1e,0x89,0x8a,0x8b,0x85,0x87,0x86,0x88,
               (int)*(short *)(temp_v0 + 0xd42),(int)*(short *)(temp_v0 + 0xd3e),
               (int)*(short *)(temp_v0 + 0xd40),0x97,0);
  efctSetSpeed();
  return;
}

} /* extern "C" */
