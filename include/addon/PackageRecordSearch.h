#ifndef ADDON_PACKAGERECORDSEARCH_H
#define ADDON_PACKAGERECORDSEARCH_H
#include "common.h"
#include <stddef.h>

struct PackageKind1BRecord {
    /* 0x00 */ u8 prefix[6];
    /* 0x06 */ u16 id;
    /* 0x08 */ u8 data[0x20];
};
struct PackageKind21Payload {
    u8 data[0x30];
};
struct PackageKind21Record {
    /* 0x00 */ s16 id;
    /* 0x02 */ u16 unk02;
    /* 0x04 */ PackageKind21Payload payload;
};
typedef char PackageSearchRecordLayoutCheck[
    sizeof(PackageKind1BRecord) == 0x28 && offsetof(PackageKind1BRecord, id) == 6 &&
    sizeof(PackageKind21Record) == 0x34 && offsetof(PackageKind21Record, payload) == 4 ? 1 : -1];

struct PackageKind29Record {
    /* 0x00 */ u16 value;
    /* 0x02 */ u16 id;
};
typedef char PackageKind29RecordLayoutCheck[sizeof(PackageKind29Record) == 4 &&
    offsetof(PackageKind29Record, id) == 2 ? 1 : -1];
#endif
