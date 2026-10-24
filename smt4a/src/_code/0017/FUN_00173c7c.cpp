/* NON_MATCHING: readable rewrite of the NintendoWare sound player teardown (175 vs ~180 rows); register allocation and the order of the pool loops differ from retail */
#include "common.h"

struct Polymorphic {
    void (**vtable)(Polymorphic* self);     // slot 1 destroys the object
};

// nw::snd::SoundArchivePlayer-like state: sound instance pools with their free lists.
struct SoundPlayerPools {
    u32 unk00;
    u32 unk04;                  // 0x04
    u8 unk08[0x10];
    u32 commandCount;           // 0x18
    u32 commandBuffer;          // 0x1c
    Polymorphic* soundPool;     // 0x20
    u32 soundPoolBytes;         // 0x24
    u8 soundActiveList[8];      // 0x28
    u8 soundFreeList[8];        // 0x34 (head at 0x38)
    u8 unk40[0x0c];
    s32 unk4c;                  // 0x4c
    u32 unk50;                  // 0x50
    u8 unk54[0x18];
    Polymorphic* playerPool;    // 0x6c
    u32 playerPoolBytes;        // 0x70
    u8 unk74[0x8c - 0x74];
    s32 unk8c;                  // 0x8c
    u8 unk90[8];
    s32 unk98;                  // 0x98
    u32 unk9c;                  // 0x9c
    u8 unka0[0x18];
    Polymorphic* streamPool;    // 0xb8
    u32 streamPoolBytes;        // 0xbc
    u8 unkc0[0x34];
    u8 streamBufferPool[0x10];  // 0xf4
    u32 initialized;            // 0x104
    u32 unk108;                 // 0x108
};

extern "C" {

void FUN_0018fe70(u32 command, s32 arg);
u32 objectCommandQueueGet(void);
u32 FUN_001911a4(u32 queue, u32 arg);
void FUN_001912cc(u32 queue, u32 value);
void constructObj0055c19c(s32 object, u32 arg);
void nw_ut_internal_LinkListImpl_erase_2AC900(void* list, u32 head, void* headPtr);
u32 _ZN2nw3snd8internal6driver11SoundThread11GetInstanceEv(void);
void FUN_00191518(u32 thread, void* callback);
void FUN_001915bc(void* pool, u32 a, u32 b);
void nw_snd_internal_driver_StreamBufferPool_Finalize(void* pool);

static void destroyArray(Polymorphic* first, u32 count, u32 stride)
{
    for (u32 i = 0; i < count; i++) {
        first->vtable[1](first);
        first = reinterpret_cast<Polymorphic*>(reinterpret_cast<u8*>(first) + stride);
    }
}

#define FIELD(player, offset, type) (*reinterpret_cast<type*>(reinterpret_cast<u8*>(player) + (offset)))
#define LIST_ERASE(player, listOffset) \
    nw_ut_internal_LinkListImpl_erase_2AC900(reinterpret_cast<u8*>(player) + (listOffset), \
                                             FIELD(player, (listOffset) + 4, u32), \
                                             reinterpret_cast<u8*>(player) + (listOffset) + 4)

// Finalizes the sound player: ends every pending command, destroys the pooled
// sound, player and stream instances and releases the pools.
void FUN_00173c7c(SoundPlayerPools* player)
{
    player->unk04 = 0;
    FIELD(player, 0xf0, u32) = 0;
    for (u32 i = 0; i < player->commandCount; i++) {
        FUN_0018fe70(player->commandBuffer + i * 0x5c, 0);
    }
    u32 queue = objectCommandQueueGet();
    FUN_001912cc(queue, FUN_001911a4(queue, 1));
    player->commandCount = 0;
    player->commandBuffer = 0;

    if (player->initialized != 0) {
        destroyArray(player->soundPool, player->soundPoolBytes / 0x2d8, 0x2d8);
        LIST_ERASE(player, 0x34);
        LIST_ERASE(player, 0x28);

        s32 object = player->unk4c;
        for (u32 i = 0; i < player->unk50 / 0x88; i++) {
            constructObj0055c19c(object, 0);
            object += 0x88;
        }
        LIST_ERASE(player, 0x54);
        FUN_00191518(_ZN2nw3snd8internal6driver11SoundThread11GetInstanceEv(), reinterpret_cast<u8*>(player) + 0x40);
        FUN_001915bc(reinterpret_cast<u8*>(player) + 0xf4, player->initialized, player->unk108);

        destroyArray(player->playerPool, player->playerPoolBytes / 0x1e8, 0x1e8);
        LIST_ERASE(player, 0x80);
        LIST_ERASE(player, 0x74);

        s32 stream = player->unk98;
        for (u32 i = 0; i < player->unk9c / 0x4c; i++) {
            constructObj0055c19c(stream, 0);
            stream += 0x4c;
        }
        LIST_ERASE(player, 0xa0);
        FUN_00191518(_ZN2nw3snd8internal6driver11SoundThread11GetInstanceEv(), reinterpret_cast<u8*>(player) + 0x8c);
        nw_snd_internal_driver_StreamBufferPool_Finalize(reinterpret_cast<u8*>(player) + 0xd8);

        destroyArray(player->streamPool, player->streamPoolBytes / 0x3298, 0x3298);
        LIST_ERASE(player, 0xcc);
        LIST_ERASE(player, 0xc0);
        player->initialized = 0;
        player->unk108 = 0;
    }
}

} /* extern "C" */
