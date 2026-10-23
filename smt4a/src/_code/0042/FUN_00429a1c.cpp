/* NON_MATCHING: eCard parameter classification and current-PC error reporting restored; lookup register reuse, branch direction and literal placement differ. */
#include "common.h"

namespace {
struct ECardParameter { const char *key; const char *value; };
struct ECardParameters { ECardParameter *entries; u32 count; };
struct ECardResponse { u32 unk00; ECardParameters *parameters; };
}
extern "C" {
s32 libc_strncmp(const char *first, const char *second, u32 length);
void FUN_00189a38(u32 result, u32 location);
extern const char DAT_00536ca6[]; // REDEEMABLE
extern const char DAT_00536cb1[]; // REDEEMED
extern const char DAT_00536c9e[]; // REVOKED
extern const char DAT_00536cba[]; // INACTIVE
extern const char DAT_00536c91[]; // GUNIT
extern const char DAT_00536c97[]; // POINTS
}

static inline const char *findECardParameter(ECardParameters *parameters, const char *key)
{
    u32 count = parameters->count;
    for (u32 index = 0; index < count; ++index) {
        if (libc_strncmp(parameters->entries[index].key, key, 0x40) == 0)
            return parameters->entries[index].value;
    }
    return NULL;
}

// Translate card status and currency parameters into the native eCard result codes.
extern "C" u32 FUN_00429a1c(ECardResponse *response)
{
    const u32 malformed = 0xF9613903;
    const char *status = findECardParameter(response->parameters, "sys.ECardStatus");
    if (status == NULL)
        FUN_00189a38(malformed, __current_pc());
    if (libc_strncmp(DAT_00536ca6, status, 11) != 0) {
        if (libc_strncmp(DAT_00536cb1, status, 9) == 0)
            return 0xC8A13900;
        if (libc_strncmp(DAT_00536c9e, status, 8) == 0)
            return 0xC8A13901;
        if (libc_strncmp(DAT_00536cba, status, 9) == 0)
            return 0xC8A13902;
        return malformed;
    }
    const char *currency = findECardParameter(response->parameters, "sys.ECardCurrency");
    if (currency == NULL)
        FUN_00189a38(malformed, __current_pc());
    if (libc_strncmp(DAT_00536c91, currency, 6) == 0)
        return 0;
    if (libc_strncmp(DAT_00536c97, currency, 7) == 0)
        return 0xC8A13904;
    return 0xC8A13906;
}
