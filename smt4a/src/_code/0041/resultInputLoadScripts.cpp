#include "runtime/Stdio.h"
#include "result/ResultInput.h"
#include "camp/PartyResourceWork.h"
#include "shard/W6_W6Match8_DevilRecordA.h"
#include "shard/W6_W6Match1_Table25Record.h"
#include "gamedata/DataTable.h"
#include "AsdSDK/Source/Sys/File/AsdLoadFile.h"
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"

extern "C" {
PartyTextureSlot *saveSlotFindById(u32); // declcheck: local (the shared declaration does not compile here or changes this unit)
const char *dataTable01GetRecordWithAocOverride(u32);
const char *demonGetRaceLabel(u16, u32); // declcheck: local (the shared declaration does not compile here or changes this unit)
char *libc_strcpy(char *, const char *); // declcheck: local (the shared declaration does not compile here or changes this unit)
extern const char DAT_00533c9c[];
extern const char DAT_00533c84[];
extern const char DAT_00533c70[];
extern const char DAT_00533d24[];

/* Inlined body of devilGetVoiceCategory (inlined.txt: ldrb r0, [r0, #56]); retail schedules
 * mov r1, #0 into the load-use slot before sxtb, showing the caller saw the getter's body. */
static __inline u8 devilGetTalkTone(const NkmBaseRecordA *record)
{
    return record->talkTone;
}

/* Inlined body of dataTable25Section0FindById (smt4a/src/_code/0033/dataTable25Section0FindById.cpp). */
static __inline Table25Record *findTable25ById(s32 id)
{
    void *section = dataTableGet(0x25, 0);
    Table25Record *record = (Table25Record *)dataTableGetEntries(section);
    u32 count = dataTableGetCount(section);

    for (u32 index = 0; index < count; ++index, ++record) {
        if (record->id == id) {
            return record;
        }
    }
    return NULL;
}

/* Preloads result scripts and the selected demon's level-up script and voice messages. */
void resultInputLoadScripts(ResultInputWork *work)
{
    char name[32];
    char path[68];

    asdLoadFileAsyncSimple(DAT_00533c9c, (u32 *)&work->resources.resultScript, 0);
    asdLoadFileAsyncSimple(DAT_00533c84, (u32 *)&work->resources.resultMessages, 0);
    if (work->resources.selectedId >= 0) {
        PartyTextureSlot *slot = saveSlotFindById((u16)work->resources.selectedId);
        if (slot != NULL) {
            libc_strcpy(name, dataTable01GetRecordWithAocOverride(slot->id));
            scrSetStringSlot(8, name);
            libc_strcpy(name, demonGetRaceLabel(slot->id, 0));
            scrSetStringSlot(0x10, name);
            asdLoadFileAsyncSimple(DAT_00533c70, (u32 *)&work->resources.levelUpScript, 0);
            Table25Record *entry = findTable25ById((s8)devilGetTalkTone(nkmBaseGetRecord(slot->id)));
            __2sprintf(path, DAT_00533d24, entry->archive);
            asdLoadFileAsyncSimple(path, (u32 *)&work->resources.demonMessages, 0);
        }
    }
}

} /* extern "C" */
