#include "shard/W6_W6Match2_EffectEditor.h"

struct EffectEditorPacket {
    u8 data[0xFC];
    s32 type;
    s32 state;
    u32 value;
};

static inline s32 effectPacketMode(s32 type)
{
    switch (type) {
    case 1: return 1;
    case 2: return 2;
    case 4: return 3;
    case 8: return 4;
    case 16: return 6;
    case 32: return 5;
    case 64: return 7;
    case 128: return 8;
    case 256: return 9;
    default: return 0;
    }
}

extern "C" {
void effectEditorPollTextRequest(u32, u32, EffectEditorPacket *);
void effResourcePromoteReferences(void *, EffectSelectionItem *); // declcheck: local (the shared declaration in shard/W5_W5Match2_LinkedItems.h does not compile here: argument of type "void *" is incompatible with parameter of type "LinkedItems *")
void effBlockCopyDataB(EffectSelectionBlock *, const void *, u32, u32);
void taskRunWithObject(EffectSelectionBlock *, const EffectEditorPacket *, s32);
}

extern "C" u32 FUN_003cd7c4(u32 request, u32 argument)
{
    EffectEditorPacket packet;
    u32 result = 0x600001;
    effectEditorPollTextRequest(request, argument, &packet);
    if (packet.state == 2) {
        result = 0x400000;
    } else if (packet.state == 1) {
        effResourcePromoteReferences(g_effectEditor.list, g_effectEditor.item);
        if (packet.type != 8) {
            taskRunWithObject(g_effectEditor.block, &packet, effectPacketMode(packet.type));
        } else {
            effBlockCopyDataB(g_effectEditor.block, &packet.value, 4, 4);
        }
        result = 0x400002;
    }
    return result;
}
