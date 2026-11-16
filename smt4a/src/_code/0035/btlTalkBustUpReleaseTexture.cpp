#include "battle/Talk/btlTalkBustUpRelease.h"

/* Releases the bust-up's texture node and add-on content slot, then resets it to state 3. */
extern "C" void btlTalkBustUpReleaseTexture(void)
{
    btlTalkBustUpReleaseContentInline();
}
