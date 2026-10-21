/* NON_MATCHING: retail retains extra >=11 remainder-dispatch paths and places the two switches differently; alternate switch lowering may explain these differences. */
#include "battle/btlTalk.h"
#include "gamedata/DataTable.h"

struct TalkFieldSet {
    u16 values[5];
    u8 smallValues[2];
    u16 extraValues[2];
    u32 words[2];
};

struct TalkFieldGroup {
    u8 flags[4];
    TalkFieldSet entries[3];
};

struct TalkTableRecord {
    u16 values[3];
    u8 smallValues[2];
    TalkFieldGroup groups[3];
    s16 enabled;
    u8 unkEe[2];
};

struct PtrAt8;
extern "C" {
extern BtlTalkA* g_btlTalk;
s32 scrGetArg(u32 index);
void scrSetResult(u32 result);
void* btlTalkGetTableSection0(PtrAt8* object);

u32 scrCommTalkTableGetField(void)
{
    const s32 recordIndex = scrGetArg(0);
    const s32 groupIndex = scrGetArg(1);
    const s32 field = scrGetArg(2);
    u32 result = 0xffffffff;
    void* section = btlTalkGetTableSection0((PtrAt8*)g_btlTalk);
    dataTableGetCount(section);
    const TalkTableRecord* records = (const TalkTableRecord*)dataTableGetEntries(section);

    if (groupIndex != 0) {
        const TalkFieldGroup* group = &records[recordIndex].groups[groupIndex - 1];
        if (field < 4) {
            result = group->flags[field];
        } else {
            const s32 entry = (field - 4) / 11;
            const s32 component = (field - 4) % 11;
            switch (component) {
            case 0: result = group->entries[entry].values[0]; break;
            case 1: result = group->entries[entry].values[1]; break;
            case 2: result = group->entries[entry].values[2]; break;
            case 3: result = group->entries[entry].values[3]; break;
            case 4: result = group->entries[entry].values[4]; break;
            case 5: result = group->entries[entry].smallValues[0]; break;
            case 6: result = group->entries[entry].smallValues[1]; break;
            case 7: result = group->entries[entry].extraValues[0]; break;
            case 8: result = group->entries[entry].extraValues[1]; break;
            case 9: result = group->entries[entry].words[0]; break;
            case 10: result = group->entries[entry].words[1]; break;
            }
        }
    } else {
        const TalkTableRecord* record = &records[recordIndex];
        switch (field) {
        case 0: result = record->values[0]; break;
        case 1: result = record->values[1]; break;
        case 2: result = record->values[2]; break;
        case 3: result = record->smallValues[0]; break;
        case 4: result = record->smallValues[1]; break;
        }
    }
    scrSetResult(result);
    return 1;
}
}
