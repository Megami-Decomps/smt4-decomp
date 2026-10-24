/* NON_MATCHING: string temporary frames, list cursor allocation and erase-loop guards differ; -O2 candidate. */
#include "shard/W4_Match4_Obj559ecc.h"

struct OnlineKey { u32 words[3]; };
struct OnlineStatusString;
extern "C" {
OnlineStatusString *_ZN9Obj55aff4C1EPKc(OnlineStatusString *, const char *);
void FUN_002e9590(OnlineStatusString *, const Obj55aff4 *);
}
struct OnlineStatusString {
    const void *vtable;
    char *data;
    OnlineStatusString(const char *text) { _ZN9Obj55aff4C1EPKc(this, text); }
    ~OnlineStatusString() { reinterpret_cast<Obj55aff4 *>(this)->Obj55aff4::~Obj55aff4(); }
};
struct OnlineStatusEntry;
struct OnlineStatusVtable { void (*destroy)(OnlineStatusEntry *); };
struct OnlineStatusEntry {
    const OnlineStatusVtable *vtable;
    u32 unk04;
    u64 id;
    u8 unk10[0x90];
    Obj55aff4 *stringsBegin, *stringsEnd; // 0xa0
    u8 unka8[0x10];
};
struct OnlineStatusOwner {
    u8 unk00[0x7c];
    OnlineKey key;
    u8 unk88[0x60];
    OnlineStatusEntry *begin, *end; // 0xe8
    u8 unkf0[0xc];
    u8 invalid; // 0xfc
};
struct OnlineStatusRequest {
    u8 unk00[0x38];
    OnlineKey key;
};
extern "C" {
void _ZN18OnlineResultRecordaSERKS_(OnlineKey *, const OnlineKey *);
s32 _ZNK18OnlineResultRecord7isValidEv(const OnlineKey *);
u64 FUN_004311c0(u32);
s32 textFormatBuffer(char *, const char *, ...);
s32 strEqualsNullSafe(const char *, const char *);
void FUN_00117bc8(OnlineStatusEntry *, const OnlineStatusEntry *);
void _ZN9Obj557c908setStateEj(OnlineStatusOwner *, s32);

void onlineStatusRemoveMatchingEntry(OnlineStatusOwner *owner, const OnlineStatusRequest *request)
{
    OnlineKey key = request->key;
    _ZN18OnlineResultRecordaSERKS_(&owner->key, &key);
    if (!_ZNK18OnlineResultRecord7isValidEv(&owner->key)) {
        owner->invalid = 1;
        return;
    }
    u64 value = FUN_004311c0(0x19a2);
    char buffer[24] = {0};
    textFormatBuffer(buffer, "%llu", value);
    for (OnlineStatusEntry *entry = owner->begin; entry != owner->end; ++entry) {
        if (!entry->id)
            continue;
        OnlineStatusString status("not check");
        if (entry->stringsEnd - entry->stringsBegin)
            FUN_002e9590(&status, entry->stringsBegin);
        s32 equal = strEqualsNullSafe(status.data, OnlineStatusString(buffer).data);
        if (!equal)
            continue;
        if (owner->begin != owner->end) {
            OnlineStatusEntry *end = owner->end;
            for (OnlineStatusEntry *next = entry + 1; next != end; ++next, ++entry)
                FUN_00117bc8(entry, next);
            OnlineStatusEntry *last = owner->end - 1;
            last->vtable->destroy(last);
            --owner->end;
        }
        break;
    }
    for (OnlineStatusEntry *entry = owner->begin; entry != owner->end; ++entry) {
        if (entry->id) {
            OnlineStatusString status("not check");
            if (entry->stringsEnd - entry->stringsBegin)
                FUN_002e9590(&status, entry->stringsBegin);
        }
    }
    _ZN9Obj557c908setStateEj(owner, 6);
}
}
