/* NON_MATCHING: debug-layout locals and retail's unused first-entry boolean differ. */
#include "battle/btlMain.h"
#include "battle/btlCamera.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"

namespace {
struct BattleDebugSpacing { s32 step, offset, height; };
struct BattleDebugLayout { BattleDebugSpacing normal, alternate; s32 origin; };
struct BattleDebugAux;
}
extern "C" {
extern BtlCameraA *g_btlCamera;
extern BattleDebugAux *g_btlAux;
extern BattleDebugLayout DAT_0057a634;
s32 FUN_00221b34(const void *first, const void *second);
void qsort(void *array, u32 count, u32 stride, s32 (*compare)(const void *, const void *));
void nameEntriesRegisterVerNames(void *work);
void FUN_004cae0c(void *context, void *state, s32 pending, u32 target);
void FUN_004fd204(s32 x, s32 y, BattleRosterRecordA *record, u32 alpha, s32 height, s32 mode);
void FUN_004fe764(s32 x, s32 y, BattleRosterRecordA *record, u32 icon, s32 layer);
void FUN_004f1c5c(BtlCameraA *camera, s32 frames);

/* Sort active enemy records and place their debug labels/icons in the selected spacing scheme. */
void FUN_003e89bc(BtlMainStateA *battle)
{
    g_btlCamera->flags |= 0x4000;
    nameEntriesRegisterVerNames(g_btlAux);
    BattleRosterRecordA *records[50];
    s32 count = 0;
    for (s32 index = 4; index < 54; ++index) {
        BattleRosterRecordA *record = &battle->roster[index];
        if ((record->render.flags & 1) != 0 && (record->render.flags & 2) != 0)
            records[count++] = record;
    }
    qsort(records, count, sizeof(records[0]), FUN_00221b34);
    s16 position = 0;
    for (s32 index = 0; index < count; ++index) {
        BattleRosterRecordA *record = records[index];
        if ((record->render.flags & 1) != 0 && (record->render.flags & 2) != 0 &&
            (record->marker.flags & 0x800) == 0) {
            record->marker.flags |= 0x800;
            const BattleDebugSpacing *spacing = (record->render.flags & 0x10) != 0 ?
                &DAT_0057a634.alternate : &DAT_0057a634.normal;
            s16 step = static_cast<s16>(spacing->step);
            s16 offset = static_cast<s16>(spacing->offset);
            s16 height = static_cast<s16>(spacing->height);
            s16 origin = static_cast<s16>(DAT_0057a634.origin);
            FUN_004cae0c(battle, record, 0, 0);
            FUN_004fd204(position * step + offset + origin, 0, record, 255, height, 0);
            u32 icon = (record->render.flags & 0x10) != 0 ? 7 : 6;
            FUN_004fe764(position * step + origin, 0, record, icon, 13);
            position++;
        }
    }
    FUN_004f1c5c(g_btlCamera, 120);
}
}
