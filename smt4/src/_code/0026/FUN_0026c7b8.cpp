#include "common.h"

struct CommandWindowText {
    u8 unk000[0x10];
    u8 enabled;
    u8 unk011[0x143];
    u8 text[0x31];
};

extern "C" {
extern CommandWindowText* g_comWin;
int memClear(void* destination, int size);
void* rt_memcpy(void* destination, const void* source, u32 size);

void FUN_0026c7b8(const u8* text)
{
    CommandWindowText* window = g_comWin;
    window->enabled = 0;
    if (text != NULL) {
        memClear(window->text, sizeof(window->text));
        for (s32 length = 0; length < 0x31; ++length) {
            if (text[length] == '\0') {
                rt_memcpy(window->text, text, length + 1);
                window->enabled = 1;
                return;
            }
        }
    }
}
}
