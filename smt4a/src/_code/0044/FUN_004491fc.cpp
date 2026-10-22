/* NON_MATCHING: material dirty flags, ordered value commits and tail callee are recovered; armcc interleaves VFP loads with scalar copies unlike retail. */
#include "shard/Shard0044.h"

struct MaterialCommitData {
    /* 0x00 */ u8 unk00[0x40];
    /* 0x40 */ MaterialFlagArrays flags;
};

struct MaterialCommitOwner {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ MaterialCommitData *data;
};

struct MaterialTrack {
    /* 0x00 */ u32 current;
    /* 0x04 */ u32 previous;
    /* 0x08 */ u8 unk08[8];

    void commit() { previous = current; }
};

struct MaterialTracks {
    /* 0x00 */ u8 unk00[0xc];
    /* 0x0C */ MaterialTrack entries[15];
};

struct MaterialTracksOwner {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ MaterialTracks *tracks;
};

struct MaterialUpdateList {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ void **begin;
    /* 0x08 */ void **end;
};

extern "C" {
void FUN_0044d750(void *piece);
void FUN_004492b4(MaterialFlagArrays *arrays);
}

// Update the material pieces, commit the track values, and clear their dirty flag arrays.
extern "C" void FUN_004491fc(MaterialCommitOwner *owner, MaterialTracksOwner *trackOwner,
                            MaterialUpdateList *updates)
{
    void **end = updates->end;
    MaterialCommitData *data = owner->data;
    MaterialTracks *tracks = trackOwner->tracks;
    for (void **piece = updates->begin; piece != end; ++piece)
        FUN_0044d750(*piece);
    tracks->entries[0].commit();
    tracks->entries[1].commit();
    tracks->entries[2].commit();
    tracks->entries[3].commit();
    tracks->entries[6].commit();
    tracks->entries[7].commit();
    tracks->entries[8].commit();
    tracks->entries[9].commit();
    tracks->entries[10].commit();
    tracks->entries[4].commit();
    tracks->entries[5].commit();
    tracks->entries[11].commit();
    tracks->entries[12].commit();
    tracks->entries[13].commit();
    tracks->entries[14].commit();
    FUN_004492b4(&data->flags);
}
