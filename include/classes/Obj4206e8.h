#ifndef CLASSES_OBJ4206E8_H
#define CLASSES_OBJ4206E8_H

#include "common.h"

extern "C" {
int asdMdlManagerDestroy(u32 handle);
int asdMemFree(void *block);
}

/* One of the three buffers an Obj4206e8 owns: a model-manager handle and a memory block. */
class Obj4206e8Slot {
public:
    Obj4206e8Slot()
    {
        unk00 = 0;
        unk04 = 7;
        handle = 0;
        buffer = NULL;
        unk10 = 0;
    }

    /* Destroys the handle and frees the buffer, if held. */
    void release()
    {
        if (handle != 0) {
            asdMdlManagerDestroy(handle);
            handle = 0;
        }
        if (buffer != NULL) {
            asdMemFree(buffer);
            buffer = NULL;
        }
    }

    /* 0x00 */ u32 unk00;
    /* 0x04 */ u16 unk04;   /* starts at 7 */
    /* 0x08 */ u32 handle;
    /* 0x0C */ void *buffer;
    /* 0x10 */ u8 unk10;
    /* 0x11 */ u8 unk11[0x3F];
};

/* An object that owns a model-manager handle and three Obj4206e8Slot (vtable at 0x4206e8; named
 * after it until its real name is known). */
class Obj4206e8 {
public:
    Obj4206e8();
    virtual ~Obj4206e8();

private:
    /* 0x00: vtable pointer */
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u32 handle;
    /* 0x0C */ u32 unk0C;
    /* 0x10 */ Obj4206e8Slot slots[3];
};

#endif
