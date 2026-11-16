#include "common.h"
extern "C" {
struct Url { u32 unk00; struct { u8 unk00[6]; u16 port; } *parsed; };
void onlineUrlEnsureParsed(Url *url);
/* Returns the parsed port with network byte order reversed. */
u16 FUN_002fd624(Url *url) {
    onlineUrlEnsureParsed(url);
    u16 port = url->parsed->port;
    return ((port & 0xff) << 8) | ((port >> 8) & 0xff);
}
}
