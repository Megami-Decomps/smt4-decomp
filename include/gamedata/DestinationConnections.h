#ifndef GAMEDATA_DESTINATION_CONNECTIONS_H
#define GAMEDATA_DESTINATION_CONNECTIONS_H
#include "common.h"
#include <stddef.h>

struct DestinationConnection {
    /* 0x00 */ u16 destination;
    /* 0x02 */ u16 unk02;
    /* 0x04 */ const u16 *sources;
    /* 0x08 */ s32 count;
};
struct DestinationConnectionGroups {
    DestinationConnection single;
    DestinationConnection multiple[59];
};
struct DestinationCoordinates {
    /* 0x00 */ u8 unk00[0x40];
    /* 0x40 */ u16 area;
    /* 0x42 */ u16 point;
};
typedef char DestinationConnectionLayout[sizeof(DestinationConnection) == 12 &&
    offsetof(DestinationConnection, sources) == 4 &&
    offsetof(DestinationCoordinates, area) == 0x40 ? 1 : -1];
typedef char DestinationConnectionGroupsLayout[
    offsetof(DestinationConnection, destination) == 0 &&
    offsetof(DestinationConnection, count) == 8 &&
    offsetof(DestinationConnectionGroups, single) == 0 &&
    offsetof(DestinationConnectionGroups, multiple) == 12 &&
    sizeof(DestinationConnectionGroups) == 0x2D0 &&
    offsetof(DestinationCoordinates, point) == 0x42 &&
    sizeof(DestinationCoordinates) == 0x44 ? 1 : -1];
#endif
