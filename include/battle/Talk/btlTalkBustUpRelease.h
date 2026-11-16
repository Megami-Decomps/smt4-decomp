/* battle/Talk/btlTalkBustUp.c (Apocalypse): releasing the talk portrait's texture. */
#ifndef BATTLE_TALK_BTLTALKBUSTUPRELEASE_H
#define BATTLE_TALK_BTLTALKBUSTUPRELEASE_H

#include "battle/Talk/btlTalkBustUp.h"
#include "addon/aocMain.h"

extern "C" {
extern AocSystemA *g_aocSystem;
extern BtlTalkBustUp *g_btlTalkBustUp;
void asdTMTexTableReleaseNode(s32 table, s32 node);
void packageFileDisableByKindName(AocSystemA *system, s32 table, u32 node);
}

/* Sets the portrait's flag byte at 0x2F4 when there is a portrait. */
static __inline void btlTalkBustUpSetUnk2F4(BtlTalkBustUp *portrait, u8 value)
{
    if (portrait != NULL) {
        portrait->unk2F4 = value;
    }
}

/* btlTalkBustUpReleaseTexture's body (btlTalkBustUpDestroy inlines it): releases the current
 * portrait's texture node and add-on content slot and resets it to state 3. */
static __inline void btlTalkBustUpReleaseContentInline(void)
{
    BtlTalkBustUp *portrait = g_btlTalkBustUp;
    if (portrait != NULL) {
        if (portrait->textureNode >= 0) {
            asdTMTexTableReleaseNode(0x10, portrait->textureNode);
            btlTalkBustUpSetUnk2F4(g_btlTalkBustUp, 0);
            packageFileDisableByKindName(g_aocSystem, 0x10, portrait->textureNode);
            portrait->textureNode = -1;
        }
        portrait->unk2EC = 0;
        portrait->state = 3;
    }
}

#endif
