#include "common.h"
#include "text/TextDraw.h"
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"
extern "C" {
struct Entry {
    char work[104];
};
extern Entry DAT_0063afc8[];
void memClearWords(void *,u32);
void scrSetStringSlot(u32 index, const char *value) {
    char *work = DAT_0063afc8[index].work;
    memClearWords(work,104);
    textExpandGlyphsToBuffer(value,work,104);
}
}
