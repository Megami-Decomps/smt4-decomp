#include "font/FontStringReader.h"

extern "C" {
extern FontNextCharacter DAT_0053cbfc[3];

// Initializes a member-callback binding from the source's virtual kind.
void callbackBindingInitFromKind(FontStringReader* binding, FontEncodingSource* source, s32 format)
{
    FontNextCharacter callback = NULL;
    switch (source->getKind()) {
    case 1:
        callback = DAT_0053cbfc[0];
        break;
    case 2:
        callback = DAT_0053cbfc[1];
        break;
    case 3:
        callback = DAT_0053cbfc[2];
        break;
    }
    binding->state = 0;
    binding->callback = callback;
}
}
