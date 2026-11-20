/* NON_MATCHING: only names differ. The code is identical, but the constructor and destructor are still named
 * FUN_00140ee4 and FUN_0014dc7c (the C1/D1 of nw::snd::internal::DriverCommandManager, see
 * soundRequestQueueGetInstance), and the guard (0x472344, inside _ZTV9Obj472300's 0x60 bytes) and the instance
 * (DAT_004e9fd8) are not named after the static. */
/* The two driver command queue singletons were defined in one file: this function reaches its guard as the
 * second word of the file's data, after soundRequestQueueGetInstance's guard (0x472340), so the file's first
 * function is compiled here too (the build keeps only this unit's function). */
#include "common.h"

namespace nw {
namespace snd {
namespace internal {

/* The sound driver's command queue (0x190 bytes as FUN_00140ee4 constructs it). */
class DriverCommandManager {
public:
    DriverCommandManager();
    ~DriverCommandManager();

private:
    u8 unk00[0x190];
};

} // namespace internal
} // namespace snd
} // namespace nw

/* Returns the driver command queue singleton, constructing it on first use. */
extern "C" nw::snd::internal::DriverCommandManager *soundRequestQueueGetInstance(void)
{
    static nw::snd::internal::DriverCommandManager instance;

    return &instance;
}

/* Returns the stream command queue singleton, a second DriverCommandManager, constructing it on first use. */
extern "C" nw::snd::internal::DriverCommandManager *soundStreamCommandManagerGetInstance(void)
{
    static nw::snd::internal::DriverCommandManager instance;

    return &instance;
}
