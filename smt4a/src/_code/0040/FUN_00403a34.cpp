/* NON_MATCHING: Page parameter spills, saved-register assignment and the fallback null-check join differ. */
#include "ui/HunterDatabaseWork.h"

struct AocSystem;
struct HunterDatabaseTextRange {
    s32 begin;
    s32 end;
};
/* The text-range array follows the recovered shared work prefix; do not grow that prefix. */
struct HunterDatabasePageTextView {
    HunterDatabaseWork work;
    s32 total;
    HunterDatabaseTextRange ranges[5];
};
extern "C" {
extern AocSystem *g_aocSystem;
extern const char DAT_0052d13c[];
s32 tableByteGet1(s32 page);
void asdTextFormatStream(u32 sprite, s32 font, u32 color, s32 flags, s32 style, const char *format, ...);
void *FUN_00471678(AocSystem *system, s32 page, s32 entry);
const char *fileSectionGetData(u32 file, s32 entry, s32 *length);
void asdTextDrawDirectoryEntry(u32 sprite, s32 font, u32 color, s32 flags, s32 style, void *file, s32 entry);
s32 FUN_001688c4(u32 sprite);

/* Rebuilds each page text sprite, preferring add-on sections, and stores cumulative text ranges. */
void FUN_00403a34(HunterDatabaseWork *work, s32 page)
{
    HunterDatabasePageTextView *view = (HunterDatabasePageTextView *)work;
    s32 count = tableByteGet1(page) + 1;
    view->total = 0;
    for (s32 entry = 0; entry < 5; ++entry) {
        asdTextFormatStream(work->sprites[entry], 3, 0xFFFFFFFF, 0, 3, DAT_0052d13c);
    }
    for (s32 entry = 0; entry < count; ++entry) {
        void *source = FUN_00471678(g_aocSystem, page, entry);
        if (source == NULL) {
            s32 length = 0;
            const char *text = fileSectionGetData(work->messages, entry + page * 10, &length);
            if (text != NULL && length >= 0 && *text != '\0') {
                source = (void *)work->messages;
            }
        }
        if (source != NULL) {
            asdTextDrawDirectoryEntry(work->sprites[entry], 3, 0xFFFFFFFF, 0, 3, source, entry + page * 10);
            s32 length = FUN_001688c4(work->sprites[entry]);
            view->ranges[entry].begin = view->total;
            view->ranges[entry].end = view->total + length;
            view->total = length + view->total;
        }
    }
}
}
