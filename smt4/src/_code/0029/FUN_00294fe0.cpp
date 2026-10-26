#include "common.h"
#include "code/Code0029_Smt4.h"

extern "C" {

int FUN_0033e8a8(...);
int resourceReleaseAllocationAndDispatchUpdate(...);
extern int resourceIsReady(void);
extern int asdTMTexTableCallFileB(void *file, u32 id);

typedef struct Header {
    /* 0x0 */ u8 unk0[4];
    /* 0x4 */ u16 count;
} Header;

typedef struct Entry {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ u32 unk18;
    /* 0x1C */ u32 unk1C;
} Entry;

typedef struct Obj {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ void *file;
    /* 0x0C */ u32 id;
    /* 0x10 */ Header *header;
    /* 0x14 */ Entry *entries;
    /* 0x18 */ u8 unk18[0x25];
    /* 0x3D */ u8 loaded;
} Obj;

extern int aocTextureRequestHasNewContent(Obj *obj);

u32 FUN_00294fe0(Obj *obj)
{
    int resource;
    Entry *entry;
    u32 id;
    u32 value;
    int count;

    resource = asdTMTexTableCallFileB(obj->file, obj->id);
    if (resourceIsReady() == 0) {
        return 0;
    }
    if (obj->loaded == 0) {
        if (aocTextureRequestHasNewContent(obj) != 0) {
            resourceReleaseAllocationAndDispatchUpdate(obj);
        }
        value = *(u32 *)(resource + 8);
        id = obj->id;
        obj->loaded = 1;
        count = obj->header->count;
        if (count > 0) {
            entry = obj->entries;
            entry->unk18 = value;
            entry->unk1C = id;
        }
        FUN_0033e8a8(obj);
    }
    return 1;
}

} /* extern "C" */
