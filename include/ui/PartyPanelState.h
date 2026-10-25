/* Party-panel controllers and their embedded animation work. */
#ifndef UI_PARTYPANELSTATE_H
#define UI_PARTYPANELSTATE_H
#include "common.h"
#include "shard/W6_W6Match6_PartyPanel.h"
#include "gamedata/SelectedUnitQuery.h"
#include "ui/GridNavigation.h"
#include <stddef.h>
typedef struct TimerSlot {
    /* 0x00 */ u8 data[0x8C];
} TimerSlot;

typedef struct PartyPanelState {
    union {
        /* 0x0000 */ u8 unk0000[0x1C];
        struct {
            u32 job;
            u8 prefix04[8];
            void *files[2];
            void *script;
        } resources;
        struct {
            /* 0x0000 */ u8 unk0000prefix[0x18];
            /* 0x0018 */ u32 phase;
        } lifecycle;
    };
    /* 0x001C */ s32 sceneState;
    union {
        /* 0x0020 */ u8 unk0020[0xC];
        struct {
            /* 0x0020 */ u32 unk20;
            /* 0x0024 */ s32 previousState;
            /* 0x0028 */ u32 unk28;
        } history;
    };
    /* 0x002C */ u32 unk2C;
    /* 0x0030 */ u32 capacityTier;
    /* 0x0034 */ u8 unk34;
    /* 0x0035 */ u8 unk35;
    union {
        /* 0x0036 */ u8 unk0036[0xC];
        struct {
            /* 0x0036 */ u8 prefix36[2];
            /* 0x0038 */ s16 selection;
            /* 0x003A */ u8 suffix3A[8];
        } pendingSelection;
        struct {
            u8 prefix36[4];
            s16 previousSelection;
            u8 suffix3C[6];
        } helpHistory;
        u16 previewItem;
    };
    /* 0x0042 */ u8 unk42;
    union {
        /* 0x0043 */ u8 unk0043[0x13D];
        struct {
            u8 prefix43;
            s8 mode;
            u8 suffix45[0x13B];
        } helpSelection;
    };
    /* 0x0180 */ u8 timerC[1];
    /* 0x0181 */ u8 unk0181[0xab];
    /* 0x022C */ f32 effectSpeed;
    /* 0x0230 */ u8 unk0230[0x68];
    /* 0x0298 */ TimerSlot timers[4];
    /* 0x04C8 */ TimerSlot timerB;
    /* 0x0554 */ u8 unk0554[0x118];
    /* 0x066C */ u8 panelState;
    union {
        /* 0x066D */ u8 unk066D[0x5B];
        struct {
            /* 0x066D */ u8 unk066dPrefix[0xb];
            /* 0x0678 */ u8 activeSlots[4];
            /* 0x067C */ u8 unk067c[0x4c];
        } availability;
    };
    union {
        /* 0x06C8 */ u32 unk6C8[4];
        PartyPanelWidget *characters[4];
    };
    union {
        /* 0x06D8 */ u32 unk6D8[0x18];
        PartyPanelWidget *demons[0x18];
    };
    /* 0x0738 */ union {
        u8 sortableEntries[0xC0];
        SelectedUnitListEntry previewUnits[24];
        struct {
            /* 0x0738 */ u32 unk738;
            /* 0x073C */ PartyPanelEntry entries[0x18];
        } entryView;
    };
    union {
        /* 0x07FC */ u8 unk7FC[0x95C];
        struct {
            /* 0x07FC */ u8 prefix7FC[0xE0];
            /* 0x08DC */ u8 stateFourPart[0x64];
            union {
                /* 0x0940 */ u8 gap940[0xC8];
                struct {
                    /* 0x0940 */ u8 primary[0x64];
                    /* 0x09A4 */ u8 secondary[0x64];
                } stateSixParts;
            };
            /* 0x0A08 */ u8 primaryPart[0x64];
            /* 0x0A6C */ u8 secondaryPart[0x64];
            /* 0x0AD0 */ u8 suffixAD0[0x688];
        } transitionParts;
        struct {
            u8 prefix7FC[0x144];
            GridNavigation base;
            GridNavigation secondary;
            GridNavigation expanded;
            GridNavigation secondaryExpanded;
        } capacityGrids;
        struct {
            u8 prefix7FC[0x340];
            s32 mode;
        } detailSelection;
        struct {
            u8 prefix7FC[0x338];
            s32 ids[2]; /* 0xB34 */
            s32 count; /* 0xB3C */
        } exclusions;
    };
    /* 0x1158 */ u32 statusValue;
    union {
        /* 0x115C */ u8 unk115C[0x694];
        /* 0x115C */ void *ownedBuffer;
    };
    /* 0x17F0 */ u8 unk17F0;
} PartyPanelState;

typedef struct PartyPanelAnimationStateA {
    /* 0x000 */ u8 unk000[0x8C];
    /* 0x08C */ u8 speedObject[0x20]; /* the vec2 object whose speed is effectSpeed (vec2GetSpeed reads +0x20) */
    /* 0x0AC */ f32 effectSpeed;
    /* 0x0B0 */ u8 unk0B0[0x784];
    /* 0x834 */ u8 mode;
    union {
        /* 0x835 */ u8 unk835[0x4F];
        struct {
            u8 prefix835[0xB];
            /* 0x840 */ u8 protagonistAvailable;
            /* 0x841 */ u8 partyAvailable[3];
        } preview;
    };
    /* 0x884 */ u16 unk884;
    /* 0x886 */ u8 unk886[0xA];
} PartyPanelAnimationStateA;

typedef struct PartyPanelStateA {
    union {
        /* 0x000 */ u8 unk000[0x1C];
        struct {
            u8 unk000[0x18];
            /* 0x018 */ u32 phase;
        } lifecycle;
    };
    /* 0x01C */ s32 state;
    /* 0x020 */ u32 unk20;
    union {
        /* 0x024 */ u8 unk24[8];
        /* 0x024 */ s32 previousState;
    };
    /* 0x02C */ u32 toggle;
    union {
        /* 0x030 */ u8 unk30[0xC];
        struct {
            u8 prefix30[6];
            /* 0x036 */ u16 item;
            /* 0x038 */ s16 selection;
        } preview;
    };
    /* 0x03C */ s16 unk3C;
    union {
        /* 0x03E */ u8 unk3E[0x142];
        struct {
            u8 prefix3E[4];
            /* 0x042 */ u8 alternate;
        } activeGrid;
    };
    /* 0x180 */ PartyPanelAnimationStateA animation;
    union {
        /* 0xA10 */ u32 handlesA[4];
        /* 0xA10 */ PartyPanelWidget *characters[4];
    };
    union {
        /* 0xA20 */ u32 handlesB[0x18];
        /* 0xA20 */ PartyPanelWidget *demons[0x18];
    };
} PartyPanelStateA;

/* Retail 32-bit layout invariants. */
typedef char PartyPanelStateSizeCheck[sizeof(PartyPanelState) == 0x17F4 ? 1 : -1];
typedef char PartyPanelExclusionOffsetsCheck[offsetof(PartyPanelState, exclusions.ids) == 0xB34 && offsetof(PartyPanelState, exclusions.count) == 0xB3C && sizeof(PartyPanelState) == 0x17F4 ? 1 : -1];
typedef char PartyPanelAnimationStateASizeCheck[sizeof(PartyPanelAnimationStateA) == 0x890 ? 1 : -1];
typedef char PartyPanelStateASizeCheck[sizeof(PartyPanelStateA) == 0xA80 ? 1 : -1];
typedef char PartyPanelStateResourcesOffsetCheck[
    offsetof(PartyPanelState, resources.job) == 0 &&
    offsetof(PartyPanelState, resources.files) == 0xC &&
    offsetof(PartyPanelState, resources.script) == 0x14 &&
    offsetof(PartyPanelState, ownedBuffer) == 0x115C ? 1 : -1];
typedef char PartyPanelStateTransitionOffsetsCheck[
    offsetof(PartyPanelState, pendingSelection.selection) == 0x38 &&
    offsetof(PartyPanelState, transitionParts.stateFourPart) == 0x8DC &&
    offsetof(PartyPanelState, transitionParts.primaryPart) == 0xA08 &&
    offsetof(PartyPanelState, transitionParts.secondaryPart) == 0xA6C ? 1 : -1];
typedef char PartyPanelPreviewOffsetCheck[
    offsetof(PartyPanelState, previewItem) == 0x36 &&
    offsetof(PartyPanelState, previewUnits) == 0x738 &&
    sizeof(PartyPanelState) == 0x17F4 ? 1 : -1];
typedef char PartyPanelStateSixPartOffsetsCheck[
    offsetof(PartyPanelState, transitionParts.stateSixParts.primary) == 0x940 &&
    offsetof(PartyPanelState, transitionParts.stateSixParts.secondary) == 0x9A4 &&
    sizeof(PartyPanelState) == 0x17F4 ? 1 : -1];
typedef char PartyPanelCapacityGridOffsetsCheck[
    offsetof(PartyPanelState, capacityGrids.base) == 0x940 &&
    offsetof(PartyPanelState, capacityGrids.expanded) == 0xA08 &&
    sizeof(PartyPanelState) == 0x17F4 ? 1 : -1];
typedef char PartyPanelHelpHistoryOffsetCheck[
    offsetof(PartyPanelState, helpHistory.previousSelection) == 0x3A &&
    offsetof(PartyPanelState, helpSelection.mode) == 0x44 &&
    sizeof(PartyPanelState) == 0x17F4 ? 1 : -1];
typedef char PartyPanelDetailSelectionOffsetCheck[
    offsetof(PartyPanelState, detailSelection.mode) == 0xB3C &&
    sizeof(PartyPanelState) == 0x17F4 ? 1 : -1];
typedef char PartyPanelStateAPreviewOffsetsCheck[
    offsetof(PartyPanelStateA, preview.item) == 0x36 &&
    offsetof(PartyPanelStateA, preview.selection) == 0x38 &&
    offsetof(PartyPanelStateA, animation.preview.protagonistAvailable) == 0x9C0 &&
    sizeof(PartyPanelStateA) == 0xA80 ? 1 : -1];
typedef char PartyPanelStateATransitionOffsetCheck[
    offsetof(PartyPanelStateA, lifecycle.phase) == 0x18 &&
    offsetof(PartyPanelStateA, previousState) == 0x24 &&
    offsetof(PartyPanelStateA, characters) == 0xA10 &&
    offsetof(PartyPanelStateA, demons) == 0xA20 &&
    offsetof(PartyPanelStateA, animation.preview.partyAvailable) == 0x9C1 &&
    sizeof(PartyPanelStateA) == 0xA80 ? 1 : -1];
typedef char PartyPanelStateAActiveGridOffsetCheck[
    offsetof(PartyPanelStateA, activeGrid.alternate) == 0x42 &&
    sizeof(PartyPanelStateA) == 0xA80 ? 1 : -1];

#endif
