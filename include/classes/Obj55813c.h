#ifndef CLASSES_OBJ55813C_H
#define CLASSES_OBJ55813C_H

#include "common.h"
#include "util/vcallSlot12IfValid.h"

extern "C" void sysFatalBreak(void);

class Obj55813cFile;
extern "C" s32 FUN_001883b0(Obj55813cFile *file, const wchar_t *path, s32 mode);

/* The file handle the stream owns, with its bookkeeping words; closing it is part of destroying it
 * (the low bit of the handle is an error mark). */
class Obj55813cFile {
public:
    Obj55813cFile() : handle(0), unk04(0), unk08(0), unk0C(0), unk10(0) {}

    ~Obj55813cFile() { Close(); }

    /* Closes the file if one is open. */
    void Close()
    {
        if ((handle & ~1u) != 0) {
            if (handle & 1) {
                sysFatalBreak();
            }
            vcallSlot12IfValid(handle & ~1u);
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
        return FUN_001883b0(this, path, mode);
    }

    /* 0x00 */ u32 handle;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u32 unk08;
    /* 0x0C */ u32 unk0C;
    /* 0x10 */ u32 unk10;
};

/* The abstract stream interface (vtable at 0x526560): a virtual destructor and eight operations. */
class Obj526560 {
public:
    virtual ~Obj526560() {}
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
class Obj55813cBase : public virtual Obj526560 {
public:
    virtual void vfn00() {}
};

/* A read-only stream over one file (vtable at 0x55813c, construction table 0x558104). The file
 * handle sits right after the shared vptr at offset 4. */
class Obj55813c : public Obj55813cFile, public Obj55813cBase {
public:
    Obj55813c() {}
    virtual ~Obj55813c() {}
    virtual void vfn01() {}
    virtual void vfn02() {}
    virtual void vfn03() {}
    virtual void vfn04() {}
    virtual void vfn05() {}
    virtual void vfn06() {}
    virtual void vfn07() {}
};

#endif
