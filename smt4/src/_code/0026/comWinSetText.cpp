#include "ui/CommandWindow.h"

extern "C" {
extern CommandWindow* g_comWin;
int memClear(void* destination, int size);
void* rt_memcpy(void* destination, const void* source, u32 size);

void comWinSetText(const u8* text)
{
    CommandWindow* window = g_comWin;
    window->textEnabled = 0;
    if (text != NULL) {
        memClear(window->text, sizeof(window->text));
        for (s32 length = 0; length < 0x31; ++length) {
            if (text[length] == '\0') {
                rt_memcpy(window->text, text, length + 1);
                window->textEnabled = 1;
                return;
            }
        }
    }
}
}
