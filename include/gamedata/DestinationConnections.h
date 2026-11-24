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
    /* The body record, followed by the 59 leg records. */
    DestinationConnection records[60];
};
typedef char DestinationConnectionLayout[sizeof(DestinationConnection) == 12 &&
    offsetof(DestinationConnection, sources) == 4 ? 1 : -1];
typedef char DestinationConnectionGroupsLayout[
    offsetof(DestinationConnection, destination) == 0 &&
    offsetof(DestinationConnection, count) == 8 &&
    offsetof(DestinationConnectionGroups, records[0]) == 0 &&
    offsetof(DestinationConnectionGroups, records[1]) == 12 &&
    sizeof(DestinationConnectionGroups) == 0x2D0 ? 1 : -1];
#endif
