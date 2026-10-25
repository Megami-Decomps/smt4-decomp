/* NON_MATCHING: retail does not hoist the cursor/timer addresses out of the marker loop (they are recomputed where used) and conditionally materialises the constant 1 at loop entry; built hoists both and spills them */
#include "common.h"
#include "util/FUN_002c7e24.h"
#include "shard/FUN_0037e09c.h"

/* A unit status record as filled by unitInitializeFromTemplate. */
struct StatusUnitRecord {
    /* 0x00 */ u8 unk00[0x2A];
    /* 0x2A */ u16 unk2A;
    /* 0x2C */ u16 unk2C;
    /* 0x2E */ u8 unk2E[0x32];
    /* 0x60 */ u16 mask;
    /* 0x62 */ u8 unk62[0xCA];
};

struct MarkerEntry {
    /* 0x00 */ u16 unitId;
    /* 0x02 */ u16 unk02;
    /* 0x04 */ u16 unk04;
    /* 0x06 */ u16 kindMask; /* bit n set: marker kind n applies */
    /* 0x08 */ u8 unk08[0x11];
    /* 0x19 */ char name[0x23];
    /* 0x3C */ u8 active;
    /* 0x3D */ u8 unk3D[3];
};

struct MarkerWork {
    /* 0x0000 */ u8 unk0000[0x4850];
    /* 0x4850 */ s32 markerCount;
    /* 0x4854 */ u8 unk4854[4];
    /* 0x4858 */ MarkerEntry markers[10];
    /* 0x4AD8 */ u8 unk4AD8[4];
    /* 0x4ADC */ s32 timer;
    /* 0x4AE0 */ s32 cursor;
};

struct MarkerPlayer {
    /* 0x000 */ s16 unitId;
    /* 0x002 */ u8 unk002[0x1A];
    /* 0x01C */ u16 shownMask;
    /* 0x01E */ u8 unk01E[0x5FC];
    /* 0x61A */ u8 statusSource[1];
};

extern "C" {
u32 markerKindGetColor(s32 kind);
void FUN_003b076c(void);
s32 FUN_0024101c(const char *name, const u8 *source);
void unitInitializeFromTemplate(u32 unitId, StatusUnitRecord *record);
void statusDisplayBindUnitRecord(StatusUnitRecord *record, s32 a, s32 b, const char *name);
void statusPanelSetOpen(s32 open);
}

#define MARKER_KIND_COUNT 14

static __inline void markerBindUnit(StatusUnitRecord &record, const MarkerEntry *marker)
{
    unitInitializeFromTemplate(marker->unitId, &record);
    record.unk2A = marker->unk02;
    record.unk2C = marker->unk04;
    record.mask = marker->kindMask;
    statusDisplayBindUnitRecord(&record, 1, 0, marker->name);
}

/* Updates the marker overlays: cycles through the kinds a marker carries while the player's unit
 * is on it, and refreshes the unit status panel. */
extern "C" void FUN_002c982c(MarkerWork *work)
{
    StatusUnitRecord record;
    for (s32 i = 0; i < work->markerCount; i++) {
        if (!work->markers[i].active)
            continue;
        MarkerEntry *marker = &work->markers[i];
        MarkerPlayer *player = reinterpret_cast<MarkerPlayer *>(FUN_002c7e24());
        if (marker->kindMask != 0) {
            if (player->unitId == marker->unitId) {
                s32 shown = 0;
                for (s32 kind = 1; kind < MARKER_KIND_COUNT; kind++) {
                    if (marker->kindMask & (1 << kind)) {
                        if (work->cursor == shown) {
                            markerKindGetColor((s16)kind);
                            FUN_003b076c();
                            FUN_0037e09c(1);
                            if (marker->kindMask != player->shownMask) {
                                markerBindUnit(record, marker);
                                FUN_0037e09c(1);
                                statusPanelSetOpen(1);
                            }
                        }
                        shown++;
                    }
                }
                if (work->timer >= 0x18) {
                    work->cursor = (work->cursor + 1) % shown;
                    work->timer = 0;
                }
                if (marker->kindMask == 0)
                    goto none;
            }
        } else {
none:
            markerKindGetColor(0);
            FUN_003b076c();
            if (marker->kindMask != player->shownMask) {
                markerBindUnit(record, marker);
                FUN_0037e09c(1);
                statusPanelSetOpen(1);
            }
        }
        if (FUN_0024101c(marker->name, player->statusSource) != 0 && player->unitId == marker->unitId) {
            markerBindUnit(record, marker);
            statusPanelSetOpen(1);
        }
    }
}
