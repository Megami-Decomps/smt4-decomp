/* NON_MATCHING: the copy loop and its limit register now match retail (limit is a parameter of the upper-casing helper); remaining: retail keeps the hidden result in r9 and its frame is 8 bytes smaller (result at sp+8, name copy at sp+16), and loads the key pair with ldm after the prefix literal where armcc uses ldrd first. */
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
u32 FUN_004395fc(const s8 *name, const char *prefix, s32 mode, u32 *base, u32 keyFirst, u32 keySecond);
s32 legacyResourceIdRemap(WindowStatusResult *result);
s32 FUN_00429a1c(StatusRecord *record);
}

/* Upper-cases at most `limit` characters of the name and terminates the copy. */
static void copyUpper(s8 *upper, const s8 *name, u32 limit)
{
    u32 i;
    for (i = 0; i < limit && name[i] != '\0'; i++) {
        upper[i] = libc_toupper(name[i]);
    }
    upper[i] = '\0';
}

/* Looks the upper-cased name up in the record and returns its status; a failure code comes back as the result. */
extern "C" WindowStatusResult FUN_00429c08(StatusRecord *record, const s8 *name)
{
    nn::Result error = FUN_004283cc(record);
    if (!nnResultIsFailure(error)) {
        s8 upper[32];
        copyUpper(upper, name, 31);
        WindowStatusResult result(FUN_004395fc(upper, DAT_005892a4, 3, &record->keyBase, record->key.first, record->key.second));
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
