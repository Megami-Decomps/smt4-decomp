#ifndef SHARD_W6_W6MATCH7_MOVIESOURCE_H
#define SHARD_W6_W6MATCH7_MOVIESOURCE_H
#include "common.h"

class MovieSyncSource {
public:
    virtual void unk00() = 0;
    virtual void unk04() = 0;
    virtual void unk08() = 0;
    virtual void unk0c() = 0;
    virtual void getPosition(s32 *position) = 0;
    virtual void unk14() = 0;
    virtual void unk18() = 0;
    virtual void unk1c() = 0;
    virtual s32 getSize() = 0;
    virtual u8 getFormat() = 0;
};
#endif
