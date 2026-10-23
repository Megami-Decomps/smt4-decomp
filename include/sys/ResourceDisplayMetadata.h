#ifndef SYS_RESOURCE_DISPLAY_METADATA_H
#define SYS_RESOURCE_DISPLAY_METADATA_H
#include "common.h"
#include <stddef.h>

struct ResourceDisplayMetadata {
    u8 unk000[0x84];
    u8 provider[0x534];
    u16 title[0x20];
    u16 description[0x20];
    char productName[0x40];
};
struct ResourceDisplayTextRecord {
    u8 titleIdentifier[0x60];
    u8 descriptionIdentifier[0x20];
};
struct ResourceDisplayProductRecord {
    u8 unk00[0x20];
    char name[0x60];
};
typedef char ResourceDisplayMetadataLayoutCheck[
    offsetof(ResourceDisplayMetadata, provider) == 0x84 &&
    offsetof(ResourceDisplayMetadata, title) == 0x5B8 &&
    offsetof(ResourceDisplayMetadata, description) == 0x5F8 &&
    offsetof(ResourceDisplayMetadata, productName) == 0x638 &&
    sizeof(ResourceDisplayMetadata) == 0x678 &&
    sizeof(ResourceDisplayTextRecord) == 0x80 &&
    sizeof(ResourceDisplayProductRecord) == 0x80 ? 1 : -1];
#endif
