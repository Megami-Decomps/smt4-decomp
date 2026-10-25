/* NON_MATCHING: iterator construction and payload-address folding schedule differently; the accepted-packet result, three-word iterator ABI and Boolean return are restored. */
#include "shard/CircularTransferQueue.h"

struct BufferedPacketBytes : CircularByteStorage {
    u32 ringSize; // 0x0c
    u32 readPosition; // 0x10
    u32 unk14;
    u32 byteCount; // 0x18
};
struct BufferedPacketIterator {
    BufferedPacketBytes *owner;
    u8 *pointer;
    u32 position;
};
struct BufferedPacketPending {
    TransferDescriptor *items;
    u32 unk04;
    u32 capacity;
    u32 readIndex;
    u32 tailIndex;
    u32 count;
};
struct BufferedPacketInput {
    u32 unk00;
    BufferedPacketBytes bytes; // 0x04
    TransferDescriptorRing accepted; // 0x20
    BufferedPacketPending pending; // 0x34
};
typedef char BufferedPacketInputLayoutCheck[sizeof(BufferedPacketBytes) == 0x1c &&
    sizeof(BufferedPacketIterator) == 0xc && offsetof(BufferedPacketInput, accepted) == 0x20 &&
    offsetof(BufferedPacketInput, pending.items) == 0x34 &&
    offsetof(BufferedPacketInput, pending.readIndex) == 0x40 &&
    offsetof(BufferedPacketInput, pending.count) == 0x48 ? 1 : -1];

static __inline BufferedPacketIterator bufferedPacketBegin(BufferedPacketBytes *buffer)
{
    BufferedPacketIterator iterator;
    iterator.owner = buffer;
    iterator.pointer = buffer->byteCount != 0 ? buffer->bytes + buffer->readPosition : NULL;
    iterator.position = buffer->readPosition;
    return iterator;
}

static __inline BufferedPacketIterator bufferedPacketAdvance(BufferedPacketIterator iterator, u32 amount)
{
    u32 address = reinterpret_cast<u32>(iterator.pointer) + amount;
    if (reinterpret_cast<u32>(iterator.owner->bytes) + iterator.owner->ringSize <= address)
        address -= iterator.owner->ringSize;
    iterator.pointer = reinterpret_cast<u8 *>(address);
    iterator.position += amount;
    return iterator;
}

extern "C" {
u32 FUN_003fbc38(TransferDescriptorRing *descriptors, const TransferDescriptor *packet);
BufferedPacketIterator FUN_003fb848(BufferedPacketBytes *buffer,
    BufferedPacketIterator first, BufferedPacketIterator last);

// Forward one pending packet and discard the corresponding byte range only after acceptance.
u32 FUN_003afd18(BufferedPacketInput *input)
{
    if (input->pending.count == 0)
        return 0;
    if (FUN_003fbc38(&input->accepted, &input->pending.items[input->pending.readIndex]) == 0)
        return 0;
    u32 bytes = input->accepted.items[input->accepted.pending - 1].payload->size;
    BufferedPacketIterator end = bufferedPacketAdvance(bufferedPacketBegin(&input->bytes), bytes);
    FUN_003fb848(&input->bytes, bufferedPacketBegin(&input->bytes), end);
    if (--input->pending.count == 0) {
        input->pending.tailIndex = 0;
        input->pending.readIndex = 0;
    } else {
        input->pending.readIndex++;
        if (input->pending.readIndex == input->pending.capacity)
            input->pending.readIndex = 0;
    }
    return 1;
}
}
