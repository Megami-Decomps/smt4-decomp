/* Constructs the diagnostic message object: base constructor, then the derived vtable and an empty text. */
#include "AsdSDK/DiagnosticMessage.h"

extern "C" {
extern DiagnosticVtable DAT_0055cb90;
DiagnosticMessage *FUN_00100acc(DiagnosticMessage *message);

DiagnosticMessage *FUN_0010077c(DiagnosticMessage *message)
{
    message = FUN_00100acc(message);
    message->vtable = &DAT_0055cb90;
    message->text = NULL;
    return message;
}
}
