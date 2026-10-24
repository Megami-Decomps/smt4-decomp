/* NON_MATCHING: needs the renames of _ZN12MoLivePlayerC1EPN6MoLive9AllocatorEj and _ZN6MoLive8TreeBaseC1EPFvvE (rename_S2.tsv). With them the map construction, the tree and handler-table construction, the address arithmetic and the return of `this` recovered from the table match; the first four words and the +0x18 word are cleared one store at a time where retail builds a four-register block store, and the settings stores at +0x1474.. use slightly different offset registers. */
#include "mobiclip/MoLivePlayer.h"

extern "C" void FUN_00521120();
extern "C" void resourceOwnerReleaseChild();

template class __rw::__rb_tree<u32, MoLive::ObjectHandleEntry, __rw::__select1st<MoLive::ObjectHandleEntry, u32>, std::less<u32>, MoLive::ObjectHandleAllocator>;

/* Builds the player: empty stream map, queues and message handler table (registered by the table's constructor). */
MoLivePlayer::MoLivePlayer(MoLive::Allocator *allocator, u32 third)
    : unk0000(), unk0018(0),
      streams(streamLess, MoLive::ObjectHandleAllocator(allocator)),
      unk143C(allocator),
      unk144C(allocator, FUN_00521120),
      unk1474(allocator), worker(0), unk147C(0), unk1480(0x40), unk1484(0x10000), unk1488(third),
      unk148D(1), unk148E(0), unk148F(0), unk1490(0), unk1491(0),
      handlers(allocator, resourceOwnerReleaseChild)
{
}
