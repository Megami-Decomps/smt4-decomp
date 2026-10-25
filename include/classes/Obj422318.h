#ifndef CLASSES_OBJ422318_H
#define CLASSES_OBJ422318_H

#include "common.h"
#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"

extern "C" {
int asdMemFreeNonNull(void *block);
int asdMdlManagerMarkDestroy(u32 handle);
void *asdOperatorNew(u32 bytes);
}

/* The child an Obj422318 deletes on destruction. */
class Obj422318Child {
public:
    virtual ~Obj422318Child();
    virtual void vfunc08();
    virtual void update();
};

/* The base of the objects with vtables at 0x4222ac and 0x42233c (named after its own vtable,
 * 0x422318, until its real name is known): a child object and a model-manager handle released on
 * destruction. */
class Obj422318 {
public:
    Obj422318(s32 mode);
    static void *operator new(u32, void *storage) throw() { return storage; }
    static void *operator new(u32 bytes) throw() { return asdOperatorNew(bytes); }
    /* Deletes the child, then marks the handle for destruction and destroys it. */
    virtual ~Obj422318()
    {
        if (child != NULL) {
            delete child;
            child = NULL;
        }
        if (handle != 0) {
            asdMdlManagerMarkDestroy(handle);
            asdMdlManagerDestroy(reinterpret_cast<AsdMdlObject *>(handle));
            handle = 0;
        }
    }
    static void operator delete(void *block) { asdMemFreeNonNull(block); }
    virtual void start(); /* +0x08 */
    virtual void update(); /* +0x0C */
    virtual void stop(); /* +0x10 */
    virtual void vfunc14();
    virtual void updateMotion(); /* +0x18 */

    /* Shared timer state and owned draw resources. */
    /* 0x00: vtable pointer */
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u8 timerFlags;
    /* 0x09 */ u8 unk09[3];
    /* 0x0C */ u32 unk0c;
    /* 0x10 */ u32 unk10;
    /* 0x14 */ u32 unk14;
    /* 0x18 */ u32 unk18;
    /* 0x1C */ u8 unk1c[8];
    /* 0x24 */ u32 unk24;
    /* 0x28 */ f32 basePosition[3];
    /* 0x34 */ u8 unk34[0xC];
    /* 0x40 */ f32 scale[3];
    /* 0x4C */ f32 rotation[3];
    /* 0x58 */ s32 frames;
    /* 0x5C */ u8 unk5c[0xC];
    /* 0x68 */ Obj422318Child *child;
    /* 0x6C */ u32 handle;
    /* 0x70 */ u32 flags;
};

#endif
