#include "common.h"

/* The part of g_gameState holding the pending cutscene request. */
struct GameStateRequestView {
    u8 unk000[0x12f];
    u8 requestPending;   // 0x12f
    s16 requestId;       // 0x130
    u8 unk132[2];
    char requestName[32]; // 0x134
};

extern "C" {

extern GameStateRequestView g_gameState;
s16 scrGetArg(u32 index);
const char *scrGetArgString(u32 index);
char *libc_strcpy(char *destination, const char *source);
s32 libc_strcmp(const char *a, const char *b);
void gameFlagSetValue(u32 flag, u32 value, u32 notify);

// Script command: record the requested cutscene id and name; one specific request also sets a story flag.
u32 FUN_003b6e70(void)
{
    s16 id = scrGetArg(0);
    const char *name = scrGetArgString(1);
    g_gameState.requestPending = 1;
    g_gameState.requestId = id;
    libc_strcpy(g_gameState.requestName, name);
    if (g_gameState.requestId == 0x288 && libc_strcmp(g_gameState.requestName, "e648_07") == 0) {
        gameFlagSetValue(0x593, 1, 1);
    }
    return 1;
}

} /* extern "C" */
