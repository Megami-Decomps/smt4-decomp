/* NON_MATCHING: retail keeps -1 in one register for the byte at +0xc and the halfword at +0x121c0, merges nothing in the 0xb7c..0xb84 stores (here two are fused into an stm), and refers to its key tables through DAT_00404a9c rather than .constdata; the same stores and calls in the same order. */
#include "shard/W6_W6Match8_UiResourceParameters.h"
#include "common.h"
#include "shard/SaveWork.h"

/* A 0x8C-byte UI sprite. */
struct NaviSprite {
    u8 unk00[0x8c];
};

struct NaviPair {
    u32 first;
    u32 second;
};

struct NaviHalves {
    u16 first;
    u16 second;
};

/* The map block returned by gameGetMapBlock (only the byte this initializer defaults). */
struct NaviMapBlock {
    /* 0x000 */ u8 unk000[0xd5a];
    /* 0xd5a */ u8 naviIcon;
};

/* The navigation screen's work area as this initializer lays it out; only written offsets are named. */
struct NaviMainWork {
    /* 0x00000 */ u8 unk00;
    /* 0x00001 */ u8 unk00001[0x3];
    /* 0x00004 */ u32 unk04;
    /* 0x00008 */ u32 unk08;
    /* 0x0000c */ s8 unk0c;
    /* 0x0000d */ u8 unk0000d[0x3];
    /* 0x00010 */ u32 unk10;
    /* 0x00014 */ u32 unk14;
    /* 0x00018 */ u8 unk00018[0x3d];
    /* 0x00055 */ u8 unk55;
    /* 0x00056 */ u8 selectionState[0xa];
    /* 0x00060 */ u8 unk60;
    /* 0x00061 */ u8 unk00061[0x1];
    /* 0x00062 */ u8 unk62[0x100];
    /* 0x00162 */ u8 unk00162[0x2];
    /* 0x00164 */ u8 selection[0x14];
    /* 0x00178 */ u8 timers[0x480];
    /* 0x005f8 */ UiResourceParameters packet;
    /* 0x00618 */ NaviSprite sprites[5];
    /* 0x008d4 */ u8 unk008d4[0x118];
    /* 0x009ec */ u8 unk9ec[3];
    /* 0x009ef */ u8 unk009ef[0x1];
    /* 0x009f0 */ u32 unk9f0;
    /* 0x009f4 */ u8 unk009f4[0x4];
    /* 0x009f8 */ NaviSprite spriteA;
    /* 0x00a84 */ u8 unkA84[3];
    /* 0x00a87 */ u8 unk00a87[0x1];
    /* 0x00a88 */ NaviSprite spriteB;
    /* 0x00b14 */ u8 unk00b14[0x68];
    /* 0x00b7c */ u32 unkB7C;
    /* 0x00b80 */ u32 unkB80;
    /* 0x00b84 */ u32 unkB84;
    /* 0x00b88 */ NaviPair pairsA[32];
    /* 0x00c88 */ NaviPair pairsB[32];
    /* 0x00d88 */ u8 unk00d88[0x4d00];
    /* 0x05a88 */ u32 unk5A88;
    /* 0x05a8c */ u8 unk5A8C[4];
    /* 0x05a90 */ u8 unk05a90[0x720];
    /* 0x061b0 */ u32 unk61B0;
    /* 0x061b4 */ u8 unk061b4[0xc008];
    /* 0x121bc */ u8 unk121BC;
    /* 0x121bd */ u8 unk121bd[0x1];
    /* 0x121be */ u16 unk121BE;
    /* 0x121c0 */ u16 unk121C0;
    /* 0x121c2 */ u8 unk121c2[0xa];
    /* 0x121cc */ u32 unk121CC;
    /* 0x121d0 */ u8 unk121d0[0x14];
    /* 0x121e4 */ NaviHalves halves[32];
    /* 0x12264 */ u32 unk12264;
    /* 0x12268 */ u8 unk12268;
    /* 0x12269 */ u8 unk12269[0x7f];
    /* 0x122e8 */ u8 unk122E8[8];
};

/* Animation tables for paramsInit; the original file defined them statically. */
static const s32 sKeysFirst[21] = {
    210, 0, 65572, 20, 0, 8, 655360, -131072,
    4, -131072, 0, 10, 30, 0, 10, 320,
    0, 8, 0, 65216, 8,
};
static const s32 sKeysSecond[9] = {
    0, 1065353216, 4,
    1065353216, 0, 4,
    0, 1065353216, 8,
};
static const s32 sKeysFifth[35] = {
    -3, 0, -3, 0, 0, -3, 0, -1, 0, -1, -1, 0,
    -1, 0, 2, 0, -3, 0, 0, -3, 0, 3, 0, -3,
    -3, 0, -3, 0, -1, 0, -1, -1, 0, -1, 0,
};

extern "C" {
void NaviMain_InitCallbacks(NaviMainWork *work);
void asdTMTexTableLoadTmx(s32 id, s32 arg);
void rt_memclr(void *data, u32 size);
void rectangleInitializeSelection(void *selection, s32 x, s32 y, s32 size);
void FUN_003eb068(void *state);
void drawParameterBlockClear(UiResourceParameters *packet);

void FUN_002bd954(NaviSprite *sprite, u32 group, u32 image, UiResourceParameters *owner, u16 id, f32 scale);
void timerStart(NaviSprite *sprite, s32 id, s32 arg);
void uiInitializeEightTimerSet(void *timers);
void memFill8(void *data, s32 value);
void uiSpriteInitializeState(NaviSprite *sprite, u32 group, s32 image, s32 kind,
                             UiResourceParameters *owner, u16 id, f32 scale);

/* Resets the navigation screen's work area: its callbacks and icon texture, the selection and timer sets,
   the five header sprites and the two animated sprites. */
void NaviMain_InitInstance(NaviMainWork *work)
{
    NaviMapBlock *mapBlock = reinterpret_cast<NaviMapBlock *>(gameGetMapBlock());
    NaviMain_InitCallbacks(work);
    asdTMTexTableLoadTmx(0x33, 0);
    work->unk0c = -1;
    work->unk14 = 0;
    work->unk00 = 0;
    work->unk55 = 0;
    work->unk10 = 0;
    rt_memclr(work->unk62, 0x100);
    work->unk60 = 0;
    rectangleInitializeSelection(work->selection, 0, 0, 0x1c);
    work->unk04 = 0;
    work->unk08 = 0;
    FUN_003eb068(work->selectionState);
    drawParameterBlockClear(&work->packet);
    paramsInit(&work->packet, sKeysFirst, sizeof(sKeysFirst), sKeysSecond, sizeof(sKeysSecond),
               NULL, 0, NULL, 0, sKeysFifth, sizeof(sKeysFifth));
    for (s32 i = 0; i < 5; i++) {
        FUN_002bd954(&work->sprites[i], 0x1c, 0xfa1, &work->packet, 0x15, 1.0f);
        timerStart(&work->sprites[i], 4, 0);
    }
    uiInitializeEightTimerSet(work->timers);
    work->unkB84 = 0x78;
    work->unkB80 = 0xa0;
    work->unkB7C = 0;
    if (mapBlock->naviIcon == 0) {
        mapBlock->naviIcon = 0xc;
    }
    work->unk5A88 = 0;
    work->unk61B0 = 0;
    work->unk5A8C[0] = 0;
    work->unk5A8C[1] = 0;
    work->unk5A8C[2] = 0;
    work->unk5A8C[3] = 0;
    for (s32 i = 0; i < 32; i++) {
        work->pairsA[i].first = 0;
        work->pairsA[i].second = 0;
        work->pairsB[i].first = 0;
        work->pairsB[i].second = 0;
    }
    work->unk121CC = 0;
    work->unk12268 = 0;
    work->unk121BC = 0;
    work->unk121BE = 0;
    work->unk121C0 = -1;
    memFill8(work->unk122E8, 1);
    for (s32 i = 0; i < 32; i++) {
        work->halves[i].first = 0;
        work->halves[i].second = 0;
    }
    work->unk12264 = 0;
    work->unk9ec[0] = 0;
    work->unk9ec[1] = 0;
    work->unk9ec[2] = 0;
    work->unk9f0 = 0;
    uiSpriteInitializeState(&work->spriteA, 0x1c, 0x1121, 0x1d, &work->packet, 0x15, 1.0f);
    timerStart(&work->spriteA, 0, 0);
    work->unkA84[0] = 0;
    work->unkA84[1] = 0;
    work->unkA84[2] = 0;
    uiSpriteInitializeState(&work->spriteB, 0x1c, 0x111a, 0x1c, &work->packet, 0x15, 1.0f);
    timerStart(&work->spriteB, 5, 0);
}

} /* extern "C" */
