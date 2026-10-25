#include "common.h"

struct TextSlotPanel {
    /* 0x00 */ u32 handles[10];
    /* 0x28 */ s16 ids[10];
    /* 0x3c */ u32 values[10];
    /* 0x64 */ u8 flags[10];
    /* 0x6e */ u8 unk6e[2];
    /* 0x70 */ u32 pending[10];
};

extern "C" {
void *FUN_0015f858(u32 id, u32 section);
const char *FUN_001654f8(void *entry, u32 first, u32 second);
int textFormatBuffer(char *buffer, const char *format, ...);
void asdTextFormatStream(u32 handle, u32 mode, u32 color, u32 first, u32 second, const char *text);

void uiSetEntrySlotText(TextSlotPanel *panel, u32 slot, u32 id, u32 value, u32 flags)
{
    if (!panel) {
        return;
    }
    void *entry = FUN_0015f858(id, 0);
    const char *text = FUN_001654f8(entry, 0, 0);
    char buffer[132];
    textFormatBuffer(buffer, "%s", text);
    asdTextFormatStream(panel->handles[slot], 2, 0xffffffff, 0, 0, buffer);
    panel->ids[slot] = (s16)id;
    panel->values[slot] = value;
    panel->flags[slot] = (u8)flags;
    panel->pending[slot] = 0;
}
}
