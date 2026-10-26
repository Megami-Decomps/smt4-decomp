#ifndef CLASSES_OBJ4209CC_H
#define CLASSES_OBJ4209CC_H

#include "common.h"
#include "AsdSDK/AsdMemAlloc.h"
#include <stddef.h>
#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"

extern "C" {
int asdMemFreeNonNull(void *block);
}

struct ModelResourceItem;
struct ModelResourceItems;
class ModelResourceList;

/* The allocator a part came from. Only release (slot 3) is known. */
class Obj4209ccAllocator {
public:
    virtual void vfunc00();
    virtual void vfunc04();
    virtual void vfunc08();
    virtual void release(void *block);   /* +0x0C */
};

/* A part an Obj4209cc owns; it remembers the allocator it was made by. */
class Obj4209ccPart {
public:
    virtual ~Obj4209ccPart();

    /* 0x04 */ Obj4209ccAllocator *allocator;
};

/* An object holding two rows of three parts, a model-manager handle and a block (vtable at
 * 0x4209cc, named after it until its real name is known). */
/* The word right after the vtable pointer, cleared before the vtable is set. */
class Obj4209ccBase {
public:
    Obj4209ccBase() : unk04(0) {}

    /* 0x04 */ u32 unk04;
};

class Obj4209cc : public Obj4209ccBase {
public:
    Obj4209cc();
    virtual ~Obj4209cc();
    static void operator delete(void *block) { asdMemFreeNonNull(block); }

    /* Destroys and releases the two rows of parts, releases each model of the model list and
     * deletes the list (Apocalypse; see models()). */
    void destroyResources();

    /* In Apocalypse the handle field at 0x08 holds the model list instead of a model-manager handle. */
    ModelResourceList *models() const { return reinterpret_cast<ModelResourceList *>(handle); }

/* Public resource fields shared by construction and resource teardown. */
    /* 0x00: vtable pointer */
    /* 0x08 */ u32 handle;
    /* 0x0C */ Obj4209ccPart *rowA[3];
    /* 0x18 */ Obj4209ccPart *rowB[3];
    /* 0x24 */ void *buffer;
    /* 0x28 */ u32 unk28;
    /* 0x2C */ u32 unk2C;
    /* 0x30 */ f32 scale;       /* starts at 1.0 */
    /* 0x34 */ f32 unk34[3];
    /* 0x40 */ u16 unk40;       /* starts at 7 */
};

typedef char Obj4209ccLayoutCheck[sizeof(Obj4209cc) == 0x44 &&
    offsetof(Obj4209cc, rowA) == 0x0C &&
    offsetof(Obj4209cc, buffer) == 0x24 ? 1 : -1];

/* Prefix used by a shared deleting-destructor callback. */
struct Obj4209ccCallbackView {
    /* 0x00 */ const void *vtable;
};

/* Apocalypse's model-list initialization callback uses the same owner prefix. */
struct ModelResourceItem {
    /* 0x00 */ void *vtable;
    /* 0x04 */ u32 flags;
};
struct ModelResourceItems {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ s32 count;
};
class ModelResourceList {
public:
    virtual ~ModelResourceList();

    /* 0x00: vtable pointer */
    /* 0x04 */ u32 unk04;
    /* 0x08 */ ModelResourceItems *items;
};
struct ModelResourceOwner {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ ModelResourceList *models;
    /* 0x0C */ u8 unk0c[0x18];
    /* 0x24 */ void *source;
    /* 0x28 */ u32 unk28;
    /* 0x2C */ s32 state;
};
typedef char ModelResourceOwnerSizeCheck[sizeof(ModelResourceOwner) == 0x30 ? 1 : -1];

#ifdef __cplusplus
extern "C" {
#endif
/* Canonical declaration (matches the definition). */
void *FUN_0040619c(const void *owner, u32 index);
#ifdef __cplusplus
}
#endif

#endif
