#include "mobiclip/MoLiveContainers.h"
#include "mobiclip/MoLiveObjectHandleMap.h"

using namespace MoLive;

/* The stream the player keeps per id (smt4 layout). */
struct IdleStream {
    /* 0x00 */ u8 unk00[0x48];
    /* 0x48 */ u32 queued;
    /* 0x4C */ u8 unk4C[0x24];
    /* 0x70 */ u8 active;
};

class IdleStreamEntry : public ManagedObject {
public:
    /* 0x04 */ u8 unk04[0xC];
    /* 0x10 */ IdleStream *stream;
};

struct IdleStreamPlayer {
    /* 0x0000 */ u8 unk0000[0x1414];
    /* 0x1414 */ ObjectHandleMap streams;
};

/* Clears the active flag of every stream that was used; streams with nothing queued and not
 * active are removed from the player. */
extern "C" void moLivePlayerReleaseIdleStreams(IdleStreamPlayer *player)
{
    ObjectHandleMap::iterator it = player->streams.begin();
    while (it != player->streams.end()) {
        ObjectHandleMap::iterator current = it++;
        IdleStream *stream = static_cast<IdleStreamEntry *>(current->second.object)->stream;
        if (stream->active != 0 || stream->queued != 0) {
            stream->active = 0;
        } else {
            player->streams.erase(current);
        }
    }
}
