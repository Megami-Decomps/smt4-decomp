/* NON_MATCHING: function-local static defined in the unit; fdiff/relink cannot map its section-relative relocation yet (the code itself is instruction-identical). */
/* Returns the sound thread singleton, constructing it on first use. */
#include "common.h"

namespace nw {
namespace snd {
namespace internal {
namespace driver {

class SoundThread {
public:
    static SoundThread &GetInstance();

    SoundThread();
    ~SoundThread();

private:
    /* Layout: see shard/S3SoundThread.h. */
    u8 unk00[0x1F8];
};

SoundThread &SoundThread::GetInstance()
{
    static SoundThread instance;

    return instance;
}

} // namespace driver
} // namespace internal
} // namespace snd
} // namespace nw
