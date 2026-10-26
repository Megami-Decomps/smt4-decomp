/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0029f2fc` (_code @ 0x29f2fc, 0x1724 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "gamedata/GameFlags.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "map/mapRndMaze.h"
#include "util/FUN_0013def0.h"

extern "C" {

int ARM_common_memcpy4_9(...);
int asdSequenceRequest(...);
int configOpen(...);
int FUN_00202ea4(void);
int FUN_0020e79c(void);
int stateModeDispatch(...);
int configDestroy(void);
int FUN_00283d74(...);
int FUN_002c7150(void);
int gameApplyFlagTriggers(void);
int FUN_00324c94(...);
int FUN_00363c58(...);
int FUN_003b5064(void);
int FUN_003b61ec(void);
int FUN_003c91e8(void);
int aocActivateFileGroupFlags(...);
int gameFlagsSetFlagsFromTaggedGroupEntries(...);

int textFormatBuffer(...);
int jobStop(...);
int ifTouchRegionRemove(void);
int sysPlaySe(...);
int FUN_00168980(...);
int eventQueueAddUnique(...);
int dataTableGet(...);
void frameTransitionSetMode(int);
int commonBgBeginExit(void);
int objectE0ResetFlags1040(void);
int campCommonBgRelease(void);
int FUN_0037a2e4(void);
int saveLoadStartDefaultWindow(void);
int mobiclipProcessSetFlag77(...);
int FUN_003c4f28(...);
int commonBgReset(void);
int FUN_003ca7d8(void);
int soundChannelRequestIfEnabled(...);

int asdTMTexTableLoadTmx(int, int);
int FUN_001517b4(...);
int FUN_0019de98(...);
int asdTMTexLoadMainHeap(int, int);
int slotSetRequest(...);
int FUN_0022258c(...);
int FUN_0022677c(...);
int campCommonBgAcquire(void);
int campButtonHelpAcquire(void);
int mobiclipProcessCreate(...);
int texEntrySpritesLoad(void);
int mobiclipProcessSetFlag78(...);
int soundChannelStopAll(...);
int FUN_003d54f8(...);
int loadSlotEnsureLoaded(int);
int VectorSignedToFloat(...);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spA8; /* 0xa8: local_a8 */
} void_stack;

extern unsigned char LAB_0029ff54; /* 0x29ff54 */
extern unsigned char LAB_002a0964; /* 0x2a0964 */
extern unsigned int g_aocSystem; /* 0x570280 */
extern unsigned int *DAT_00589170; /* 0x589170 */
extern unsigned char DAT_005f1634; /* 0x5f1634 */
extern unsigned int DAT_005f1bd4; /* 0x5f1bd4 */
extern unsigned int DAT_005f1be8; /* 0x5f1be8 */
extern int g_mapSelection; /* 0x5f1c98 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: ARM_common_memcpy4_9. */
/* Supplied declaration required: textFormatBuffer. */
/* Supplied declaration required: asdSequenceRequest. */
/* Supplied declaration required: asdTMTexTableLoadTmx. */
extern int gameDataBlocksGetSaveData(void);
/* Supplied declaration required: FUN_001517b4. */
/* Supplied declaration required: jobStop. */
extern int jobIsValid(unsigned int);
/* Supplied declaration required: ifTouchRegionRemove. */
extern unsigned short FUN_001643b4(unsigned int, unsigned int);
extern int padButtonRepeat(unsigned int);
extern int padButtonIsPressed(unsigned int);
/* Supplied declaration required: sysPlaySe. */
/* Supplied declaration required: FUN_00168980. */
/* Supplied declaration required: eventQueueAddUnique. */

/* Supplied declaration required: dataTableGet. */
extern unsigned int gameFlagIsSet(unsigned int);
extern int dataTableGetEntries(void);
/* Supplied declaration required: FUN_0019de98. */
/* Supplied declaration required: asdTMTexLoadMainHeap. */
/* Supplied declaration required: slotSetRequest. */
extern int bgmGetStateById(unsigned int);
/* Supplied declaration required: configOpen. */
/* Supplied declaration required: FUN_00202ea4. */
/* Supplied declaration required: FUN_0020e79c. */
extern int slotIsReady(unsigned int);
extern int configIsClosed(void);
/* Supplied declaration required: stateModeDispatch. */
/* Supplied declaration required: FUN_0022258c. */
/* Supplied declaration required: FUN_0022677c. */
/* Supplied declaration required: configDestroy. */
extern int s4LoadIsActive(void);
extern int screenFadeIsBusy(void);
/* Supplied declaration required: FUN_00283d74. */
extern int recordGetModeForId(int);
extern int menuAreModeTexturesLoaded(unsigned int *);
/* Supplied declaration required: FUN_002c7150. */
extern int jyoucyuGetLevel(void);
extern int FUN_002e07f4(void);
extern int FUN_002e1a18(unsigned int);
/* Supplied declaration required: commonBgBeginExit. */
extern int configGetValueBC(void);
/* Supplied declaration required: gameApplyFlagTriggers. */
/* Supplied declaration required: campCommonBgAcquire. */
/* Supplied declaration required: FUN_00324c94. */
/* Supplied declaration required: objectE0ResetFlags1040. */
extern int FUN_003309e0(void);
extern int textureGetIndexedResource(unsigned int);
/* Supplied declaration required: campButtonHelpAcquire. */
/* Supplied declaration required: campCommonBgRelease. */
extern int FUN_0035e6d4(unsigned int *);
/* Supplied declaration required: FUN_00363c58. */
/* Supplied declaration required: mobiclipProcessCreate. */
/* Supplied declaration required: texEntrySpritesLoad. */
/* Supplied declaration required: FUN_0037a2e4. */
extern int titleConfigIsClosed(void);
extern int saveLoadUIHasResult(void);
/* Supplied declaration required: saveLoadStartDefaultWindow. */
/* Supplied declaration required: FUN_003b5064. */
/* Supplied declaration required: FUN_003b61ec. */
/* Supplied declaration required: mobiclipProcessSetFlag78. */
/* Supplied declaration required: mobiclipProcessSetFlag77. */
/* Supplied declaration required: FUN_003c4f28. */
/* Supplied declaration required: commonBgReset. */
/* Supplied declaration required: FUN_003c91e8. */
/* Supplied declaration required: FUN_003ca7d8. */
/* Supplied declaration required: soundChannelRequestIfEnabled. */
/* Supplied declaration required: soundChannelStopAll. */
/* Supplied declaration required: FUN_003d54f8. */
/* Supplied declaration required: loadSlotEnsureLoaded. */
/* Supplied declaration required: aocActivateFileGroupFlags. */
extern int aocHasType36(unsigned int, unsigned int);
/* Supplied declaration required: gameFlagsSetFlagsFromTaggedGroupEntries. */


unsigned int FUN_0029f2fc(void)

{
/* irregular: 9 goto(s); irregular input(s): in_fpscr; 52 native warning(s); review required */
  char temp_v0;
  short temp_v1;
  short temp_v2;
  unsigned int *puVar4;
  unsigned int *puVar5;
  unsigned short temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  int *piVar10;
  int temp_v7;
  unsigned int temp_v8;
  int temp_v9;
  unsigned char temp_v10;
  unsigned int in_fpscr;
  float temp_v11;
  float temp_v12;
  int temp_v13;
  unsigned int uStack_a4;
  unsigned char temp_v14 [132];
  
  puVar4 = DAT_00589170;
  piVar10 = &temp_v13;
  switch(DAT_00589170[0x1e]) {
  case 0:
  case 1:
    loadSlotEnsureLoaded(0x3a);
    asdTMTexTableLoadTmx(0x2a,0);
    asdTMTexLoadMainHeap(0x2a,0);
    asdTMTexLoadMainHeap(0x2a,1);
    asdTMTexLoadMainHeap(0x2a,2);
    asdTMTexLoadMainHeap(0x2a,5);
    asdTMTexLoadMainHeap(0x2a,6);
    asdTMTexLoadMainHeap(0x2a,7);
    asdTMTexLoadMainHeap(0x2a,8);
    texEntrySpritesLoad();
    temp_v5 = (int)FUN_0013def0(0);
    if (temp_v5 != 3) {
      FUN_0022677c(0,0xff);
    }
    temp_v5 = (int)FUN_0013def0(1);
    if (temp_v5 != 3) {
      FUN_0022677c(1,0xff);
    }
    FUN_0022258c(1);
    puVar4[0x1e] = 4;
    puVar4[0x1f] = 0;
    puVar4[0x20] = 0;
    break;
  case 2:
    temp_v5 = DAT_00589170[0x1f];
    if (temp_v5 == 0) {
      slotSetRequest(0,0xf,0xff);
      slotSetRequest(1,0xf,0xff);
      soundChannelStopAll(0xf);
      puVar4[0x1f] = 1;
      break;
    }
    if (temp_v5 != 1) {
      if (temp_v5 != 2) break;
    }
    else {
      temp_v5 = screenFadeIsBusy();
      if (temp_v5 != 0) break;
      puVar4[0x1f] = 2;
    }
    puVar4[0x1f] = 0;
    puVar4[0x1e] = 4;
    puVar4[0x20] = 0;
    break;
  case 3:
    if (*(char *)(DAT_00589170 + 0x24) != '\0') {
      temp_v5 = 0;
      FUN_001517b4(0,1);
      if (temp_v5 == 0) {
        temp_v5 = 1;
        FUN_001517b4();
        if (temp_v5 == 0) {
          temp_v5 = 9;
          FUN_001517b4(9,1);
          if (temp_v5 == 0) {
            temp_v5 = 10;
            FUN_001517b4(10,1);
            if (temp_v5 == 0) {
              temp_v5 = 2;
              FUN_001517b4(2,1);
              if (temp_v5 == 0) goto LAB_0029f580;
            }
          }
        }
      }
      FUN_0022677c(0,0xff);
      FUN_0022677c(1,0xff);
      puVar4[0x1f] = 0;
      puVar4[0x1e] = 4;
      puVar4[0x20] = 0;
      break;
    }
LAB_0029f580:
    switch(puVar4[0x1f]) {
    case 0:
      temp_v5 = menuAreModeTexturesLoaded(puVar4);
      if (temp_v5 == 0) break;
      *(unsigned char *)(puVar4 + 0x18) = 1;
      FUN_0022677c(0,0xff);
      FUN_0022677c(1,0xff);
      FUN_003d54f8(0,0xf);
      puVar4[0x1f] = 1;
    case 1:
      temp_v5 = slotIsReady(0);
      if (temp_v5 == 0) {
        temp_v0 = *(char *)(puVar4 + 0x24);
joined_r0x0029f8b8:
        if (temp_v0 != '\0') {
          temp_v6 = 3;
          puVar4[0x21] = 0x3c;
        }
        else {
          temp_v6 = 2;
        }
        puVar4[0x1f] = temp_v6;
      }
      break;
    case 2:
      FUN_0022258c(1);
      temp_v5 = jyoucyuGetLevel();
      if ((temp_v5 != 0) && (*(char *)(puVar4 + 0x24) == '\0')) {
        *(unsigned char *)(puVar4 + 0x24) = 1;
        temp_v5 = reinterpret_cast<int>(asdTMTexTableEntryAt(9,0x22));
        temp_v6 = VectorSignedToFloat((int)*(short *)(temp_v5 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v8 = VectorSignedToFloat((int)*(short *)(temp_v5 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
        puVar4[5] = temp_v6;
        puVar4[6] = temp_v8;
        temp_v5 = reinterpret_cast<int>(asdTMTexTableEntryAt(9,0x23));
        temp_v6 = VectorSignedToFloat((int)*(short *)(temp_v5 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v8 = VectorSignedToFloat((int)*(short *)(temp_v5 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
        puVar4[7] = temp_v6;
        puVar4[8] = temp_v8;
        temp_v5 = reinterpret_cast<int>(asdTMTexTableEntryAt(9,0x24));
        temp_v6 = VectorSignedToFloat((int)*(short *)(temp_v5 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v8 = VectorSignedToFloat((int)*(short *)(temp_v5 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
        puVar4[9] = temp_v6;
        puVar4[10] = temp_v8;
        temp_v5 = reinterpret_cast<int>(asdTMTexTableEntryAt(9,0x25));
        temp_v6 = VectorSignedToFloat((int)*(short *)(temp_v5 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v8 = VectorSignedToFloat((int)*(short *)(temp_v5 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
        puVar4[0xb] = temp_v6;
        puVar4[0xc] = temp_v8;
        temp_v5 = reinterpret_cast<int>(asdTMTexTableEntryAt(9,0x26));
        temp_v6 = VectorSignedToFloat((int)*(short *)(temp_v5 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v8 = VectorSignedToFloat((int)*(short *)(temp_v5 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
        puVar4[0xd] = temp_v6;
        puVar4[0xe] = temp_v8;
        campButtonHelpAcquire();
        campCommonBgAcquire();
        *(unsigned char *)((int)puVar4 + 0x61) = 1;
      }
      else {
        *(unsigned char *)(puVar4 + 0x24) = 0;
      }
      slotSetRequest(0,0xf,0xff);
      temp_v6 = 4;
      puVar4[0x1f] = temp_v6;
      break;
    case 3:
      temp_v5 = puVar4[0x20];
      if ((int)puVar4[0x21] <= temp_v5) {
        slotSetRequest(0,0xf,0xff);
        puVar4[0x1f] = 4;
        break;
      }
LAB_0029f9fc:
      puVar4[0x20] = temp_v5 + 1;
      break;
    case 4:
      temp_v5 = slotIsReady(0);
      if (temp_v5 != 0) break;
      puVar4[0x1f] = 5;
    case 5:
      *(unsigned char *)(puVar4 + 0x18) = 0;
      puVar4[0x1f] = 0;
      puVar4[0x1e] = 4;
      puVar4[0x20] = 0;
      break;
    default:
      break;
    }
    break;
  case 4:
    if (*(char *)(DAT_00589170 + 0x24) != '\0') {
      temp_v5 = 0;
      FUN_001517b4(0,1);
      if (temp_v5 == 0) {
        temp_v5 = 1;
        FUN_001517b4();
        if (temp_v5 == 0) {
          temp_v5 = 9;
          FUN_001517b4(9,1);
          if (temp_v5 == 0) {
            temp_v5 = 10;
            FUN_001517b4(10,1);
            if (temp_v5 == 0) {
              temp_v5 = 2;
              FUN_001517b4(2,1);
              if (temp_v5 == 0) goto LAB_0029f848;
            }
          }
        }
      }
      FUN_0022677c(0,0xff);
      FUN_0022677c(1,0xff);
      temp_v6 = 5;
    }
    else {
LAB_0029f848:
      switch(puVar4[0x1f]) {
      case 0:
        temp_v5 = menuAreModeTexturesLoaded(puVar4);
        if (temp_v5 == 0) goto LAB_002a0858;
        *(unsigned char *)(puVar4 + 0x18) = 1;
        FUN_003d54f8(0,0xf);
        puVar4[0x1f] = 1;
      case 1:
        temp_v5 = slotIsReady(0);
        if (temp_v5 != 0) goto LAB_002a0858;
        temp_v0 = *(char *)(puVar4 + 0x24);
        goto joined_r0x0029f8b8;
      case 2:
        FUN_0022258c(2);
        temp_v5 = jyoucyuGetLevel();
        if ((temp_v5 == 0) || (*(char *)(puVar4 + 0x24) != '\0')) {
          *(unsigned char *)(puVar4 + 0x24) = 0;
          break;
        }
        *(unsigned char *)(puVar4 + 0x24) = 1;
        temp_v5 = reinterpret_cast<int>(asdTMTexTableEntryAt(9,0x22));
        temp_v6 = VectorSignedToFloat((int)*(short *)(temp_v5 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v8 = VectorSignedToFloat((int)*(short *)(temp_v5 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
        puVar4[5] = temp_v6;
        puVar4[6] = temp_v8;
        temp_v5 = reinterpret_cast<int>(asdTMTexTableEntryAt(9,0x23));
        temp_v6 = VectorSignedToFloat((int)*(short *)(temp_v5 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v8 = VectorSignedToFloat((int)*(short *)(temp_v5 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
        puVar4[7] = temp_v6;
        puVar4[8] = temp_v8;
        temp_v5 = reinterpret_cast<int>(asdTMTexTableEntryAt(9,0x24));
        temp_v8 = VectorSignedToFloat((int)*(short *)(temp_v5 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v6 = VectorSignedToFloat((int)*(short *)(temp_v5 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
        puVar4[9] = temp_v8;
        puVar4[10] = temp_v6;
        temp_v5 = reinterpret_cast<int>(asdTMTexTableEntryAt(9,0x25));
        temp_v8 = VectorSignedToFloat((int)*(short *)(temp_v5 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v6 = VectorSignedToFloat((int)*(short *)(temp_v5 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
        puVar4[0xb] = temp_v8;
        puVar4[0xc] = temp_v6;
        temp_v5 = reinterpret_cast<int>(asdTMTexTableEntryAt(9,0x26));
        temp_v6 = VectorSignedToFloat((int)*(short *)(temp_v5 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v8 = VectorSignedToFloat((int)*(short *)(temp_v5 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
        puVar4[0xd] = temp_v6;
        puVar4[0xe] = temp_v8;
        campButtonHelpAcquire();
        campCommonBgAcquire();
        *(unsigned char *)((int)puVar4 + 0x61) = 1;
        break;
      case 3:
        temp_v5 = puVar4[0x20];
        if (temp_v5 < (int)puVar4[0x21]) goto LAB_0029f9fc;
        break;
      case 4:
        temp_v5 = slotIsReady(0);
        if (temp_v5 != 0) goto LAB_002a0858;
        *(unsigned char *)(puVar4 + 0x18) = 0;
        puVar4[0x1f] = 5;
      case 5:
        puVar4[0x1f] = 0;
        puVar4[0x1e] = 6;
        puVar4[0x20] = 0;
      default:
        goto LAB_002a0858;
      }
      slotSetRequest(0,0xf,0xff);
      temp_v6 = 4;
    }
    puVar4[0x1f] = temp_v6;
    break;
  case 6:
    if (*(char *)(DAT_00589170 + 0x24) != '\0') {
      temp_v5 = 0;
      FUN_001517b4(0,1);
      if (temp_v5 == 0) {
        temp_v5 = 1;
        FUN_001517b4();
        if (temp_v5 == 0) {
          temp_v5 = 9;
          FUN_001517b4(9,1);
          if (temp_v5 == 0) {
            temp_v5 = 10;
            FUN_001517b4(10,1);
            if (temp_v5 == 0) {
              temp_v5 = 2;
              FUN_001517b4(2,1);
              if (temp_v5 == 0) goto LAB_0029fb00;
            }
          }
        }
      }
      FUN_0022677c(0,0xff);
      FUN_0022677c(1,0xff);
      mobiclipProcessSetFlag78(1);
    }
LAB_0029fb00:
    temp_v5 = puVar4[0x1f];
    if (temp_v5 != 0) {
      if (temp_v5 != 1) {
        if (temp_v5 == 2) {
          puVar4[0x1f] = 0;
          puVar4[0x1e] = 7;
          puVar4[0x20] = 0;
        }
        break;
      }
      temp_v5 = jobIsValid(puVar4[0x22]);
      if (temp_v5 != 0) break;
      temp_v6 = 2;
    }
    else {
      FUN_0019de98(0,0xf4f4f4ff);
      puVar4[0x23] = 0x1d;
      gameFlagSetValue(0x81d, 1, 1);
      temp_v6 = gameFlagIsSet(0x81d);
      temp_v8 = 0x1d;
      mobiclipProcessCreate(0x1d,temp_v6);
      puVar4[0x22] = temp_v8;
      mobiclipProcessSetFlag77(1);
      temp_v6 = 1;
    }
    puVar4[0x1f] = temp_v6;
    break;
  case 7:
    FUN_003c4f28(DAT_00589170);
    break;
  case 8:
    temp_v5 = menuAreModeTexturesLoaded(DAT_00589170);
    if (temp_v5 != 0) {
      temp_v5 = reinterpret_cast<int>(asdTMTexTableEntryAt(0x2a,4));
      puVar4[0x41] = 4;
      puVar4[0x40] = 0x2a;
      temp_v1 = **(short **)(temp_v5 + 0xc);
      puVar4[0x3a] = (int)(*(short **)(temp_v5 + 0xc))[1];
      puVar4[0x37] = 0;
      puVar4[0x38] = 0;
      puVar4[0x39] = (int)temp_v1;
      puVar4[0x35] = 0;
      puVar4[0x36] = 0;
      temp_v5 = reinterpret_cast<int>(asdTMTexTableEntryAt(0x2a,0));
      puVar4[0x33] = 0;
      puVar4[0x32] = 0x2a;
      temp_v1 = **(short **)(temp_v5 + 0xc);
      temp_v2 = (*(short **)(temp_v5 + 0xc))[1];
      puVar4[0x2a] = 0;
      temp_v6 = 0;
      puVar4[0x2b] = (int)temp_v1;
      puVar4[0x2c] = (int)temp_v2;
      puVar4[0x27] = 0;
      puVar4[0x28] = 0;
      puVar4[0x29] = 0;
      puVar4[0x4d] = 0x3e9;
      puVar4[0x4c] = 0x2a;
      puVar4[0x43] = 0;
      puVar4[0x44] = 0;
      puVar4[0x45] = 0;
      puVar4[0x51] = 0;
      puVar4[0x5b] = 0x3e9;
      puVar4[0x5a] = 0x2a;
      puVar4[0x52] = 0;
      puVar4[0x53] = 0;
      puVar4[0x69] = 1;
      puVar4[0x5f] = 0;
      puVar4[0x68] = 0x2a;
      puVar4[0x60] = 0;
      puVar4[0x61] = 0x3f800000;
      puVar4[0x77] = 2000;
      puVar4[0x6d] = 0;
      puVar4[0x76] = 0x2a;
      puVar4[0x6e] = 0;
      puVar4[0x6f] = 0x3f800000;
      puVar4[0x85] = 0x7d1;
      puVar4[0x84] = 0x2a;
      puVar4[0x7b] = 0;
      puVar4[0x7c] = 0;
      puVar4[0x7d] = 0x3f800000;
      puVar4[0x97] = 0;
      temp_v5 = reinterpret_cast<int>(asdTMTexTableEntryAt(0x2a,3));
      puVar4[0x93] = 2;
      puVar4[0x92] = 0x2a;
      temp_v1 = *(short *)(temp_v5 + 8);
      temp_v2 = *(short *)(temp_v5 + 10);
      puVar4[0x8c] = (int)temp_v1;
      puVar4[0x8d] = (int)temp_v2;
      puVar4[0x90] = temp_v6;
      puVar4[0x8e] = (int)temp_v1;
      puVar4[0x8f] = (int)temp_v2;
      puVar4[0x91] = temp_v6;
      puVar4[0x94] = 0;
      puVar4[0x95] = 0x28;
      puVar4[0x96] = 0;
      puVar5 = DAT_00589170;
      *(unsigned char *)(DAT_00589170 + 4) = 0;
      temp_v5 = bgmGetStateById(0x1000001);
      if (temp_v5 != 1) {
        soundChannelRequestIfEnabled(0x1000001,0,0x3c);
      }
      if (*(char *)(puVar5 + 0xf) != '\0') {
        puVar5[2] = 1;
        puVar5[3] = 1;
      }
      if (*(char *)((int)puVar5 + 0x71) != '\0') {
        puVar5[2] = 3;
        puVar5[3] = 3;
      }
      sysPlaySe(0xa1);
      temp_v7 = puVar5[2];
      dataTableGet(0x3a,0);
      temp_v5 = dataTableGetEntries();
      textFormatBuffer(&temp_v13,temp_v5 + temp_v7 * 100 + 0x14,&LAB_0029ff54);
      FUN_0019de98(&temp_v13,0xf4f4f4ff);
      if (*(char *)(puVar5 + 0xf) != '\0') {
        commonBgReset();
      }
      else {
        commonBgBeginExit();
      }
      temp_v5 = 0;
      do {
        if (*(short *)((int)puVar5 + temp_v5 * 2 + 0x50) != 0) {
          ifTouchRegionRemove();
        }
        temp_v5 = temp_v5 + 1;
      } while (temp_v5 < 5);
      temp_v3 = FUN_001643b4(9,0x27);
      *(unsigned short *)(puVar5 + 0x14) = temp_v3;
      temp_v3 = FUN_001643b4(9,0x28);
      *(unsigned short *)((int)puVar5 + 0x52) = temp_v3;
      temp_v3 = FUN_001643b4(9,0x29);
      *(unsigned short *)(puVar5 + 0x15) = temp_v3;
      temp_v3 = FUN_001643b4(9,0x2a);
      *(unsigned short *)((int)puVar5 + 0x56) = temp_v3;
      temp_v3 = FUN_001643b4(9,0x2b);
      *(unsigned short *)(puVar5 + 0x16) = temp_v3;
      puVar4[0x1e] = 9;
      puVar4[0x1f] = 0;
      puVar4[0x20] = 0;
    }
    break;
  case 9:
    temp_v5 = textureGetIndexedResource(0x2a);
    if ((temp_v5 != 0) && (temp_v5 = asdTMTexTableNodeIsLoaded(0x2a,0), temp_v5 != 0)) {
      *(unsigned char *)(puVar4 + 0x18) = 1;
      puVar4[0x1f] = 0;
      puVar4[0x1e] = 10;
      puVar4[0x20] = 0;
    }
    break;
  case 10:
    *(unsigned char *)((int)DAT_00589170 + 99) = 0;
    temp_v5 = (int)FUN_0013def0(0);
    if ((temp_v5 != 2) && (temp_v5 = (int)FUN_0013def0(0), temp_v5 != 0)) {
      FUN_003d54f8(0,10);
    }
    FUN_003d54f8(1,10);
    puVar4[0x21] = 0x690;
    *(unsigned char *)((int)puVar4 + 0x91) = 0;
    puVar4[0x1e] = 0xb;
    puVar4[0x1f] = 0;
    puVar4[0x20] = 0;
    break;
  case 0xb:
    temp_v5 = FUN_002e07f4();
    if ((temp_v5 == 0) || (temp_v5 = FUN_003309e0(), temp_v5 == 0)) break;
    *(unsigned char *)((int)puVar4 + 0x91) = 0;
    puVar5 = DAT_00589170;
    temp_v12 = 1.0f;
    DAT_00589170[0x10] = (float)DAT_00589170[0x10] + 1.0f;
    temp_v5 = padButtonRepeat(5);
    if ((temp_v5 != 0) || (temp_v5 = padButtonRepeat(0xe), temp_v5 != 0)) {
      puVar5[2] = puVar5[2] - 1;
    }
    temp_v5 = padButtonRepeat(6);
    if ((temp_v5 == 0) && (temp_v5 = padButtonRepeat(0xf), temp_v5 == 0)) {
      temp_v5 = puVar5[2];
    }
    else {
      temp_v5 = puVar5[2] + 1;
      puVar5[2] = temp_v5;
    }
    temp_v5 = (temp_v5 + 5) % 5;
    puVar5[2] = temp_v5;
    if (temp_v5 != puVar5[3]) {
      eventQueueAddUnique(0x100020d);
      puVar5[3] = puVar5[2];
      *(unsigned char *)((int)puVar5 + 0x91) = 1;
    }
    if ((int)puVar5[0x10] >= 0x42700001) {
      puVar5[0x10] = 0;
    }
    if ((int)puVar5[0x10] < 0x41f00001) {
      temp_v11 = (float)puVar5[0x11] + 0.033333335f;
      *(float *)&puVar5[0x11] = temp_v11;
    }
    else if ((int)puVar5[0x10] < 0x42700001) {
      temp_v11 = (float)puVar5[0x11] - 0.033333335f;
      *(float *)&puVar5[0x11] = temp_v11;
    }
    if ((int)puVar5[0x11] < 0x3f800001) {
      temp_v12 = (float)puVar5[0x11];
    }
    *(float *)&puVar5[0x11] = temp_v12;
    if (temp_v12 <= 0.0f) {
      temp_v12 = 0.0f;
    }
    *(float *)&puVar5[0x11] = temp_v12;
    puVar5 = DAT_00589170;
    temp_v5 = 0;
    do {
      temp_v7 = recordGetModeForId((int)*(short *)((int)puVar5 + temp_v5 * 2 + 0x50));
      if ((temp_v7 == 1) ||
         (temp_v7 = recordGetModeForId((int)*(short *)((int)puVar5 + temp_v5 * 2 + 0x50)), temp_v7 == 2)) {
        puVar5[2] = temp_v5;
        *(unsigned char *)((int)puVar5 + 0x91) = 1;
        break;
      }
      temp_v5 = temp_v5 + 1;
    } while (temp_v5 < 5);
    temp_v5 = 0;
    do {
      temp_v7 = recordGetModeForId((int)*(short *)((int)puVar5 + temp_v5 * 2 + 0x50));
      if (temp_v7 == 6) {
        puVar5[2] = temp_v5;
        *(unsigned char *)((int)puVar5 + 0x3f) = 1;
      }
      temp_v5 = temp_v5 + 1;
    } while (temp_v5 < 5);
    temp_v7 = puVar4[2];
    dataTableGet(0x3a,0);
    temp_v5 = dataTableGetEntries();
    textFormatBuffer(&temp_v13,temp_v5 + temp_v7 * 100 + 0x14,&LAB_0029ff54);
    FUN_0019de98(&temp_v13,0xf4f4f4ff);
    if (((*(char *)((int)puVar4 + 0x3f) != '\0') || (temp_v5 = FUN_002e1a18(1), temp_v5 != 0)) ||
       (temp_v5 = padButtonIsPressed(0), temp_v5 != 0)) {
      puVar5 = DAT_00589170;
      temp_v4 = DAT_00589170[2];
      temp_v10 = temp_v4 == 1;
      if (temp_v10) {
        temp_v4 = (unsigned int)*(unsigned char *)(DAT_00589170 + 0xf);
      }
      if (temp_v10 && temp_v4 == 0) {
        *(unsigned char *)((int)DAT_00589170 + 0x3f) = 0;
      }
      else {
        eventQueueAddUnique(0x100020e);
        temp_v5 = puVar5[2];
        if (temp_v5 == 1) {
          temp_v5 = 0;
          *(unsigned char *)((int)puVar5 + 0x3d) = 1;
          do {
            ifTouchRegionRemove();
            temp_v5 = temp_v5 + 1;
          } while (temp_v5 < 5);
          *(unsigned char *)((int)puVar5 + 0x3f) = 0;
          *(unsigned char *)((int)puVar5 + 0x5a) = 1;
          puVar5[0x17] = 2;
          objectE0ResetFlags1040();
          frameTransitionSetMode(1);
          puVar5[0x1f] = 0;
          puVar5[0x1e] = 0xd;
          puVar5[0x20] = 0;
        }
        else if (temp_v5 == 0) {
          temp_v5 = 0;
          *(unsigned char *)((int)puVar5 + 0x3d) = 1;
          do {
            ifTouchRegionRemove();
            temp_v5 = temp_v5 + 1;
          } while (temp_v5 < 5);
          *(unsigned char *)((int)puVar5 + 0x3f) = 0;
          *(unsigned char *)((int)puVar5 + 0x5a) = 1;
          puVar5[0x17] = 2;
          objectE0ResetFlags1040();
          frameTransitionSetMode(1);
          temp_v5 = aocHasType36(g_aocSystem,0x558);
          if (temp_v5 != 0) {
            gameFlagSetValue(0x558,1,1);
          }
          else {
            gameFlagSetValue(0x558,0,1);
          }
          temp_v5 = aocHasType36(g_aocSystem,0x559);
          if (temp_v5 != 0) {
            gameFlagSetValue(0x559,1,1);
          }
          else {
            gameFlagSetValue(0x559,0,1);
          }
          puVar5[0x1f] = 0;
          puVar5[0x1e] = 0x14;
          puVar5[0x20] = 0;
        }
        else if (temp_v5 == 2) {
          temp_v5 = 0;
          *(unsigned char *)((int)puVar5 + 0x3d) = 1;
          do {
            ifTouchRegionRemove();
            temp_v5 = temp_v5 + 1;
          } while (temp_v5 < 5);
          *(unsigned char *)((int)puVar5 + 0x3f) = 0;
          *(unsigned char *)((int)puVar5 + 0x5a) = 1;
          puVar5[0x17] = 2;
          objectE0ResetFlags1040();
          frameTransitionSetMode(1);
          puVar5[0x1f] = 0;
          puVar5[0x1e] = 0xf;
          puVar5[0x20] = 0;
        }
        else if (temp_v5 == 3) {
          temp_v5 = 0;
          *(unsigned char *)((int)puVar5 + 0x3f) = 0;
          do {
            ifTouchRegionRemove();
            temp_v5 = temp_v5 + 1;
          } while (temp_v5 < 5);
          puVar5[0x1f] = 0;
          puVar5[0x1e] = 0x11;
          puVar5[0x20] = 0;
          slotSetRequest(0,10,0xff);
          slotSetRequest(1,10,0xff);
        }
        else if (temp_v5 == 4) {
          temp_v5 = 0;
          *(unsigned char *)((int)puVar5 + 0x3f) = 0;
          do {
            ifTouchRegionRemove();
            temp_v5 = temp_v5 + 1;
          } while (temp_v5 < 5);
          puVar5[0x1f] = 0;
          puVar5[0x1e] = 0x16;
          puVar5[0x20] = 0;
        }
      }
      *(unsigned char *)((int)puVar4 + 0x91) = 1;
    }
    temp_v5 = puVar4[0x21];
    if (*(char *)((int)puVar4 + 0x91) != '\0') {
      if (temp_v5 < 0x12d) {
        temp_v5 = 300;
      }
      puVar4[0x21] = temp_v5;
    }
    else {
      puVar4[0x21] = temp_v5 - 1;
      if (temp_v5 - 1 < 0) {
        puVar4[0x1f] = 0;
        puVar4[0x1e] = 2;
        puVar4[0x20] = 0;
      }
    }
    break;
  case 0xc:
    puVar4[0x1f] = 0;
    puVar4[0x1e] = 0x12;
    puVar4[0x20] = 0;
    break;
  case 0xd:
    if (*(char *)((int)DAT_00589170 + 0x5a) == '\0') {
      saveLoadStartDefaultWindow();
      puVar4[0x1f] = 0;
      puVar4[0x1e] = 0xe;
      puVar4[0x20] = 0;
    }
    break;
  case 0xe:
    temp_v5 = FUN_002ef9f0();
    if (temp_v5 != 0) break;
    temp_v5 = saveLoadUIHasResult();
    if (temp_v5 != 0) {
      *(unsigned char *)((int)puVar4 + 0x3e) = 1;
      soundChannelStopAll(0xf);
      puVar4[0x1e] = 0x12;
      puVar4[0x1f] = 0;
      puVar4[0x20] = 0;
      break;
    }
    FUN_003ca7d8();
    break;
  case 0xf:
    if (*(char *)((int)DAT_00589170 + 0x5a) == '\0') {
      FUN_0037a2e4();
      puVar4[0x1f] = 0;
      puVar4[0x1e] = 0x10;
      puVar4[0x20] = 0;
    }
    break;
  case 0x10:
    temp_v5 = titleConfigIsClosed();
    if (temp_v5 == 0) break;
    FUN_003ca7d8();
    break;
  case 0x11:
    temp_v5 = FUN_002e07f4();
    if (temp_v5 == 0) break;
    puVar4[0x1f] = 0;
    puVar4[0x1e] = 0x12;
    puVar4[0x20] = 0;
    break;
  case 0x12:
    temp_v5 = FUN_002e07f4();
    if (temp_v5 != 0) {
      campCommonBgRelease();
      jobStop(*DAT_00589170,0);
      FUN_00168980(3);
      temp_v5 = puVar4[2];
      if (temp_v5 != 1) {
        if (temp_v5 != 0) {
          if (temp_v5 == 3) {
            FUN_0020e79c();
          }
        }
        else {
          FUN_00283d74(0);
          aocActivateFileGroupFlags(g_aocSystem);
          FUN_00363c58(0);
          gameFlagsSetFlagsFromTaggedGroupEntries(g_aocSystem);
          stateModeDispatch(puVar4[0x25]);
          gameApplyFlagTriggers();
          FUN_00324c94(0x25,3);
          FUN_00324c94(0x26,3);
          DAT_005f1bd4 = 0;
          DAT_005f1be8 = 1;
          temp_v13 = 1;
          uStack_a4 = 0xffffffff;
          ARM_common_memcpy4_9(temp_v14,&LAB_002a0964);
          asdSequenceRequest(4,&temp_v13,0x20);
        }
      }
      else {
        FUN_003c91e8();
        FUN_00363c58(1);
        temp_v5 = gameDataBlocksGetSaveData();
        if (*(unsigned char *)(temp_v5 + 2) >= 2) {
          if (*(unsigned char *)(temp_v5 + 2) != 2) break;
          DAT_005f1bd4 = 0;
          DAT_005f1be8 = 1;
          temp_v13 = 1;
          uStack_a4 = 0xffffffff;
          ARM_common_memcpy4_9(temp_v14,&LAB_002a0964);
          temp_v8 = 0x20;
          temp_v6 = 4;
          piVar10 = &temp_v13;
        }
        else {
          FUN_003b5064();
          DAT_005f1bd4 = 0;
          DAT_005f1be8 = 1;
          if (g_mapSelection >= 200) {
            temp_v13 = g_mapSelection - 200;
            temp_v8 = 4;
            temp_v6 = 0xe;
          }
          else if (g_mapSelection >= 100) {
            temp_v8 = 0;
            piVar10 = (int *)0x0;
            temp_v6 = 8;
          }
          else {
            temp_v8 = 0;
            DAT_005f1634 = 1;
            piVar10 = (int *)0x0;
            temp_v6 = 6;
          }
        }
        asdSequenceRequest(temp_v6,piVar10,temp_v8);
      }
    }
    break;
  case 0x14:
    if (*(char *)((int)DAT_00589170 + 0x5a) == '\0') {
      configOpen(0);
      *(unsigned char *)(puVar4 + 0x26) = 1;
      FUN_003b61ec();
      puVar4[0x1f] = 0;
      puVar4[0x1e] = 0x15;
      puVar4[0x20] = 0;
    }
    break;
  case 0x15:
    FUN_00202ea4();
    temp_v5 = configIsClosed();
    puVar5 = DAT_00589170;
    if (temp_v5 != 0) {
      temp_v5 = configGetValueBC();
      configDestroy();
      if (temp_v5 < 0) {
        FUN_003ca7d8();
        if (*(char *)(puVar5 + 0xf) != '\0') {
          commonBgReset();
        }
        else {
          commonBgBeginExit();
        }
      }
      else {
        *(unsigned char *)((int)puVar5 + 0x3e) = 1;
        *(unsigned char *)((int)puVar5 + 0x3f) = 0;
        *(unsigned char *)(puVar5 + 0x26) = 0;
        puVar5[0x25] = temp_v5;
        slotSetRequest(0,0xc,0xff);
        slotSetRequest(1,0xc,0xff);
        soundChannelStopAll(0xf);
        puVar5[0x1f] = 0;
        puVar5[0x1e] = 0xc;
        puVar5[0x20] = 0;
      }
    }
    break;
  case 0x16:
    FUN_002c7150();
    puVar4[0x1f] = 0;
    puVar4[0x1e] = 0x17;
    puVar4[0x20] = 0;
    break;
  case 0x17:
    temp_v5 = s4LoadIsActive();
    if (temp_v5 != 0) break;
    FUN_003ca7d8();
  }
LAB_002a0858:
  puVar5 = DAT_00589170;
  *(unsigned char *)((int)DAT_00589170 + 0x5a) = 0;
  temp_v12 = (float)puVar5[0x12];
  if (*(char *)((int)puVar5 + 0x3d) != '\0') {
    if (0.0f <= temp_v12) {
      temp_v12 = temp_v12 - 0.1f;
      *(float *)&puVar5[0x12] = temp_v12;
      temp_v11 = 0.0f;
      if (0.0f < temp_v12) {
        temp_v11 = temp_v12;
      }
      *(float *)&puVar5[0x12] = temp_v11;
    }
  }
  else if ((int)temp_v12 < 0x3f800001) {
    temp_v12 = temp_v12 + 0.1f;
    *(float *)&puVar5[0x12] = temp_v12;
    if ((int)temp_v12 >= 0x3f800001) {
      temp_v12 = 1.0f;
    }
    *(float *)&puVar5[0x12] = temp_v12;
  }
  if (puVar4[0x1e] == 7) {
    return 0;
  }
  temp_v5 = reinterpret_cast<int>(asdTMTexTableEntryAt(0x2a,3));
  temp_v7 = puVar4[0x97];
  temp_v9 = (int)*(short *)(temp_v5 + 8);
  temp_v5 = (int)*(short *)(temp_v5 + 10);
  if (temp_v7 != 0) {
    if (temp_v7 != 1) {
      if (temp_v7 != 2) {
        return 0;
      }
      temp_v7 = FUN_0035e6d4(puVar4 + 0x89);
      if (temp_v7 == 0) {
        puVar4[0x8c] = temp_v9;
        puVar4[0x8d] = temp_v5;
        puVar4[0x8e] = temp_v9;
        puVar4[0x8f] = temp_v5;
        puVar4[0x90] = 0;
        puVar4[0x91] = 0;
        puVar4[0x94] = 0;
        puVar4[0x95] = 0x3c;
        puVar4[0x96] = 0;
        puVar4[0x97] = 0;
        return 0;
      }
      return 0;
    }
    temp_v7 = FUN_0035e6d4(puVar4 + 0x89);
    if (temp_v7 != 0) {
      return 0;
    }
    puVar4[0x8c] = temp_v9;
    puVar4[0x8d] = temp_v5;
    puVar4[0x8e] = temp_v9;
    puVar4[0x8f] = temp_v5;
    puVar4[0x90] = 0x3f800000;
    puVar4[0x91] = 0;
    puVar4[0x94] = 0;
    puVar4[0x95] = 0x1e;
    puVar4[0x96] = 0;
    temp_v6 = 2;
  }
  else {
    temp_v7 = FUN_0035e6d4(puVar4 + 0x89);
    if (temp_v7 != 0) {
      return 0;
    }
    puVar4[0x8c] = temp_v9;
    puVar4[0x8d] = temp_v5;
    puVar4[0x8e] = temp_v9;
    puVar4[0x8f] = temp_v5;
    puVar4[0x90] = 0;
    puVar4[0x91] = 0x3f800000;
    puVar4[0x94] = 0;
    puVar4[0x95] = 0x1e;
    puVar4[0x96] = 0;
    temp_v6 = 1;
  }
  puVar4[0x97] = temp_v6;
  return 0;
}

} /* extern "C" */
