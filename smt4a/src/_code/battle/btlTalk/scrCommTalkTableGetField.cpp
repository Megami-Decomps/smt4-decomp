/* NON_MATCHING: retail retains extra >=11 remainder-dispatch paths and places the two switches differently; alternate switch lowering may explain these differences. */
#include "battle/btlTalk.h"
#include "battle/BattleHelpers_Smt4a.h"
#include "gamedata/DataTable.h"
extern "C" {
extern BtlTalkA* g_btlTalk;
s32 scrGetArg(u32 index);
void scrSetResult(u32 result);

u32 scrCommTalkTableGetField(void)
{
    const s32 recordIndex = scrGetArg(0);
    const s32 groupIndex = scrGetArg(1);
    const s32 field = scrGetArg(2);
    u32 result = 0xffffffff;
    void *section = btlTalkGetTableSection0(g_btlTalk);
    dataTableGetCount(section);
    const BtlTalkTableRecordA *records = static_cast<const BtlTalkTableRecordA *>(dataTableGetEntries(section));

    if (groupIndex != 0) {
        const BtlTalkTableGroupA *group = &records[recordIndex].groups[groupIndex - 1];
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
        const BtlTalkTableRecordA *record = &records[recordIndex];
        switch (field) {
        case 0: result = record->values[0]; break;
        case 1: result = record->values[1]; break;
        case 2: result = record->values[2]; break;
        case 3: result = record->category; break;
        case 4: result = record->unk07; break;
        }
    }
    scrSetResult(result);
    return 1;
}
}
