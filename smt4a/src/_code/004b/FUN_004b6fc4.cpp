/* NON_MATCHING: body matches retail; retail keeps -1 in r8 across the calls (push {r4-r8}, `mov r4,r0` first) where ours rematerialises it. The extra allocation operand is the uninitialised `owner` (retail passes live-in r6). Twin: smt4 MikadoCamera::initialize. */
#include "common.h"
#include "AsdSDK/Source/Sys/File/AsdLoadFile.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"
#include "classes/FloatState.h"
#include "shard/S2UiTexLoader.h"
#include "event/2dEvent/EventEffect.h"

/* The mikado camera (this game's layout, observed fields); MikadoCamera::initialize. */
struct MikadoCameraWork {
    /* 0x0000 */ u32 flags;
    /* 0x0004 */ u8 unk0004[0x1C];
    /* 0x0020 */ u32 unk20;
    /* 0x0024 */ u8 ready;
    /* 0x0025 */ u8 unk25[3];
    /* 0x0028 */ s32 state;
    /* 0x002C */ u32 unk2C;
    /* 0x0030 */ u8 unk30[4];
    /* 0x0034 */ s32 unk34;
    /* 0x0038 */ u8 unk38[0x10];
    /* 0x0048 */ u8 unk48[4];
    /* 0x004C */ u16 unk4C;
    /* 0x004E */ u16 unk4E;
    /* 0x0050 */ u8 unk50[8];
    /* 0x0058 */ f32 unk58;
    /* 0x005C */ f32 unk5C;
    /* 0x0060 */ u8 unk60[0x3C];
    /* 0x009C */ u8 selection[0x1078];
    /* 0x1114 */ u8 table33[4];
    /* 0x1118 */ u32 unk1118;
    /* 0x111C */ u8 unk111C[0xC];
    /* 0x1128 */ u32 unk1128;
    /* 0x112C */ u32 unk112C;
    /* 0x1130 */ u32 unk1130;
    /* 0x1134 */ u8 unk1134[4];
    /* 0x1138 */ u32 talkBf;
    /* 0x113C */ u32 talkMbm;
    /* 0x1140 */ u32 unk1140;
    /* 0x1144 */ u32 checkBf;
    /* 0x1148 */ u32 checkMbm;
    /* 0x114C */ u8 unk114C[0x20];
    /* 0x116C */ u32 unk116C;
    /* 0x1170 */ u8 unk1170[0xA4];
    /* 0x1214 */ u8 unk1214[4];
    /* 0x1218 */ void *cache;
};

struct MikadoCacheHead { u8 unk[0x4F0]; };
class MikadoImageCache : public MikadoCacheHead, public FloatState {
public:
    static void *operator new(u32 bytes, void *owner) throw() { return asdOperatorNew(bytes, owner); }
    u8 tail[0x7A0 - 0x4F0 - 0x60];
};

extern "C" {
extern const char g_mikadoTalkBfPath[]; /* "mikado/talk.bf" */
extern const char g_mikadoTalkMbmPath[]; /* "mikado/talk.mbm" */
extern const char g_mikadoCheckBfPath[]; /* "mikado/check.bf" */
extern const char g_mikadoCheckMbmPath[]; /* "mikado/check.mbm" */
void mikadoInitUpdateHandlers(MikadoCameraWork *screen);
void FUN_004ba1f4(void *selection);
void asdTMTexTableLoadTmx(s32 kind, s32 arg);
void campCommonBgAcquire(void);
void campButtonHelpLoad(void);
void campButtonHelpAcquire(void);
void FUN_004930e4(s32 mode);
void dataTable33Load(void *table);
void resetFlagGroup1F(void *selection);
void FUN_0022677c(u32 index, u32 value);
void soundResetSpatialState(void);
void FUN_0031e198(void);

void FUN_004b6fc4(MikadoCameraWork *camera)
{
    void *owner;
    camera->ready = 0;
    camera->unk20 = 0;
    mikadoInitUpdateHandlers(camera);
    FUN_004ba1f4(camera->selection);
    camera->unk34 = -1;
    asdTMTexTableLoadTmx(0x18, 0);
    campCommonBgAcquire();
    FUN_003b61ec();
    campButtonHelpLoad();
    campButtonHelpAcquire();
    FUN_004930e4(0);
    dataTable33Load(camera->table33);
    resetFlagGroup1F(camera->selection);
    asdLoadFileAsyncSimple(g_mikadoTalkBfPath, &camera->talkBf, 0);
    asdLoadFileAsyncSimple(g_mikadoTalkMbmPath, &camera->talkMbm, 0);
    asdLoadFileAsyncSimple(g_mikadoCheckBfPath, &camera->checkBf, 0);
    asdLoadFileAsyncSimple(g_mikadoCheckMbmPath, &camera->checkMbm, 0);
    camera->state = 1;
    camera->unk2C = 0;
    camera->unk1130 = 0;
    camera->unk1128 = 0;
    camera->unk112C = 0;
    camera->talkBf = 0;
    camera->talkMbm = 0;
    camera->unk1140 = 0;
    camera->unk1118 = 0;
    camera->unk58 = 0.0f;
    camera->unk5C = 0.0f;
    camera->unk4C = 0xFFFF;
    camera->unk4E = 0;
    camera->unk116C = 0;
    camera->unk48[0] = 0;
    camera->unk48[1] = 0;
    camera->unk48[2] = 0;
    camera->unk48[3] = 0;
    FUN_0022677c(0, 0xFF);
    FUN_0022677c(1, 0xFF);
    camera->cache = new (owner) MikadoImageCache;
    soundResetSpatialState();
    FUN_0031e198();
}
}
