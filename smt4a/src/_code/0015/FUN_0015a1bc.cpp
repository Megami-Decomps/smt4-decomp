/* Queries `id` against the record's position at +0x18 and stores the three vectors it returns at +0x24, +0x30 and +0x3C. */
#include "common.h"

extern "C" {

typedef struct Vec3u {
    u32 x;
    u32 y;
    u32 z;
} Vec3u;

typedef struct QueryResult {
    Vec3u first;
    Vec3u second;
    Vec3u third;
} QueryResult;

typedef struct Record {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ Vec3u position;
    /* 0x24 */ Vec3u first;
    /* 0x30 */ Vec3u second;
    /* 0x3C */ Vec3u third;
} Record;

extern void FUN_0018af48(u32 id, Vec3u *position, QueryResult *result);

void FUN_0015a1bc(Record *record, u32 id)
{
    QueryResult result;

    FUN_0018af48(id, &record->position, &result);
    record->first = result.first;
    record->second = result.second;
    record->third = result.third;
}

}
