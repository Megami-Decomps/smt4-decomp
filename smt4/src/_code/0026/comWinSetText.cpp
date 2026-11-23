#include "ui/CommandWindow.h"
#include "gamedata/SaveLoadProcess.h"
#include "AsdSDK/AsdMemUtil.h"

extern "C" {
extern CommandWindow* g_comWin;
void* __aeabi_memcpy(void* destination, const void* source, u32 size); // declcheck: local (the shared declaration does not compile here or changes this unit)

void comWinSetText(const u8* text)
{
    CommandWindow* window = g_comWin;
    window->textEnabled = 0;
    if (text != NULL) {
        reinterpret_cast<int>(memClear(window->text, sizeof(window->text)));
        for (s32 length = 0; length < 0x31; ++length) {
            if (text[length] == '\0') {
                __aeabi_memcpy(window->text, text, length + 1);
                window->textEnabled = 1;
                return;
            }
        }
    }
}
}
