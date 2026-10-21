/* NON_MATCHING: compiler expands the byte swap into shifts and ors instead of rev16. */
#include "common.h"
extern "C" {
struct Url { u32 unk00; struct { u8 unk00[6]; u16 port; } *parsed; };
void onlineUrlEnsureParsed(Url *url);
/* Returns the parsed port with network byte order reversed. */
u16 FUN_002fd624(Url *url) {
    onlineUrlEnsureParsed(url);
    u16 port = url->parsed->port;
    return (port << 8) | (port >> 8);
}
}
