/* NON_MATCHING: retail retains placement-construction size/null-check/NOP scaffolding around an unmigrated diagnostic-object constructor; this typed variadic recovery calls its surviving constructor entry directly. */
#include "AsdSDK/DiagnosticMessage.h"
#include <stdarg.h>


extern "C" {
extern void (*DAT_005c4c0c)(s32 kind, const char* text);
DiagnosticMessage* FUN_0010077c(DiagnosticMessage* storage);
DiagnosticMessage* FUN_001006f4(DiagnosticMessage* message, s32 kind, va_list arguments);

// Sends control notifications directly and formats diagnostic messages for larger kinds.
void FUN_002e32a4(s32 kind, ...)
{
    if (DAT_005c4c0c == NULL) {
        return;
    }
    if (kind <= 3) {
        DAT_005c4c0c(kind, NULL);
        return;
    }
    va_list arguments;
    va_start(arguments, kind);
    DiagnosticMessage storage;
    DiagnosticMessage* message = FUN_0010077c(&storage);
    FUN_001006f4(message, kind, arguments);
    DAT_005c4c0c(kind, message->vtable->getText(message));
    message->vtable->destroy(message);
    va_end(arguments);
}
}
