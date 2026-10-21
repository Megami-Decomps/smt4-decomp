/* NON_MATCHING: the original is Obj55ac68's constructor; its current FUN export prevents a proper C++ constructor binding, and member-return recovery/frame allocation differ. */
#include "shard/W6_W6Match7_Obj55ac68.h"

extern "C" {
extern const u8 DAT_0055ad8c[];
extern const u8 DAT_0055a4c0[];
extern const void* _ZTV9Obj55ac68[];
void asdOperatorDeleteArray(void* allocation);
void* _ZN9Obj55aff4C1Ev(void* string);
OnlineWordValueStorage* FUN_00303928(OnlineWordValueStorage*, u8 kind,
                                    OnlineWordVectorStorage* words);
OnlineWordValueStorage* FUN_0011b272(OnlineWordValueStorage*,
                                    const OnlineWordValueStorage*);
u32* FUN_003038fc(u32* state, u32 value, u32 option);
OnlineStringVectorStorage* FUN_0030395c(OnlineStringVectorStorage*, u32 count);
void* onlineStringAssign(void* string, const OnlineStringValue* value);
OnlineStringVectorStorage* FUN_00522bf4(OnlineStringVectorStorage*,
                                      const OnlineStringVectorStorage*);
void FUN_002f4cac(u32* state);
}

namespace {
struct ScopedWordVector {
    OnlineWordVectorStorage value;

    ScopedWordVector() {
        value.begin = NULL;
        value.end = NULL;
        value.capacityEnd = NULL;
    }
    ~ScopedWordVector() { asdOperatorDeleteArray(value.begin); }
};

struct ScopedWordValue {
    OnlineWordValueStorage value;

    explicit ScopedWordValue(OnlineWordVectorStorage* words) {
        FUN_00303928(&value, 3, words);
    }
    ~ScopedWordValue() {
        value.vtable = DAT_0055a4c0;
        asdOperatorDeleteArray(value.words.begin);
    }
};

struct ScopedStringVector {
    OnlineStringVectorStorage value;

    ScopedStringVector() {
        value.begin = NULL;
        value.end = NULL;
        value.capacityEnd = NULL;
    }
    ~ScopedStringVector() {
        typedef void (*DestroyString)(OnlineStringValue*);
        OnlineStringValue* end = value.end;
        for (OnlineStringValue* entry = value.begin; entry != end; ++entry) {
            static_cast<const DestroyString*>(entry->vtable)[0](entry);
        }
        asdOperatorDeleteArray(value.begin);
    }
};
}

extern "C" Obj55ac68Storage* FUN_0043387c(Obj55ac68Storage* object)
{
    object->vtable = DAT_0055ad8c;
    object->ready = 0;
    _ZN9Obj55aff4C1Ev(object->nameStorage);
    {
        ScopedWordVector empty;
        FUN_00303928(&object->first, 3, &empty.value);
    }
    {
        ScopedWordVector empty;
        FUN_00303928(&object->second, 3, &empty.value);
    }
    FUN_003038fc(object->sharedState, 0, 0);
    FUN_0030395c(&object->strings, 0);

    object->vtable = &_ZTV9Obj55ac68[2];
    object->state = 0;
    {
        OnlineStringValue empty("");
        onlineStringAssign(object->nameStorage, &empty);
    }
    {
        ScopedWordVector words;
        ScopedWordValue empty(&words.value);
        FUN_0011b272(&object->first, &empty.value);
    }
    {
        ScopedWordVector words;
        ScopedWordValue empty(&words.value);
        FUN_0011b272(&object->second, &empty.value);
    }
    object->timeout = 90;
    {
        ScopedStringVector empty;
        FUN_00522bf4(&object->strings, &empty.value);
    }
    FUN_002f4cac(object->sharedState);
    object->counter = 0;
    object->pending = 0;
    object->result = 0;
    return object;
}
