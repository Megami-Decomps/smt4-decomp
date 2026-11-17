/* battle/Talk/btlTalkBustUp.c (Apocalypse): releasing the talk portrait's texture. */
#ifndef BATTLE_TALK_BTLTALKBUSTUPRELEASE_H
#define BATTLE_TALK_BTLTALKBUSTUPRELEASE_H

#include "battle/Talk/btlTalkBustUp.h"
#include "addon/aocMain.h"
#include "addon/AocSystemA.h"

extern "C" {
void asdTMTexTableReleaseNode(s32 table, s32 node);
void packageFileDisableByKindName(AocSystemA *system, s32 table, u32 node);
}

/* Sets the portrait's texture-ready byte when there is a portrait. */
static __inline void btlTalkBustUpSetUnk2F4(BtlTalkBustUp *portrait, s8 value)
{
    if (portrait != NULL) {
        portrait->textureReady = value;
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
        portrait->stateCounter = 0;
        portrait->state = 3;
    }
}

#endif
