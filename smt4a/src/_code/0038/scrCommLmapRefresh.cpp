#include "shard/Shard0038.h"

extern "C" {

extern void mapSelectRoomMusicIfActive(void);
extern void lmapMainCallIfActive(void);

/* Script command: runs mapSelectRoomMusicIfActive and lmapMainCallIfActive. */
u32 scrCommLmapRefresh(void)
{
    mapSelectRoomMusicIfActive();
    lmapMainCallIfActive();
    return 1;
}

} /* extern "C" */
