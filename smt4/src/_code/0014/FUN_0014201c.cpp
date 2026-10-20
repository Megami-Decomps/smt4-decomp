/* Reads the player info of this archive reference's key into `out` (id, second value); returns 1 if it exists. */
#include "nw/snd/SoundArchiveQuery.h"

extern "C" {

typedef struct PlayerInfo {
    /* 0x00 */ u32 id;
} PlayerInfo;

typedef struct PlayerParams {
    /* 0x00 */ u32 id;
    /* 0x04 */ u32 unk04;
} PlayerParams;

extern PlayerInfo *nw_snd_internal_SoundArchiveFile_InfoBlockBody_GetPlayerInfo(void *infoBlock);
extern u32 FUN_0014d2f8(PlayerInfo *info);

u8 FUN_0014201c(SoundArchiveRef *ref, u32 unused, PlayerParams *out)
{
    PlayerInfo *info = nw_snd_internal_SoundArchiveFile_InfoBlockBody_GetPlayerInfo(ref->infoBlock);

    if (info != NULL) {
        out->id = info->id;
        out->unk04 = FUN_0014d2f8(info);
        return 1;
    }
    return 0;
}

}
