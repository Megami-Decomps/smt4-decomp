/* NON_MATCHING: creates the StreetPass (cec) edit screen: its block, update and draw tasks, mode handlers, the
 * edited record's page and files, and the count of party members able to take part. Same calls, stores and
 * control flow as retail; what differs: retail reloads the edited record pointer (edit->unk08) after copying its
 * profile into edit->profile (one row more, which shifts every pool offset after it), reuses r1 for the address
 * of the second state pair (this build r2), and holds the saved record's flag byte and the ten handler pointers
 * in r2 with the table's constant 8 loaded early in r3 (this build: r3, with 23 in r2). */
#include "shard/Shard0032.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/AsdMemAlloc.h"
#include "AsdSDK/AsdMemUtil.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "AsdSDK/Source/Sys/File/AsdLoadFile.h"
#include "code/Code0015_Smt4a.h"
#include "camp/CampCec/CampCecSetting.h"
#include "camp/CampCec/CampCecDraw.h"
#include "camp/CampStateQueries_Smt4a.h"
#include "gamedata/GameDataAccess.h"
#include "gamedata/SaveSlotTable.h"
#include "gamedata/GameSaveDataA.h"
#include "gamedata/SaveSlotRecord.h"
#include "gamedata/GamePlayerData.h"
#include "shard/W6_W6Match5_EntryCollection.h"
#include "shard/W5_W5Match5_GameSaveViews.h"
#include "shard/W6_W6Match3_FormatBuffer.h"
#include "util/BitsAndBytes_VariantF_Shard004B.h"
#include "text/TextDraw.h"

struct StatusScene;
struct SpriteHandle;

extern "C" {

extern StateAtF4 *g_campCecEdit;

u32 cecUpdateEditMode(void);
u32 campCecEditDraw(void);
s32 campCecEditCreateEffect(void);
u32 FUN_002e1d1c(void);
/* The mode handlers. */
s32 FUN_00359dc4(StateAtF4 *edit);
s32 FUN_00342e24(StateAtF4 *edit);
s32 FUN_00318e84(StateAtF4 *edit);
s32 FUN_00387d38(StateAtF4 *edit);
s32 FUN_00387bb8(StateAtF4 *edit);
s32 FUN_0036ce70(StateAtF4 *edit);
s32 FUN_00318e7c(StateAtF4 *edit);
s32 FUN_003aef48(StateAtF4 *edit);
s32 stepObjStart(StateAtF4 *edit);
s32 stepObjBStart(StateAtF4 *edit);

StatusScene *overlayGetStatusScene(void);
void characterInfoPanelPopulate(u32 *panel, u16 *record, void *messages);
void textureRequestCacheGet(u32 *cache, u32 request);
SpriteHandle *spriteHandleCreate(u32 type);
void positionStateSet(u32 object, u32 first, u32 second, f32 scale);
void sysPlaySe(u32 id);
void rt_aeabi_memclr(void *destination, u32 size);

void campCecEditCreate(u8 openMode)
{
    if (g_campCecEdit == NULL) {
        asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\camp\\CampCec\\CampCecEdit.cpp", 241);
        g_campCecEdit = (StateAtF4 *)asdMemoryAllocTracked(0x100, 0x100, 0, sizeof(StateAtF4), 1);
    }
    StateAtF4 *edit = g_campCecEdit;
    sysMemClear(edit, sizeof(StateAtF4));

    edit->job = asdProcessCreateSimple(reinterpret_cast<const s8 *>("CampCecEdit Calc"), 3, 0, 0,
                                       reinterpret_cast<AsdProcUpdateFunc>(cecUpdateEditMode), NULL, 0);
    taskCreateDraw(reinterpret_cast<const s8 *>("CampCecEdit DrawUpLeft_b"), 0x65, 0, 0,
                   reinterpret_cast<AsdProcUpdateFunc>(campCecEditDraw), NULL, 0, (void *)edit->job);
    taskCreateDraw(reinterpret_cast<const s8 *>("CampCecEdit DrawUpRight_b"), 0xcc, 0, 0,
                   reinterpret_cast<AsdProcUpdateFunc>(campCecEditDraw), NULL, 0, (void *)edit->job);
    taskCreateDraw(reinterpret_cast<const s8 *>("CampCecEdit DrawUpLeft"), 0x81, 0, 0,
                   reinterpret_cast<AsdProcUpdateFunc>(campCecEditCreateEffect), NULL, 0, (void *)edit->job);
    taskCreateDraw(reinterpret_cast<const s8 *>("CampCecEdit DrawUpRight"), 0xdd, 0, 0,
                   reinterpret_cast<AsdProcUpdateFunc>(campCecEditCreateEffect), NULL, 0, (void *)edit->job);
    taskCreateDraw(reinterpret_cast<const s8 *>("CampCecEdit DrawDown"), 0xea, 0, 0,
                   reinterpret_cast<AsdProcUpdateFunc>(FUN_002e1d1c), NULL, 0, (void *)edit->job);

    edit->phase = -1;
    edit->table.previousMode = -1;
    edit->mode = 0;
    edit->unk0FC = -1;
    edit->table.state = -1;
    edit->table.nextState = 0;
    edit->unk112 = 1;
    edit->unk100 = 0;
    edit->openMode = openMode;
    edit->unk114 = 0;
    edit->unk118 = 0;
    edit->unk120 = 0;
    edit->unk124 = 0x20;
    edit->unk128 = 0;
    edit->unk12D = 0;
    edit->unk130 = -56;
    edit->unk134 = 0;
    edit->unk13C = 0;
    edit->unk140 = 0;
    edit->unk144 = 0;
    edit->unk148 = -1;
    edit->frameCounter = 0;
    edit->unk154 = 1;
    edit->unk18C = 0;
    edit->unk189 = 0;

    GameSaveBodyA *save = (GameSaveBodyA *)gameDataBlocksGetSaveData();
    GameSavedRecordTailA *saved = &save->record.tail;
    edit->unk10A = edit->unk108 = saved->value;
    edit->unk10D = saved->flag0e;

    edit->table.handlers[0] = FUN_00359dc4;
    edit->table.handlers[2] = FUN_00342e24;
    edit->table.handlers[1] = FUN_00318e84;
    edit->table.handlers[3] = FUN_00387d38;
    edit->table.handlers[4] = FUN_00387bb8;
    edit->table.handlers[5] = FUN_0036ce70;
    edit->table.handlers[9] = FUN_00318e7c;
    edit->table.handlers[6] = FUN_003aef48;
    edit->table.handlers[7] = stepObjStart;
    edit->table.handlers[8] = stepObjBStart;

    edit->table.values[1] = 5;
    edit->table.values[2] = 6;
    edit->table.values[3] = 0x17;
    edit->table.values[4] = 8;
    edit->table.values[5] = 9;
    edit->table.values[6] = 0xc;
    edit->table.values[7] = 10;
    edit->table.values[8] = 0xd;
    edit->table.values[9] = 0xe;
    edit->table.values[10] = 0xf;
    edit->table.values[11] = 0x10;
    edit->table.values[12] = 0x11;
    edit->table.values[13] = 0x12;
    edit->table.values[14] = 0x13;
    edit->table.values[15] = 0x14;
    edit->table.values[16] = 0x15;
    edit->table.values[17] = 0x16;
    edit->table.values[18] = 0x18;
    edit->table.values[19] = 0x19;
    edit->table.values[20] = 0x1a;
    edit->table.values[0] = 0;
    edit->table.values[21] = 2;
    edit->table.values[22] = 3;
    edit->table.values[23] = 4;

    edit->unk04 = (u32)overlayGetStatusScene();
    edit->unk08 = (u16 *)FUN_002bf520();
    /* the player wears the edited record's equipment while the screen is open */
    __aeabi_memcpy4(edit->unk16C, gameGetPlayerData(), 0xe);
    __aeabi_memcpy4(gameGetPlayerData(), edit->unk08, 0xe);
    edit->profile = *(const CecProfile *)edit->unk08;
    campCecDispatchMode((u32)edit->unk08);
    edit->unk0C = (u32 *)campCecDrawPageCreate();
    characterInfoPanelPopulate(edit->unk0C, edit->unk08, edit->unk58);
    asdLoadFileAsyncSimple("camp/CecEdit_scr.bf", (u32 *)&edit->buf50, 0);
    asdLoadFileAsyncSimple("camp/CecEdit_msg.mbm", (u32 *)&edit->buf54, 0);
    asdLoadFileAsyncSimple("camp/CecEdit_one_msg.mbm", (u32 *)&edit->unk58, 0);

    u8 portrait = ((u8 *)edit->unk08)[0x22];
    if (FUN_00182054(portrait) == 0) {
        textureRequestCacheGet(edit->unk0C, portrait);
    }

    edit->unk5C = (u32)spriteHandleCreate(0);
    uiObjectSetColorRgb(edit->unk5C, 0xffffffff);
    positionStateSet(edit->unk5C, 0, 0x646464ff, 0.0f);
    sysPlaySe(0xb3);

    for (s32 i = 0; i < 2; i++) {
        rt_aeabi_memclr(edit->panels[i], sizeof(edit->panels[i]));
    }
    rt_aeabi_memclr(edit->unk38, sizeof(edit->unk38));
    edit->cursor.x = 30;
    edit->unk194 = 0;

    /* counts the party members that are neither dead nor excluded */
    SaveSlotTableA *table = gameGetSlotTable();
    edit->activeMemberCount = 0;
    for (s32 slot = 0; slot < 24; slot++) {
        if (table->party[slot] >= 0 && !bitsAt60Test(gameGetSlotRecord(table->party[slot]), 10) &&
            !bitsAt60Test(gameGetSlotRecord(table->party[slot]), 1)) {
            edit->activeMemberCount++;
        }
    }
}

} /* extern "C" */
