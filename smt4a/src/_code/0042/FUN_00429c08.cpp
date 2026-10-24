/* NON_MATCHING: retail keeps the copy limit (31) in r8 and tests the name before the index with the loop entered by a branch, copies the key pair with ldm/stm, and holds the hidden result pointer in r9; armcc differs in all three */
#include "classes/WindowStatus.h"
#include "nn/Result.h"

struct KeyPair {
    u32 first;
    u32 second;
};

/* A status record: its id string pair and the values the lookup passes on. */
struct StatusRecord {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u32 keyBase;
    /* 0x08 */ KeyPair key;
};

extern "C" {
extern const char DAT_005892a4[]; /* the record's path prefix */

s32 libc_toupper(s32 character);
s32 FUN_004283cc(StatusRecord *record);
u32 FUN_004395fc(const s8 *name, const char *prefix, s32 mode, u32 *base, KeyPair key);
void recordValidatePair(StatusRecord *record, WindowStatusResult result);
s32 legacyResourceIdRemap(WindowStatusResult *result);
s32 FUN_00429a1c(StatusRecord *record);
}

/* Looks the upper-cased name up in the record and returns its status; a failure code comes back as the result. */
extern "C" WindowStatusResult FUN_00429c08(StatusRecord *record, const s8 *name)
{
    s32 error = FUN_004283cc(record);
    if (!nnResultIsFailure(error)) {
        s8 upper[32];
        u32 i;
        for (i = 0; name[i] != '\0' && i < 31; i++) {
            upper[i] = libc_toupper(name[i]);
        }
        upper[i] = '\0';
        WindowStatusResult result(FUN_004395fc(upper, DAT_005892a4, 3, &record->keyBase, record->key));
        recordValidatePair(record, result);
        if (nnResultIsFailure(legacyResourceIdRemap(&result))) {
            return result;
        }
        error = FUN_00429a1c(record);
        if (!nnResultIsFailure(error)) {
            return WindowStatusResult(0);
        }
    }
    return WindowStatusResult(error);
}
