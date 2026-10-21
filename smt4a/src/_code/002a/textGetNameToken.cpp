/* NON_MATCHING: id is homed in R4 before all tests, comparator setup differs, and the player-name call is not tail-called; alternate optimization candidate. */
#include "gamedata/DataTable.h"

namespace {
struct NameTokenRecord {
    /* 0x00 */ s16 id;
    /* 0x02 */ u8 text[1];
    /* 0x03 */ u8 unk03[0x65]; // Full table-row extent is 0x68.
};
}

extern "C" {
extern u8 g_fractionTextOneQuarter[];
extern u8 g_fractionTextOneSixth[];
extern u8 g_fractionTextOneFifth[];
extern u8 g_fractionTextFiveFifths[];
extern u8 g_fractionTextThreeQuarters[];
extern u8 g_fractionTextTwoQuarters[];
extern u8 g_fractionTextFourQuarters[];
extern u8 g_fractionTextFiveSixths[];
extern u8 g_fractionTextTwoSixths[];
extern u8 g_fractionTextSixSixths[];
extern u8 g_fractionTextThreeSixths[];
extern u8 g_fractionTextTwoFifths[];
extern u8 g_fractionTextThreeFifths[];
extern u8 g_fractionTextFourFifths[];
extern u8 g_fractionTextFourSixths[];
s32 arrayCompareSignedHalfword(const s16*, const s16*);
void* libc_bsearch(const void*, const void*, u32, u32,
                   s32 (*)(const s16*, const s16*));
u8* gameDataGetPlayerName();

/* Resolve display-name tokens, including the player name and fixed-width fractions. */
u8* textGetNameToken(u32 id)
{
    if (id >= 0x6A) return NULL;
    if (id == 0x3E) return gameDataGetPlayerName();
    if (id == 0x55 || id == 0x56) return g_fractionTextOneQuarter;
    if (id == 0x57) return g_fractionTextOneSixth;
    if (id == 0x58) return g_fractionTextOneFifth;
    if (id == 0x5A) return g_fractionTextFiveFifths;
    if (id == 0x5B) return g_fractionTextThreeQuarters;
    if (id == 0x5C) return g_fractionTextTwoQuarters;
    if (id == 0x5D) return g_fractionTextThreeQuarters;
    if (id == 0x5E) return g_fractionTextTwoQuarters;
    if (id == 0x5F) return g_fractionTextFourQuarters;
    if (id == 0x60) return g_fractionTextFiveSixths;
    if (id == 0x61) return g_fractionTextTwoSixths;
    if (id == 0x62) return g_fractionTextSixSixths;
    if (id == 0x63) return g_fractionTextThreeSixths;
    if (id == 0x64) return g_fractionTextTwoFifths;
    if (id == 0x65) return g_fractionTextThreeFifths;
    if (id == 0x66) return g_fractionTextFourFifths;
    if (id == 0x67) return g_fractionTextFourQuarters;
    if (id == 0x68) return g_fractionTextFourSixths;

    void* section = dataTableGet(0x38, 0);
    const void* entries = dataTableGetEntries(section);
    const u32 count = dataTableGetCount(section);
    NameTokenRecord key;
    key.id = static_cast<s16>(id);
    NameTokenRecord* record = static_cast<NameTokenRecord*>(
        libc_bsearch(&key, entries, count, sizeof(NameTokenRecord), arrayCompareSignedHalfword));
    return record->text;
}
} // extern "C"
