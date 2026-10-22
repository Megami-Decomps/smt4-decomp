/* NON_MATCHING: global work-pointer address and loop scratch registers use r3/ip opposite retail. */
#include "common.h"

struct LayerResetEntry {
    /* 0x00 */ u8 active;
    /* 0x01 */ u8 flags;
    /* 0x02 */ u8 unk02[2];
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u32 unk08;
    /* 0x0C */ u32 unk0c;
    /* 0x10 */ u8 unk10;
    /* 0x11 */ u8 unk11[3];
    /* 0x14 */ f32 first;
    /* 0x18 */ f32 second;
    /* 0x1C */ f32 third;
    /* 0x20 */ f32 fourth;
    /* 0x24 */ u32 unk24;
    /* 0x28 */ u32 unk28;
    /* 0x2C */ u32 unk2c;
    /* 0x30 */ u32 unk30;
    /* 0x34 */ u8 unk34;
    /* 0x35 */ u8 unk35[3];
    /* 0x38 */ u32 unk38;
    /* 0x3C */ u8 unk3c;
    /* 0x3D */ u8 unk3d[3];
    /* 0x40 */ s32 index;
};
struct LayerResetWidget {
    /* 0x00 */ u8 active;
    /* 0x01 */ u8 flags;
    /* 0x02 */ u8 unk02;
    /* 0x03 */ u8 unk03;
    /* 0x04 */ f32 first;
    /* 0x08 */ f32 second;
    /* 0x0C */ f32 third;
    /* 0x10 */ f32 fourth;
    /* 0x14 */ u32 unk14;
    /* 0x18 */ u32 unk18;
    /* 0x1C */ u8 unk1c;
    /* 0x1D */ u8 unk1d[3];
    /* 0x20 */ u32 unk20;
    /* 0x24 */ u8 unk24;
    /* 0x25 */ u8 unk25[3];
    /* 0x28 */ s32 index;
};
struct LayerResetWork {
    /* 0x0000 */ u32 state;
    /* 0x0004 */ u8 unk0004[8];
    /* 0x000C */ u16 first;
    /* 0x000E */ u16 second;
    /* 0x0010 */ u8 active;
    /* 0x0011 */ u8 unk0011[3];
    /* 0x0014 */ LayerResetEntry entries[64];
    /* 0x1114 */ LayerResetWidget widgets[9];
    /* 0x12A0 */ LayerResetWidget overlays[3];
};
struct LayerResetGameState {
    /* 0x000 */ u8 unk000[0x248];
    /* 0x248 */ u32 state;
};

typedef char LayerResetEntrySize[sizeof(LayerResetEntry) == 0x44 ? 1 : -1];
typedef char LayerResetWidgetSize[sizeof(LayerResetWidget) == 0x2c ? 1 : -1];
typedef char LayerResetWorkSize[sizeof(LayerResetWork) == 0x1324 ? 1 : -1];

extern "C" LayerResetWork *DAT_00581270;
extern "C" LayerResetGameState g_gameState;

static inline void resetLayerWidget(LayerResetWidget *widget)
{
    widget->active = 0;
    widget->flags = 0;
    widget->unk02 = 0;
    widget->first = 0.0f;
    widget->second = 0.0f;
    widget->third = 0.0f;
    widget->fourth = 0.0f;
    widget->unk14 = 0;
    widget->unk18 = 0;
    widget->unk1c = 0;
    widget->unk20 = 0;
    widget->unk24 = 0;
    widget->index = -1;
}

/* Reset all layer records and widget groups and activate the state block. */
extern "C" void uiResetLayerWidgetState(void)
{
    g_gameState.state = 0;
    LayerResetWork *work = DAT_00581270;
    work->state = 0;
    work->first = 0;
    work->second = 0;
    work->active = 1;
    for (s32 index = 0; index < 64; ++index) {
        LayerResetEntry *entry = &work->entries[index];
        entry->active = 0;
        entry->flags = 0;
        entry->unk04 = 0;
        entry->unk08 = 0;
        entry->unk0c = 0;
        entry->unk10 = 0;
        entry->first = 0.0f;
        entry->second = 0.0f;
        entry->third = 0.0f;
        entry->fourth = 0.0f;
        entry->unk24 = 0;
        entry->unk28 = 0;
        entry->unk34 = 0;
        entry->unk38 = 0;
        entry->unk3c = 0;
        entry->unk2c = 0;
        entry->index = -1;
        entry->unk30 = 0;
    }
    for (s32 index = 0; index < 9; ++index)
        resetLayerWidget(&DAT_00581270->widgets[index]);
    for (s32 index = 0; index < 3; ++index)
        resetLayerWidget(&DAT_00581270->overlays[index]);
}
