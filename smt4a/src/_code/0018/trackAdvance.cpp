#include "common.h"

extern "C" {

struct TrackData {
    /* 0x00 */ u8 unknown00[4];
    /* 0x04 */ u8 flags;
    /* 0x05 */ u8 unknown05[3];
    /* 0x08 */ f32 end;
};

struct Track {
    /* 0x00 */ u8 unknown00[4];
    /* 0x04 */ f32 head;
    /* 0x08 */ f32 previous;
    /* 0x0C */ TrackData *data;
    /* 0x10 */ u8 unknown10[0x10];
    /* 0x20 */ u8 mode;
};

u32 trackAdvance(Track *track, f32 step)
{
    TrackData *data = track->data;
    if (data != 0) {
        track->previous = track->head;
        track->head = track->head + step;

        if (data->end <= track->head) {
            if ((track->mode == 2 && (data->flags & 1) != 0) ||
                track->mode == 1) {
                track->head = 0.0f;
                return 1;
            }
            track->head = data->end;
        }
    }
    return 0;
}

}
