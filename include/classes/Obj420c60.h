#ifndef CLASSES_OBJ420C60_H
#define CLASSES_OBJ420C60_H

#include "common.h"

extern "C" void asdFatalError(void);
extern "C" void nn_fs_CTR_MPCore_detail_UserFileSystem_CloseFile(u32 handle);

class Obj420c60File;
extern "C" s32 FUN_002bb5a4(Obj420c60File *file, const wchar_t *path, s32 mode);

/* The file handle the stream owns, with its bookkeeping words; closing it is part of destroying it
 * (the low bit of the handle is an error mark). */
class Obj420c60File {
public:
    Obj420c60File() : handle(0), unk04(0), unk08(0), unk0C(0), unk10(0) {}

    ~Obj420c60File() { Close(); }

    /* Closes the file if one is open. */
    void Close()
    {
        if ((handle & ~1u) != 0) {
            if (handle & 1) {
                asdFatalError();
            }
            nn_fs_CTR_MPCore_detail_UserFileSystem_CloseFile(handle & ~1u);
            handle = 0;
        }
    }

    /* Opens the named file (a UTF-16 path) for reading; the bookkeeping words start cleared. */
    s32 TryInitialize(const wchar_t *path, s32 mode)
    {
        unk0C = 0;
        unk10 = 0;
        unk04 = 0;
        unk08 = 0;
        return FUN_002bb5a4(this, path, mode);
    }

    /* 0x00 */ u32 handle;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u32 unk08;
    /* 0x0C */ u32 unk0C;
    /* 0x10 */ u32 unk10;
};

/* The abstract stream interface (vtable at 0x3ff290): a virtual destructor and eight operations. */
class Obj3ff290 {
public:
    virtual ~Obj3ff290() {}
    virtual void vfn00() = 0;
    virtual void vfn01() = 0;
    virtual void vfn02() = 0;
    virtual void vfn03() = 0;
    virtual void vfn04() = 0;
    virtual void vfn05() = 0;
    virtual void vfn06() = 0;
    virtual void vfn07() = 0;
};

/* Its implementation level: virtually inherits the interface. */
class Obj420c60Base : public virtual Obj3ff290 {
public:
    virtual void vfn00() {}
};

/* A read-only stream over one file (vtable at 0x420c60, construction table 0x420c28). The file
 * handle sits right after the shared vptr at offset 4. */
class Obj420c60 : public Obj420c60File, public Obj420c60Base {
public:
    Obj420c60() {}
    virtual ~Obj420c60() {}
    virtual void vfn01() {}
    virtual void vfn02() {}
    virtual void vfn03() {}
    virtual void vfn04() {}
    virtual void vfn05() {}
    virtual void vfn06() {}
    virtual void vfn07() {}
};

#endif
