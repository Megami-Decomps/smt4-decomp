/* NON_MATCHING: typed text-write accessor introduces an explicit halfword conversion and different per-mode increment tails. */
#include "shard/W6_W6Match8_TextHistory.h"
#include "shard/FUN_0019be8c.h"

extern "C" {
extern RenderChannelState g_inputResetState;

// Append text-history characters or capture byte-swapped text between the capture control codes.
void textHistoryAppendCodepoint(u32 codepoint)
{
    if (!g_inputResetState.enabled || !g_inputResetState.ready) {
        return;
    }
    if (g_inputResetState.table->mode == 2) {
        if (codepoint != 0) {
            TextHistoryCapture *capture = static_cast<TextHistoryCapture *>(g_inputResetState.capture);
            capture->text[capture->count] = ((codepoint & 0xff) << 8) | ((codepoint >> 8) & 0xff);
            ++capture->count;
        } else {
            g_inputResetState.table->mode = 0;
        }
        return;
    }
    if (static_cast<s16>(g_inputResetState.table->unk4E02) >= 126) {
        return;
    }
    if (FUN_0019be8c(codepoint)) {
        switch (codepoint) {
        case 0xf801:
        case 0xf816:
            break;
        case 0xf812:
            static_cast<TextHistoryCapture *>(g_inputResetState.capture)->count = 0;
            g_inputResetState.table->mode = 2;
            return;
        case 0xf817: {
            RenderChannelTable *table = g_inputResetState.table;
            textHistoryWriteUnit(table, codepoint);
            table->mode = 1;
            ++g_inputResetState.table->unk4E02;
            return;
        }
        case 0xf818: {
            RenderChannelTable *table = g_inputResetState.table;
            textHistoryWriteUnit(table, codepoint);
            table->mode = 0;
            ++g_inputResetState.table->unk4E02;
            return;
        }
        }
    }
    textHistoryWriteUnit(g_inputResetState.table, codepoint);
    ++g_inputResetState.table->unk4E02;
}
}
