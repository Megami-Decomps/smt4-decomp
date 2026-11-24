#ifndef UI_PLACETEXTTRANSITION_H
#define UI_PLACETEXTTRANSITION_H

#include "common.h"
#include "script/scrScriptProcess.h"
#include "gamedata/DataTableAccess.h"
#include <stddef.h>

struct PlaceTextTableCursor {
    u32 state;
};
struct PlaceTextRecord {
    /* 0x00 */ char text[0x20];
    /* 0x20 */ s32 location;
    /* 0x24 */ u16 area;
    /* 0x26 */ u16 stockSection;  /* the place's stock rows are section stockSection + 2 of table 0x17 */
    /* 0x28 */ u8 unk28[0x42];
    /* 0x6A */ u16 alternateFlag;
    /* 0x6C */ char alternateText[0x20];
};
struct PlaceTextTransition {
    /* 0x000 */ u32 unk000;
    /* 0x004 */ s32 state;
    /* 0x008 */ s32 frame;
    /* 0x00C */ u32 unk00C;
    /* 0x010 */ s32 previousState;
    /* 0x014 */ u8 unk014[4];
    /* 0x018 */ u8 area;
    /* 0x019 */ u8 unk019[3];
    /* 0x01C */ s32 location;
    /* 0x020 */ u8 unk020[0x164];
    /* 0x184 */ void *layoutSource;
    /* 0x188 */ u32 layoutSize;
    /* 0x18C */ ScriptProcess *first;
    /* 0x190 */ ScriptProcess *second;
};
#ifdef __cplusplus

/* The index of data table 0x17's record for `area` and `location`, or -1 (inlined by the place caption
 * transition and by the equipment shop's stock rebuild equipmentMenuRebuildPages, each with its own cursor). */
static __inline s32 placeTextFindRecord(u8 area, s32 location)
{
    PlaceTextTableCursor cursor;
    s32 selected = -1;
    const PlaceTextRecord *records = dataTable17Type1GetEntry(&cursor, 0);
    for (s32 index = 0; index < dataTable17Count(&cursor); ++index) {
        if (records[index].area == area && records[index].location == location) {
            selected = index;
            break;
        }
    }
    return selected;
}
#endif

typedef char PlaceTextRecordLayoutCheck[
    sizeof(PlaceTextRecord) == 0x8C && offsetof(PlaceTextRecord, location) == 0x20 &&
    offsetof(PlaceTextRecord, area) == 0x24 && offsetof(PlaceTextRecord, alternateFlag) == 0x6A &&
    offsetof(PlaceTextRecord, alternateText) == 0x6C ? 1 : -1];
typedef char PlaceTextTransitionLayoutCheck[
    offsetof(PlaceTextTransition, layoutSource) == 0x184 &&
    offsetof(PlaceTextTransition, first) == 0x18C &&
    offsetof(PlaceTextTransition, second) == 0x190 ? 1 : -1];

#endif
