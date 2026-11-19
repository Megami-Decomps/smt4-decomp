/* The ruby-code swaps are calls to textCodeSwapBytes, which armlink inlined (config/inlined.txt). */
#include "common.h"
#include <stdio.h>
#include <string.h>
#include "AsdSDK/AsdMemUtil.h"
#include "AsdSDK/Source/Gfx/Text/AsdText.h"
#include "addon/LookupRecord.h"
#include "gamedata/DataTable25Apocalypse.h"
#include "gamedata/GameDataAccess.h"
#include "gamedata/SaveSlotTable.h"
#include "shard/W5_W5Match7_FlagBanks.h"
#include "shard/W6_W6Match2_FormattedTextSource.h"
#include "shard/W6_W6Match6_ItemIcon.h"
#include "text/TextCode.h"
#include "text/TextDraw.h"

extern "C" {

char *libc_strcpy(char *destination, const char *source); // declcheck: local (the shared header keeps the decompiler's word-pointer view)
u32 wstrBufferPutChar(u16 *buffer, s32 *cursor, u16 value, s32 countOnly);
s32 FUN_0014f2a8(u16 *buffer, s32 *position, const u16 *text, s32 measureOnly);
const char *uiGetTableEntry(u32 index);
const char *dataFindKindRecordWithAocOverrides(u32 id, s32 alternate);
const char *FUN_0014bf3c(u16 id, s32 alternate);
const char *FUN_00156850(u32 questId, u32 key);
u8 *dataTableGetNamePayload(u32 questId);
s32 bustupCutAnimSelectSlotsByWorkId(s32 workId);
s32 eventTexSelectJobsById(s32 id);
void messageMainSetMode(u8 mode);
u32 bustupRequestIdleOwnerTextureFrame(s32 owner, u32 resource, u32 frame, u32 flags, u32 argument);
bool eventTexCallIfIdle(s32 value, u32 a, u32 b);

/* Expands the game's message control code `code` (its arguments follow it in `text` at *index) into `out`
 * at *position: names of demons, items, skills, the player and UI table strings, the ruby runs, and the
 * portrait and event-picture commands, which are copied through and started. Returns 0 for a code that is
 * not the game's. */
u32 messageExpandControlCode(s32 code, const u16 *text, u16 *out, s32 *index, s32 *position, s32 measureOnly)
{
    char name[128];
    u16 wide[64];
    u16 character;
    s32 i;

    sysMemClear(name, sizeof(name));
    switch (code) {
    case 0xF840:
    case 0xF844:
        break;
    case 0xF843: {
        u16 who = text[*index + 1];
        if (who == 0) {
            libc_strcpy(name, (const char *)gameGetPlayerName());
            FUN_0014f2a8(out, position, (const u16 *)name, measureOnly);
        } else if (who == 1) {
            sprintf(name, "\x81u\x83o\x83O\x81@\x82o\x82" "b\x82P\x81v");
            FUN_0014f2a8(out, position, (const u16 *)name, measureOnly);
        } else if (who == 2) {
            sprintf(name, "\x81u\x83o\x83O\x81@\x82o\x82" "b\x82Q\x81v");
            FUN_0014f2a8(out, position, (const u16 *)name, measureOnly);
        }
        ++*index;
        break;
    }
    case 0xF841:
        libc_strcpy(name, dataFindKindRecordWithAocOverrides(text[*index + 1], 1));
        FUN_001654f0(name, wide);
        FUN_0014f2a8(out, position, wide, measureOnly);
        ++*index;
        break;
    case 0xF842:
        textExpandGlyphsToBuffer((const char *)dataTable01GetRecordWithAocOverride(text[*index + 1]), name, 0);
        FUN_0014f2a8(out, position, (const u16 *)name, measureOnly);
        ++*index;
        break;
    case 0xF870:
        textExpandGlyphsToBuffer(dataTable25FindById(text[*index + 1])->name, name, 0);
        ++*index;
        wstrBufferPutChar(out, position, textCodeSwapBytes(TEXT_CODE_RUBY), measureOnly);
        i = 0;
        do {
            u16 high = (s8)name[i * 2 + 1];
            character = (u8)name[i * 2] | ((high << 8) & 0xffff);
            i++;
            wstrBufferPutChar(out, position, character, measureOnly);
        } while (character != 0);
        break;
    case 0xF871:
        libc_strcpy(name, uiGetTableEntry(text[*index + 1] + 7));
        ++*index;
        wstrBufferPutChar(out, position, textCodeSwapBytes(TEXT_CODE_RUBY), measureOnly);
        i = 0;
        do {
            u16 high = (s8)name[i * 2 + 1];
            character = (u8)name[i * 2] | ((high << 8) & 0xffff);
            i++;
            wstrBufferPutChar(out, position, character, measureOnly);
        } while (character != 0);
        break;
    case 0xF872:
        libc_strcpy(name, uiGetTableEntry(text[*index + 1] - 1));
        FUN_001654f0(name, wide);
        FUN_0014f2a8(out, position, wide, measureOnly);
        ++*index;
        break;
    case 0xF873:
        FUN_0014f2a8(out, position, (const u16 *)uiGetTableEntry(text[*index + 1] + 7), measureOnly);
        ++*index;
        break;
    case 0xF874:
        libc_strcpy(name, FUN_0014bf3c(text[*index + 1], 0));
        FUN_001654f0(name, wide);
        FUN_0014f2a8(out, position, wide, measureOnly);
        ++*index;
        break;
    case 0xF875:
        libc_strcpy(name, uiGetTableEntry(text[*index + 1] + 15));
        FUN_001654f0(name, wide);
        FUN_0014f2a8(out, position, wide, measureOnly);
        ++*index;
        break;
    case 0xF876:
        textExpandGlyphsToBuffer((const char *)aocIndexValueOrDefault(text[*index + 1]), name, 0);
        FUN_0014f2a8(out, position, (const u16 *)name, measureOnly);
        ++*index;
        break;
    case 0xF877:
        FUN_0014f2a8(out, position, (const u16 *)uiGetTableEntry(text[*index + 1] + 19), measureOnly);
        ++*index;
        break;
    case 0xF878:
        FUN_0014f2a8(out, position, (const u16 *)uiGetTableEntry(text[*index + 1] + 23), measureOnly);
        ++*index;
        break;
    case 0xF879:
        FUN_0014f2a8(out, position, (const u16 *)uiGetTableEntry(text[*index + 1] + 31), measureOnly);
        ++*index;
        break;
    case 0xF87A: {
        /* Portrait or event-picture selection: the code and its id are copied through. */
        wstrBufferPutChar(out, position, text[*index], measureOnly);
        ++*index;
        u16 id = text[*index];
        wstrBufferPutChar(out, position, id, measureOnly);
        if (id == 0) {
            messageSetScriptDisplayMode();
        } else if (!bustupCutAnimSelectSlotsByWorkId(id)) {
            if (!eventTexSelectJobsById(id)) {
                messageMainSetMode(2);
            }
        }
        break;
    }
    case 0xF87B: {
        /* Portrait or event-picture frame request: the code and its four arguments are copied through. */
        wstrBufferPutChar(out, position, text[*index], measureOnly);
        ++*index;
        u16 owner = text[*index];
        wstrBufferPutChar(out, position, owner, measureOnly);
        ++*index;
        u16 resource = text[*index];
        wstrBufferPutChar(out, position, resource, measureOnly);
        ++*index;
        u16 frame = text[*index];
        wstrBufferPutChar(out, position, frame, measureOnly);
        ++*index;
        u16 flags = text[*index];
        wstrBufferPutChar(out, position, flags, measureOnly);
        if (!bustupRequestIdleOwnerTextureFrame(owner, resource, frame, flags, 0xFFFFFFFF)) {
            eventTexCallIfIdle(owner, resource, 1);
        }
        break;
    }
    case 0xF87C: {
        ++*index;
        u16 quest = text[*index];
        ++*index;
        if (text[*index] != 0) {
            textExpandGlyphsToBuffer((const char *)dataTableGetNamePayload(quest), name, 0);
            FUN_0014f2a8(out, position, (const u16 *)name, measureOnly);
        } else {
            libc_strcpy(name, FUN_00156850(quest, 1));
            FUN_001654f0(name, wide);
            FUN_0014f2a8(out, position, wide, measureOnly);
        }
        break;
    }
    case 0xF87D:
        switch (text[*index + 1]) {
        case 0:
        case 2:
        case 7:
        case 14:
            libc_strcpy(name, uiGetTableEntry(36));
            break;
        case 1:
        case 3:
        case 8:
        case 15:
            libc_strcpy(name, uiGetTableEntry(37));
            break;
        case 4:
        case 9:
            libc_strcpy(name, uiGetTableEntry(38));
            break;
        case 5:
        case 10:
            libc_strcpy(name, uiGetTableEntry(39));
            break;
        case 6:
        case 11:
            libc_strcpy(name, uiGetTableEntry(40));
            break;
        case 12:
        case 16:
            libc_strcpy(name, uiGetTableEntry(41));
            break;
        case 13:
            libc_strcpy(name, uiGetTableEntry(42));
            break;
        default:
            strcpy(name, "\x83^\x83O\x83G\x83\x89\x81[");
            break;
        }
        FUN_0014f2a8(out, position, (const u16 *)name, measureOnly);
        ++*index;
        break;
    case 0xF87E: {
        PartySlotA *slot = saveSlotFindSelected();
        if (slot != NULL) {
            textExpandGlyphsToBuffer((const char *)dataTable01GetRecordWithAocOverride(slot->record.id), name, 0);
        } else {
            name[0] = '\0';
        }
        FUN_0014f2a8(out, position, (const u16 *)name, measureOnly);
        break;
    }
    default:
        return 0;
    }
    return 1;
}

} /* extern "C" */
