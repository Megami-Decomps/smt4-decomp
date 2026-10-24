/* NON_MATCHING: the zero argument of FUN_002eba9c is built through a pointer (sp+24) in retail and the frame is 8 bytes larger; the compare logic matches */
/* Tells whether a deadline has passed: the object's own expiry time is checked first, then (when its owner has the
 * flag set) the expiry time FUN_002eb330 reports. Returns 1 when either is in the past. */
#include "common.h"

extern "C" {
void onlineTimeGetNow(s64 *now);
struct DeadlineOwner {
    /* 0x00 */ u8 unk00[0x30];
    /* 0x30 */ u8 checkSecondary;
};

struct Deadline {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ s64 expiry;
    /* 0x18 */ u8 unk18[8];
    /* 0x20 */ DeadlineOwner *owner;
};

s32 FUN_002eba9c(s64 *expiry, s64 *unused);
void FUN_002eb330(s64 *expiry);

s32 FUN_002ef790(Deadline *deadline)
{
    s64 none = 0;

    if (FUN_002eba9c(&deadline->expiry, &none) != 0) {
        s64 expiry = deadline->expiry;
        s64 now;

        onlineTimeGetNow(&now);
        if (expiry - now < 0) {
            return 1;
        }
    }
    if (deadline->owner->checkSecondary != 0) {
        s64 secondary;
        s64 now;

        FUN_002eb330(&secondary);
        s64 secondaryExpiry = secondary;
        onlineTimeGetNow(&now);
        if (secondaryExpiry - now < 0) {
            return 1;
        }
    }
    return 0;
}
}
