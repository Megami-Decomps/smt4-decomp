/* NON_MATCHING: six-channel scan unrolls by two and saves an extra GPR; capability cases and record offsets match retail. */
#include "shard/W6_W6Match7_MaterialAnimationFlags.h"

extern "C" void gfxMarkMaterialAnimationCapabilities(const MaterialFlagAnimation* animation,
                            MaterialFlagStateArray* states,
                            const MaterialFlagBindingArray* bindings)
{
    for (u32 i = 0; i < animation->count; ++i) {
        const u32 index = bindings->data[i];
        const MaterialFlagMember* member = animation->members[i];
        if (index != 0xffff) {
            MaterialFlagState* state = &states->data[index];
            switch (member->kind) {
            case 7:
            case 8:
            case 9:
            case 10:
            case 11:
                state->flags |= 0x200;
                // Fall through: both families match packed channel kinds.
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
            case 6: {
                const u32 kind = static_cast<u32>(member->kind) - 1u;
                const u16 kindIndex = kind < 11 ? static_cast<u16>(kind) : 0;
                const u32 channels = state->channelKinds;
                for (s32 channel = 0; channel < 6; ++channel) {
                    if (((channels >> (channel * 4)) & 0xf) == kindIndex) {
                        state->flags |= 0x400;
                    }
                }
                break;
            }
            case 18:
                state->flags |= 0x800;
                break;
            case 12:
            case 14:
            case 16:
                state->flags |= 0x8000;
                break;
            case 19:
            case 20:
            case 21:
                state->flags |= 0x1000;
                break;
            case 22:
            case 23:
            case 24:
                state->flags |= 0x2000;
                break;
            case 25:
            case 26:
            case 27:
                state->flags |= 0x4000;
                break;
            }
        }
    }
}
