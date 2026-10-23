/* NON_MATCHING: scalar channels match; vector source aliasing and load scheduling differ from retail. */
#include "shard/W5_W5Match8_CameraTransition.h"

static __inline void interpolateVector(W5Match8Vec3 &value, const W5Match8Vec3 &start,
                                      const W5Match8Vec3 &end, f32 progress)
{
    W5Match8Vec3 difference = {end.x - start.x, end.y - start.y, end.z - start.z};
    value.x = start.x + difference.x * progress;
    value.y = start.y + difference.y * progress;
    value.z = start.z + difference.z * progress;
}

extern "C" f32 FUN_003d4dd4(u32 mode, u32 duration, u32 frame);

/* Advance the camera's vector and scalar transition channels together. */
extern "C" void FUN_004f2ae4(W5Match8CameraTransition *camera, u32 frame)
{
    struct ScalarChannel {
        f32 value, start, end;
        void update(f32 progress) { value = start + (end - start) * progress; }
    };
    struct VectorChannel {
        W5Match8Vec3 value, start, end;
        void update(f32 progress) { interpolateVector(value, start, end, progress); }
    };
    struct Channels {
        ScalarChannel primary; // 0x800
        u8 unk80c[0xc];
        ScalarChannel angle; // 0x818
        u8 unk824[0xc];
        ScalarChannel auxiliary; // 0x830
        ScalarChannel secondary; // 0x83c
        u8 unk848[0xc];
        VectorChannel position; // 0x854
        u8 unk878[0xc];
        VectorChannel target; // 0x884
    };
    // The final vector channel extends beyond the known shared camera prefix.
    struct ChannelView {
        u8 prefix[0x6ec];
        u32 duration;
        u8 unk6f0[0x110];
        Channels channels;
    };
    typedef char ChannelViewOffsets[
        offsetof(ChannelView, channels.position) == 0x854 &&
        offsetof(ChannelView, channels.target) == 0x884 && sizeof(ChannelView) == 0x8a8 ? 1 : -1];
    ChannelView *view = reinterpret_cast<ChannelView *>(camera);
    f32 progress = FUN_003d4dd4(0, view->duration, frame);
    Channels *channels = &view->channels;
    channels->position.update(progress);
    channels->target.update(progress);
    channels->secondary.update(progress);
    channels->auxiliary.update(progress);
    channels->angle.update(progress);
    channels->primary.update(progress);
}
