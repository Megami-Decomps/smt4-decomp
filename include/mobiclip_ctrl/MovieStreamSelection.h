#ifndef MOBICLIP_MOVIESTREAMSELECTION_H
#define MOBICLIP_MOVIESTREAMSELECTION_H
#include "shard/W6_W6Match7_MoviePacketPump.h"

class MovieStreamBackend {
public:
    virtual void unk00() = 0;
    virtual void unk04() = 0;
    virtual void openStream(u32 context, MoviePacketStream *stream, MoviePacketFilter **filter) = 0;
    virtual void closeStream(u32 context, MoviePacketFilter *filter) = 0;
};
#endif
