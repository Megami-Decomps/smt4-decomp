/* NON_MATCHING: logic and call sequence match; retail hoists the zero into a callee-saved register (shared by the null table entry and the popup phase store, stored with STM) and spills one more register, so the frame is 84 bytes and the popup stores are grouped differently. */
#include "gamedata/DataTable.h"

struct PopupContextRecord {
    /* 0x00 */ s32 id;
    /* 0x04 */ s32 kind;
    /* 0x08 */ s16 requiredFlag;
    /* 0x0A */ s16 blockingFlag;
    /* 0x0C */ s16 context;
    /* 0x0E */ s16 unk0e;
    /* 0x10 */ s16 message;
    /* 0x12 */ u8 unk12[0xe];
};

struct PopupMessageResource {
    u32 unk00;
    u8 header[0x20];
    char text[1];
};

/* Popup state fields this function drives, then the formatted text buffer. */
struct PopupFormatView {
    /* 0x00 */ s32 state;
    /* 0x04 */ s32 phase;
    /* 0x08 */ u8 unk08[0xC];
    /* 0x14 */ const char *message;
    /* 0x18 */ u8 unk18[0xD];
    /* 0x25 */ char formatted[1];
};

extern "C" {
extern PopupFormatView *g_popupState;
s32 gameFlagIsSet(s32 flag);
PopupMessageResource *FUN_00365bc4(s32 message);
void rt_memcpy(void *destination, const void *source, u32 size);
void FUN_002d2350(s32 value, u8 *output);
const char *FUN_0015f858(s32 value, s32 option);
const char *FUN_00180118(s32 value);
s32 textFormatBuffer(char *destination, const char *format, ...);

// Show the context popup for `context`, filling the message's placeholders from `count` and `value`.
void FUN_00246450(s32 context, s32 value, s32 count)
{
    DataTableView<PopupContextRecord> table(0x43, 0);
    s32 total = (s32)table.count;
    if (context == 0 || context == 2) {
        return;
    }
    for (s32 i = 0; i < total; i++) {
        void *section = dataTableGet(0x43, 0);
        PopupContextRecord *entries = (PopupContextRecord *)dataTableGetEntries(section);
        u32 size = dataTableGetCount(section);
        PopupContextRecord *record = (u32)i >= size ? NULL : &entries[i];
        if (record->kind == 1 &&
            (record->requiredFlag == 0 || gameFlagIsSet(record->requiredFlag) != 0) &&
            (record->blockingFlag == 0 || gameFlagIsSet(record->blockingFlag) == 0) &&
            record->context == context) {
            PopupMessageResource *message = FUN_00365bc4(record->message);
            PopupFormatView *popup = g_popupState;
            popup->message = message->text;
            popup->state = 14;
            popup->phase = 0;
            char format[72];
            u8 number[12];
            rt_memcpy(format, message->text, 64);
            if (context == 4) {
                return;
            }
            if (context == 1 || context == 5) {
                FUN_002d2350(count, number);
                textFormatBuffer(g_popupState->formatted, format, number);
                g_popupState->message = g_popupState->formatted;
                return;
            }
            if (context == 2) {
                textFormatBuffer(g_popupState->formatted, format, FUN_0015f858(value, 0));
                g_popupState->message = g_popupState->formatted;
                return;
            }
            if (context == 3) {
                const char *name = FUN_0015f858(value, 0);
                FUN_002d2350(count, number);
                textFormatBuffer(g_popupState->formatted, format, name, number);
                g_popupState->message = g_popupState->formatted;
                return;
            }
            if (context == 6) {
                FUN_002d2350(count, number);
                textFormatBuffer(g_popupState->formatted, format, FUN_00180118(value), number);
                g_popupState->message = g_popupState->formatted;
            }
            return;
        }
    }
}

}
