/* NON_MATCHING: retail includes exception cleanup for the temporary formatted text. */
#include "AsdSDK/DiagnosticMessage.h"
#include "shard/W6_W6Match3_FormatBuffer.h"

extern "C" {
char* FUN_0010095c(char*, s32, s32, va_list);
s32 libc_strlen(const char*);
char* asdOperatorNewC(s32);
char* libc_strcpy(char*, const char*);
char* libc_strcat(char*, const char*);
void asdOperatorDeleteB(void*);
extern const char* DAT_0054efb0[];

// Formats a diagnostic and appends it to the message's accumulated text.
DiagnosticMessage* FUN_001006f4(DiagnosticMessage* message, s32 kind, va_list arguments)
{
    char* text = FUN_0010095c(NULL, 0, kind, arguments);
    if (text == NULL) {
        if (kind < 0 || kind >= 23) {
            kind = 0;
        }
        text = asdStringFormatGrow(NULL, 0, DAT_0054efb0[kind], arguments);
    }
    if (message->text != NULL) {
        s32 length = libc_strlen(message->text);
        char* combined = asdOperatorNewC(length + libc_strlen(text) + 1);
        combined = libc_strcat(libc_strcpy(combined, message->text), text);
        asdOperatorDeleteB(message->text);
        asdOperatorDeleteB(text);
        text = combined;
    }
    message->text = text;
    return message;
}
}
