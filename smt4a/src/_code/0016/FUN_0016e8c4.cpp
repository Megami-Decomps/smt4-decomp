#include "common.h"

// Convert an epoch-relative day count to a Gregorian year, month and day.
extern "C" void FUN_0016e8c4(s32 *yearOut, s32 *monthOut, s32 *dayOut, s32 days)
{
    s32 shiftedDays = days - 60;
    s32 era = shiftedDays / 146097;
    s32 dayOfEra = shiftedDays % 146097;
    if (dayOfEra < 0) {
        --era;
        dayOfEra += 146097;
    }
    s32 century = dayOfEra / 36524;
    s32 dayOfCentury = dayOfEra % 36524;
    s32 quadYear = dayOfCentury / 1461;
    s32 dayOfQuadYear = dayOfCentury % 1461;
    s32 singleYear = dayOfQuadYear / 365;
    s32 dayOfYear = dayOfQuadYear % 365;
    s32 month = (dayOfYear * 5 + 2) / 153;
    s32 year = era * 400 + century * 100 + quadYear * 4 + singleYear + 2000;
    s32 day = dayOfYear - (month * 153 + 2) / 5 + 1;
    if (singleYear == 4 || century == 4) {
        month = 11;
        day = 29;
        --year;
    }
    if (month <= 9) {
        month += 3;
    } else {
        month -= 9;
        ++year;
    }
    if (yearOut != NULL)
        *yearOut = year;
    if (monthOut != NULL)
        *monthOut = month;
    if (dayOut != NULL)
        *dayOut = day;
}
