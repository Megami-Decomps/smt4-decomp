#ifndef CLASSES_OBJ557C90_H
#define CLASSES_OBJ557C90_H

#include "common.h"
#include "classes/Obj55a800.h"
#include "stl/Obj55aff4Values.h"
#include <vector>
#include "stl/AsdAllocator.h"

/* A 12-byte online result record: valid while the first word is not negative. */
struct OnlineResultRecord {
    OnlineResultRecord(s32 result, u32 first, u32 second) : result(result), first(first), second(second) {}
    OnlineResultRecord &operator=(const OnlineResultRecord &other);
    bool isValid() const;

    /* 0x00 */ s32 result;
    /* 0x04 */ u32 first;
    /* 0x08 */ u32 second;
};

/* The message a job's result record is taken from. */
struct OnlineResultSource {
    /* 0x00 */ u8 unk00[0x38];
    /* 0x38 */ OnlineResultRecord record;
};

/* An online job entry (vtable at 0x557c90, named after it until its real name is known). */
class Obj557c90 {
public:
    virtual ~Obj557c90();

    void applyResult(const OnlineResultSource &source);
    void applyResultChecked(const OnlineResultSource &source);
    void setState(u32 state);

    /* 0x00: vtable pointer */
    /* 0x04 */ u8 unk04[0x78];
    /* 0x7C */ OnlineResultRecord record;
    /* 0x88 */ u8 unk88[8];
    /* 0x90 */ u64 selectedId;
    /* 0x98 */ u8 unk98[8];
    /* 0xA0 */ std::vector<u64, AsdAllocator<u64> > unkA0;
    /* 0xAC */ std::vector<u8 *, AsdAllocator<u8 *> > unkAC;
    /* 0xB8 */ std::vector<Obj55a800Element, AsdAllocator<Obj55a800Element> > entries;
    /* 0xC4 */ std::vector<OnlineResultRecord, AsdAllocator<OnlineResultRecord> > results;
    /* 0xD0 */ void *unkD0;
    /* 0xD4 */ u8 unkD4[8];
    /* 0xDC */ Obj55a800 jobs;
    /* 0xF4 */ u8 unkF4[4];
    /* 0xF8 */ s32 dialogResult;
    /* 0xFC */ u8 failed;
};

#endif
