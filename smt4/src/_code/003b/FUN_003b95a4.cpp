/* NON_MATCHING: two scheduling differences only: retail loads work->node (arg 2) before `mov r4, r0` and compares the model-set index in r1 (ours r0); the instruction multiset is identical (154 rows each). */
#include "font/PlaceWin.h"
#include "shard/W6_W6Match3_NodeEnable.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "gamedata/DataTable33.h"

/* The record the info panel shows (observed prefix). */
struct PanelRecord {
    /* 0x00 */ u8 unk00[2];
    /* 0x02 */ u8 text[0x3E];
    /* 0x40 */ char name[0x20];
    /* 0x60 */ s32 modelSet;       /* data table 33 entry, negative for none */
    /* 0x64 */ u16 primaryFlag;
    /* 0x66 */ u16 secondaryFlag;
    /* 0x68 */ char altName[0x20];
};

/* The kind of entry the panel is showing. */
struct PanelSelection {
    /* 0x00 */ u8 unk00[0x28];
    /* 0x28 */ s16 kind;
    /* 0x2A */ u8 unk2A;
    /* 0x2B */ s8 modelIndex;
};

struct PanelWork {
    /* 0x0000 */ u8 unk0000[0x28];
    /* 0x0028 */ u32 state;
    /* 0x002C */ u32 phase;
    /* 0x0030 */ u8 unk0030[0xC];
    /* 0x003C */ s16 mode;
    /* 0x003E */ u8 unk003E[0x52];
    /* 0x0090 */ u32 node;
    /* 0x0094 */ u8 unk0094[8];
    /* 0x009C */ u8 selection[0xCC0];
    /* 0x0D5C */ PanelRecord *record;
    /* 0x0D60 */ u8 unk0D60[0xC];
    /* 0x0D6C */ s32 loaded;
    /* 0x0D70 */ s32 ready;
    /* 0x0D74 */ u8 unk0D74[0x3C];
    /* 0x0DB0 */ s32 textShown;
    /* 0x0DB4 */ u8 unk0DB4[0xA4];
    /* 0x0E58 */ u8 recordShown;
    /* 0x0E59 */ u8 unk0E59[3];
    /* 0x0E5C */ NodeEnableOwner *modelOwner;
    /* 0x0E60 */ u32 files[10];
    /* 0x0E88 */ u32 fileSizes[10];
};

extern "C" {

void FUN_003ba754(PanelWork *work);
void textFormatBuffer(char *destination, const char *format, ...);
s32 gameFlagIsSet(u32 flag);
void FUN_00234f5c(NodeEnableOwner *owner, const char *first, const char *second);
PanelSelection *FUN_0022b8c0(void *selection);
void FUN_0022afc4(NodeEnableOwner *owner, s32 a, s32 b);
void FUN_00234cd8(NodeEnableOwner *owner, s32 kind, s32 flag);
u32 fileLoadSync(const char *path, u32 *size, u32 flags);
void objModelCreateFromSource(NodeEnableOwner *owner, u32 file, u32 size);
void modelSetVisible(NodeEnableOwner *owner, s32 visible);
void nodeOwnerSetEnabled(NodeEnableOwner *owner, s32 enabled);

/* Builds the info panel once its textures and data are ready: formats the record's names, creates its
 * model from the model set's files, shows or hides it for the current mode and starts the text. */
void FUN_003b95a4(PanelWork *work)
{
    if (asdTMTexTableNodeIsLoaded(0x21, work->node) == 0 || work->loaded == 0 || work->ready == 0) {
        return;
    }
    FUN_003ba754(work);
    work->state = 3;
    work->phase = 0;
    if (work->record->name[0] != '0') {
        char name[128];
        char altName[128];
        PanelSelection *selection;

        work->recordShown = 1;
        textFormatBuffer(name, "mikado/%s", work->record->name);
        if ((work->record->primaryFlag != 0 && gameFlagIsSet(work->record->primaryFlag) != 0) ||
            (work->record->secondaryFlag != 0 && gameFlagIsSet(work->record->secondaryFlag) != 0)) {
            textFormatBuffer(altName, "mikado/%s", work->record->altName);
            FUN_00234f5c(work->modelOwner, name, altName);
        } else {
            FUN_00234f5c(work->modelOwner, name, NULL);
        }
        selection = FUN_0022b8c0(work->selection);
        FUN_0022afc4(work->modelOwner, 0, -1);
        FUN_00234cd8(work->modelOwner, selection->kind, 1);
        if (work->record->modelSet >= 0) {
            s32 count;
            const char *entries = static_cast<const char *>(dataTable33GetEntries(&count, work->record->modelSet));

            if (entries != NULL) {
                s32 i;

                for (i = 0; i < FUN_0022afb0(&count, work->record->modelSet); i++) {
                    textFormatBuffer(name, "mikado/%s.bam", entries);
                    work->files[i] = fileLoadSync(name, &work->fileSizes[i], 1);
                    entries += 32;
                }
                objModelCreateFromSource(work->modelOwner, work->files[selection->modelIndex],
                                         work->fileSizes[selection->modelIndex]);
            }
        }
        if ((work->mode == 4 || work->mode == 3) && (selection->kind == 0 || selection->kind == 6)) {
            modelSetVisible(work->modelOwner, 1);
            nodeOwnerSetEnabled(work->modelOwner, 0);
        } else {
            modelSetVisible(work->modelOwner, 0);
            nodeOwnerSetEnabled(work->modelOwner, 1);
        }
    }
    if (work->textShown != 1) {
        placeWinStartText(work->record->text);
    }
}

} /* extern "C" */
