#ifndef CLASSES_WINDOW_STATUS_H
#define CLASSES_WINDOW_STATUS_H

#include "common.h"

/* An SDK result and the game's translated description ID. */
struct WindowStatusResult {
    WindowStatusResult();
    WindowStatusResult(u32 code);
    /* 0x00 */ u32 code;
    /* 0x04 */ u32 description;
};

/* Value returned through hidden result storage by each status operation. */
struct WindowStatusOperationResult {
    /* 0x00 */ u8 status;
    /* 0x01 */ u8 unk01[3];
    /* 0x04 */ WindowStatusResult result;
    /* 0x0C */ u32 reserved0c;
    /* 0x10 */ u32 reserved10;
};

/* Common result-bearing base, constructed inline by the concrete status objects. */
class Obj42217c {
public:
    Obj42217c() : reserved(0), status(0xe7e3ffff), state(-1) {}
    virtual ~Obj42217c() {}
    virtual void unk08();
    virtual WindowStatusOperationResult vfunc0c(const void *) = 0;

    /* 0x04 */ u32 reserved;
    /* 0x08 */ u32 status;
    /* 0x0C */ WindowStatusResult result;
    /* 0x14 */ s32 state;
};

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
    /* 0x18 */ u32 value;
    /* 0x1C */ u8 active;
};

class Obj422290 : public Obj42217c {
public:
    Obj422290();
    virtual ~Obj422290();
    static void operator delete(void *block);
    virtual void unk08();
    virtual WindowStatusOperationResult vfunc0c(const void *);
};

#endif
