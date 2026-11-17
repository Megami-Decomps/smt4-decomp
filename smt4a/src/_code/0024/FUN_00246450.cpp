/* NON_MATCHING: logic and call sequence match; retail hoists the zero into a callee-saved register (shared by the null table entry and the popup phase store, stored with STM) and spills one more register, so the frame is 84 bytes and the popup stores are grouped differently. */
#include "gamedata/PartnerInfoTable.h"
#include "map/PopupStateA.h"



extern "C" {
s32 gameFlagIsSet(s32 flag);
void rt_memcpy(void *destination, const void *source, u32 size);
void textFormatFullWidthTwoDigits(s32 value, u8 *output);
const char *dataFindKindRecordWithAocOverrides(s32 value, s32 option);
const char *dataTable01GetRecordWithAocOverride(s32 value);
s32 textFormatBuffer(char *destination, const char *format, ...);

// Show the context popup for `context`, filling the message's placeholders from `count` and `value`.
void FUN_00246450(s32 context, s32 value, s32 count)
{
    DataTableView<PartnerInfoRecord> table(0x43, 0);
    s32 total = (s32)table.count;
    if (context == 0 || context == 2) {
        return;
    }
    for (s32 i = 0; i < total; i++) {
        PartnerInfoRecord *record = partnerInfoRecordAt(i);
        if (record->kind == 1 &&
            (record->requiredFlag == 0 || gameFlagIsSet(record->requiredFlag) != 0) &&
            (record->excludedFlag == 0 || gameFlagIsSet(record->excludedFlag) == 0) &&
            record->argument == context) {
            PartnerInfoMessage *message = FUN_00365bc4(record->choices[0].message);
            PopupStateA *popup = g_popupState;
            popup->message = message->text;
            popup->state = 14;
            popup->timer = 0;
            char format[72];
            u8 number[12];
            rt_memcpy(format, message->text, 64);
            if (context == 4) {
                return;
            }
            if (context == 1 || context == 5) {
                textFormatFullWidthTwoDigits(count, number);
                textFormatBuffer(g_popupState->text, format, number);
                g_popupState->message = g_popupState->text;
                return;
            }
            if (context == 2) {
                textFormatBuffer(g_popupState->text, format, dataFindKindRecordWithAocOverrides(value, 0));
                g_popupState->message = g_popupState->text;
                return;
            }
            if (context == 3) {
                const char *name = dataFindKindRecordWithAocOverrides(value, 0);
                textFormatFullWidthTwoDigits(count, number);
                textFormatBuffer(g_popupState->text, format, name, number);
                g_popupState->message = g_popupState->text;
                return;
            }
            if (context == 6) {
                textFormatFullWidthTwoDigits(count, number);
                textFormatBuffer(g_popupState->text, format, dataTable01GetRecordWithAocOverride(value), number);
                g_popupState->message = g_popupState->text;
            }
            return;
        }
    }
}

}
