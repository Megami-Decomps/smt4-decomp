/* NON_MATCHING: initialization predication, text-call stack stores and row-boundary paired stores differ. */
#include "common.h"
#include <stddef.h>

struct DirectoryChoicePlacement {
    u16 row;
    u16 height;
    u16 column;
    u8 unk06[4];
};
struct DirectoryRowDefinition {
    u16 group;
    u8 unk02[0x2c];
    u16 rowCount;
    DirectoryChoicePlacement first, second;
};
struct DirectoryLayoutRow {
    s32 start;
    s32 end;
    u8 kind;
    u8 unk09[3];
    u32 choices[3];
    s32 lastColumn;
};
struct DirectoryLayoutWork {
    u8 unk00[8];
    u32 directory;
    u8 unk0c[0x78];
    DirectoryRowDefinition *definition;
    void *texts[3];
    s32 height;
    DirectoryLayoutRow rows[5];
};
typedef char DirectoryLayoutOffsets[sizeof(DirectoryChoicePlacement) == 0xa &&
    offsetof(DirectoryRowDefinition, rowCount) == 0x2e &&
    offsetof(DirectoryRowDefinition, first) == 0x30 &&
    offsetof(DirectoryRowDefinition, second) == 0x3a &&
    sizeof(DirectoryLayoutRow) == 0x1c &&
    offsetof(DirectoryLayoutRow, choices) == 0xc &&
    offsetof(DirectoryLayoutRow, lastColumn) == 0x18 &&
    offsetof(DirectoryLayoutWork, definition) == 0x84 &&
    offsetof(DirectoryLayoutWork, texts) == 0x88 &&
    offsetof(DirectoryLayoutWork, height) == 0x94 &&
    offsetof(DirectoryLayoutWork, rows) == 0x98 ? 1 : -1];

extern "C" {
void FUN_0049dd74(DirectoryLayoutWork *work);
void asdTextDrawDirectoryEntry(void *text, s32 mode, u32 color, s32 first, s32 alignment,
                               u32 directory, u32 entry);
s32 FUN_001688c4(void *text);

void FUN_0049de10(DirectoryLayoutWork *work)
{
    s32 textIndex = 0;
    s32 totalHeight = 0;
    s32 rowCount = work->definition->rowCount;
    u16 group = work->definition->group;
    FUN_0049dd74(work);
    if (rowCount > 0) {
        s32 i = 0;
        do {
            bool hasFirst = false;
            s32 height = 0;
            if (work->definition->first.row - 1 == i) {
                work->rows[i].kind = 2;
                s32 column = work->definition->first.column;
                work->rows[i].choices[column] = 0;
                height = work->definition->first.height;
                work->rows[i].lastColumn = work->rows[i].lastColumn >= column
                    ? work->rows[i].lastColumn : column;
                hasFirst = true;
            }
            if (work->definition->second.row - 1 == i) {
                work->rows[i].kind = 2;
                s32 column = work->definition->second.column;
                work->rows[i].choices[column] = 1;
                if (!hasFirst) {
                    height = work->definition->second.height;
                }
                work->rows[i].lastColumn = work->rows[i].lastColumn >= column
                    ? work->rows[i].lastColumn : column;
            } else if (!hasFirst) {
                work->rows[i].kind = 1;
                work->rows[i].choices[0] = textIndex;
                asdTextDrawDirectoryEntry(work->texts[textIndex], 3, 0xffffffff, 0, 3,
                                          work->directory, textIndex + (u32)group * 10);
                height = FUN_001688c4(work->texts[textIndex]);
                ++textIndex;
            }
            work->rows[i].start = totalHeight;
            totalHeight += height;
            work->rows[i].end = totalHeight;
            ++i;
        } while (i < rowCount && i < 5);
    }
    work->height = totalHeight;
}
}
