/* NON_MATCHING: only the callee names differ. The code is identical, but the constructor and destructor are still
 * named FUN_00140ee4 and FUN_0014dc7c (proposed: _ZN2nw3snd8internal20DriverCommandManagerC1Ev / D1Ev, and this
 * function _ZN2nw3snd8internal20DriverCommandManager11GetInstanceEv: SoundThread's frame calls it right before
 * DriverCommandManager::ProcessCommand; FUN_002bae7c is a second instance built with the same C1/D1). The rename
 * also needs: _ZTV9Obj472300 resized to 0x18 (two zero words and four slots; 0x472318-0x472370 hold the nw::snd
 * singletons' guards), the guard 0x472340 and the instance 0x4e9e48 named, and the ~32 callers (through
 * classes/Obj421aa4Requests.h, which types the returned object as Obj421aa4Manager) moved to the member. */
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
