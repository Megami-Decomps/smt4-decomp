#ifndef CLASSES_WINDOW_STATUS_H
#define CLASSES_WINDOW_STATUS_H

#include "common.h"
#include "nn/os/HandleOwner.h"
#include <stddef.h>

/* An SDK result and the game's translated description ID. */
struct WindowStatusResult {
    WindowStatusResult();
    WindowStatusResult(u32 code);
    WindowStatusResult(u32 code, u32 description);
    /* 0x00 */ u32 code;
    /* 0x04 */ u32 description;
};
typedef char WindowStatusResultLayoutCheck[
    offsetof(WindowStatusResult, code) == 0 && offsetof(WindowStatusResult, description) == 4 &&
    sizeof(WindowStatusResult) == 8 ? 1 : -1];

extern "C" {
void recordValidatePair(void *owner, WindowStatusResult result);
WindowStatusResult nnAsyncMapOperationResult(const void *operation);
WindowStatusResult FUN_00428060(void *owner, void *output, const void *identifier);
WindowStatusResult FUN_004288e0(void *owner);
s32 FUN_004283cc(void *owner);
s32 queryResultFailureOnly(const u32 *object);
}

/* Value returned through hidden result storage by each status operation. The empty destructor
   makes the class non-trivial, so armcc constructs a named result directly in that storage. */
struct WindowStatusOperationResult {
    explicit WindowStatusOperationResult(u32 status) : status(status), reserved0c(0), reserved10(0)
    {
        result = WindowStatusResult(0);
    }
    ~WindowStatusOperationResult() {}
    /* 0x00 */ u8 status;
    /* 0x01 */ u8 unk01[3];
    /* 0x04 */ WindowStatusResult result;
    /* 0x0C */ u32 reserved0c;
    /* 0x10 */ u32 reserved10;
};

/* The native one-word SDK result constructed before its translated counterpart. */
struct WindowStatusCode {
    explicit WindowStatusCode(u32 value) : code(value) {}
    u32 code;
};
typedef char WindowStatusCodeSizeCheck[sizeof(WindowStatusCode) == 4 ? 1 : -1];

/* Common result-bearing base, constructed inline by the concrete status objects. */
class Obj42217c {
public:
    Obj42217c() : reserved(0), status(0xe7e3ffff), state(-1) {}
    virtual ~Obj42217c() {}
    virtual void unk08();
    virtual WindowStatusOperationResult vfunc0c(const void *) = 0;

    /* 0x04 */ u32 reserved;
    /* 0x08 */ WindowStatusCode status;
    /* 0x0C */ WindowStatusResult result;
    /* 0x14 */ s32 state;
};
typedef char WindowStatusBaseOffsetsCheck[
    offsetof(Obj42217c, reserved) == 4 && offsetof(Obj42217c, status) == 8 &&
    offsetof(Obj42217c, result) == 0xC && offsetof(Obj42217c, state) == 0x14 &&
    sizeof(Obj42217c) == 0x18 ? 1 : -1];

class Obj4221bc : public Obj42217c {
public:
    Obj4221bc();
    virtual ~Obj4221bc();
    static void operator delete(void *memory);
    virtual void unk08();
    virtual WindowStatusOperationResult vfunc0c(const void *);
};

class Obj4221e4 : public Obj42217c {
public:
    Obj4221e4();
    virtual ~Obj4221e4();
    virtual void unk08();
    virtual WindowStatusOperationResult vfunc0c(const void *);
};

class Obj4221fc : public Obj42217c {
public:
    Obj4221fc();
    virtual ~Obj4221fc();
    virtual void unk08();
    virtual WindowStatusOperationResult vfunc0c(const void *);
};

class Obj422230 : public Obj42217c {
public:
    Obj422230();
    virtual ~Obj422230();
    virtual void unk08();
    virtual WindowStatusOperationResult vfunc0c(const void *);
};

class Obj422248 : public Obj42217c {
public:
    Obj422248();
    virtual ~Obj422248();
    static void operator delete(void *);
    virtual void unk08();
    virtual WindowStatusOperationResult vfunc0c(const void *);
};

class Obj422260 : public Obj42217c {
public:
    Obj422260();
    virtual ~Obj422260();
    virtual void unk08();
    virtual WindowStatusOperationResult vfunc0c(const void *);
};

class Obj422278 : public Obj42217c {
public:
    Obj422278();
    virtual ~Obj422278();
    virtual void unk08();
    virtual WindowStatusOperationResult vfunc0c(const void *);
    /* 0x18 */ HandleOwner owner;
};
typedef char WindowStatusHandleOwnerOffsetsCheck[
    offsetof(Obj422278, owner) == 0x18 && sizeof(Obj422278) == 0x20 ? 1 : -1];

class Obj422290 : public Obj42217c {
public:
    Obj422290();
    virtual ~Obj422290();
    static void operator delete(void *block);
    virtual void unk08();
    virtual WindowStatusOperationResult vfunc0c(const void *);
};

#ifdef __cplusplus
extern "C" {
#endif

void gameDataFlagsClear(u32 mask);

#ifdef __cplusplus
}
#endif

#endif
