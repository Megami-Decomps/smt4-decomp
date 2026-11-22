/* camp/CampCec/CampCecRecv.c: the StreetPass (cec) receive screen of the camp. */
#ifndef CAMP_CAMPCEC_CAMPCECRECV_H
#define CAMP_CAMPCEC_CAMPCECRECV_H

#include "common.h"
#include <stddef.h>
#include "script/ScriptVm.h"
#include "gamedata/GameSaveDataA.h"
#include "camp/CampCec/CecRecord.h"

struct ThreadStackStorage;
struct CampCecDrawList;
struct CampCecRecv;

/* A state of the receive screen: stateMachineRun calls the current one every frame. */
typedef s32 (*CampCecRecvState)(struct CampCecRecv *recv);

#define CAMPCEC_RECV_STATE_COUNT 9

/* A demon the receive screen can hand over (12 bytes, 90 of them in the screen's second buffer). */
typedef struct CampCecDemonGift {
    /* 0x00 */ s16 demonId;
    /* 0x02 */ s16 requiredTotal;          /* StreetPass total it needs */
    /* 0x04 */ u8 unk04[8];
} CampCecDemonGift;

#define CAMPCEC_DEMON_GIFT_COUNT 90
#define CAMPCEC_ITEM_ROW_COUNT 14
#define CAMPCEC_ITEM_ROW_LENGTH 5
#define CAMPCEC_ITEM_GIFT_MAX 32

/* The receive state's own progress block (work + 0x38). */
typedef struct CampCecRecvProgress {
    /* 0x00 */ u8 unk00[0x64];
    /* 0x64 */ s32 count;                  /* records to take, then the number accepted */
    /* 0x68 */ s32 state;                  /* the receive state's step */
} CampCecRecvProgress;

/* The receive (StreetPass download) screen's work area. */
typedef struct CampCecRecv {
    /* 0x00 */ u32 task;                   /* the screen's task handle */
    union {
        /* 0x04 */ u8 unk04[0x3E4];
        struct {
            /* 0x004 */ u8 unk004BeforeValue[0x14a];
            /* 0x14E */ u16 value;
        } scriptValue;
        struct {
            /* 0x004 */ u8 unk004[8];
            /* 0x00C */ CampCecRecvState states[CAMPCEC_RECV_STATE_COUNT]; /* the handler of each state */
            /* 0x030 */ u8 unk030[4];
            /* 0x034 */ CampCecRecvState idle;  /* run while no state is entered */
            /* 0x038 */ u8 unk038[0x318];
            /* 0x350 */ u32 noticeScript;       /* camp/CecMain_scr.bf, loading */
            /* 0x354 */ u32 noticeMessages;     /* camp/CecMain_msg.mbm, loading */
            /* 0x358 */ u8 unk358[0x50];
            /* 0x3A8 */ s32 previousState;
            /* 0x3AC */ s32 state;
            /* 0x3B0 */ s32 nextState;
            /* 0x3B4 */ s32 unk3B4;
            /* 0x3B8 */ u8 unk3B8[0x28];
            /* 0x3E0 */ s32 restriction;        /* why StreetPass cannot be received: 1 parental controls, 2 switched
                                                 * off, 6 no StreetPass process, 3 and 4 by the selected unit's marks */
        } machine;
        struct {
            /* 0x004 */ u8 unk004BeforeBuffers[0x344];
            /* 0x348 */ void *buffers[6];       /* heap blocks freed with the screen */
            /* 0x360 */ ScriptProcess *scripts[2];       /* script processes destroyed with the screen */
            /* 0x368 */ u8 unk368[0x78];
            /* 0x3E0 */ u32 received;           /* only the received data was set up */
        } resources;
        struct {
            /* 0x004 */ u8 unk004BeforeProgress[0x34];
            /* 0x038 */ CampCecRecvProgress progress;
            /* 0x0A4 */ u8 unk0A4[0x3C];
            /* 0x0E0 */ s16 statGains[5];       /* one more point per StreetPass tier, on a random stat */
            /* 0x0EA */ u8 unk0EA[2];
            /* 0x0EC */ SlotRecordA unit;       /* the current unit's record, copied when it is a demon */
            /* 0x218 */ SlotRecordA unitBefore;
            /* 0x344 */ CampCecDemonGift *gift; /* the demon picked for the player, NULL for none */
            /* 0x348 */ s16 (*itemRows)[CAMPCEC_ITEM_ROW_LENGTH]; /* item ids by gift kind (14 rows) */
            /* 0x34C */ CampCecDemonGift *gifts;
            /* 0x350 */ void *unk350[2];
            /* 0x358 */ u32 talkScript;         /* camp/CecMainDevilTalk_scr.bf, loading */
            /* 0x35C */ u32 talkMessages;       /* camp/CecDevilMsg/<tone>.mbm, loading */
            /* 0x360 */ ScriptProcess *script;
            /* 0x364 */ ScriptProcess *talkProcess;
            /* 0x368 */ s16 items[CAMPCEC_ITEM_GIFT_MAX]; /* the item ids handed over, itemCount of them */
            /* 0x3A8 */ u8 unk3A8[8];
            /* 0x3B0 */ s32 nextState;
            /* 0x3B4 */ u8 unk3B4[0xC];
            /* 0x3C0 */ s32 itemCount;
            /* 0x3C4 */ u8 unk3C4[8];
            /* 0x3CC */ s32 rewardA;            /* amount of reward kind 0 */
            /* 0x3D0 */ s32 rewardB;            /* amount of reward kind 1 */
            /* 0x3D4 */ u8 unk3D4[4];
            /* 0x3D8 */ u32 previousTotal;      /* the StreetPass total before these records */
            /* 0x3DC */ u32 pending;
            /* 0x3E0 */ u8 unk3E0[4];
            /* 0x3E4 */ u8 useInbox;
            /* 0x3E5 */ u8 unk3E5[2];
            /* 0x3E7 */ u8 talkLoading;
        } receive;
        struct {
            /* 0x004 */ u8 unk004BeforeGains[0xDC];
            /* 0x0E0 */ s16 statGains[5];       /* stat points still to hand to the unit, one message each */
            /* 0x0EA */ u8 unk0EA[0x12E];
            /* 0x218 */ SlotRecordA unitBefore; /* the unit as it was before the gains (what the status display shows) */
            /* 0x344 */ u8 unk344[0x6C];
            /* 0x3B0 */ s32 nextState;          /* the state stateMachineRun enters when a handler returns 3 */
            /* 0x3B4 */ u8 unk3B4[8];
            /* 0x3BC */ s32 step;               /* the running state's own step */
            /* 0x3C0 */ u8 unk3C0[0x1C];
            /* 0x3DC */ u32 pending;            /* what is left to present, a mask maskToCode() turns into the next state */
            /* 0x3E0 */ u8 unk3E0[6];
            /* 0x3E6 */ u8 unk3E6;
        } gains;
    };
    /* 0x3E8 */ u8 done;                    /* the screen has finished */
    /* 0x3E9 */ u8 unk3E9[0x3];
    union {
        /* 0x3EC */ u8 unk3EC[0x3EC];
        struct {
            /* 0x3EC */ u8 unk3ECBeforeFlag[0x3E8];
            /* 0x7D4 */ u8 unk7D4;              /* compendiumRegisterPartyDemon is still owed for the unit */
        } unitFlag;
        struct {
            /* 0x3EC */ CampCecReceivedRecord entries[10]; /* the DataStore's records (source 1) */
            /* 0x7D4 */ u8 unitOwed;
            /* 0x7D5 */ u8 source;              /* 0: the cec inbox, 1: the DataStore */
        } received;
    };
    union {
        /* 0x7D8 */ void *handles;             /* handle array freed with the screen */
        /* 0x7D8 */ struct CampCecDrawList *drawList;
    };
    /* 0x7DC */ u8 unk7DC[0x14];
    /* 0x7F0 */ u8 loaderStop;                 /* cleared before the loader thread starts */
    /* 0x7F1 */ u8 unk7F1[3];
    /* 0x7F4 */ u32 loaderProgress;
    /* 0x7F8 */ struct ThreadStackStorage *loaderStack;
    /* 0x7FC */ u8 loaderThread[8];            /* the nn::os::Thread that loads the screen's files */
    /* 0x804 */ void *loaderStackMemory;
} CampCecRecv;

typedef char CampCecRecvMachineOffsets[sizeof(CampCecRecv) == 0x808 && offsetof(CampCecRecv, machine.states) == 0xC &&
    offsetof(CampCecRecv, machine.idle) == 0x34 && offsetof(CampCecRecv, machine.noticeScript) == 0x350 &&
    offsetof(CampCecRecv, machine.previousState) == 0x3A8 && offsetof(CampCecRecv, machine.restriction) == 0x3E0 &&
    offsetof(CampCecRecv, loaderStop) == 0x7F0 && offsetof(CampCecRecv, loaderStack) == 0x7F8 &&
    offsetof(CampCecRecv, loaderThread) == 0x7FC && offsetof(CampCecRecv, loaderStackMemory) == 0x804 ? 1 : -1];
typedef char CampCecRecvResourceOffsets[offsetof(CampCecRecv, resources.buffers) == 0x348 &&
    offsetof(CampCecRecv, resources.received) == 0x3E0 && offsetof(CampCecRecv, done) == 0x3E8 &&
    offsetof(CampCecRecv, handles) == 0x7D8 ? 1 : -1];
typedef char CampCecRecvReceiveOffsets[sizeof(CampCecReceivedRecord) == 100 && sizeof(CampCecDemonGift) == 12 &&
    offsetof(CampCecRecv, receive.progress.count) == 0x9C && offsetof(CampCecRecv, receive.progress.state) == 0xA0 &&
    offsetof(CampCecRecv, receive.statGains) == 0xE0 && offsetof(CampCecRecv, receive.unit) == 0xEC &&
    offsetof(CampCecRecv, receive.unitBefore) == 0x218 && offsetof(CampCecRecv, receive.gift) == 0x344 &&
    offsetof(CampCecRecv, receive.gifts) == 0x34C && offsetof(CampCecRecv, receive.talkScript) == 0x358 &&
    offsetof(CampCecRecv, receive.script) == 0x360 && offsetof(CampCecRecv, receive.items) == 0x368 &&
    offsetof(CampCecRecv, receive.nextState) == 0x3B0 && offsetof(CampCecRecv, receive.itemCount) == 0x3C0 &&
    offsetof(CampCecRecv, receive.rewardA) == 0x3CC && offsetof(CampCecRecv, receive.previousTotal) == 0x3D8 &&
    offsetof(CampCecRecv, receive.pending) == 0x3DC && offsetof(CampCecRecv, receive.useInbox) == 0x3E4 &&
    offsetof(CampCecRecv, receive.talkLoading) == 0x3E7 && offsetof(CampCecRecv, received.entries) == 0x3EC &&
    offsetof(CampCecRecv, received.unitOwed) == 0x7D4 && offsetof(CampCecRecv, received.source) == 0x7D5 ? 1 : -1];
typedef char CampCecRecvGainOffsets[offsetof(CampCecRecv, gains.statGains) == 0xE0 &&
    offsetof(CampCecRecv, gains.unitBefore) == 0x218 && offsetof(CampCecRecv, gains.nextState) == 0x3B0 &&
    offsetof(CampCecRecv, gains.step) == 0x3BC && offsetof(CampCecRecv, gains.pending) == 0x3DC &&
    offsetof(CampCecRecv, gains.unk3E6) == 0x3E6 && offsetof(CampCecRecv, unitFlag.unk7D4) == 0x7D4 ? 1 : -1];

#endif
