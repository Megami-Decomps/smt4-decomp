/* NON_MATCHING: restored unsigned category getter plus sign extension; table search exit and saved-register allocation differ. */
#include "result/ResultInput.h"
#include "camp/PartyResourceWork.h"
#include "shard/W6_W6Match8_DevilRecordA.h"
#include "gamedata/DataTable.h"

struct DemonMessageArchiveRow {
    s8 voiceCategory;
    char archive[31];
};
extern "C" {
void asdLoadFileAsyncSimple(const char *, void **, s32);
PartyTextureSlot *saveSlotFindById(u32);
const char *FUN_00180118(u32);
const char *FUN_0014bf3c(u16, u32);
char *libc_strcpy(char *, const char *);
void FUN_003180c4(u32, const char *);
void textFormatBuffer(char *, const char *, ...);
u8 devilGetVoiceCategory(const DevilRecordA *record);
extern const char DAT_00533c9c[];
extern const char DAT_00533c84[];
extern const char DAT_00533c70[];
extern const char DAT_00533d24[];

/* Preload result scripts, and the selected demon's level-up script and voice messages. */
void FUN_00416d30(ResultInputWork *work)
{
    char name[32];
    char path[68];
    asdLoadFileAsyncSimple(DAT_00533c9c, &work->resources.resultScript, 0);
    asdLoadFileAsyncSimple(DAT_00533c84, &work->resources.resultMessages, 0);
    if (work->resources.selectedId >= 0) {
        PartyTextureSlot *slot = saveSlotFindById(static_cast<u16>(work->resources.selectedId));
        if (slot != NULL) {
            libc_strcpy(name, FUN_00180118(slot->id));
            FUN_003180c4(8, name);
            libc_strcpy(name, FUN_0014bf3c(slot->id, 0));
            FUN_003180c4(0x10, name);
            asdLoadFileAsyncSimple(DAT_00533c70, &work->resources.levelUpScript, 0);
            s8 voiceCategory = (s8)devilGetVoiceCategory(FUN_00184310(slot->id));
            DataTableView<DemonMessageArchiveRow> messages(0x25, 0);
            DemonMessageArchiveRow *entry = messages.entries;
            u32 index;
            for (index = 0; index < messages.count; ++index, ++entry) {
                if (entry->voiceCategory == voiceCategory)
                    break;
            }
            if (index == messages.count)
                entry = NULL;
            textFormatBuffer(path, DAT_00533d24, entry->archive);
            asdLoadFileAsyncSimple(path, &work->resources.demonMessages, 0);
        }
    }
}
}
