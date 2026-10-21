#include "shard/Shard003C.h"

extern "C" {

typedef struct ValueChild {
    /* 0x0000 */ u8 unk0000[0x75D0];
    /* 0x75D0 */ u32 unk75D0;
} ValueChild;

typedef struct ValueOwner {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ ValueChild *child;
} ValueOwner;

extern s32 flagAt4IsClearOrMissing(void);
extern u16 uiSelectedRecordGetFourth(s32 value);
extern void scrSetResult(u32 value);

/* Script command: result is the owner's child value at +0x75D0, or uiSelectedRecordGetFourth when flagAt4IsClearOrMissing is false. */
u32 scrCommGetChildValue(ValueOwner *owner)
{
    s32 flag;

    if (owner->child != NULL) {
        scrSetResult(owner->child->unk75D0);
    } else {
        flag = flagAt4IsClearOrMissing();
        scrSetResult(flag == 0 ? uiSelectedRecordGetFourth(flag) : 0);
    }
    return 1;
}

} /* extern "C" */
