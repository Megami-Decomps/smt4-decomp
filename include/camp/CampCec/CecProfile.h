#ifndef CAMP_CAMPCEC_CECPROFILE_H
#define CAMP_CAMPCEC_CECPROFILE_H
#include "common.h"

// Player identity values copied into a StreetPass edit session.
struct CecProfile {
    u16 values[7];
};
typedef char CecProfileSizeCheck[sizeof(CecProfile) == 14 ? 1 : -1];
#endif
