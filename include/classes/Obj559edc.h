#ifndef CLASSES_OBJ559EDC_H
#define CLASSES_OBJ559EDC_H
#include "classes/Obj55aff4.h"
#include "classes/Obj55b104.h"

class Obj559edcSmallEntry {
public:
    virtual ~Obj559edcSmallEntry();
    u32 value;
};
class Obj559edcLargeEntry {
public:
    virtual ~Obj559edcLargeEntry();
    u8 unk04[0x24];
};
template <class Entry> struct Obj559edcEntries {
    Entry *begin;
    Entry *end;
    Entry *capacity;
    ~Obj559edcEntries();
};
struct Obj559edcVector {
    const void *vtable;
    u32 unk04;
    void *data;
    u32 unk0c;
    u32 unk10;
    ~Obj559edcVector();
};

/* Owner of two polymorphic entry arrays and two byte-vector resources. */
class Obj559edc {
public:
    virtual ~Obj559edc();
    /* 0x04 */ u8 unk04[0x14];
    /* 0x18 */ Obj55aff4 address;
    /* 0x20 */ u32 unk20;
    /* 0x24 */ Obj55b104 buffer;
    /* 0x44 */ Obj559edcVector first;
    /* 0x58 */ Obj559edcVector second;
    /* 0x6C */ u8 unk6c[0x34];
    /* 0xA0 */ Obj559edcEntries<Obj559edcSmallEntry> small;
    /* 0xAC */ Obj559edcEntries<Obj559edcLargeEntry> large;
};
#endif
