/* NON_MATCHING: the loaded-flag constant uses R1 instead of retail's R2. */
#include "addon/aocMain.h"

struct DevilResourceHeader {
    u32 magic;
    u16 countA;
    u16 countB;
    u32 countC;
    u16 countD;
    u8 unk0e[0x1a];
};
struct DevilResourceWork {
    u32 unk00;
    s32 id;
    u32 kind;
    s32 index;
    DevilResourceHeader *header;
    u8 *tableA;
    u8 *tableB;
    u8 *tableC;
    u8 *tableD;
    u8 *end;
    void *allocation;
    u8 unk2c[0x10];
    u8 loaded;
};
typedef char DevilResourceLayoutCheck[sizeof(DevilResourceHeader) == 0x28 &&
    offsetof(DevilResourceHeader, countD) == 0xc &&
    offsetof(DevilResourceWork, header) == 0x10 &&
    offsetof(DevilResourceWork, allocation) == 0x28 &&
    offsetof(DevilResourceWork, loaded) == 0x3c ? 1 : -1];

extern "C" {
extern AocSystemA *g_aocSystem;
extern const char DAT_0052726c[];
void textFormatBuffer(char *buffer, const char *format, ...);
void *asdLoadFileSyncDefault(const char *path);
bool FUN_00470b18(AocSystemA *system, s32 id, u32 kind);
void *aocLoadWorldDataFile(AocSystemA *system, s32 id, const char *path);

void FUN_003fc1b0(DevilResourceWork *work, s32 id)
{
    char path[0x40];
    textFormatBuffer(path, DAT_0052726c, id);
    work->kind = 6;
    work->index = id - 1;
    DevilResourceHeader *file;
    if (FUN_00470b18(g_aocSystem, id, 1)) {
        file = (DevilResourceHeader *)aocLoadWorldDataFile(g_aocSystem, id, path);
    } else {
        file = (DevilResourceHeader *)asdLoadFileSyncDefault(path);
    }
    work->allocation = file;
    work->id = id;
    work->loaded = 1;
    work->header = file;
    if (file->magic != 0x57444b4e) {
        work->header = 0;
    } else {
        work->tableA = (u8 *)(file + 1);
        work->tableB = work->tableA + file->countA * 0x20;
        work->tableC = work->tableB + file->countC * 0x28;
        work->tableD = work->tableC + file->countB * 4;
        work->end = work->tableD + file->countD * 0x18;
    }
}
}
