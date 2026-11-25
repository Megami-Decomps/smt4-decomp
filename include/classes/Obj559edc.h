#ifndef CLASSES_OBJ559EDC_H
#define CLASSES_OBJ559EDC_H
#include "classes/Obj5596ac.h"
#include "classes/Obj55aff4.h"
#include "classes/Obj55b104.h"
#include <stddef.h>

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
/* Owner of two polymorphic entry arrays and two byte-vector resources. */
class Obj559edc {
public:
    Obj559edc();
    Obj559edc(const Obj559edc &);
    virtual ~Obj559edc();
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u32 unk08;
    /* 0x0C */ u32 unk0c;
    /* 0x10 */ u8 unk10[8];
    /* 0x18 */ Obj55aff4 address;
    /* 0x20 */ u32 unk20;
    /* 0x24 */ Obj55b104 buffer;
    /* 0x44 */ Obj5596ac first;
    /* 0x58 */ Obj5596ac second;
    /* 0x6C */ u8 unk6c[0x34];
    /* 0xA0 */ Obj559edcEntries<Obj559edcSmallEntry> small;
    /* 0xAC */ Obj559edcEntries<Obj559edcLargeEntry> large;
};

typedef char Obj559edcLayoutCheck[offsetof(Obj559edc, first) == 0x44 &&
    offsetof(Obj559edc, second) == 0x58 && offsetof(Obj559edc, small) == 0xA0 &&
    offsetof(Obj559edc, large) == 0xAC && sizeof(Obj559edc) == 0xB8 ? 1 : -1];
#endif
