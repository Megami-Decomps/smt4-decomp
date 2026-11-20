#include "font/FontStringReader.h"

extern "C" {
extern FontNextCharacter g_fontNextCharacterCallbacks[3];

// Initializes a member-callback binding from the source's virtual kind.
void callbackBindingInitFromKind(FontStringReader* binding, FontEncodingSource* source, s32 format)
{
    FontNextCharacter callback = NULL;
    switch (source->getKind()) {
    case 1:
        callback = g_fontNextCharacterCallbacks[0];
        break;
    case 2:
        callback = g_fontNextCharacterCallbacks[1];
        break;
    case 3:
        callback = g_fontNextCharacterCallbacks[2];
        break;
    }
    binding->state = 0;
    binding->callback = callback;
}
}
