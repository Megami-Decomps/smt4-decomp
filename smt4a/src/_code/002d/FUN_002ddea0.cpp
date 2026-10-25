/* NON_MATCHING: captured position vector restores paired y/z conversion; loop-index/record registers and x-conversion scheduling differ. */
#include "common.h"
#include "shard/FUN_0033aa6c.h"

/* The engine record list as this function reads it: its 0x58-byte effect records with their kind word and
 * the navigation slot assigned to them. */
struct Vec4F {
    f32 x, y, z, w;
};

struct NaviRecord {
    /* 0x00 */ u8 active;
    /* 0x01 */ u8 unk01[3];
    /* 0x04 */ s32 state;
    /* 0x08 */ u8 unk08[4];
    /* 0x0C */ Vec4F position;
    /* 0x1C */ u8 unk1C[6];
    /* 0x22 */ s16 frame;
    /* 0x24 */ s16 kind;
    /* 0x26 */ u8 unk26[2];
    /* 0x28 */ s32 flagId;
    /* 0x2C */ u8 unk2C[0x20];
    /* 0x4C */ s32 follow;
    /* 0x50 */ u8 unk50[4];
    /* 0x54 */ s32 naviSlot;
};

struct NaviRecordList {
    /* 0x000 */ u8 unk000[4];
    /* 0x004 */ s16 mapId;
    /* 0x006 */ s16 areaId;
    /* 0x008 */ u8 unk008[0x9C];
    /* 0x0A4 */ NaviRecord records[32];
    /* 0xBA4 */ u8 unkBA4[0x13C];
    /* 0xCE0 */ s32 naviCount;
};

extern "C" {

extern NaviRecordList *g_engineRecordList;

void sub68OwnerCall5(void);
s32 gameFlagsTestSecondBank(s32 flag);
void FUN_00244c70(u32 a, u32 id, s32 b, s32 frame, Vec4F position);
void naviConfigureEntry(s32 index, s32 mapId, s32 areaId, s32 x, s32 y, s32 z, s32 flag);

/* Reports each active record's pending talk/navigation event and registers the ones that need a navigation marker. */
void FUN_002ddea0(void)
{
    s32 i;

    sub68OwnerCall5();
    for (i = 0; i < 32; i++) {
        NaviRecord *record = &g_engineRecordList->records[i];

        if (record->active == 0) {
            continue;
        }
        if (record->kind == 3 || record->kind == 4 || record->kind == 5 || record->kind == 7 ||
            record->kind == 13 || record->kind == 15 || record->kind == 8 || record->kind == 9 ||
            record->kind == 10 || record->kind == 16) {
            if (gameFlagsTestSecondBank((s16)record->flagId) == 0) {
                if (g_engineRecordList->mapId < 100) {
                    if (record->kind == 7 || record->kind == 15 || record->kind == 16) {
                        FUN_00244c70(0, 31, -1, record->frame, record->position);
                    } else {
                        FUN_00244c70(0, 30, -1, record->frame, record->position);
                    }
                } else {
                    FUN_00244c70(0, 48, -1, record->frame, record->position);
                }
            }
        } else if (record->state == 1) {
            if (g_engineRecordList->mapId < 100) {
                if (record->kind == 1 || record->kind == 11 || record->kind == 12) {
                    if (FUN_0033aa6c((s16)record->flagId) != 0) {
                        FUN_00244c70(0, 35, -1, record->frame, record->position);
                        if (g_engineRecordList->naviCount < 16) {
                            Vec4F position = record->position;
                            naviConfigureEntry(g_engineRecordList->naviCount, g_engineRecordList->mapId,
                                               g_engineRecordList->areaId, (s32)position.x,
                                               (s32)position.y, (s32)position.z, 1);
                            record->naviSlot = g_engineRecordList->naviCount;
                            g_engineRecordList->naviCount++;
                        }
                    } else {
                        FUN_00244c70(0, 34, -1, record->frame, record->position);
                    }
                } else if (record->follow == 0) {
                    FUN_00244c70(0, 29, -1, record->frame, record->position);
                }
            } else {
                FUN_00244c70(0, 49, -1, record->frame, record->position);
            }
        }
    }
}

} /* extern "C" */
