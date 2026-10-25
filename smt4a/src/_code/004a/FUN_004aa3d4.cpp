/* NON_MATCHING: global UI ownership is corrected; attack-label resource accessors and shared case exits still differ. */
#include "battle/btlUI.h"
#include "util/CalleeContracts.h"
#include "mapnavi/naviMain.h"
#include "AsdSDK/Source/Gfx/Text/AsdText.h"

extern "C" {

/* Battle UI block (observed fields only). */
struct BtlUiBlock {
    u32 scriptUnit;              /* 0x00000 */
    u8 pad00004[0x6310 - 4];
    u8 skillList[4];             /* 0x06310: list handed to the resource/count helpers */
    u8 pad06314[0x74A4 - 0x6314];
    u32 targetLocked;            /* 0x074A4 */
    u8 pad074A8[0xC040 - 0x74A8];
    u8 helpActive;               /* 0x0C040 */
    u8 padC041[3];
    u32 helpTimeout;             /* 0x0C044 */
    u32 helpFlags;               /* 0x0C048 */
    s32 helpKind;                /* 0x0C04C: help window kind 0..12 */
    u16 helpValue;               /* 0x0C050 */
};

struct UnitState {
    u8 pad00[0x28];
    u8 *action;                  /* 0x28 */
};

struct DataRecord {
    u8 pad00[0x0C];
    u8 kind;                     /* 0x0C */
};

extern BtlUiGlobalsA g_btlUi;
extern u32 g_btlScriptUnit;        /* 0x57113c */

s32 resourceRunOperationIfUnblocked(u8 *list);
s32 FUN_002a4894(u8 *list);
s32 textFormatBuffer(char *buffer, const char *format, ...);
s32 playerPrimaryGetKindValue(void);
s32 playerSecondaryGetKindValue(void);
s32 menuStateSetMode4(s32 mode);
s32 gameGetOptions(void);
s32 dataTableGetCategoryEntry(s32 category, u32 entry);
s32 FUN_0022fcb8(void);
DataRecord *FUN_00184310(u32 id);
s32 dataRecordGetKindValue(u32 id);
UnitState *btlUnitGet(u32 unit);
s32 FUN_002e4308(s32 value, s32 mode, s32 flag);
s32 FUN_00388424(s32 unit, s32 locked);
u32 FUN_0015f858(u16 value, s32 arg);
s32 FUN_002c13b0(s32 value);
s32 FUN_003f2448(u32 unit);
s32 btlScriptUnitHasFlags(u32 unit);
s32 FUN_001ba3d4(u16 value);
s32 FUN_002c13d4(s32 value, s32 amount);
s32 menuStateReset(void);
s32 FUN_00227af0(char *text);
s32 menuStateStartSelect(s32 arg);

/* Opens the battle help window of kind `kind` for `value`: formats its label (attack / return /
 * summon / flee text or the item/skill name), sets up the matching help entry and starts the
 * selection. The flags choose between the party-member (`partyMember`), the guard (`guard`) and the
 * default variants. */
void FUN_004aa3d4(u32 unused, s32 kind, s32 value, s32 partyMember, u32 recordId, s32 guard)
{
    BtlUiBlock *ui = reinterpret_cast<BtlUiBlock *>(g_btlUi.ui);
    char text[64];
    s32 kindValue = 0;
    u8 flag = 0;

    ui->helpActive = 1;
    ui->helpKind = kind;
    ui->helpValue = (u16)value;
    ui->helpFlags = 0;
    ui->helpTimeout = 40;
    text[0] = 0;

    switch (ui->helpKind) {
    case 1:
        if (partyMember != 0) {
            s32 count = resourceRunOperationIfUnblocked(ui->skillList) + FUN_002a4894(ui->skillList);
            if (count == 0) {
                textFormatBuffer(text, "\x82`\x82\x94\x82\x94\x82\x81\x82\x83\x82\x8b");
                kindValue = playerPrimaryGetKindValue();
            } else if (count == 1) {
                textFormatBuffer(text, "\x82`\x82\x94\x82\x94\x82\x81\x82\x83\x82\x8b");
                kindValue = playerSecondaryGetKindValue();
            }
        } else if (guard != 0) {
            s32 options = gameGetOptions();
            u16 entry = *(u16 *)(options + 0x12E);
            options = gameGetOptions();
            dataTableGetCategoryEntry(*(s16 *)(options + 0x12C), entry);
            textFormatBuffer(text, "\x82`\x82\x94\x82\x94\x82\x81\x82\x83\x82\x8b");
            kindValue = FUN_0022fcb8();
        } else {
            DataRecord *record = FUN_00184310(recordId);
            textFormatBuffer(text, "\x82`\x82\x94\x82\x94\x82\x81\x82\x83\x82\x8b", record->kind);
            kindValue = dataRecordGetKindValue(recordId);
        }
        menuStateSetMode4((s16)kindValue);
        break;
    case 2:
    case 3: {
        textFormatBuffer(text, "%s", FUN_0014bd84(ui->helpValue));
        s32 mode;
        if (partyMember != 0) {
            if (playerHasFlagBit(4) != 0) {
                flag = 1;
            }
            mode = 1;
        } else {
            if (guard == 0) {
                UnitState *unit = btlUnitGet(g_btlScriptUnit);
                if ((*(u16 *)(unit->action + 0x110) & 0x10) != 0) {
                    flag = 1;
                }
            }
            mode = 0;
        }
        FUN_002e4308((s16)ui->helpValue, mode, flag);
        FUN_00388424((s16)recordId, ui->targetLocked == 0);
        break;
    }
    case 8:
        textFormatBuffer(text, "%s", FUN_0015f858(ui->helpValue, 0));
        FUN_002c13b0((s16)ui->helpValue);
        if (FUN_003f2448(ui->scriptUnit) != 0 && btlScriptUnitHasFlags(ui->scriptUnit) == 0) {
            FUN_002c13d4((s16)ui->helpValue, FUN_001ba3d4(ui->helpValue) + 1);
        }
        break;
    case 9:
    case 10:
    case 12:
        if (value != 0) {
            textFormatBuffer(text, "\x82q\x82\x85\x82\x94\x82\x95\x82\x92\x82\x8e");
        } else {
            textFormatBuffer(text, "\x82r\x82\x95\x82\x8d\x82\x8d\x82\x8f\x82\x8e");
        }
        menuStateReset();
        break;
    case 11:
        textFormatBuffer(text, "\x82""e\x82\x8c\x82\x85\x82\x85");
        menuStateReset();
        break;
    default:
        break;
    }
    FUN_00227af0(text);
    menuStateStartSelect(0);
}

} /* extern "C" */
