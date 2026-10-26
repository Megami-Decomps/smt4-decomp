/* NON_MATCHING: Battle source-model caching is reconstructed; duplicate/free-slot scans and retained work/source pointers allocate different registers and branch joins. */
#include "battle/BtlMainAccess.h"
#include "common.h"
#include "code/Code001c.h"

struct BattleCacheVector {
    f32 x;
    f32 y;
    f32 z;
};
struct BattleCacheSource {
    /* 0x00 */ s32 first;
    /* 0x04 */ s32 second;
    /* 0x08 */ u32 third;
    /* 0x0C */ BattleCacheVector position;
    /* 0x18 */ u32 value;
};
struct BattleCacheMain {
    /* 0x0000 */ u8 unk0000[0x2418];
    /* 0x2418 */ BattleCacheSource sources[109];
};
struct BattleCacheModel;
struct BattleCacheEntry {
    /* 0x00 */ BattleCacheModel *model;
    /* 0x04 */ s32 first;
    /* 0x08 */ s32 second;
    /* 0x0C */ u32 third;
    /* 0x10 */ BattleCacheVector position;
    /* 0x1C */ u32 value;
    /* 0x20 */ u32 unk20;
    /* 0x24 */ u32 flags;
};
struct BattleCacheWork {
    /* 0x0000 */ u8 unk0000[0x190];
    /* 0x0190 */ BattleCacheEntry entries[50];
    /* 0x0960 */ u8 unk0960[0x2a40];
    /* 0x33A0 */ s32 kind;
};
extern "C" {
void sysMemClear(void *buffer, u32 size);
void textFormatBuffer(char *destination, const char *format, ...);
void *FUN_00178b04(u32 size, const char *file, u32 line);
BattleCacheModel *modelListInit(BattleCacheModel *model);
extern const char DAT_005284d8[];
extern const char DAT_00528500[];
}

/* Load uncached battle-source models into slots that are neither loading nor active. */
extern "C" void FUN_004f8d90(BattleCacheWork *work, s32 kind)
{
    if (kind == 0 || kind == 22) {
        return;
    }
    work->kind = kind;
    char name[128];
    sysMemClear(name, sizeof(name));
    textFormatBuffer(name, DAT_005284d8, kind);
    BattleCacheMain *battle = reinterpret_cast<BattleCacheMain *>(btlGetMainState());
    for (s32 i = 0; i < 109; ++i) {
        const BattleCacheSource *source = &battle->sources[i];
        if (source->first < 0 || source->second < 0) {
            continue;
        }
        s32 index;
        for (index = 0; index < 50; ++index) {
            BattleCacheEntry *entry = &work->entries[index];
            if (entry->first >= 0 && entry->second >= 0 &&
                entry->first == source->first && entry->second == source->second) {
                break;
            }
        }
        if (index < 50) {
            continue;
        }
        for (index = 0; index < 50; ++index) {
            BattleCacheEntry *entry = &work->entries[index];
            if (!(entry->flags & 2) && !(entry->flags & 4)) {
                break;
            }
        }
        if (index == 50) {
            continue;
        }
        BattleCacheEntry *entry = &work->entries[index];
        BattleCacheModel *model = static_cast<BattleCacheModel *>(FUN_00178b04(32, DAT_00528500, 0x4ab));
        if (model != NULL) {
            model = modelListInit(model);
        }
        entry->model = model;
        FUN_001cd3ec(model, name);
        entry->first = source->first;
        entry->second = source->second;
        entry->third = source->third;
        entry->position = source->position;
        entry->value = source->value;
        entry->flags |= 2;
    }
}
